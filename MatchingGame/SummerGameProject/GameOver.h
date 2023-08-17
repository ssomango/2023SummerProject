#pragma once

namespace SummerGameProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// GameOver에 대한 요약입니다.
	/// </summary>
	public ref class GameOver : public System::Windows::Forms::Form
	{
	public:
		GameOver(void)
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
		~GameOver()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ExitButton;
	protected:
	private: System::Windows::Forms::Button^ HomeButton;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameOver::typeid));
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->HomeButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ExitButton
			// 
			this->ExitButton->BackColor = System::Drawing::Color::Red;
			this->ExitButton->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExitButton->Location = System::Drawing::Point(1118, 512);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(106, 66);
			this->ExitButton->TabIndex = 5;
			this->ExitButton->UseVisualStyleBackColor = false;
			this->ExitButton->Click += gcnew System::EventHandler(this, &GameOver::FormClosing);
			// 
			// HomeButton
			// 
			this->HomeButton->BackColor = System::Drawing::Color::Red;
			this->HomeButton->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->HomeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->HomeButton->Location = System::Drawing::Point(680, 515);
			this->HomeButton->Name = L"HomeButton";
			this->HomeButton->Size = System::Drawing::Size(90, 61);
			this->HomeButton->TabIndex = 4;
			this->HomeButton->UseVisualStyleBackColor = false;
			this->HomeButton->Click += gcnew System::EventHandler(this, &GameOver::HomeButton_Click);
			// 
			// GameOver
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1894, 1009);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->HomeButton);
			this->DoubleBuffered = true;
			this->Name = L"GameOver";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GameOver";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void FormClosing(System::Object^ sender, System::EventArgs^ e)
	{
		Close();
	}

	private: System::Void HomeButton_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}
