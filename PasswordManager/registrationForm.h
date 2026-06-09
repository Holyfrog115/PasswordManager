#pragma once

namespace PasswordManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for registrationForm
	/// </summary>
	public ref class registrationForm : public System::Windows::Forms::Form
	{
	public:
		registrationForm(void)
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
		~registrationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ passwordTextBox;
	protected:
	private: System::Windows::Forms::TextBox^ loginTextBox;
	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::Button^ registrationBtn;
	private: System::Windows::Forms::Label^ loginLabel;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(registrationForm::typeid));
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->loginTextBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->registrationBtn = (gcnew System::Windows::Forms::Button());
			this->loginLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
																	   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->passwordTextBox->Location = System::Drawing::Point(142, 94);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->Size = System::Drawing::Size(120, 31);
			this->passwordTextBox->TabIndex = 6;
			// 
			// loginTextBox
			// 
			this->loginTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(204)));
			this->loginTextBox->Location = System::Drawing::Point(142, 46);
			this->loginTextBox->Name = L"loginTextBox";
			this->loginTextBox->Size = System::Drawing::Size(120, 31);
			this->loginTextBox->TabIndex = 7;
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																	 static_cast<System::Byte>(204)));
			this->passwordLabel->Location = System::Drawing::Point(22, 94);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(121, 25);
			this->passwordLabel->TabIndex = 3;
			this->passwordLabel->Text = L"Password:";
			// 
			// registrationBtn
			// 
			this->registrationBtn->Location = System::Drawing::Point(70, 166);
			this->registrationBtn->Name = L"registrationBtn";
			this->registrationBtn->Size = System::Drawing::Size(144, 48);
			this->registrationBtn->TabIndex = 5;
			this->registrationBtn->Text = L"Registration";
			this->registrationBtn->UseVisualStyleBackColor = true;
			this->registrationBtn->Click += gcnew System::EventHandler(this, &registrationForm::registrationBtn_Click);
			// 
			// loginLabel
			// 
			this->loginLabel->AutoSize = true;
			this->loginLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(204)));
			this->loginLabel->Location = System::Drawing::Point(22, 46);
			this->loginLabel->Name = L"loginLabel";
			this->loginLabel->Size = System::Drawing::Size(77, 25);
			this->loginLabel->TabIndex = 4;
			this->loginLabel->Text = L"Login:";
			// 
			// registrationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->passwordTextBox);
			this->Controls->Add(this->loginTextBox);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->registrationBtn);
			this->Controls->Add(this->loginLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"registrationForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registration";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void registrationBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ login = this->loginTextBox->Text;
		String^ password = this->passwordTextBox->Text;
		if (String::IsNullOrWhiteSpace(login) || String::IsNullOrWhiteSpace(password)) {
			MessageBox::Show(this, "Login and Password can't be empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			saveToFile(login, password);
			this->Close();
		}
	}

	private: System::Void saveToFile(String^ login, String^ password) {
		String^ filepath = "masterAccounts.txt";

		StreamWriter^ writer = gcnew StreamWriter(filepath, true, System::Text::Encoding::UTF8);

		writer->WriteLine(login + "|" + password);

		writer->Close();
	}
};
}
