//#pragma once
//#include "GameWin.h"
//#include <iostream>
//#include <vcclr.h>
//
//namespace SummerGameProject {
//
//	using namespace System;
//	using namespace System::ComponentModel;
//	using namespace System::Collections;
//	using namespace System::Windows::Forms;
//	using namespace System::Data;
//	using namespace System::Drawing;
//
//
//	/// <summary>
//	/// Game에 대한 요약입니다.
//	/// </summary>
//	public ref class Game : public System::Windows::Forms::Form
//	{
//	public:
//		Game(void)
//		{
//			InitializeComponent();
//			//
//			//TODO: 생성자 코드를 여기에 추가합니다.
//			//
//		}
//		int hours = 0;
//		int minutes = 0;
//	
//
//	private: System::Windows::Forms::Timer^ StopWatch;
//	private: System::Windows::Forms::Label^ label1;
//	private: System::Windows::Forms::Label^ label2;
//	private: System::Windows::Forms::Button^ card1;
//	private: System::Windows::Forms::Button^ card2;
//	private: System::Windows::Forms::Button^ card3;
//	private: System::Windows::Forms::Button^ card4;
//	private: System::Windows::Forms::Button^ gonext;
//	public:
//		int seconds = 0;
//	protected:
//		/// <summary>
//		/// 사용 중인 모든 리소스를 정리합니다.
//		/// </summary>
//		~Game()
//		{
//			if (components)
//			{
//				delete components;
//			}
//		}
//	private: System::Windows::Forms::Button^ button1;
//	private: System::Windows::Forms::Timer^ timer1;
//	private: System::ComponentModel::IContainer^ components;
//	protected:
//
//	private:
//		/// <summary>
//		/// 필수 디자이너 변수입니다.
//		/// </summary>
//		//타이머 관련 함수
//		void IncreaseSecond() {
//			if (seconds > 59) {
//				seconds = 0;
//				IncreaseMinutes();
//			}
//			else {
//				seconds++;
//			}
//		}
//		void IncreaseMinutes() {
//				minutes++;
//		}
//		void Showtime() {
//			label1->Text = minutes.ToString("00");
//			label2->Text = seconds.ToString("00");
//		}
//
//#pragma region Windows Form Designer generated code
//		/// <summary>
//		/// 디자이너 지원에 필요한 메서드입니다. 
//		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
//		/// </summary>
//		void InitializeComponent(void)
//		{
//			this->components = (gcnew System::ComponentModel::Container());
//			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
//			this->button1 = (gcnew System::Windows::Forms::Button());
//			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
//			this->StopWatch = (gcnew System::Windows::Forms::Timer(this->components));
//			this->label1 = (gcnew System::Windows::Forms::Label());
//			this->label2 = (gcnew System::Windows::Forms::Label());
//			this->card1 = (gcnew System::Windows::Forms::Button());
//			this->card2 = (gcnew System::Windows::Forms::Button());
//			this->card3 = (gcnew System::Windows::Forms::Button());
//			this->card4 = (gcnew System::Windows::Forms::Button());
//			this->gonext = (gcnew System::Windows::Forms::Button());
//			this->SuspendLayout();
//			// 
//			// button1
//			// 
//			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
//			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
//			this->button1->Location = System::Drawing::Point(804, 466);
//			this->button1->Name = L"button1";
//			this->button1->Size = System::Drawing::Size(340, 94);
//			this->button1->TabIndex = 0;
//			this->button1->UseVisualStyleBackColor = true;
//			this->button1->Click += gcnew System::EventHandler(this, &Game::button1_Click);
//			// 
//			// timer1
//			// 
//			this->timer1->Tick += gcnew System::EventHandler(this, &Game::timer1_Tick);
//			// 
//			// StopWatch
//			// 
//			this->StopWatch->Tick += gcnew System::EventHandler(this, &Game::StopWatch_Tick);
//			// 
//			// label1
//			// 
//			this->label1->AutoSize = true;
//			this->label1->Location = System::Drawing::Point(305, 54);
//			this->label1->Name = L"label1";
//			this->label1->Size = System::Drawing::Size(36, 24);
//			this->label1->TabIndex = 1;
//			this->label1->Text = L"00";
//			// 
//			// label2
//			// 
//			this->label2->AutoSize = true;
//			this->label2->Location = System::Drawing::Point(397, 54);
//			this->label2->Name = L"label2";
//			this->label2->Size = System::Drawing::Size(36, 24);
//			this->label2->TabIndex = 2;
//			this->label2->Text = L"00";
//			// 
//			// card1
//			// 
//			this->card1->Location = System::Drawing::Point(65, 130);
//			this->card1->Name = L"card1";
//			this->card1->Size = System::Drawing::Size(176, 245);
//			this->card1->TabIndex = 3;
//			this->card1->Text = L"card1";
//			this->card1->UseVisualStyleBackColor = true;
//			this->card1->Click += gcnew System::EventHandler(this, &Game::card1_Click);
//			// 
//			// card2
//			// 
//			this->card2->Location = System::Drawing::Point(257, 130);
//			this->card2->Name = L"card2";
//			this->card2->Size = System::Drawing::Size(176, 245);
//			this->card2->TabIndex = 4;
//			this->card2->Text = L"card2";
//			this->card2->UseVisualStyleBackColor = true;
//			this->card2->Click += gcnew System::EventHandler(this, &Game::card2_Click);
//			// 
//			// card3
//			// 
//			this->card3->Location = System::Drawing::Point(450, 130);
//			this->card3->Name = L"card3";
//			this->card3->Size = System::Drawing::Size(176, 245);
//			this->card3->TabIndex = 5;
//			this->card3->Text = L"card3";
//			this->card3->UseVisualStyleBackColor = true;
//			this->card3->Click += gcnew System::EventHandler(this, &Game::card3_Click);
//			// 
//			// card4
//			// 
//			this->card4->Location = System::Drawing::Point(643, 130);
//			this->card4->Name = L"card4";
//			this->card4->Size = System::Drawing::Size(176, 245);
//			this->card4->TabIndex = 6;
//			this->card4->Text = L"card4";
//			this->card4->UseVisualStyleBackColor = true;
//			this->card4->Click += gcnew System::EventHandler(this, &Game::card4_Click);
//			// 
//			// gonext
//			// 
//			this->gonext->Location = System::Drawing::Point(1639, 34);
//			this->gonext->Name = L"gonext";
//			this->gonext->Size = System::Drawing::Size(157, 69);
//			this->gonext->TabIndex = 7;
//			this->gonext->Text = L"button2";
//			this->gonext->UseVisualStyleBackColor = true;
//			this->gonext->Click += gcnew System::EventHandler(this, &Game::gonext_Click);
//			// 
//			// Game
//			// 
//			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
//			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
//			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
//			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
//			this->ClientSize = System::Drawing::Size(1894, 1009);
//			this->Controls->Add(this->gonext);
//			this->Controls->Add(this->card4);
//			this->Controls->Add(this->card3);
//			this->Controls->Add(this->card2);
//			this->Controls->Add(this->card1);
//			this->Controls->Add(this->label2);
//			this->Controls->Add(this->label1);
//			this->Controls->Add(this->button1);
//			this->DoubleBuffered = true;
//			this->Name = L"Game";
//			this->Text = L"Game";
//			this->Load += gcnew System::EventHandler(this, &Game::Game_Load);
//			this->ResumeLayout(false);
//			this->PerformLayout();
//
//		}
//#pragma endregion
//	
//
//	private: System::Void Game_Load(System::Object^ sender, System::EventArgs^ e) {
//	}
//	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
//		button1->Visible = false;
//		// 타이머 스타트 기능
//		timer1->Enabled = true;
//		timer1->Interval = 1000; // ???
//		//타이머 tick 이벤트
//		timer1->Tick += gcnew System::EventHandler(this, &Game::StopWatch_Tick);
//	}
//	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
//	}
//	private: System::Void StopWatch_Tick(System::Object^ sender, System::EventArgs^ e) {
//		Showtime();
//		IncreaseSecond();
//	}
//	private: System::Void card1_Click(System::Object^ sender, System::EventArgs^ e) {
//
//	}
//	private: System::Void card2_Click(System::Object^ sender, System::EventArgs^ e) {
//
//	}
//	private: System::Void card3_Click(System::Object^ sender, System::EventArgs^ e) {
//
//	}
//	private: System::Void card4_Click(System::Object^ sender, System::EventArgs^ e) {
//
//	}
//		   // 임시 화면 전환
//	private: System::Void gonext_Click(System::Object^ sender, System::EventArgs^ e) {
//		this->Hide();
//		GameWin^ f2 = gcnew GameWin();
//		f2->ShowDialog();
//	}
//};
//}

