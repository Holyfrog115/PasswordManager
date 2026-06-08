#pragma once
#include "Account.h"
#include "addForm.h"

namespace PasswordManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainPasswordForm
	/// </summary>
	public ref class MainPasswordForm : public System::Windows::Forms::Form
	{
	public:
		MainPasswordForm(void)
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
		~MainPasswordForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ servicesListBox;
	private: System::Windows::Forms::Label^ loginLabel;
	private: System::Windows::Forms::MaskedTextBox^ loginTextBox;
	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::MaskedTextBox^ passwordTextBox;
	private: System::Windows::Forms::Button^ addButton;
	private: System::Windows::Forms::Button^ deleteButton;
	private: System::Windows::Forms::Button^ saveButton;
	private: System::Collections::Generic::List<Account^>^ myAccounts = gcnew System::Collections::Generic::List<Account^>();



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainPasswordForm::typeid));
			this->servicesListBox = (gcnew System::Windows::Forms::ListBox());
			this->loginLabel = (gcnew System::Windows::Forms::Label());
			this->loginTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->passwordTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->deleteButton = (gcnew System::Windows::Forms::Button());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// servicesListBox
			// 
			this->servicesListBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
																	   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->servicesListBox->FormattingEnabled = true;
			this->servicesListBox->ItemHeight = 24;
			this->servicesListBox->Location = System::Drawing::Point(24, 24);
			this->servicesListBox->Name = L"servicesListBox";
			this->servicesListBox->Size = System::Drawing::Size(288, 484);
			this->servicesListBox->TabIndex = 1;
			this->servicesListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainPasswordForm::servicesListBox_SelectedIndexChanged);
			// 
			// loginLabel
			// 
			this->loginLabel->AutoSize = true;
			this->loginLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(204)));
			this->loginLabel->Location = System::Drawing::Point(360, 24);
			this->loginLabel->Name = L"loginLabel";
			this->loginLabel->Size = System::Drawing::Size(111, 37);
			this->loginLabel->TabIndex = 2;
			this->loginLabel->Text = L"Login:";
			// 
			// loginTextBox
			// 
			this->loginTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(204)));
			this->loginTextBox->Location = System::Drawing::Point(360, 72);
			this->loginTextBox->Name = L"loginTextBox";
			this->loginTextBox->ReadOnly = true;
			this->loginTextBox->Size = System::Drawing::Size(192, 31);
			this->loginTextBox->TabIndex = 3;
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																	 static_cast<System::Byte>(204)));
			this->passwordLabel->Location = System::Drawing::Point(360, 144);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(176, 37);
			this->passwordLabel->TabIndex = 2;
			this->passwordLabel->Text = L"Password:";
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
																	   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->passwordTextBox->Location = System::Drawing::Point(360, 192);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->ReadOnly = true;
			this->passwordTextBox->Size = System::Drawing::Size(192, 31);
			this->passwordTextBox->TabIndex = 3;
			// 
			// addButton
			// 
			this->addButton->Location = System::Drawing::Point(360, 312);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(192, 48);
			this->addButton->TabIndex = 4;
			this->addButton->Text = L"Add";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &MainPasswordForm::addButton_Click);
			// 
			// deleteButton
			// 
			this->deleteButton->Location = System::Drawing::Point(360, 384);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(192, 48);
			this->deleteButton->TabIndex = 4;
			this->deleteButton->Text = L"Delete";
			this->deleteButton->UseVisualStyleBackColor = true;
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(360, 456);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(192, 48);
			this->saveButton->TabIndex = 4;
			this->saveButton->Text = L"Save";
			this->saveButton->UseVisualStyleBackColor = true;
			// 
			// MainPasswordForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 561);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->deleteButton);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->passwordTextBox);
			this->Controls->Add(this->loginTextBox);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->loginLabel);
			this->Controls->Add(this->servicesListBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainPasswordForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Password Manager";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainPasswordForm::MainPasswordForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MainPasswordForm::MainPasswordForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainPasswordForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Application::Exit();
	}

	
	private: System::Void MainPasswordForm_Load(System::Object^ sender, System::EventArgs^ e) {
		myAccounts->Add(gcnew Account("Google", "Disterio", "qwerty"));
		myAccounts->Add(gcnew Account("Spotify", "GiggleBus", "1234qwe"));
		this->servicesListBox->Items->Add(myAccounts[0]->getTitle());
		this->servicesListBox->Items->Add(myAccounts[1]->getTitle());
	}

	private: System::Void servicesListBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		int index = servicesListBox->SelectedIndex;
		this->loginTextBox->Text = myAccounts[index]->getLogin();
		this->passwordTextBox->Text = myAccounts[index]->getPassword();
	}

	private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
		addForm^ add = gcnew addForm();

		if (add->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			Account^ acc = add->NewAccount;
			myAccounts->Add(acc);
			servicesListBox->Items->Add(acc->getTitle());
		}
		else {
			MessageBox::Show(this, "Input Error", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
