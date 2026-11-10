#pragma once

namespace RecordsManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminView
	/// </summary>
	public ref class AdminView : public System::Windows::Forms::Form
	{
	public:
		AdminView(void)
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
		~AdminView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colStudentId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colFirstName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colMiddleInitial;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colLastName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCourse;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colGPA;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->colStudentId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colFirstName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colMiddleInitial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colLastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCourse = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colGPA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(653, 580);
			this->panel1->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->colStudentId,
					this->colFirstName, this->colMiddleInitial, this->colLastName, this->colCourse, this->colGPA
			});
			this->dataGridView1->Location = System::Drawing::Point(4, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(642, 573);
			this->dataGridView1->TabIndex = 0;
			// 
			// colStudentId
			// 
			this->colStudentId->HeaderText = L"StudentID";
			this->colStudentId->Name = L"colStudentId";
			this->colStudentId->ReadOnly = true;
			// 
			// colFirstName
			// 
			this->colFirstName->HeaderText = L"First Name";
			this->colFirstName->Name = L"colFirstName";
			this->colFirstName->ReadOnly = true;
			// 
			// colMiddleInitial
			// 
			this->colMiddleInitial->HeaderText = L"Middle Initial";
			this->colMiddleInitial->Name = L"colMiddleInitial";
			this->colMiddleInitial->ReadOnly = true;
			// 
			// colLastName
			// 
			this->colLastName->HeaderText = L"Last Name";
			this->colLastName->Name = L"colLastName";
			this->colLastName->ReadOnly = true;
			// 
			// colCourse
			// 
			this->colCourse->HeaderText = L"Course";
			this->colCourse->Name = L"colCourse";
			this->colCourse->ReadOnly = true;
			// 
			// colGPA
			// 
			this->colGPA->HeaderText = L"GPA";
			this->colGPA->Name = L"colGPA";
			this->colGPA->ReadOnly = true;
			// 
			// AdminView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1172, 587);
			this->Controls->Add(this->panel1);
			this->Name = L"AdminView";
			this->Text = L"AdminView";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	 
	};
}
