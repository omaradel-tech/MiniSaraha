#pragma once
#include "users.h"
namespace SarahaProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^  button3;
	public:
		String^ userid;
		
	private: System::Windows::Forms::Button^  SearchContact;
	private: System::Windows::Forms::Panel^  pn_seacrh_contact;
	private: System::Windows::Forms::Panel^  pn_after_search;
	private: System::Windows::Forms::Label^  ID_searched;
	private: System::Windows::Forms::Label^  Named_searched;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  search;
	private: System::Windows::Forms::TextBox^  ID_search_text;
	private: System::Windows::Forms::Label^  Search_id;

	private: System::Windows::Forms::Panel^  pn_view_contact;








	private: System::Windows::Forms::Label^  label_recieved_messages;
	private: System::Windows::Forms::Label^  label_sent_messages;


	private: System::Windows::Forms::PictureBox^  pictureBox3;


	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::Label^  Contacts_count;

	private: System::Windows::Forms::PictureBox^  Contacts_pic;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ fav_message;


	private: System::Windows::Forms::Button^ next_m;
	private: System::Windows::Forms::Button^ previous_m;
	private: System::Windows::Forms::Label^ showmessage;

	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label14;

	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ previoue_RM;
	private: System::Windows::Forms::Button^ next_RM;
	private: System::Windows::Forms::Label^ contactmessage;
	private: System::Windows::Forms::Panel^ pn_fav;
	private: System::Windows::Forms::PictureBox^ delete_fav;
	private: System::Windows::Forms::Button^ Next_fav;
	private: System::Windows::Forms::Button^ previous_fav;
	private: System::Windows::Forms::Label^ FavMessage;
	private: System::Windows::Forms::Button^ Buton_contacts;
	private: System::Windows::Forms::Panel^ pn_contact;
	private: System::Windows::Forms::Label^ label_contact_show_id;

	private: System::Windows::Forms::Label^ label_contact_show_name;

	private: System::Windows::Forms::Label^ label_contact_view_id;

	private: System::Windows::Forms::Label^ label_name_contact_view;

	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ button_contact_next;
	private: System::Windows::Forms::Button^ button_contact_previous;












	public: 
		 

		 
			 int useriD;
private: System::Windows::Forms::Panel^ pn_add_contact;
public:
private: System::Windows::Forms::Button^ button_add_contact;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ text_add_contact;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::Button^ Exit;
private: System::Windows::Forms::Button^ enteridrecived;
private: System::Windows::Forms::TextBox^ textBox_get_id;


