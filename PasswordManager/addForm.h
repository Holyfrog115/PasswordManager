#pragma once

namespace PasswordManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for addForm
	/// </summary>
	public ref class addForm : public System::Windows::Forms::Form
	{
	public:
		addForm(void)
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
		~addForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ titleLabel;
	protected:
	private: System::Windows::Forms::TextBox^ titleTextBox;
	private: System::Windows::Forms::Label^ loginLabel;
	private: System::Windows::Forms::TextBox^ loginTextBox;
	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::TextBox^ passwordTextBox;
	private: System::Windows::Forms::Button^ saveButton;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(addForm::typeid));
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->titleTextBox = (gcnew System::Windows::Forms::TextBox());
			this->loginLabel = (gcnew System::Windows::Forms::Label());
			this->loginTextBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// titleLabel
			// 
			this->titleLabel->AutoSize = true;
			this->titleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(204)));
			this->titleLabel->Location = System::Drawing::Point(24, 24);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Size = System::Drawing::Size(55, 24);
			this->titleLabel->TabIndex = 0;
			this->titleLabel->Text = L"Title: ";
			// 
			// titleTextBox
			// 
			this->titleTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->titleTextBox->Location = System::Drawing::Point(144, 24);
			this->titleTextBox->Name = L"titleTextBox";
			this->titleTextBox->Size = System::Drawing::Size(100, 26);
			this->titleTextBox->TabIndex = 1;
			// 
			// loginLabel
			// 
			this->loginLabel->AutoSize = true;
			this->loginLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(204)));
			this->loginLabel->Location = System::Drawing::Point(24, 72);
			this->loginLabel->Name = L"loginLabel";
			this->loginLabel->Size = System::Drawing::Size(67, 24);
			this->loginLabel->TabIndex = 0;
			this->loginLabel->Text = L"Login: ";
			// 
			// loginTextBox
			// 
			this->loginTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->loginTextBox->Location = System::Drawing::Point(144, 72);
			this->loginTextBox->Name = L"loginTextBox";
			this->loginTextBox->Size = System::Drawing::Size(100, 26);
			this->loginTextBox->TabIndex = 1;
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	 static_cast<System::Byte>(204)));
			this->passwordLabel->Location = System::Drawing::Point(24, 120);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(102, 24);
			this->passwordLabel->TabIndex = 0;
			this->passwordLabel->Text = L"Password: ";
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->passwordTextBox->Location = System::Drawing::Point(144, 120);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->Size = System::Drawing::Size(100, 26);
			this->passwordTextBox->TabIndex = 1;
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(24, 168);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(216, 48);
			this->saveButton->TabIndex = 2;
			this->saveButton->Text = L"Save";
			this->saveButton->UseVisualStyleBackColor = true;
			// 
			// addForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->passwordTextBox);
			this->Controls->Add(this->loginTextBox);
			this->Controls->Add(this->titleTextBox);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->loginLabel);
			this->Controls->Add(this->titleLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"addForm";
			this->Text = L"Add Section";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
