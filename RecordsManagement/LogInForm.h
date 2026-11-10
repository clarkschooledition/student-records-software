#pragma once
#include "Register.h"

namespace RecordsManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LogInForm
	/// </summary>
	public ref class LogInForm : public System::Windows::Forms::Form
	{
	public:
		LogInForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LogInForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_logIn;
	protected:

	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ btn_register;
	private: System::Windows::Forms::Label^ lbl_email;
	private: System::Windows::Forms::Panel^ panelLogin;

	private: System::Windows::Forms::Label^ lbl_password;

	private:
		System::Void OnRegisterClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
		{
			this->Show();
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_logIn = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->btn_register = (gcnew System::Windows::Forms::Button());
			this->lbl_email = (gcnew System::Windows::Forms::Label());
			this->lbl_password = (gcnew System::Windows::Forms::Label());
			this->panelLogin = (gcnew System::Windows::Forms::Panel());
			this->panelLogin->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_logIn
			// 
			this->btn_logIn->Location = System::Drawing::Point(47, 151);
			this->btn_logIn->Name = L"btn_logIn";
			this->btn_logIn->Size = System::Drawing::Size(219, 47);
			this->btn_logIn->TabIndex = 0;
			this->btn_logIn->Text = L"Log In";
			this->btn_logIn->UseVisualStyleBackColor = true;
			this->btn_logIn->Click += gcnew System::EventHandler(this, &LogInForm::btn_logIn_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(64, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(178, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(64, 97);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(178, 20);
			this->textBox2->TabIndex = 2;
			// 
			// btn_register
			// 
			this->btn_register->Location = System::Drawing::Point(47, 204);
			this->btn_register->Name = L"btn_register";
			this->btn_register->Size = System::Drawing::Size(219, 47);
			this->btn_register->TabIndex = 3;
			this->btn_register->Text = L"Register";
			this->btn_register->UseVisualStyleBackColor = true;
			this->btn_register->Click += gcnew System::EventHandler(this, &LogInForm::btn_register_Click);
			// 
			// lbl_email
			// 
			this->lbl_email->AutoSize = true;
			this->lbl_email->Location = System::Drawing::Point(64, 23);
			this->lbl_email->Name = L"lbl_email";
			this->lbl_email->Size = System::Drawing::Size(32, 13);
			this->lbl_email->TabIndex = 4;
			this->lbl_email->Text = L"Email";
			// 
			// lbl_password
			// 
			this->lbl_password->AutoSize = true;
			this->lbl_password->Location = System::Drawing::Point(64, 81);
			this->lbl_password->Name = L"lbl_password";
			this->lbl_password->Size = System::Drawing::Size(53, 13);
			this->lbl_password->TabIndex = 5;
			this->lbl_password->Text = L"Password";
			// 
			// panelLogin
			// 
			this->panelLogin->Controls->Add(this->lbl_email);
			this->panelLogin->Controls->Add(this->lbl_password);
			this->panelLogin->Controls->Add(this->btn_logIn);
			this->panelLogin->Controls->Add(this->textBox1);
			this->panelLogin->Controls->Add(this->btn_register);
			this->panelLogin->Controls->Add(this->textBox2);
			this->panelLogin->Location = System::Drawing::Point(292, 68);
			this->panelLogin->Name = L"panelLogin";
			this->panelLogin->Size = System::Drawing::Size(312, 269);
			this->panelLogin->TabIndex = 6;
			// 
			// LogInForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(836, 464);
			this->Controls->Add(this->panelLogin);
			this->Name = L"LogInForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Log In";
			this->Resize += gcnew System::EventHandler(this, &LogInForm::LogInForm_Resize);
			this->panelLogin->ResumeLayout(false);
			this->panelLogin->PerformLayout();
			this->ResumeLayout(false);

		}
			private:
				System::Void btn_logIn_Click(System::Object^ sender, System::EventArgs^ e);

			private:
				System::Void btn_register_Click(System::Object^ sender, System::EventArgs^ e)
				{
					Register^ regForm = gcnew Register();

					regForm->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(
						this, &LogInForm::OnRegisterClosed
					);

					regForm->Show();
					this->Hide();
				}

			private: 
				System::Void LogInForm_Resize(System::Object^ sender, System::EventArgs^ e) 
				{
					panelLogin->Left = (this->ClientSize.Width - panelLogin->Width) / 2;
					panelLogin->Top = (this->ClientSize.Height - panelLogin->Height) / 2;
				}
};
#pragma endregion
 
 

};