public:
	int indexcontact = 1;
		MyForm1(String^ name,int userID)
		{
			
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->username_label->Text= "Welcome : "+ name;
			this->userid = userID.ToString();
			useriD = userID;
			initail();

		
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{				

			if (components)
			{

				delete components;
			}
		}

	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^ show_message;

	private: System::Windows::Forms::Panel^  pn_send_message;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  IDBox;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::RichTextBox^  MessageBox;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  username_label;
	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->fav_message = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SearchContact = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button_add_contact = (gcnew System::Windows::Forms::Button());
			this->Buton_contacts = (gcnew System::Windows::Forms::Button());
			this->username_label = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Contacts_pic = (gcnew System::Windows::Forms::PictureBox());
			this->Contacts_count = (gcnew System::Windows::Forms::Label());
			this->label_recieved_messages = (gcnew System::Windows::Forms::Label());
			this->label_sent_messages = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pn_view_contact = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->next_m = (gcnew System::Windows::Forms::Button());
			this->previous_m = (gcnew System::Windows::Forms::Button());
			this->showmessage = (gcnew System::Windows::Forms::Label());
			this->pn_send_message = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->MessageBox = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->IDBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pn_seacrh_contact = (gcnew System::Windows::Forms::Panel());
			this->pn_after_search = (gcnew System::Windows::Forms::Panel());
			this->ID_searched = (gcnew System::Windows::Forms::Label());
			this->Named_searched = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->search = (gcnew System::Windows::Forms::Button());
			this->ID_search_text = (gcnew System::Windows::Forms::TextBox());
			this->Search_id = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->show_message = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->enteridrecived = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->previoue_RM = (gcnew System::Windows::Forms::Button());
			this->next_RM = (gcnew System::Windows::Forms::Button());
			this->contactmessage = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pn_fav = (gcnew System::Windows::Forms::Panel());
			this->delete_fav = (gcnew System::Windows::Forms::PictureBox());
			this->Next_fav = (gcnew System::Windows::Forms::Button());
			this->previous_fav = (gcnew System::Windows::Forms::Button());
			this->FavMessage = (gcnew System::Windows::Forms::Label());
			this->pn_contact = (gcnew System::Windows::Forms::Panel());
			this->button_contact_previous = (gcnew System::Windows::Forms::Button());
			this->button_contact_next = (gcnew System::Windows::Forms::Button());
			this->label_contact_show_id = (gcnew System::Windows::Forms::Label());
			this->label_contact_show_name = (gcnew System::Windows::Forms::Label());
			this->label_contact_view_id = (gcnew System::Windows::Forms::Label());
			this->label_name_contact_view = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pn_add_contact = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->text_add_contact = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->textBox_get_id = (gcnew System::Windows::Forms::TextBox());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Contacts_pic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel6->SuspendLayout();
			this->pn_send_message->SuspendLayout();
			this->pn_seacrh_contact->SuspendLayout();
			this->pn_after_search->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->pn_fav->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->delete_fav))->BeginInit();
			this->pn_contact->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->pn_add_contact->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// fav_message
			// 
			this->fav_message->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->fav_message->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Italic));
			this->fav_message->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fav_message.Image")));
			this->fav_message->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->fav_message->Location = System::Drawing::Point(0, 460);
			this->fav_message->Name = L"fav_message";
			this->fav_message->Size = System::Drawing::Size(269, 45);
			this->fav_message->TabIndex = 4;
			this->fav_message->Text = L"Favourite Message";
			this->fav_message->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->fav_message->UseVisualStyleBackColor = false;
			this->fav_message->Click += gcnew System::EventHandler(this, &MyForm1::favMessage_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(6, 227);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(263, 45);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Home";
			this->button5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// SearchContact
			// 
			this->SearchContact->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->SearchContact->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SearchContact.Image")));
			this->SearchContact->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->SearchContact->Location = System::Drawing::Point(3, 402);
			this->SearchContact->Name = L"SearchContact";
			this->SearchContact->Size = System::Drawing::Size(266, 45);
			this->SearchContact->TabIndex = 3;
			this->SearchContact->Text = L"Search Contact";
			this->SearchContact->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->SearchContact->UseVisualStyleBackColor = false;
			this->SearchContact->Click += gcnew System::EventHandler(this, &MyForm1::SearchContact_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button1->Location = System::Drawing::Point(3, 290);
			this->button1->Margin = System::Windows::Forms::Padding(6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(266, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Send Message";
			this->button1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->panel2->Controls->Add(this->fav_message);
			this->panel2->Controls->Add(this->button_add_contact);
			this->panel2->Controls->Add(this->SearchContact);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->Buton_contacts);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->username_label);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(612, 65);
			this->panel2->Margin = System::Windows::Forms::Padding(6);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(272, 696);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::panel2_Paint);
			// 
			// button_add_contact
			// 
			this->button_add_contact->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->button_add_contact->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_add_contact.Image")));
			this->button_add_contact->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button_add_contact->Location = System::Drawing::Point(0, 519);
			this->button_add_contact->Margin = System::Windows::Forms::Padding(6);
			this->button_add_contact->Name = L"button_add_contact";
			this->button_add_contact->Size = System::Drawing::Size(269, 42);
			this->button_add_contact->TabIndex = 4;
			this->button_add_contact->Text = L"Add Contact";
			this->button_add_contact->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button_add_contact->UseVisualStyleBackColor = false;
			this->button_add_contact->Click += gcnew System::EventHandler(this, &MyForm1::button_add_contact_Click);
			// 
			// Buton_contacts
			// 
			this->Buton_contacts->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->Buton_contacts->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Buton_contacts.Image")));
			this->Buton_contacts->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->Buton_contacts->Location = System::Drawing::Point(3, 347);
			this->Buton_contacts->Margin = System::Windows::Forms::Padding(6);
			this->Buton_contacts->Name = L"Buton_contacts";
			this->Buton_contacts->Size = System::Drawing::Size(269, 45);
			this->Buton_contacts->TabIndex = 3;
			this->Buton_contacts->Text = L"View Contacts";
			this->Buton_contacts->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Buton_contacts->UseVisualStyleBackColor = false;
			this->Buton_contacts->Click += gcnew System::EventHandler(this, &MyForm1::Buton_contacts_Click);
			// 
			// username_label
			// 
			this->username_label->AutoSize = true;
			this->username_label->Location = System::Drawing::Point(50, 153);
			this->username_label->Name = L"username_label";
			this->username_label->Size = System::Drawing::Size(0, 34);
			this->username_label->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(41, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(171, 112);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox1_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(0, 611);
			this->panel3->Margin = System::Windows::Forms::Padding(6);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(612, 150);
			this->panel3->TabIndex = 2;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(391, 107);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(117, 34);
			this->label13->TabIndex = 6;
			this->label13->Text = L"Esraa Ali";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(206, 107);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(136, 34);
			this->label12->TabIndex = 5;
			this->label12->Text = L"Aya Sobhy";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(389, 57);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(119, 34);
			this->label11->TabIndex = 4;
			this->label11->Text = L"Abo Bakr";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(200, 57);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(142, 34);
			this->label10->TabIndex = 3;
			this->label10->Text = L"AmrAhmed";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(24, 107);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(165, 34);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Amira Ayman";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(200, 17);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(193, 34);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Team Members:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(36, 57);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(136, 34);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Omar Adel";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->panel4->Controls->Add(this->pictureBox2);
			this->panel4->Controls->Add(this->Contacts_pic);
			this->panel4->Controls->Add(this->Contacts_count);
			this->panel4->Controls->Add(this->label_recieved_messages);
			this->panel4->Controls->Add(this->label_sent_messages);
			this->panel4->Controls->Add(this->pictureBox3);
			this->panel4->Controls->Add(this->pn_view_contact);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(0, 65);
			this->panel4->Margin = System::Windows::Forms::Padding(6);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(612, 546);
			this->panel4->TabIndex = 3;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(48, 76);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(117, 93);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox2_Click);
			this->pictureBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::pictureBox2_MouseClick);
			// 
			// Contacts_pic
			// 
			this->Contacts_pic->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->Contacts_pic->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Contacts_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Contacts_pic.Image")));
			this->Contacts_pic->Location = System::Drawing::Point(242, 270);
			this->Contacts_pic->Name = L"Contacts_pic";
			this->Contacts_pic->Size = System::Drawing::Size(116, 102);
			this->Contacts_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Contacts_pic->TabIndex = 8;
			this->Contacts_pic->TabStop = false;
			this->Contacts_pic->Click += gcnew System::EventHandler(this, &MyForm1::Contacts_pic_Click);
			this->Contacts_pic->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::Contacts_pic_MouseClick);
			// 
			// Contacts_count
			// 
			this->Contacts_count->AutoSize = true;
			this->Contacts_count->Location = System::Drawing::Point(236, 402);
			this->Contacts_count->Name = L"Contacts_count";
			this->Contacts_count->Size = System::Drawing::Size(0, 34);
			this->Contacts_count->TabIndex = 9;
			this->Contacts_count->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_recieved_messages
			// 
			this->label_recieved_messages->AutoSize = true;
			this->label_recieved_messages->Location = System::Drawing::Point(24, 174);
			this->label_recieved_messages->Name = L"label_recieved_messages";
			this->label_recieved_messages->Size = System::Drawing::Size(0, 34);
			this->label_recieved_messages->TabIndex = 6;
			this->label_recieved_messages->Click += gcnew System::EventHandler(this, &MyForm1::label8_Click);
			// 
			// label_sent_messages
			// 
			this->label_sent_messages->AutoSize = true;
			this->label_sent_messages->Location = System::Drawing::Point(307, 174);
			this->label_sent_messages->Name = L"label_sent_messages";
			this->label_sent_messages->Size = System::Drawing::Size(0, 34);
			this->label_sent_messages->TabIndex = 5;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(313, 67);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(116, 102);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox3_Click);
			// 
			// pn_view_contact
			// 
			this->pn_view_contact->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->pn_view_contact->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_view_contact->Location = System::Drawing::Point(0, 0);
			this->pn_view_contact->Name = L"pn_view_contact";
			this->pn_view_contact->Size = System::Drawing::Size(612, 546);
			this->pn_view_contact->TabIndex = 1;
			this->pn_view_contact->Visible = false;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->panel6->Controls->Add(this->next_m);
			this->panel6->Controls->Add(this->previous_m);
			this->panel6->Controls->Add(this->showmessage);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel6->Location = System::Drawing::Point(0, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(884, 761);
			this->panel6->TabIndex = 6;
			this->panel6->Visible = false;
			// 
			// next_m
			// 
			this->next_m->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->next_m->ForeColor = System::Drawing::Color::Black;
			this->next_m->Location = System::Drawing::Point(370, 389);
			this->next_m->Name = L"next_m";
			this->next_m->Size = System::Drawing::Size(120, 46);
			this->next_m->TabIndex = 2;
			this->next_m->Text = L"Next";
			this->next_m->UseVisualStyleBackColor = false;
			this->next_m->Click += gcnew System::EventHandler(this, &MyForm1::next_m_Click);
			// 
			// previous_m
			// 
			this->previous_m->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->previous_m->ForeColor = System::Drawing::Color::Black;
			this->previous_m->Location = System::Drawing::Point(134, 389);
			this->previous_m->Name = L"previous_m";
			this->previous_m->Size = System::Drawing::Size(120, 46);
			this->previous_m->TabIndex = 1;
			this->previous_m->Text = L"Previous";
			this->previous_m->UseVisualStyleBackColor = false;
			this->previous_m->Click += gcnew System::EventHandler(this, &MyForm1::previous_m_Click);
			// 
			// showmessage
			// 
			this->showmessage->AutoSize = true;
			this->showmessage->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->showmessage->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16, System::Drawing::FontStyle::Italic));
			this->showmessage->Location = System::Drawing::Point(243, 191);
			this->showmessage->Name = L"showmessage";
			this->showmessage->Size = System::Drawing::Size(2, 40);
			this->showmessage->TabIndex = 0;
			// 
			// pn_send_message
			// 
			this->pn_send_message->Controls->Add(this->button3);
			this->pn_send_message->Controls->Add(this->button2);
			this->pn_send_message->Controls->Add(this->MessageBox);
			this->pn_send_message->Controls->Add(this->label3);
			this->pn_send_message->Controls->Add(this->IDBox);
			this->pn_send_message->Controls->Add(this->label2);
			this->pn_send_message->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_send_message->Location = System::Drawing::Point(0, 0);
			this->pn_send_message->Margin = System::Windows::Forms::Padding(6);
			this->pn_send_message->Name = L"pn_send_message";
			this->pn_send_message->Size = System::Drawing::Size(884, 761);
			this->pn_send_message->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->button3->Location = System::Drawing::Point(352, 409);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 46);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Undo";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->button2->Location = System::Drawing::Point(157, 409);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 46);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Send";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// MessageBox
			// 
			this->MessageBox->Location = System::Drawing::Point(136, 229);
			this->MessageBox->Name = L"MessageBox";
			this->MessageBox->Size = System::Drawing::Size(353, 147);
			this->MessageBox->TabIndex = 3;
			this->MessageBox->Text = L"";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->label3->Location = System::Drawing::Point(36, 191);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(209, 61);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Enter Your Message:";
			// 
			// IDBox
			// 
			this->IDBox->Location = System::Drawing::Point(191, 108);
			this->IDBox->Margin = System::Windows::Forms::Padding(6);
			this->IDBox->Name = L"IDBox";
			this->IDBox->Size = System::Drawing::Size(215, 41);
			this->IDBox->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 108);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 30);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Enter ID:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pn_seacrh_contact
			// 
			this->pn_seacrh_contact->Controls->Add(this->pn_after_search);
			this->pn_seacrh_contact->Controls->Add(this->search);
			this->pn_seacrh_contact->Controls->Add(this->ID_search_text);
			this->pn_seacrh_contact->Controls->Add(this->Search_id);
			this->pn_seacrh_contact->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_seacrh_contact->Location = System::Drawing::Point(0, 0);
			this->pn_seacrh_contact->Name = L"pn_seacrh_contact";
			this->pn_seacrh_contact->Size = System::Drawing::Size(884, 761);
			this->pn_seacrh_contact->TabIndex = 5;
			this->pn_seacrh_contact->Visible = false;
			// 
			// pn_after_search
			// 
			this->pn_after_search->Controls->Add(this->ID_searched);
			this->pn_after_search->Controls->Add(this->Named_searched);
			this->pn_after_search->Controls->Add(this->label4);
			this->pn_after_search->Controls->Add(this->label1);
			this->pn_after_search->Location = System::Drawing::Point(99, 347);
			this->pn_after_search->Name = L"pn_after_search";
			this->pn_after_search->Size = System::Drawing::Size(427, 158);
			this->pn_after_search->TabIndex = 3;
			this->pn_after_search->Visible = false;
			// 
			// ID_searched
			// 
			this->ID_searched->AutoSize = true;
			this->ID_searched->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->ID_searched->Location = System::Drawing::Point(202, 94);
			this->ID_searched->Name = L"ID_searched";
			this->ID_searched->Size = System::Drawing::Size(0, 34);
			this->ID_searched->TabIndex = 3;
			// 
			// Named_searched
			// 
			this->Named_searched->AutoSize = true;
			this->Named_searched->Location = System::Drawing::Point(202, 40);
			this->Named_searched->Name = L"Named_searched";
			this->Named_searched->Size = System::Drawing::Size(0, 34);
			this->Named_searched->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->label4->Location = System::Drawing::Point(50, 94);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 27);
			this->label4->TabIndex = 1;
			this->label4->Text = L"ID:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->label1->Location = System::Drawing::Point(53, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// search
			// 
			this->search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->search->Location = System::Drawing::Point(252, 252);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(138, 46);
			this->search->TabIndex = 2;
			this->search->Text = L"Search";
			this->search->UseVisualStyleBackColor = false;
			this->search->Click += gcnew System::EventHandler(this, &MyForm1::search_Click);
			// 
			// ID_search_text
			// 
			this->ID_search_text->Location = System::Drawing::Point(220, 153);
			this->ID_search_text->Name = L"ID_search_text";
			this->ID_search_text->Size = System::Drawing::Size(202, 41);
			this->ID_search_text->TabIndex = 1;
			// 
			// Search_id
			// 
			this->Search_id->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->Search_id->Location = System::Drawing::Point(40, 148);
			this->Search_id->Name = L"Search_id";
			this->Search_id->Size = System::Drawing::Size(174, 43);
			this->Search_id->TabIndex = 0;
			this->Search_id->Text = L"Enter ID:";
			this->Search_id->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// show_message
			// 
			this->show_message->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->show_message->Dock = System::Windows::Forms::DockStyle::Fill;
			this->show_message->Location = System::Drawing::Point(0, 77);
			this->show_message->Name = L"show_message";
			this->show_message->Size = System::Drawing::Size(884, 684);
			this->show_message->TabIndex = 5;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->textBox_get_id);
			this->panel7->Controls->Add(this->enteridrecived);
			this->panel7->Controls->Add(this->pictureBox4);
			this->panel7->Controls->Add(this->previoue_RM);
			this->panel7->Controls->Add(this->next_RM);
			this->panel7->Controls->Add(this->contactmessage);
			this->panel7->Controls->Add(this->label14);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel7->Location = System::Drawing::Point(0, 0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(884, 761);
			this->panel7->TabIndex = 7;
			this->panel7->Visible = false;
			// 
			// enteridrecived
			// 
			this->enteridrecived->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->enteridrecived->Location = System::Drawing::Point(492, 197);
			this->enteridrecived->Name = L"enteridrecived";
			this->enteridrecived->Size = System::Drawing::Size(90, 47);
			this->enteridrecived->TabIndex = 6;
			this->enteridrecived->Text = L"Ok";
			this->enteridrecived->UseVisualStyleBackColor = false;
			this->enteridrecived->Click += gcnew System::EventHandler(this, &MyForm1::enteridrecived_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(295, 491);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(68, 34);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			this->pictureBox4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::pictureBox4_MouseClick);
			// 
			// previoue_RM
			// 
			this->previoue_RM->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->previoue_RM->Location = System::Drawing::Point(137, 491);
			this->previoue_RM->Name = L"previoue_RM";
			this->previoue_RM->Size = System::Drawing::Size(118, 42);
			this->previoue_RM->TabIndex = 4;
			this->previoue_RM->Text = L"Previous";
			this->previoue_RM->UseVisualStyleBackColor = false;
			this->previoue_RM->Click += gcnew System::EventHandler(this, &MyForm1::previoue_RM_Click);
			// 
			// next_RM
			// 
			this->next_RM->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->next_RM->Location = System::Drawing::Point(397, 491);
			this->next_RM->Name = L"next_RM";
			this->next_RM->Size = System::Drawing::Size(121, 44);
			this->next_RM->TabIndex = 3;
			this->next_RM->Text = L"Next";
			this->next_RM->UseVisualStyleBackColor = false;
			this->next_RM->Click += gcnew System::EventHandler(this, &MyForm1::next_RM_Click);
			// 
			// contactmessage
			// 
			this->contactmessage->AutoSize = true;
			this->contactmessage->Location = System::Drawing::Point(223, 345);
			this->contactmessage->Name = L"contactmessage";
			this->contactmessage->Size = System::Drawing::Size(0, 34);
			this->contactmessage->TabIndex = 2;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(41, 201);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(114, 34);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Enter id:";
			// 
			// pn_fav
			// 
			this->pn_fav->Controls->Add(this->delete_fav);
			this->pn_fav->Controls->Add(this->Next_fav);
			this->pn_fav->Controls->Add(this->previous_fav);
			this->pn_fav->Controls->Add(this->FavMessage);
			this->pn_fav->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_fav->Location = System::Drawing::Point(0, 0);
			this->pn_fav->Name = L"pn_fav";
			this->pn_fav->Size = System::Drawing::Size(884, 761);
			this->pn_fav->TabIndex = 8;
			this->pn_fav->Visible = false;
			// 
			// delete_fav
			// 
			this->delete_fav->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"delete_fav.Image")));
			this->delete_fav->Location = System::Drawing::Point(271, 437);
			this->delete_fav->Name = L"delete_fav";
			this->delete_fav->Size = System::Drawing::Size(85, 75);
			this->delete_fav->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->delete_fav->TabIndex = 3;
			this->delete_fav->TabStop = false;
			this->delete_fav->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::delete_fav_MouseClick);
			// 
			// Next_fav
			// 
			this->Next_fav->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->Next_fav->Location = System::Drawing::Point(372, 450);
			this->Next_fav->Name = L"Next_fav";
			this->Next_fav->Size = System::Drawing::Size(120, 46);
			this->Next_fav->TabIndex = 2;
			this->Next_fav->Text = L"Next";
			this->Next_fav->UseVisualStyleBackColor = false;
			this->Next_fav->Click += gcnew System::EventHandler(this, &MyForm1::Next_fav_Click);
			// 
			// previous_fav
			// 
			this->previous_fav->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->previous_fav->Location = System::Drawing::Point(122, 450);
			this->previous_fav->Name = L"previous_fav";
			this->previous_fav->Size = System::Drawing::Size(120, 46);
			this->previous_fav->TabIndex = 1;
			this->previous_fav->Text = L"Previous";
			this->previous_fav->UseVisualStyleBackColor = false;
			this->previous_fav->Click += gcnew System::EventHandler(this, &MyForm1::previous_fav_Click);
			// 
			// FavMessage
			// 
			this->FavMessage->AutoSize = true;
			this->FavMessage->Location = System::Drawing::Point(187, 201);
			this->FavMessage->Name = L"FavMessage";
			this->FavMessage->Size = System::Drawing::Size(218, 34);
			this->FavMessage->TabIndex = 0;
			this->FavMessage->Text = L"FavouriteMessage";
			// 
			// pn_contact
			// 
			this->pn_contact->Controls->Add(this->button_contact_previous);
			this->pn_contact->Controls->Add(this->button_contact_next);
			this->pn_contact->Controls->Add(this->label_contact_show_id);
			this->pn_contact->Controls->Add(this->label_contact_show_name);
			this->pn_contact->Controls->Add(this->label_contact_view_id);
			this->pn_contact->Controls->Add(this->label_name_contact_view);
			this->pn_contact->Controls->Add(this->pictureBox5);
			this->pn_contact->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_contact->Location = System::Drawing::Point(0, 65);
			this->pn_contact->Name = L"pn_contact";
			this->pn_contact->Size = System::Drawing::Size(612, 546);
			this->pn_contact->TabIndex = 9;
			this->pn_contact->Visible = false;
			// 
			// button_contact_previous
			// 
			this->button_contact_previous->Location = System::Drawing::Point(178, 373);
			this->button_contact_previous->Name = L"button_contact_previous";
			this->button_contact_previous->Size = System::Drawing::Size(138, 41);
			this->button_contact_previous->TabIndex = 6;
			this->button_contact_previous->Text = L"Previous";
			this->button_contact_previous->UseVisualStyleBackColor = true;
			this->button_contact_previous->Click += gcnew System::EventHandler(this, &MyForm1::button_contact_previous_Click);
			// 
			// button_contact_next
			// 
			this->button_contact_next->Location = System::Drawing::Point(351, 373);
			this->button_contact_next->Name = L"button_contact_next";
			this->button_contact_next->Size = System::Drawing::Size(138, 41);
			this->button_contact_next->TabIndex = 5;
			this->button_contact_next->Text = L"Next";
			this->button_contact_next->UseVisualStyleBackColor = true;
			this->button_contact_next->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// label_contact_show_id
			// 
			this->label_contact_show_id->AutoSize = true;
			this->label_contact_show_id->Location = System::Drawing::Point(332, 302);
			this->label_contact_show_id->Name = L"label_contact_show_id";
			this->label_contact_show_id->Size = System::Drawing::Size(0, 34);
			this->label_contact_show_id->TabIndex = 4;
			// 
			// label_contact_show_name
			// 
			this->label_contact_show_name->AutoSize = true;
			this->label_contact_show_name->Location = System::Drawing::Point(332, 252);
			this->label_contact_show_name->Name = L"label_contact_show_name";
			this->label_contact_show_name->Size = System::Drawing::Size(0, 34);
			this->label_contact_show_name->TabIndex = 3;
			// 
			// label_contact_view_id
			// 
			this->label_contact_view_id->AutoSize = true;
			this->label_contact_view_id->Location = System::Drawing::Point(218, 302);
			this->label_contact_view_id->Name = L"label_contact_view_id";
			this->label_contact_view_id->Size = System::Drawing::Size(52, 34);
			this->label_contact_view_id->TabIndex = 2;
			this->label_contact_view_id->Text = L"ID:";
			// 
			// label_name_contact_view
			// 
			this->label_name_contact_view->AutoSize = true;
			this->label_name_contact_view->Location = System::Drawing::Point(216, 252);
			this->label_name_contact_view->Name = L"label_name_contact_view";
			this->label_name_contact_view->Size = System::Drawing::Size(85, 34);
			this->label_name_contact_view->TabIndex = 1;
			this->label_name_contact_view->Text = L"Name:";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(206, 90);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(248, 126);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 0;
			this->pictureBox5->TabStop = false;
			// 
			// pn_add_contact
			// 
			this->pn_add_contact->Controls->Add(this->button6);
			this->pn_add_contact->Controls->Add(this->label5);
			this->pn_add_contact->Controls->Add(this->text_add_contact);
			this->pn_add_contact->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_add_contact->Location = System::Drawing::Point(0, 65);
			this->pn_add_contact->Name = L"pn_add_contact";
			this->pn_add_contact->Size = System::Drawing::Size(612, 546);
			this->pn_add_contact->TabIndex = 10;
			this->pn_add_contact->Visible = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->button6->Location = System::Drawing::Point(250, 250);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(140, 47);
			this->button6->TabIndex = 2;
			this->button6->Text = L"ADD";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(79, 169);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 34);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Enter ID:";
			// 
			// text_add_contact
			// 
			this->text_add_contact->Location = System::Drawing::Point(229, 162);
			this->text_add_contact->Name = L"text_add_contact";
			this->text_add_contact->Size = System::Drawing::Size(212, 41);
			this->text_add_contact->TabIndex = 0;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->Location = System::Drawing::Point(846, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(35, 32);
			this->button4->TabIndex = 5;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->panel1->Controls->Add(this->Exit);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(6);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(884, 65);
			this->panel1->TabIndex = 0;
			// 
			// Exit
			// 
			this->Exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Exit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Exit.Image")));
			this->Exit->Location = System::Drawing::Point(0, 3);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(75, 62);
			this->Exit->TabIndex = 6;
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm1::Exit_Click);
			// 
			// textBox_get_id
			// 
			this->textBox_get_id->Location = System::Drawing::Point(181, 197);
			this->textBox_get_id->Name = L"textBox_get_id";
			this->textBox_get_id->Size = System::Drawing::Size(212, 41);
			this->textBox_get_id->TabIndex = 7;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(15, 34);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(884, 761);
			this->Controls->Add(this->pn_add_contact);
			this->Controls->Add(this->pn_contact);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->pn_seacrh_contact);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->pn_fav);
			this->Controls->Add(this->pn_send_message);
			this->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyForm1";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Contacts_pic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->pn_send_message->ResumeLayout(false);
			this->pn_send_message->PerformLayout();
			this->pn_seacrh_contact->ResumeLayout(false);
			this->pn_seacrh_contact->PerformLayout();
			this->pn_after_search->ResumeLayout(false);
			this->pn_after_search->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->pn_fav->ResumeLayout(false);
			this->pn_fav->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->delete_fav))->EndInit();
			this->pn_contact->ResumeLayout(false);
			this->pn_contact->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->pn_add_contact->ResumeLayout(false);
			this->pn_add_contact->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
				this->next_RM->Visible = false;
			this->previoue_RM->Visible = false;


		}
	

