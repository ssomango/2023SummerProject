#pragma once

namespace SummerGameProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Game에 대한 요약입니다.
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}
		int hours = 0;
		int minutes = 0;
	private: System::Windows::Forms::Timer^ StopWatch;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;

	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	public:
		int seconds = 0;
	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		//타이머 관련 함수
		void IncreaseSecond() {
			if (seconds > 59) {
				seconds = 0;
				IncreaseMinutes();
			}
			else {
				seconds++;
			}
		}
		void IncreaseMinutes() {
				minutes++;
		}
		void Showtime() {
			label1->Text = minutes.ToString("00");
			label2->Text = seconds.ToString("00");
		}

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->StopWatch = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(1046, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(339, 96);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Game::timer1_Tick);
			// 
			// StopWatch
			// 
			this->StopWatch->Tick += gcnew System::EventHandler(this, &Game::StopWatch_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(305, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 24);
			this->label1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(397, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 24);
			this->label2->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(73, 140);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 156);
			this->button2->TabIndex = 3;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Game::button2_Click);
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(764, 547);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 156);
			this->button3->TabIndex = 4;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(516, 547);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(150, 156);
			this->button4->TabIndex = 5;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(297, 547);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(150, 156);
			this->button5->TabIndex = 6;
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(764, 140);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(150, 156);
			this->button6->TabIndex = 7;
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(73, 547);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(150, 156);
			this->button7->TabIndex = 8;
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(516, 140);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(150, 156);
			this->button8->TabIndex = 9;
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(516, 350);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(150, 156);
			this->button9->TabIndex = 10;
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->Location = System::Drawing::Point(297, 140);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(150, 156);
			this->button10->TabIndex = 11;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Game::button10_Click);
			// 
			// button12
			// 
			this->button12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.Image")));
			this->button12->Location = System::Drawing::Point(73, 350);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(150, 156);
			this->button12->TabIndex = 13;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Game::button12_Click);
			// 
			// button13
			// 
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->Location = System::Drawing::Point(1000, 547);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(150, 156);
			this->button13->TabIndex = 14;
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.Image")));
			this->button14->Location = System::Drawing::Point(1000, 140);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(150, 156);
			this->button14->TabIndex = 15;
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.Image")));
			this->button15->Location = System::Drawing::Point(1235, 140);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(150, 156);
			this->button15->TabIndex = 16;
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.Image")));
			this->button16->Location = System::Drawing::Point(1235, 547);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(150, 156);
			this->button16->TabIndex = 17;
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Game::button16_Click);
			// 
			// button17
			// 
			this->button17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.Image")));
			this->button17->Location = System::Drawing::Point(1235, 350);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(150, 156);
			this->button17->TabIndex = 18;
			this->button17->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Game::button17_Click);
			// 
			// button18
			// 
			this->button18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.Image")));
			this->button18->Location = System::Drawing::Point(297, 350);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(150, 156);
			this->button18->TabIndex = 19;
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Game::button18_Click);
			// 
			// button19
			// 
			this->button19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.Image")));
			this->button19->Location = System::Drawing::Point(1000, 350);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(150, 156);
			this->button19->TabIndex = 20;
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.Image")));
			this->button20->Location = System::Drawing::Point(764, 350);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(150, 156);
			this->button20->TabIndex = 21;
			this->button20->UseVisualStyleBackColor = true;
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1470, 824);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"Game";
			this->Load += gcnew System::EventHandler(this, &Game::Game_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Game_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		button1->Visible = false;
		// 타이머 스타트 기능
		timer1->Enabled = true;
		timer1->Interval = 1000; // ???
		//타이머 tick 이벤트
		timer1->Tick += gcnew System::EventHandler(this, &Game::StopWatch_Tick);
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void StopWatch_Tick(System::Object^ sender, System::EventArgs^ e) {
		Showtime();
		IncreaseSecond();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
