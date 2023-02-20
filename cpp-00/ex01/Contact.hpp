#include <iostream>
#include <iomanip>
#include <string>

class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		void setFirstName(std::string _first_name);
		void setLastName(std::string _last_name);
		void setNickname(std::string _nickname);
		void setPhoneNumber(std::string _phone_name);
		void setDarkestSecret(std::string _darkest_secret);	
		std::string& getFirstName();
		std::string& getLastName();
		std::string& getNickname();
		std::string& getPhoneNumber();
		std::string& getDarkestSecret();
};