#pragma endregion
		int index = 0;
		int index_fav = 1;
		int index_rec = 1;

	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
	

	}
	private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->pn_fav->Visible = false;
	this->panel7->Visible = false;
	this->panel6->Visible = false;
	this->pn_seacrh_contact->Visible = false;
	this->pn_send_message->Visible=true;
	this->pn_after_search->Visible = false;
	this->panel4->Visible = false;
	this->pn_view_contact->Visible = false;
	this->pn_contact->Visible = false;
	this->pn_add_contact->Visible = false;



}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ reciver_id, ^message;
	reciver_id = this->IDBox->Text;
	StreamReader fileid("LoginReg//IDS.txt", System::Text::Encoding::Default);
	String^ line;
	bool ID_found = false;
	while ((line=fileid.ReadLine()) != nullptr) {

		if (line == reciver_id && line!=userid) {
			message = this->MessageBox->Text;
			StreamWriter senderFile("sendingMessaging//"+ userid +".txt",true);
			senderFile.WriteLine(message);
			senderFile.Close();
			ID_found = true;
			MessageBox::Show("Your message has been sent :");
			this->MessageBox->Text=" ";
			this->IDBox->Text = " ";
			/* end of saving sending message*/

			/*begining of reviving saving message */
			StreamWriter recievedFile("Recivingmessage//" + reciver_id + ".txt", true);
			recievedFile.WriteLine(userid + " " + message);
			recievedFile.Close();
			break;
		}
	}
	if (ID_found == false)
		MessageBox::Show("Please Enter valid ID");
	fileid.Close();
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	users s;
	s.undoMessage(useriD);
	MessageBox::Show("done");

}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Logout_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}

