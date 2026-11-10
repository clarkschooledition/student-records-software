#include "Register.h"
#include "LogInForm.h"
#include "SupabaseClient.h"

using namespace RecordsManagement;

System::Void Register::btn_signup_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ email = fld_email->Text->Trim();
	String^ password = fld_passWord->Text;
	if (String::IsNullOrWhiteSpace(email) || String::IsNullOrWhiteSpace(password))
	{
		MessageBox::Show(L"Enter an email and password.");
		return;
	}
	if (password != fld_passWord2->Text)
	{
		MessageBox::Show(L"Passwords do not match.");
		return;
	}

	try
	{
		SupabaseClient::SignUp(email, password);
		MessageBox::Show(L"Registration successful. Check your email if confirmation is enabled.");
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
		MessageBox::Show(L"Registration failed: " + ex->Message);
	}
}

System::Void Register::btn_return_Click(System::Object^ sender, System::EventArgs^ e)
{
	LogInForm^ logInForm = gcnew LogInForm();
	logInForm->Show();
	this->Hide();
}

