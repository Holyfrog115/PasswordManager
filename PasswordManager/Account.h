#pragma once
ref class Account
{
private:
	System::String^ title;
	System::String^ login;
	System::String^ password;
public:
	Account(System::String^ title, System::String^ login, System::String^ password) {
		this->title = title;
		this->login = login;
		this->password = password;
	}

	System::String^ getTitle() {
		return this->title;
	}

	System::String^ getLogin() {
		return this->login;
	}

	System::String^ getPassword() {
		return this->password;
	}

	void setTitle(System::String^ title) {
		this->title = title;
	}

	void setLogin(System::String^ login) {
		this->login = login;
	}

	void setPassword(System::String^ password) {
		this->password = password;
	}

	void XorCipher() {
		System::Text::StringBuilder^ result = gcnew System::Text::StringBuilder();

		for (int i = 0; i < this->password->Length; i++) {
			wchar_t encryptedChar = this->password[i] ^ this->login[0];

			result->Append(encryptedChar);
		}

		setPassword(result->ToString());
	}
};