#pragma once
#include "GameWin.h"

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

    private:
        array<int>^ card_num;
        int hours = 0;
        int minutes = 0;
    private: System::Windows::Forms::Button^ gonext;
           int click = 0;
    public:
        Game(void)
        {
            InitializeComponent();
            //
            //TODO: 생성자 코드를 여기에 추가합니다.
            //
            card_num = gcnew array<int>(18) { 0 };





        }
        void check(int a) {
            if ((a != 17) && (a != 0)) {
                for (int i = 0; i < 18; i++) {
                    if (card_num[a] + card_num[i] == 17) {
                        this->Controls["card" + a]->BackgroundImage = nullptr;
                        this->Controls["card" + i]->BackgroundImage = nullptr;
                    }
                }
            }
            else {
                if ((card_num[0] == 100) && (card_num[17] == 100)) {
                    this->Controls["card" + 0]->BackgroundImage = nullptr;
                    this->Controls["card" + 17]->BackgroundImage = nullptr;
                }

            }

            click++;
            if (click == 2) {          //카드 2개 선택하면 값 0으로 초기화 
                for (int k = 0; k < 18; k++) {
                    card_num[k] = 0;
                }
                click = 0;
            }
        }


    private: System::Windows::Forms::Timer^ StopWatch;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Button^ card0;
    private: System::Windows::Forms::Button^ card1;
    private: System::Windows::Forms::Button^ card2;
    private: System::Windows::Forms::Button^ card3;
    private: System::Windows::Forms::Button^ card4;
    private: System::Windows::Forms::Button^ card5;
    private: System::Windows::Forms::Button^ card6;
    private: System::Windows::Forms::Button^ card7;
    private: System::Windows::Forms::Button^ card8;
    private: System::Windows::Forms::Button^ card9;
    private: System::Windows::Forms::Button^ card10;
    private: System::Windows::Forms::Button^ card11;
    private: System::Windows::Forms::Button^ card12;
    private: System::Windows::Forms::Button^ card13;
    private: System::Windows::Forms::Button^ card14;
    private: System::Windows::Forms::Button^ card15;
    private: System::Windows::Forms::Button^ card16;
    private: System::Windows::Forms::Button^ card17;

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
            this->card0 = (gcnew System::Windows::Forms::Button());
            this->card1 = (gcnew System::Windows::Forms::Button());
            this->card2 = (gcnew System::Windows::Forms::Button());
            this->card3 = (gcnew System::Windows::Forms::Button());
            this->card4 = (gcnew System::Windows::Forms::Button());
            this->card5 = (gcnew System::Windows::Forms::Button());
            this->card6 = (gcnew System::Windows::Forms::Button());
            this->card7 = (gcnew System::Windows::Forms::Button());
            this->card8 = (gcnew System::Windows::Forms::Button());
            this->card9 = (gcnew System::Windows::Forms::Button());
            this->card10 = (gcnew System::Windows::Forms::Button());
            this->card11 = (gcnew System::Windows::Forms::Button());
            this->card12 = (gcnew System::Windows::Forms::Button());
            this->card13 = (gcnew System::Windows::Forms::Button());
            this->card14 = (gcnew System::Windows::Forms::Button());
            this->card15 = (gcnew System::Windows::Forms::Button());
            this->card16 = (gcnew System::Windows::Forms::Button());
            this->card17 = (gcnew System::Windows::Forms::Button());
            this->gonext = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Location = System::Drawing::Point(878, 20);
            this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(340, 94);
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
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(0, 24);
            this->label1->TabIndex = 1;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(397, 54);
            this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(0, 24);
            this->label2->TabIndex = 2;
            // 
            // card0
            // 
            this->card0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->card0->Location = System::Drawing::Point(490, 134);
            this->card0->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
            this->card0->Name = L"card0";
            this->card0->Size = System::Drawing::Size(163, 220);
            this->card0->TabIndex = 3;
            this->card0->Text = L"card0";
            this->card0->UseVisualStyleBackColor = true;
            this->card0->Click += gcnew System::EventHandler(this, &Game::card0_Click);
            // 
            // card1
            // 
            this->card1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->card1->Location = System::Drawing::Point(1313, 394);
            this->card1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
            this->card1->Name = L"card1";
            this->card1->Size = System::Drawing::Size(163, 220);
            this->card1->TabIndex = 4;
            this->card1->Text = L"card1";
            this->card1->UseVisualStyleBackColor = true;
            this->card1->Click += gcnew System::EventHandler(this, &Game::card1_Click);
            // 
            // card2
            // 
            this->card2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->card2->Location = System::Drawing::Point(1042, 394);
            this->card2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
            this->card2->Name = L"card2";
            this->card2->Size = System::Drawing::Size(163, 220);
            this->card2->TabIndex = 5;
            this->card2->Text = L"card2";
            this->card2->UseVisualStyleBackColor = true;
            this->card2->Click += gcnew System::EventHandler(this, &Game::card2_Click);
            // 
            // card3
            // 
            this->card3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->card3->Location = System::Drawing::Point(1588, 394);
            this->card3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
            this->card3->Name = L"card3";
            this->card3->Size = System::Drawing::Size(163, 220);
            this->card3->TabIndex = 6;
            this->card3->Text = L"card3";
            this->card3->UseVisualStyleBackColor = true;
            this->card3->Click += gcnew System::EventHandler(this, &Game::card3_Click);
            // 
            // card4
            // 
            this->card4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->card4->Location = System::Drawing::Point(1313, 656);
            this->card4->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
            this->card4->Name = L"card4";
            this->card4->Size = System::Drawing::Size(163, 220);
            this->card4->TabIndex = 7;
            this->card4->Text = L"card4";
            this->card4->UseVisualStyleBackColor = true;
            this->card4->Click += gcnew System::EventHandler(this, &Game::card4_Click);
            // 
            // card5
            // 
            this->card5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->card5->Location = System::Drawing::Point(761, 394);
            this->card5->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
            this->card5->Name = L"card5";
            this->card5->Size = System::Drawing::Size(163, 220);
            this->card5->TabIndex = 8;
            this->card5->Text = L"card5";
            this->card5->UseVisualStyleBackColor = true;
            this->card5->Click += gcnew System::EventHandler(this, &Game::card5_Click);
            // 
            // card6
            // 
            this->card6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->card6->Location = System::Drawing::Point(1588, 134);
            this->card6->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
            this->card6->Name = L"card6";
            this->card6->Size = System::Drawing::Size(163, 220);
            this->card6->TabIndex = 9;
            this->card6->Text = L"card6";
            this->card6->UseVisualStyleBackColor = true;
            this->card6->Click += gcnew System::EventHandler(this, &Game::card6_Click);
            // 
            // card7
            // 
            this->card7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->card7->Location = System::Drawing::Point(490, 394);
            this->card7->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
            this->card7->Name = L"card7";
            this->card7->Size = System::Drawing::Size(163, 220);
            this->card7->TabIndex = 10;
            this->card7->Text = L"card7";
            this->card7->UseVisualStyleBackColor = true;
            this->card7->Click += gcnew System::EventHandler(this, &Game::card7_Click);
            // 
            // card8
            // 
            this->card8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->card8->Location = System::Drawing::Point(219, 394);
            this->card8->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
            this->card8->Name = L"card8";
            this->card8->Size = System::Drawing::Size(163, 220);
            this->card8->TabIndex = 11;
            this->card8->Text = L"card8";
            this->card8->UseVisualStyleBackColor = true;
            this->card8->Click += gcnew System::EventHandler(this, &Game::card8_Click);
            // 
            // card9
            // 
            this->card9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->card9->Location = System::Drawing::Point(1042, 656);
            this->card9->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
            this->card9->Name = L"card9";
            this->card9->Size = System::Drawing::Size(163, 220);
            this->card9->TabIndex = 12;
            this->card9->Text = L"card9";
            this->card9->UseVisualStyleBackColor = true;
            this->card9->Click += gcnew System::EventHandler(this, &Game::card9_Click);
            // 
            // card10
            // 
            this->card10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->card10->Location = System::Drawing::Point(1313, 134);
            this->card10->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
            this->card10->Name = L"card10";
            this->card10->Size = System::Drawing::Size(163, 220);
            this->card10->TabIndex = 13;
            this->card10->Text = L"card10";
            this->card10->UseVisualStyleBackColor = true;
            this->card10->Click += gcnew System::EventHandler(this, &Game::card10_Click);
            // 
            // card11
            // 
            this->card11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->card11->Location = System::Drawing::Point(761, 656);
            this->card11->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
            this->card11->Name = L"card11";
            this->card11->Size = System::Drawing::Size(163, 220);
            this->card11->TabIndex = 14;
            this->card11->Text = L"card11";
            this->card11->UseVisualStyleBackColor = true;
            this->card11->Click += gcnew System::EventHandler(this, &Game::card11_Click);
            // 
            // card12
            // 
            this->card12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->card12->Location = System::Drawing::Point(1042, 134);
            this->card12->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
            this->card12->Name = L"card12";
            this->card12->Size = System::Drawing::Size(163, 220);
            this->card12->TabIndex = 15;
            this->card12->Text = L"card12";
            this->card12->UseVisualStyleBackColor = true;
            this->card12->Click += gcnew System::EventHandler(this, &Game::card12_Click);
            // 
            // card13
            // 
            this->card13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->card13->Location = System::Drawing::Point(761, 134);
            this->card13->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
            this->card13->Name = L"card13";
            this->card13->Size = System::Drawing::Size(163, 220);
            this->card13->TabIndex = 16;
            this->card13->Text = L"card13";
            this->card13->UseVisualStyleBackColor = true;
            this->card13->Click += gcnew System::EventHandler(this, &Game::card13_Click);
            // 
            // card14
            // 
            this->card14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->card14->Location = System::Drawing::Point(219, 656);
            this->card14->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
            this->card14->Name = L"card14";
            this->card14->Size = System::Drawing::Size(163, 220);
            this->card14->TabIndex = 17;
            this->card14->Text = L"card14";
            this->card14->UseVisualStyleBackColor = true;
            this->card14->Click += gcnew System::EventHandler(this, &Game::card14_Click);
            // 
            // card15
            // 
            this->card15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->card15->Location = System::Drawing::Point(490, 656);
            this->card15->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
            this->card15->Name = L"card15";
            this->card15->Size = System::Drawing::Size(163, 220);
            this->card15->TabIndex = 18;
            this->card15->Text = L"card15";
            this->card15->UseVisualStyleBackColor = true;
            this->card15->Click += gcnew System::EventHandler(this, &Game::card15_Click);
            // 
            // card16
            // 
            this->card16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->card16->Location = System::Drawing::Point(219, 134);
            this->card16->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
            this->card16->Name = L"card16";
            this->card16->Size = System::Drawing::Size(163, 220);
            this->card16->TabIndex = 19;
            this->card16->Text = L"card16";
            this->card16->UseVisualStyleBackColor = true;
            this->card16->Click += gcnew System::EventHandler(this, &Game::card16_Click);
            // 
            // card17
            // 
            this->card17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->card17->Location = System::Drawing::Point(1588, 656);
            this->card17->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
            this->card17->Name = L"card17";
            this->card17->Size = System::Drawing::Size(163, 220);
            this->card17->TabIndex = 20;
            this->card17->Text = L"card17";
            this->card17->UseVisualStyleBackColor = true;
            this->card17->Click += gcnew System::EventHandler(this, &Game::card17_Click);
            // 
            // gonext
            // 
            this->gonext->Location = System::Drawing::Point(1637, 38);
            this->gonext->Name = L"gonext";
            this->gonext->Size = System::Drawing::Size(218, 39);
            this->gonext->TabIndex = 21;
            this->gonext->Text = L"button2";
            this->gonext->UseVisualStyleBackColor = true;
            this->gonext->Click += gcnew System::EventHandler(this, &Game::gonext_Click);
            // 
            // Game
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1894, 1008);
            this->Controls->Add(this->gonext);
            this->Controls->Add(this->card17);
            this->Controls->Add(this->card16);
            this->Controls->Add(this->card15);
            this->Controls->Add(this->card14);
            this->Controls->Add(this->card13);
            this->Controls->Add(this->card12);
            this->Controls->Add(this->card11);
            this->Controls->Add(this->card10);
            this->Controls->Add(this->card9);
            this->Controls->Add(this->card8);
            this->Controls->Add(this->card7);
            this->Controls->Add(this->card6);
            this->Controls->Add(this->card5);
            this->Controls->Add(this->card4);
            this->Controls->Add(this->card3);
            this->Controls->Add(this->card2);
            this->Controls->Add(this->card1);
            this->Controls->Add(this->card0);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->button1);
            this->DoubleBuffered = true;
            this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->Name = L"Game";
            this->Text = L"Game";
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

    private: System::Void card0_Click(System::Object^ sender, System::EventArgs^ e) {
        card_num[0] = 100;
        check(0);
    }
    private: System::Void card1_Click(System::Object^ sender, System::EventArgs^ e) {
        card_num[1] = 1;
        check(1);
    }
    private: System::Void card2_Click(System::Object^ sender, System::EventArgs^ e) {
        card_num[2] = 2;
        check(2);
    }
    private: System::Void card3_Click(System::Object^ sender, System::EventArgs^ e) {
        card_num[3] = 3;
        check(3);
    }
    private: System::Void card4_Click(System::Object^ sender, System::EventArgs^ e) {
        card_num[4] = 4;
        check(4);
    }
    private: System::Void card5_Click(System::Object^ sender, System::EventArgs^ e) {
        card_num[5] = 5;
        check(5);
    }
    private: System::Void card6_Click(System::Object^ sender, System::EventArgs^ e) {
        card_num[6] = 6;
        check(6);
    }
    private: System::Void card7_Click(System::Object^ sender, System::EventArgs^ e) {
        card_num[7] = 7;
        check(7);
    }
    private: System::Void card8_Click(System::Object^ sender, System::EventArgs^ e) {
        card_num[8] = 8;
        check(8);
    }
    private: System::Void card9_Click(System::Object^ sender, System::EventArgs^ e) {
        card_num[9] = 9;
        check(9);
    }
    private: System::Void card10_Click(System::Object^ sender, System::EventArgs^ e) {
        card_num[10] = 10;
        check(10);
    }
    private: System::Void card11_Click(System::Object^ sender, System::EventArgs^ e) {
        card_num[11] = 11;
        check(11);
    }
    private: System::Void card12_Click(System::Object^ sender, System::EventArgs^ e) {
        card_num[12] = 12;
        check(12);
    }
    private: System::Void card13_Click(System::Object^ sender, System::EventArgs^ e) {
        card_num[13] = 13;
        check(13);
    }
    private: System::Void card14_Click(System::Object^ sender, System::EventArgs^ e) {
        card_num[14] = 14;
        check(14);
    }
    private: System::Void card15_Click(System::Object^ sender, System::EventArgs^ e) {
        card_num[15] = 15;
        check(15);
    }
    private: System::Void card16_Click(System::Object^ sender, System::EventArgs^ e) {
        card_num[16] = 16;
        check(16);
    }
    private: System::Void card17_Click(System::Object^ sender, System::EventArgs^ e) {
        card_num[17] = 100;
        check(17);
    }
    private: System::Void gonext_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Hide();
        GameWin^ f2 = gcnew GameWin();
        f2->ShowDialog();
    }
};
    
}