private: System::Void SearchContact_Click(System::Object^  sender, System::EventArgs^  e) {
	this->pn_fav->Visible = false;
	this->panel7->Visible = false;
	this->panel6->Visible = false;
	this->pn_seacrh_contact->Visible = true;
	this->pn_send_message->Hide();
	this->pn_after_search->Visible = false;
	this->panel4->Visible = false;
	this->pn_view_contact->Visible = false;
	this->pn_contact->Visible = false;
	this->pn_add_contact->Visible = false;






}
private: System::Void search_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ id = this->ID_search_text->Text;
	users s;
	int ID;
	ID = Convert::ToInt32(id);
	bool found =s.Search_contact(ID, useriD);
	if (found == true) {
		this->ID_search_text->Text = " ";
		this->pn_after_search->Show();
		String ^lineid,^linename;
		this->Named_searched -> Text = gcnew String(s.Contact[0].name.c_str());
		this->ID_searched->Text = s.Contact[0].id.ToString();
		
	}
	else {
		MessageBox::Show("the contact Not Found");
	}
	
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	this->pn_fav->Visible = false;
	this->panel7->Visible = false;
	this->panel6->Visible = false;
	this->pn_seacrh_contact->Visible = false;
	this->pn_send_message->Hide();
	this->pn_after_search->Visible = false;
	this->panel4->Visible = true;
	this->pn_view_contact->Visible = false;
	this->pn_contact->Visible = false;
	this->pn_add_contact->Visible = false;


	initail();
	
}
		 void initail() {
			 int count_send = 0, count_recieved = 0,count_contact=0;
			 StreamReader sentMessage("sendingMessaging//" + userid + ".txt");
			 StreamReader Contacts("userContacts//" + userid + ".txt");
			 StreamReader recievedMessage("Recivingmessage//" + userid + ".txt");
			 while (sentMessage.ReadLine() != nullptr) {
				 count_send++;
			 }

			 this->label_sent_messages->Text = "Sent Messages = " + count_send.ToString();

			 while (recievedMessage.ReadLine() != nullptr) {
				 count_recieved++;
			 }

			 this->label_recieved_messages->Text = "Recieved Messages = " + count_recieved.ToString();
			// this->count_recieved->Text = count_recieved.ToString();


			 while (Contacts.ReadLine() != nullptr) {
				 count_contact++;
			 }

			 this->Contacts_count->Text = "Your Contacts = " + count_contact.ToString();
			 sentMessage.Close();
			 Contacts.Close();
			 recievedMessage.Close();


			

		 }

		 
