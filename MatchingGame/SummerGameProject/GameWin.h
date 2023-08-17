#pragma once

namespace SummerGameProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// GameWin에 대한 요약입니다.
	/// </summary>
	
	public ref class GameWin : public System::Windows::Forms::Form
	{
	public:
		GameWin(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ HomeButton;
	private: System::Windows::Forms::Button^ ExitButton;

	public:
		static String^ userid;
	
	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~GameWin()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameWin::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->HomeButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(762, 440);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 59);
			this->label1->TabIndex = 0;
			this->label1->Text = L"hi";
			this->label1->Click += gcnew System::EventHandler(this, &GameWin::label1_Click);
			// 
			// HomeButton
			// 
			this->HomeButton->BackColor = System::Drawing::Color::Red;
			this->HomeButton->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->HomeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->HomeButton->Location = System::Drawing::Point(950, 746);
			this->HomeButton->Name = L"HomeButton";
			this->HomeButton->Size = System::Drawing::Size(70, 55);
			this->HomeButton->TabIndex = 2;
			this->HomeButton->UseVisualStyleBackColor = false;
			this->HomeButton->Click += gcnew System::EventHandler(this, &GameWin::HomeButton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->BackColor = System::Drawing::Color::Red;
			this->ExitButton->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExitButton->Location = System::Drawing::Point(1224, 746);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(70, 55);
			this->ExitButton->TabIndex = 3;
			this->ExitButton->UseVisualStyleBackColor = false;
			this->ExitButton->Click += gcnew System::EventHandler(this, &GameWin::FormClosing);
			// 
			// GameWin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1894, 1009);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->HomeButton);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Name = L"GameWin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GameWin";
			this->Load += gcnew System::EventHandler(this, &GameWin::GameWin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GameWin_Load(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = userid;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void HomeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		/*this->Hide();
		Main^ f2 = gcnew Main();
		f2->ShowDialog();*/
		//this->Visible = false;             // 추가
		//Main^ showForm = gcnew Main();
		//showForm->ShowDialog();
		this->Hide();
		ActiveForm;
	}
	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void FormClosing(System::Object^ sender, System::EventArgs^ e)
	{
		Close();
	}
};
}
