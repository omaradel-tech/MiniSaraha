#pragma once
#include<vector>
#include<string>
#include<deque>
#include<fstream>
#include<stack>
using namespace::System;
struct Contacts
{
	std::string name;
	int id;

};
class users
{
	public:
		int IDuser;
		std::string name;
		std::vector<Contacts>Contact;
		std::deque<std::string>Messages;

		bool add_contact(int id, int ownerid);
		bool Send_message(std::string id);
		bool Search_contact(int id,int owner);
		void viewAllContacts(int id);
		void viewAllSentMessages(int id);
		void See_specific_Message(int id,int text);
		void see_fav_messages(int id);
		void Remove_old_fav_message(int id);
		void undoMessage(int id);

		users();
		~users();

		public:
		std::string password;
		
		



};