private: System::Void next_m_Click(System::Object^ sender, System::EventArgs^ e) {
	users s;
	s.viewAllSentMessages(useriD);
	
		if (index!=s.Messages.size()-1)
		{
			this->showmessage->Text = gcnew String((s.Messages[s.Messages.size() - index - 2]).c_str());
			index++;
		
		}
		else
		 MessageBox::Show("There is no more messages");
		

}
private: System::Void previous_m_Click(System::Object^ sender, System::EventArgs^ e) {

	users s;
	s.viewAllSentMessages(useriD);
	
	
		if (index != 0) {
			this->showmessage->Text = gcnew String((s.Messages[s.Messages.size() - index]).c_str());
			index--;
		}
		else
		{
			MessageBox::Show("There is first messages");
			
		}

	


}


	   
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->pn_fav->Visible = false;
	this->panel7->Visible = false;
	this->panel6->Visible = true;
	this->pn_seacrh_contact->Visible = false;
	this->pn_send_message->Hide();
	this->pn_after_search->Visible = false;
	this->panel4->Visible = false;
	this->pn_view_contact->Visible = false;
	this->pn_contact->Visible = false;
	this->pn_add_contact->Visible = false;


	users s;
	s.viewAllSentMessages(useriD);
	this->showmessage->Text = gcnew String((s.Messages.back()).c_str());

}
	   //pn_recivedMessage
