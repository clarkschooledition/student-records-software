#include "Register.h"
#include "LogInForm.h"
#include "SupabaseClient.h"

using namespace RecordsManagement;

System::Void Register::btn_signup_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ email = fld_email->Text->Trim();
	String^ password = fld_passWord->Text;
	String^ firstName = fld_firstName->Text->Trim();
	String^ middleInitial = fld_middleInitial->Text->Trim();
	String^ lastName = fld_lastName->Text->Trim();

	if (String::IsNullOrWhiteSpace(email) || String::IsNullOrWhiteSpace(password) ||
		String::IsNullOrWhiteSpace(firstName) || String::IsNullOrWhiteSpace(lastName) ||
		cmb_courses->SelectedItem == nullptr)
	{
		MessageBox::Show(L"Enter the required details and select a course.");
		return;
	}
	if (password != fld_passWord2->Text)
	{
		MessageBox::Show(L"Passwords do not match.");
		return;
	}

	try
	{
		SupabaseClient::SignUp(email, password, firstName, middleInitial, lastName,
			cmb_courses->SelectedItem->ToString());
		MessageBox::Show(L"Registration successful. Check your email to confirm your account.");
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

