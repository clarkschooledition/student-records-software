#pragma once

using namespace System;
using namespace System::Net::Http;
using namespace System::Text;

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

	static String^ AuthRequest(String^ endpoint, String^ email, String^ password)
	{
		String^ json = String::Format(L"{{\"email\":\"{0}\",\"password\":\"{1}\"}}",
			EscapeJson(email), EscapeJson(password));
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
	static String^ SignUp(String^ email, String^ password)
	{
		return AuthRequest(L"/auth/v1/signup", email, password);
	}

	static String^ SignIn(String^ email, String^ password)
	{
		return AuthRequest(L"/auth/v1/token?grant_type=password", email, password);
	}
};

