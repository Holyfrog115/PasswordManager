#pragma once
#include "MainPasswordForm.h"
#include "registrationForm.h"
#include "Account.h"

namespace PasswordManager {

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
	private: System::Windows::Forms::Label^ loginLabel;
	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::TextBox^ passwordTextBox;
	private: System::Windows::Forms::TextBox^ loginTextBox;
	private: System::Windows::Forms::Button^ loginButton;
	private: System::Windows::Forms::Button^ registrationButton;
	private: String^ currentLogin;


	protected:

	protected:

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
			this->loginLabel = (gcnew System::Windows::Forms::Label());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->loginTextBox = (gcnew System::Windows::Forms::TextBox());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->registrationButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// loginLabel
			// 
			this->loginLabel->AutoSize = true;
			this->loginLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(204)));
			this->loginLabel->Location = System::Drawing::Point(72, 144);
			this->loginLabel->Name = L"loginLabel";
			this->loginLabel->Size = System::Drawing::Size(111, 37);
			this->loginLabel->TabIndex = 0;
			this->loginLabel->Text = L"Login:";
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																	 static_cast<System::Byte>(204)));
			this->passwordLabel->Location = System::Drawing::Point(72, 240);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(176, 37);
			this->passwordLabel->TabIndex = 0;
			this->passwordLabel->Text = L"Password:";
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
																	   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->passwordTextBox->Location = System::Drawing::Point(264, 240);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->PasswordChar = '*';
			this->passwordTextBox->Size = System::Drawing::Size(216, 31);
			this->passwordTextBox->TabIndex = 1;
			// 
			// loginTextBox
			// 
			this->loginTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(204)));
			this->loginTextBox->Location = System::Drawing::Point(264, 144);
			this->loginTextBox->Name = L"loginTextBox";
			this->loginTextBox->Size = System::Drawing::Size(216, 31);
			this->loginTextBox->TabIndex = 1;
			// 
			// loginButton
			// 
			this->loginButton->Location = System::Drawing::Point(216, 384);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(168, 48);
			this->loginButton->TabIndex = 2;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = true;
			this->loginButton->Click += gcnew System::EventHandler(this, &MyForm::loginButton_Click);
			// 
			// registrationButton
			// 
			this->registrationButton->Location = System::Drawing::Point(216, 456);
			this->registrationButton->Name = L"registrationButton";
			this->registrationButton->Size = System::Drawing::Size(168, 48);
			this->registrationButton->TabIndex = 3;
			this->registrationButton->Text = L"Registration";
			this->registrationButton->UseVisualStyleBackColor = true;
			this->registrationButton->Click += gcnew System::EventHandler(this, &MyForm::registrationButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 561);
			this->Controls->Add(this->registrationButton);
			this->Controls->Add(this->loginButton);
			this->Controls->Add(this->loginTextBox);
			this->Controls->Add(this->passwordTextBox);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->loginLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Password Manager";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ filepath = "passwords/masterAccounts.txt";
		bool flag = false;

		if (File::Exists(filepath)) {
			StreamReader^ reader = gcnew StreamReader(filepath, System::Text::Encoding::UTF8);
			String^ line;

			while ((line = reader->ReadLine()) != nullptr) {
				if (String::IsNullOrWhiteSpace(line)) continue;

				cli::array<String^>^ parts = line->Split('|');

				if (parts->Length == 3) {
					String^ title = parts[0];
					String^ login = parts[1];
					String^ password = parts[2];
					Account^ acc = gcnew Account(title, login, password);
					acc->XorCipher();

					if (this->loginTextBox->Text == acc->getLogin() && this->passwordTextBox->Text == acc->getPassword()) {
						flag = true;
						this->currentLogin = login;
						MainPasswordForm^ mainForm = gcnew MainPasswordForm(currentLogin);

						mainForm->Show();

						this->Hide();
						break;
					}
				}
			}

			reader->Close();
		}
		if (!flag) {
			MessageBox::Show(this, "Wrong login or password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		
	}

	private: System::Void registrationButton_Click(System::Object^ sender, System::EventArgs^ e) {
		registrationForm^ registration = gcnew registrationForm();

		registration->Show();
	}
};
}