private: System::Void pictureBox2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->pn_fav->Visible = false;
	this->panel7->Visible = true;
	this->panel6->Visible = false;
	this->pn_seacrh_contact->Visible = false;
	this->pn_send_message->Hide();
	this->pn_after_search->Visible = false;
	this->panel4->Visible = false;
	this->pn_view_contact->Visible = false;
	this->pn_contact->Visible = false;
	this->pn_add_contact->Visible = false;



}
	   //favourite button
private: System::Void pictureBox4_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	StreamWriter file("Favourite//" + useriD +".txt",true);
	file.WriteLine(contactmessage->Text);
	file.Close();
}
private: System::Void next_RM_Click(System::Object^ sender, System::EventArgs^ e) {

	users s;
	//s.See_specific_Message(useriD, idd);
	if (index_rec < s.Messages.size()) {
		this->contactmessage->Text = gcnew String(s.Messages[index_rec].c_str());
		index_rec++;
	}
	else {
		MessageBox::Show("there is no more message ");
	}
}
private: System::Void previoue_RM_Click(System::Object^ sender, System::EventArgs^ e) {
	
	users s;
	//s.See_specific_Message(useriD, idd);
	if (index_rec > 1) {
		this->contactmessage->Text = gcnew String(s.Messages[index_rec-2].c_str());
		index_rec--;
	}
	else {
		MessageBox::Show("there is no more message ");
	}

}

