#pragma once

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
	/// Main�� ���� ����Դϴ�.
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
			//
			//TODO: ������ �ڵ带 ���⿡ �߰��մϴ�.
			//
		}

	protected:
		/// <summary>
		/// ��� ���� ��� ���ҽ��� �����մϴ�.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ StartButton;
	private: System::Windows::Forms::Button^ EXITButton;


	protected:



	private:
		/// <summary>
		/// �ʼ� �����̳� �����Դϴ�.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����̳� ������ �ʿ��� �޼����Դϴ�. 
		/// �� �޼����� ������ �ڵ� ������� �������� ������.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->EXITButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// StartButton
			// 
			this->StartButton->BackColor = System::Drawing::Color::Red;
			this->StartButton->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->StartButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->StartButton->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->StartButton->Location = System::Drawing::Point(189, 681);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(93, 64);
			this->StartButton->TabIndex = 0;
			this->StartButton->UseVisualStyleBackColor = false;
			this->StartButton->Click += gcnew System::EventHandler(this, &Main::StartButton_Click);
			// 
			// EXITButton
			// 
			this->EXITButton->BackColor = System::Drawing::Color::Red;
			this->EXITButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->EXITButton->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->EXITButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EXITButton->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->EXITButton->ForeColor = System::Drawing::Color::Transparent;
			this->EXITButton->Location = System::Drawing::Point(1614, 681);
			this->EXITButton->Name = L"EXITButton";
			this->EXITButton->Size = System::Drawing::Size(88, 65);
			this->EXITButton->TabIndex = 2;
			this->EXITButton->UseVisualStyleBackColor = false;
			this->EXITButton->Click += gcnew System::EventHandler(this, &Main::EXITButton_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1894, 1009);
			this->Controls->Add(this->EXITButton);
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
	private: System::Void EXITButton_Click(System::Object^ sender, System::EventArgs^ e) {
		/*this->Hide();
		ETC^ f2 = gcnew ETC();
		f2->ShowDialog();*/
	}
	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
