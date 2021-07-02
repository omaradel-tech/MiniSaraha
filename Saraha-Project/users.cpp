#include "users.h"
#include <iostream>
#include <fstream>

users::users() {

}


users::~users() {



}
bool users::Send_message(std::string id) {

	return false;
}
void users::see_fav_messages(int id)
{
	std::string line;
	std::string strid = std::to_string(id);

	std::ifstream Favfile("Favourite//" + strid + ".txt ");

		while (getline(Favfile, line)) {
			Messages.push_back(line);
		}
	Favfile.close();

}
void users::Remove_old_fav_message(int id)
{
	std::string name = "Favourite//" + std::to_string(id) + ".txt";
	std::ifstream file(name);
	std::string line;
	while (getline(file, line)) {
		Messages.push_back(line);
	}
	file.clear();
	file.close();
	std::fstream file2(name, std::ios::out | std::ios::trunc);
	Messages.pop_front();
	if (file2.is_open()) {
		for (int i = 0; i < Messages.size(); i++) {
			file2 << Messages[i] << "\n";
		}
	}
	file2.close();


}
void users::undoMessage(int id) {
	std::string name = "sendingMessaging//" + std::to_string(id) + ".txt";
	std::ifstream file(name);
	std::string line;
	while (getline(file, line)) {
		Messages.push_back(line);
	}
	file.clear();
	file.close();
	std::fstream file2(name, std:: ios::out |std::ios::trunc);
	if (file2.is_open()) {
		for (int  i = 0; i < Messages.size() - 1; i++) {
			file2 << Messages.front() << "\n";
			Messages.pop_front();
		}
	}
	file2.close();

}
bool users::add_contact(int id , int ownerid) {
	std::string name = "userContacts//" + std::to_string(ownerid) + ".txt";
	std::ofstream file(name,std::ios::app);
	std::ifstream usersnamefile("LoginReg//users.txt");
	std::ifstream usersIDfile("LoginReg//IDS.txt");
	std::string searchid = std::to_string(id);
	std::string currentid;
	std::string searchedname;
	while (getline(usersIDfile, currentid) && getline(usersnamefile,searchedname)) {
		if (currentid == searchid) {
			//Contacts c;
			//c.name = searchedname;
			
			file << currentid << " " << searchedname << "\n";
			file.close();
			usersIDfile.close();
			usersnamefile.close();
			return true;
		}
	}
	//file << "omar" << "\t" << "waled" << "\n";
	file.close();
	usersIDfile.close();
	usersnamefile.close();
	return false;
 }
bool users::Search_contact(int id,int owner) {
	std::string strid = std::to_string(id);
	std::string name = "userContacts//" + std::to_string(owner)+ ".txt";
	std::ifstream file(name);
	std::string line;
	std::string line2;
	while (getline(file,line,' ') && getline(file,line2)){
		if (line == strid) {
			file.close();
			Contacts d;
			d.id = id;
			d.name = line2;
			Contact.push_back(d);
			return true;
		}
	}
	

	file.close();
	return false;
}
void users::viewAllContacts(int id){
	std::string strid = std::to_string(id);
	std::string name = "userContacts//" + strid + ".txt";
	std::ifstream filename(name);
	std::string Userid, username;
	while (filename >> Userid >> username) {
		Contacts d;
		d.id = std::stoi(Userid);
		d.name = username;
		Contact.push_back(d);
	}
	filename.close();
}

void users::viewAllSentMessages(int id)
{
	std::string line;
	std::string strid = std::to_string(id);

	std::fstream Sfile("sendingMessaging/" + strid + ".txt ", std::ios::in);
	if (Sfile.is_open())
	{
		while (getline(Sfile, line)) {

			Messages.push_back(line);
		}
	}
	Sfile.close();

}

void users::See_specific_Message(int id, int text)
{
	std::string strid = std::to_string(id);

	std::fstream file("Recivingmessage/" + strid + ".txt ");
	std::string line,line1;
	std::string str = std::to_string(text);
	file.seekg(0, std::ios::beg);

	while (getline(file, line,' ') && getline(file,line1)) {
		if ( (line==str ) && (line !=strid ))
		{
			Messages.push_back(line1);
		}	 

	}
	file.close();




}


















