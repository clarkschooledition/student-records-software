#include "LogInForm.h"
#include "SupabaseClient.h"

using namespace RecordsManagement;

System::Void LogInForm::btn_logIn_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ email = textBox1->Text->Trim();
	String^ password = textBox2->Text;
	if (String::IsNullOrWhiteSpace(email) || String::IsNullOrWhiteSpace(password))
	{
		MessageBox::Show(L"Enter your email and password.");
		return;
	}

	try
	{
		SupabaseClient::SignIn(email, password);
		MessageBox::Show(L"Login successful.");
	}
	catch (System::Net::Http::HttpRequestException^ ex)
	{
		MessageBox::Show(L"Could not connect to Supabase: " + ex->Message);
	}
	catch (System::Threading::Tasks::TaskCanceledException^ ex)
	{
		MessageBox::Show(L"Supabase request timed out: " + ex->Message);
	}
	catch (InvalidOperationException^ ex)
	{
		MessageBox::Show(L"Login failed: " + ex->Message);
	}
}

[STAThreadAttribute]
int main()
{
	Application::Run(gcnew LogInForm());

	return 0;
}