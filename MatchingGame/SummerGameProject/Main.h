#pragma once
#include "ETC.h"
#include "Login.h"
#include "Manual.h"

namespace SummerGameProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Main에 대한 요약입니다.
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ StartButton;
	private: System::Windows::Forms::Button^ ManualButton;
	private: System::Windows::Forms::Button^ ETCButton;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->ManualButton = (gcnew System::Windows::Forms::Button());
			this->ETCButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// StartButton
			// 
			this->StartButton->Location = System::Drawing::Point(1315, 219);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(73, 45);
			this->StartButton->TabIndex = 0;
			this->StartButton->UseVisualStyleBackColor = true;
			this->StartButton->Click += gcnew System::EventHandler(this, &Main::StartButton_Click);
			// 
			// ManualButton
			// 
			this->ManualButton->Location = System::Drawing::Point(1315, 364);
			this->ManualButton->Name = L"ManualButton";
			this->ManualButton->Size = System::Drawing::Size(73, 45);
			this->ManualButton->TabIndex = 1;
			this->ManualButton->UseVisualStyleBackColor = true;
			this->ManualButton->Click += gcnew System::EventHandler(this, &Main::ManualButton_Click);
			// 
			// ETCButton
			// 
			this->ETCButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ETCButton->Location = System::Drawing::Point(1315, 509);
			this->ETCButton->Name = L"ETCButton";
			this->ETCButton->Size = System::Drawing::Size(73, 45);
			this->ETCButton->TabIndex = 2;
			this->ETCButton->UseVisualStyleBackColor = true;
			this->ETCButton->Click += gcnew System::EventHandler(this, &Main::ETCButton_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1716, 793);
			this->Controls->Add(this->ETCButton);
			this->Controls->Add(this->ManualButton);
			this->Controls->Add(this->StartButton);
			this->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->DoubleBuffered = true;
			this->Name = L"Main";
			this->Text = L"Main";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void StartButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Login^ f2 = gcnew Login();
		f2->ShowDialog();
	}
	private: System::Void ManualButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Manual^ f2 = gcnew Manual();
		f2->ShowDialog();
	}
	private: System::Void ETCButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ETC^ f2 = gcnew ETC();
		f2->ShowDialog();
	}
	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
