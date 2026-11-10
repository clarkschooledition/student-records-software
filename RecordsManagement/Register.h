#pragma once

namespace RecordsManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
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
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_signup;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ fld_firstName;
	private: System::Windows::Forms::TextBox^ fld_middleInitial;
	private: System::Windows::Forms::TextBox^ fld_lastName;
	private: System::Windows::Forms::Label^ lbl_firstName;
	private: System::Windows::Forms::Label^ lbl_middleInitial;
	private: System::Windows::Forms::Label^ lbl_lastName;
	private: System::Windows::Forms::Label^ lbl_passWord1;
	private: System::Windows::Forms::TextBox^ fld_passWord;
	private: System::Windows::Forms::TextBox^ fld_passWord2;
	private: System::Windows::Forms::Label^ fld_verifyPassWord;
	private: System::Windows::Forms::ComboBox^ cmb_courses;

	private: System::Windows::Forms::Label^ lbl_email;
	private: System::Windows::Forms::TextBox^ fld_email;
	private: System::Windows::Forms::Button^ btn_return;
	private: System::Windows::Forms::Panel^ panelRegister;








	protected:

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
			this->btn_signup = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->cmb_courses = (gcnew System::Windows::Forms::ComboBox());
			this->fld_firstName = (gcnew System::Windows::Forms::TextBox());
			this->fld_middleInitial = (gcnew System::Windows::Forms::TextBox());
			this->fld_lastName = (gcnew System::Windows::Forms::TextBox());
			this->lbl_firstName = (gcnew System::Windows::Forms::Label());
			this->lbl_middleInitial = (gcnew System::Windows::Forms::Label());
			this->lbl_lastName = (gcnew System::Windows::Forms::Label());
			this->lbl_passWord1 = (gcnew System::Windows::Forms::Label());
			this->fld_passWord = (gcnew System::Windows::Forms::TextBox());
			this->fld_passWord2 = (gcnew System::Windows::Forms::TextBox());
			this->fld_verifyPassWord = (gcnew System::Windows::Forms::Label());
			this->lbl_email = (gcnew System::Windows::Forms::Label());
			this->fld_email = (gcnew System::Windows::Forms::TextBox());
			this->btn_return = (gcnew System::Windows::Forms::Button());
			this->panelRegister = (gcnew System::Windows::Forms::Panel());
			this->groupBox1->SuspendLayout();
			this->panelRegister->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_signup
			// 
			this->btn_signup->Location = System::Drawing::Point(573, 395);
			this->btn_signup->Name = L"btn_signup";
			this->btn_signup->Size = System::Drawing::Size(119, 62);
			this->btn_signup->TabIndex = 0;
			this->btn_signup->Text = L"Register";
			this->btn_signup->UseVisualStyleBackColor = true;
			this->btn_signup->Click += gcnew System::EventHandler(this, &Register::btn_signup_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->cmb_courses);
			this->groupBox1->Location = System::Drawing::Point(3, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(213, 452);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Course";
			// 
			// cmb_courses
			// 
			this->cmb_courses->FormattingEnabled = true;
			this->cmb_courses->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Bachelor of Science in Computer Science", L"Bachelor of Science in Information Technology",
					L"Bachelor of Science in Systems", L"Bachelor of Science in Computer Engineering", L"Associate in Computer Technology"
			});
			this->cmb_courses->Location = System::Drawing::Point(6, 29);
			this->cmb_courses->Name = L"cmb_courses";
			this->cmb_courses->Size = System::Drawing::Size(206, 21);
			this->cmb_courses->TabIndex = 0;
			// 
			// fld_firstName
			// 
			this->fld_firstName->Location = System::Drawing::Point(241, 51);
			this->fld_firstName->Name = L"fld_firstName";
			this->fld_firstName->Size = System::Drawing::Size(122, 20);
			this->fld_firstName->TabIndex = 2;
			// 
			// fld_middleInitial
			// 
			this->fld_middleInitial->Location = System::Drawing::Point(391, 51);
			this->fld_middleInitial->Name = L"fld_middleInitial";
			this->fld_middleInitial->Size = System::Drawing::Size(122, 20);
			this->fld_middleInitial->TabIndex = 3;
			// 
			// fld_lastName
			// 
			this->fld_lastName->Location = System::Drawing::Point(541, 51);
			this->fld_lastName->Name = L"fld_lastName";
			this->fld_lastName->Size = System::Drawing::Size(122, 20);
			this->fld_lastName->TabIndex = 4;
			// 
			// lbl_firstName
			// 
			this->lbl_firstName->AutoSize = true;
			this->lbl_firstName->Location = System::Drawing::Point(241, 17);
			this->lbl_firstName->Name = L"lbl_firstName";
			this->lbl_firstName->Size = System::Drawing::Size(57, 13);
			this->lbl_firstName->TabIndex = 5;
			this->lbl_firstName->Text = L"First Name";
			// 
			// lbl_middleInitial
			// 
			this->lbl_middleInitial->AutoSize = true;
			this->lbl_middleInitial->Location = System::Drawing::Point(388, 17);
			this->lbl_middleInitial->Name = L"lbl_middleInitial";
			this->lbl_middleInitial->Size = System::Drawing::Size(65, 13);
			this->lbl_middleInitial->TabIndex = 6;
			this->lbl_middleInitial->Text = L"Middle Initial";
			// 
			// lbl_lastName
			// 
			this->lbl_lastName->AutoSize = true;
			this->lbl_lastName->Location = System::Drawing::Point(538, 17);
			this->lbl_lastName->Name = L"lbl_lastName";
			this->lbl_lastName->Size = System::Drawing::Size(58, 13);
			this->lbl_lastName->TabIndex = 7;
			this->lbl_lastName->Text = L"Last Name";
			// 
			// lbl_passWord1
			// 
			this->lbl_passWord1->AutoSize = true;
			this->lbl_passWord1->Location = System::Drawing::Point(238, 193);
			this->lbl_passWord1->Name = L"lbl_passWord1";
			this->lbl_passWord1->Size = System::Drawing::Size(53, 13);
			this->lbl_passWord1->TabIndex = 9;
			this->lbl_passWord1->Text = L"Password";
			// 
			// fld_passWord
			// 
			this->fld_passWord->Location = System::Drawing::Point(238, 227);
			this->fld_passWord->Name = L"fld_passWord";
			this->fld_passWord->Size = System::Drawing::Size(122, 20);
			this->fld_passWord->TabIndex = 8;
			// 
			// fld_passWord2
			// 
			this->fld_passWord2->Location = System::Drawing::Point(388, 227);
			this->fld_passWord2->Name = L"fld_passWord2";
			this->fld_passWord2->Size = System::Drawing::Size(122, 20);
			this->fld_passWord2->TabIndex = 10;
			// 
			// fld_verifyPassWord
			// 
			this->fld_verifyPassWord->AutoSize = true;
			this->fld_verifyPassWord->Location = System::Drawing::Point(385, 193);
			this->fld_verifyPassWord->Name = L"fld_verifyPassWord";
			this->fld_verifyPassWord->Size = System::Drawing::Size(82, 13);
			this->fld_verifyPassWord->TabIndex = 11;
			this->fld_verifyPassWord->Text = L"Verify Password";
			// 
			// lbl_email
			// 
			this->lbl_email->AutoSize = true;
			this->lbl_email->Location = System::Drawing::Point(241, 106);
			this->lbl_email->Name = L"lbl_email";
			this->lbl_email->Size = System::Drawing::Size(32, 13);
			this->lbl_email->TabIndex = 13;
			this->lbl_email->Text = L"Email";
			// 
			// fld_email
			// 
			this->fld_email->Location = System::Drawing::Point(241, 140);
			this->fld_email->Name = L"fld_email";
			this->fld_email->Size = System::Drawing::Size(122, 20);
			this->fld_email->TabIndex = 12;
			// 
			// btn_return
			// 
			this->btn_return->Location = System::Drawing::Point(448, 395);
			this->btn_return->Name = L"btn_return";
			this->btn_return->Size = System::Drawing::Size(119, 62);
			this->btn_return->TabIndex = 14;
			this->btn_return->Text = L"Back";
			this->btn_return->UseVisualStyleBackColor = true;
			this->btn_return->Click += gcnew System::EventHandler(this, &Register::btn_return_Click);
			// 
			// panelRegister
			// 
			this->panelRegister->Controls->Add(this->groupBox1);
			this->panelRegister->Controls->Add(this->btn_return);
			this->panelRegister->Controls->Add(this->lbl_firstName);
			this->panelRegister->Controls->Add(this->lbl_email);
			this->panelRegister->Controls->Add(this->btn_signup);
			this->panelRegister->Controls->Add(this->fld_email);
			this->panelRegister->Controls->Add(this->fld_firstName);
			this->panelRegister->Controls->Add(this->fld_verifyPassWord);
			this->panelRegister->Controls->Add(this->fld_middleInitial);
			this->panelRegister->Controls->Add(this->fld_passWord2);
			this->panelRegister->Controls->Add(this->fld_lastName);
			this->panelRegister->Controls->Add(this->lbl_passWord1);
			this->panelRegister->Controls->Add(this->lbl_middleInitial);
			this->panelRegister->Controls->Add(this->fld_passWord);
			this->panelRegister->Controls->Add(this->lbl_lastName);
			this->panelRegister->Location = System::Drawing::Point(2, 1);
			this->panelRegister->Name = L"panelRegister";
			this->panelRegister->Size = System::Drawing::Size(723, 478);
			this->panelRegister->TabIndex = 15;
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(726, 477);
			this->Controls->Add(this->panelRegister);
			this->Name = L"Register";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Register";
			this->Resize += gcnew System::EventHandler(this, &Register::Register_Resize);
			this->groupBox1->ResumeLayout(false);
			this->panelRegister->ResumeLayout(false);
			this->panelRegister->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		private:
			System::Void btn_signup_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void btn_return_Click(System::Object^ sender, System::EventArgs^ e);

		private: 
			System::Void Register_Resize(System::Object^ sender, System::EventArgs^ e) 
			{
				panelRegister->Left = (this->ClientSize.Width - panelRegister->Width) / 2;
				panelRegister->Top = (this->ClientSize.Height - panelRegister->Height) / 2;
			}
};
};