private: System::Void favMessage_Click(System::Object^ sender, System::EventArgs^ e) {
	this->pn_fav->Visible = true;
	this->panel7->Visible = false;
	this->panel6->Visible = false;
	this->pn_seacrh_contact->Visible = false;
	this->pn_send_message->Hide();
	this->pn_after_search->Visible = false;
	this->panel4->Visible = false;
	this->pn_view_contact->Visible = false;
	this->pn_contact->Visible = false;
	this->pn_add_contact->Visible = false;

	users s;
	s.see_fav_messages(useriD);
	//MessageBox::Show(s.Messages.size().ToString());
	if (s.Messages.size() == 0)
		MessageBox::Show("there is no favurite message:");
	else
	this->FavMessage->Text = gcnew String((s.Messages.front()).c_str());	
}

	   //view contacts
private: System::Void Contacts_pic_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->pn_fav->Visible = false;
	this->panel7->Visible = false;
	this->panel6->Visible = false;
	this->pn_seacrh_contact->Visible = false;
	this->pn_send_message->Hide();
	this->pn_after_search->Visible = false;
	this->panel4->Visible = false;
	this->pn_view_contact->Visible = false;
	this->pn_contact->Visible = true;
	this->pn_add_contact->Visible = false;

	users s;
	s.viewAllContacts(useriD);
	this->label_contact_show_name->Text = gcnew String(s.Contact[0].name.c_str());
	this->label_contact_show_id->Text = s.Contact[0].id.ToString();


}

