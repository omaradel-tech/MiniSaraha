#pragma once
#include "SignUpForm.h"
#include"MyForm1.h"
#include"users.h"
#include<iostream>
namespace SarahaProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm(String^data)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  UserName;
	private: System::Windows::Forms::Label^  label2;


	private: System::Windows::Forms::Button^  signup;
	private: System::Windows::Forms::Button^  signin;
	private: System::Windows::Forms::TextBox^  Password;
	private: System::Windows::Forms::Button^ button1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Password = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->UserName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->signup = (gcnew System::Windows::Forms::Button());
			this->signin = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Password
			// 
			this->Password->Location = System::Drawing::Point(320, 308);
			this->Password->Name = L"Password";
			this->Password->PasswordChar = '*';
			this->Password->Size = System::Drawing::Size(203, 41);
			this->Password->TabIndex = 4;
			this->Password->TextChanged += gcnew System::EventHandler(this, &MyForm::Password_TextChanged);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(91, 226);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(203, 60);
			this->label1->TabIndex = 1;
			this->label1->Text = L"UserName:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// UserName
			// 
			this->UserName->Location = System::Drawing::Point(320, 243);
			this->UserName->Name = L"UserName";
			this->UserName->Size = System::Drawing::Size(203, 41);
			this->UserName->TabIndex = 2;
			this->UserName->TextChanged += gcnew System::EventHandler(this, &MyForm::UserName_TextChanged);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(91, 290);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(203, 60);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Passwrod :";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// signup
			// 
			this->signup->BackColor = System::Drawing::Color::Transparent;
			this->signup->Location = System::Drawing::Point(378, 382);
			this->signup->Name = L"signup";
			this->signup->Size = System::Drawing::Size(145, 42);
			this->signup->TabIndex = 5;
			this->signup->Text = L"Sign up";
			this->signup->UseVisualStyleBackColor = false;
			this->signup->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// signin
			// 
			this->signin->BackColor = System::Drawing::Color::Transparent;
			this->signin->Location = System::Drawing::Point(189, 382);
			this->signin->Name = L"signin";
			this->signin->Size = System::Drawing::Size(145, 42);
			this->signin->TabIndex = 6;
			this->signin->Text = L"Sign In";
			this->signin->UseVisualStyleBackColor = false;
			this->signin->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(-1, -2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(76, 62);
			this->button1->TabIndex = 7;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(15, 34);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(884, 761);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->signin);
			this->Controls->Add(this->signup);
			this->Controls->Add(this->Password);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->UserName);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Welcome Saraha";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^	  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	StreamReader ^input_file = File::OpenText("LoginReg//users.txt");
	StreamReader ^input_file2 = File::OpenText("LoginReg//Passwords.txt");
	String ^name,^username,^passwords,^password;
	username = UserName->Text;
	bool valid = false;
	passwords = Password->Text;
	int count = 0;
	String^count2;
	
	while ((name = input_file->ReadLine())!=nullptr) {
		password = input_file2->ReadLine();
		count++;
		if (name == username && passwords == password) {
			valid = true;
			break;
		}

	}
	if (valid == false)
		MessageBox::Show("Invalid username or password");
	else{
		//MessageBox::Show(name, password);
		String^IDD;
		input_file->Close();
		input_file2->Close();
		MyForm1^ frm1 = gcnew MyForm1(username,count);
		this->Hide();
		frm1->Show();



	}
	
	
	
	
	
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	SignUpForm^ frm1 = gcnew SignUpForm;
	frm1->Show();
}
private: System::Void UserName_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Password_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
