#pragma once

using namespace System;
using namespace System::Net::Http;
using namespace System::Text;
using namespace System::Text::RegularExpressions;

public ref class SupabaseClient
{
private:
	static String^ url = "https://nfhnjzjuxbxdzolzvyew.supabase.co";
	static String^ publishableKey = "sb_publishable_IsndHoPbvfAYHYm09eg9OA_45dCwDy9";
	static HttpClient^ client = gcnew HttpClient();

	static String^ EscapeJson(String^ value)
	{
		return value->Replace(L"\\", L"\\\\")->Replace(L"\"", L"\\\"");
	}

	static String^ AuthRequest(String^ endpoint, String^ json)
	{
		HttpRequestMessage^ request = gcnew HttpRequestMessage(HttpMethod::Post, url + endpoint);
		request->Headers->Add("apikey", publishableKey);
		request->Content = gcnew StringContent(json, Encoding::UTF8, "application/json");

		HttpResponseMessage^ response = client->SendAsync(request)->GetAwaiter().GetResult();
		String^ body = response->Content->ReadAsStringAsync()->GetAwaiter().GetResult();
		bool success = response->IsSuccessStatusCode;
		delete response;
		delete request;
		if (!success)
			throw gcnew InvalidOperationException(body);
		return body;
	}

public:
	static String^ SignUp(String^ email, String^ password, String^ firstName,
		String^ middleInitial, String^ lastName, String^ course)
	{
		String^ json = String::Format(
			L"{{\"email\":\"{0}\",\"password\":\"{1}\",\"data\":{{\"first_name\":\"{2}\",\"middle_initial\":\"{3}\",\"last_name\":\"{4}\",\"course\":\"{5}\"}}}}",
			EscapeJson(email), EscapeJson(password), EscapeJson(firstName),
			EscapeJson(middleInitial), EscapeJson(lastName), EscapeJson(course));
		return AuthRequest(L"/auth/v1/signup", json);
	}

	static String^ SignIn(String^ email, String^ password)
	{
		String^ json = String::Format(L"{{\"email\":\"{0}\",\"password\":\"{1}\"}}",
			EscapeJson(email), EscapeJson(password));
		String^ auth = AuthRequest(L"/auth/v1/token?grant_type=password", json);
		Match^ tokenMatch = Regex::Match(auth, L"\"access_token\"\\s*:\\s*\"([^\"]+)\"");
		Match^ userMatch = Regex::Match(auth,
			L"\"user\"\\s*:\\s*\\{.*?\"id\"\\s*:\\s*\"([0-9a-fA-F-]+)\"",
			RegexOptions::Singleline);
		if (!tokenMatch->Success || !userMatch->Success)
			throw gcnew InvalidOperationException(L"Could not read the login response from Supabase.");

		HttpRequestMessage^ request = gcnew HttpRequestMessage(HttpMethod::Get,
			url + L"/rest/v1/profiles?select=role&user_id=eq." + userMatch->Groups[1]->Value);
		request->Headers->Add("apikey", publishableKey);
		request->Headers->Add("Authorization", "Bearer " + tokenMatch->Groups[1]->Value);
		request->Headers->Accept->ParseAdd("application/vnd.pgrst.object+json");
		HttpResponseMessage^ response = client->SendAsync(request)->GetAwaiter().GetResult();
		String^ body = response->Content->ReadAsStringAsync()->GetAwaiter().GetResult();
		bool success = response->IsSuccessStatusCode;
		delete response;
		delete request;
		if (!success)
			throw gcnew InvalidOperationException(body);

		Match^ roleMatch = Regex::Match(body, L"\"role\"\\s*:\\s*\"([^\"]+)\"");
		if (!roleMatch->Success)
			throw gcnew InvalidOperationException(L"Could not read your role from the profile response.");
		return roleMatch->Groups[1]->Value;
	}
};

