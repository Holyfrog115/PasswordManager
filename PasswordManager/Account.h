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

	void EncryptXorCipher() {
		System::String^ hexResult = "";

		for (int i = 0; i < this->password->Length; i++) {
			wchar_t encryptedChar = this->password[i] ^ this->login[0];

			hexResult += ((int)encryptedChar).ToString("X2");
		}

		setPassword(hexResult);
	}

	void DecryptXorCipher() {
		System::Text::StringBuilder^ result = gcnew System::Text::StringBuilder();
		for (int i = 0; i < this->getPassword()->Length; i += 2) {
			System::String^ hexChar = this->getPassword()->Substring(i, 2);
			int charCode = System::Convert::ToInt32(hexChar, 16);

			wchar_t originalChar = (wchar_t)charCode ^ this->getLogin()[0];
			result->Append(originalChar);
		}

		setPassword(result->ToString());
	}
};