private: System::Void delete_fav_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	users s;
	if (s.Messages.size() > 0) {
		s.Remove_old_fav_message(useriD);
		if (index_fav == 1)
			this->FavMessage->Text = " ";
		else
			index_fav--;

		MessageBox::Show("the oldest message has bee deleted ");
	}
	else
		MessageBox::Show("there is no message to delete");
	
	
}
private: System::Void Next_fav_Click(System::Object^ sender, System::EventArgs^ e) {
	users s;
	s.see_fav_messages(useriD);

//	if (index != s.Messages.size()-3)
	if( (index_fav <= s.Messages.size()-1) && (s.Messages.size()!=0))
	{
		//MessageBox::Show(index_fav.ToString());
		this->FavMessage->Text = gcnew String((s.Messages[index_fav]).c_str());
		index_fav++;
	}
	else
		MessageBox::Show("There is no more messages");

}
private: System::Void previous_fav_Click(System::Object^ sender, System::EventArgs^ e) {

	users s;
	s.see_fav_messages(useriD);

	if (index_fav >1)
	{
		this->FavMessage->Text = gcnew String((s.Messages[index_fav -2]).c_str());
		index_fav--;

	}
	else
		MessageBox::Show("There is no more messages");


}

private: System::Void Buton_contacts_Click(System::Object^ sender, System::EventArgs^ e) {
	this->pn_fav->Visible = false;
	this->panel7->Visible = false;
	this->panel6->Visible = false;
	this->pn_seacrh_contact->Visible = false;
	this->pn_send_message->Hide();
	this->pn_after_search->Visible = false;
	this->panel4->Visible = false;
	this->pn_view_contact->Visible = false;
	this->pn_contact->Visible = true;
	this->pn_add_contact->Visible = false;


	users s;
	s.viewAllContacts(useriD);
	this->label_contact_show_name->Text = gcnew String(s.Contact[0].name.c_str());
	this->label_contact_show_id->Text = s.Contact[0].id.ToString();

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	users s;
	s.viewAllContacts(useriD);
	if (indexcontact <= s.Contact.size()-1) {
		this->label_contact_show_name->Text = gcnew String(s.Contact[indexcontact].name.c_str());
		this->label_contact_show_id->Text = s.Contact[indexcontact].id.ToString();
		indexcontact++;
	}
	else {
		MessageBox::Show("There is no more contacts");
	}
}
private: System::Void button_contact_previous_Click(System::Object^ sender, System::EventArgs^ e) {
	users s;
	s.viewAllContacts(useriD);
	if (indexcontact > 1) {
		this->label_contact_show_name->Text = gcnew String(s.Contact[indexcontact - 2].name.c_str());
		this->label_contact_show_id->Text = s.Contact[indexcontact - 2].id.ToString();
		indexcontact--;
	}
	else {
		MessageBox::Show("this is the first contact");
	}
}
private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ id = text_add_contact->Text;
	int addedid = Convert::ToInt32(id);
	users s;
	bool done = s.add_contact(addedid,useriD);	
	if (done) {
		MessageBox::Show("the contact has been done:");
		this->text_add_contact->Text = " ";
	}

	else
		MessageBox::Show("there is no contact");
}
private: System::Void button_add_contact_Click(System::Object^ sender, System::EventArgs^ e) {
	this->pn_fav->Visible = false;
	this->panel7->Visible = false;
	this->panel6->Visible = false;
	this->pn_seacrh_contact->Visible = false;
	this->pn_send_message->Visible=false;
	this->pn_after_search->Visible = false;
	this->panel4->Visible = false;
	this->pn_view_contact->Visible = false;
	this->pn_contact->Visible = false;
	this->pn_add_contact->Visible = true;
}
private: System::Void Contacts_pic_Click(System::Object^ sender, System::EventArgs^ e) {
	this->pn_fav->Visible = false;
	this->panel7->Visible = false;
	this->panel6->Visible = false;
	this->pn_seacrh_contact->Visible = false;
	this->pn_send_message->Hide();
	this->pn_after_search->Visible = false;
	this->panel4->Visible = false;
	this->pn_view_contact->Visible = false;
	this->pn_contact->Visible = true;
	this->pn_add_contact->Visible = false;

	users s;
	s.viewAllContacts(useriD);
	this->label_contact_show_name->Text = gcnew String(s.Contact[0].name.c_str());
	this->label_contact_show_id->Text = s.Contact[0].id.ToString();


}
private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->pn_fav->Visible = false;
	this->panel7->Visible = true;
	this->panel6->Visible = false;
	this->pn_seacrh_contact->Visible = false;
	this->pn_send_message->Visible=false;
	this->pn_after_search->Visible = false;
	this->panel4->Visible = false;
	this->pn_view_contact->Visible = false;
	this->pn_contact->Visible =false;
	this->pn_add_contact->Visible = false;
}

private: System::Void enteridrecived_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ t = this->textBox_get_id->Text;
	int idd;
	idd = Convert::ToInt32(t);
	users s;
	this->next_RM->Visible = false;
	this->previoue_RM->Visible = false;
	if (idd != useriD) {
		s.See_specific_Message(useriD, idd);


		if (s.Messages.size() > 0) {
			this->contactmessage->Text = gcnew String((s.Messages.front()).c_str());
			this->pictureBox4->Visible = true;
			this->textBox_get_id->Text = " ";
			this->next_RM->Visible = true;
			this->previoue_RM->Visible = true;

		}
		else
			MessageBox::Show("there is now message from this ID");
	}
	else
		MessageBox::Show("Enter another ID");
}
};

}


	