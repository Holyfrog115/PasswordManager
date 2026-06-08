#pragma once
ref class Account
{
private:
	System::String^ login;
	System::String^ password;

public:
	Account(System::String^ login, System::String^ password) {
		this->login = login;
		this->password = password;
	}

	System::String^ getLogin() {
		return this->login;
	}

	System::String^ getPassword() {
		return this->password;
	}

	void setLogin(System::String^ login) {
		this->login = login;
	}

	void setPassword(System::String^ password) {
		this->password = password;
	}
};

