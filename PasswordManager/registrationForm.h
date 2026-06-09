#pragma once

namespace PasswordManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^ loginLabel;
	protected:

	protected:

	private: System::Windows::Forms::Button^ registrationBtn;
	private: System::Windows::Forms::TextBox^ loginTextBox;
	protected:


	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::TextBox^ passwordTextBox;



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
			this->loginLabel = (gcnew System::Windows::Forms::Label());
			this->registrationBtn = (gcnew System::Windows::Forms::Button());
			this->loginTextBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// loginLabel
			// 
			this->loginLabel->AutoSize = true;
			this->loginLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(204)));
			this->loginLabel->Location = System::Drawing::Point(24, 48);
			this->loginLabel->Name = L"loginLabel";
			this->loginLabel->Size = System::Drawing::Size(77, 25);
			this->loginLabel->TabIndex = 0;
			this->loginLabel->Text = L"Login:";
			// 
			// registrationBtn
			// 
			this->registrationBtn->Location = System::Drawing::Point(72, 168);
			this->registrationBtn->Name = L"registrationBtn";
			this->registrationBtn->Size = System::Drawing::Size(144, 48);
			this->registrationBtn->TabIndex = 1;
			this->registrationBtn->Text = L"Registration";
			this->registrationBtn->UseVisualStyleBackColor = true;
			this->registrationBtn->Click += gcnew System::EventHandler(this, &registrationForm::registrationBtn_Click);
			// 
			// loginTextBox
			// 
			this->loginTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(204)));
			this->loginTextBox->Location = System::Drawing::Point(144, 48);
			this->loginTextBox->Name = L"loginTextBox";
			this->loginTextBox->Size = System::Drawing::Size(120, 31);
			this->loginTextBox->TabIndex = 2;
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																	 static_cast<System::Byte>(204)));
			this->passwordLabel->Location = System::Drawing::Point(24, 96);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(121, 25);
			this->passwordLabel->TabIndex = 0;
			this->passwordLabel->Text = L"Password:";
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
																	   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->passwordTextBox->Location = System::Drawing::Point(144, 96);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->Size = System::Drawing::Size(120, 31);
			this->passwordTextBox->TabIndex = 2;
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

	}
};
}
