#pragma once
#include "Game.h"
//#include <iostream>
//#include <string>
//using namespace std;
//using namespace System;



namespace SummerGameProject {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Login에 대한 요약입니다.
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			// 
			
		}
		

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ GOButton;
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	protected:

	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->GOButton = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// GOButton
			// 
			this->GOButton->BackColor = System::Drawing::Color::Red;
			this->GOButton->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->GOButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GOButton->Location = System::Drawing::Point(1618, 641);
			this->GOButton->Name = L"GOButton";
			this->GOButton->Size = System::Drawing::Size(82, 58);
			this->GOButton->TabIndex = 0;
			this->GOButton->UseVisualStyleBackColor = false;
			this->GOButton->Click += gcnew System::EventHandler(this, &Login::GOButton_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(832, 655);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(450, 35);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Login::textBox1_TextChanged);
			this->textBox1->Text = "이름을 입력하세요 ..";
			
			
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1894, 1009);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->GOButton);
			this->DoubleBuffered = true;
			this->Name = L"Login";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GOButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Game^ f2 = gcnew Game();
		f2->ShowDialog();
	}
	private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ username = textBox1->Text;
	}
	};
}