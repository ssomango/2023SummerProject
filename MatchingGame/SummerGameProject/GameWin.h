#pragma once

namespace SummerGameProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// GameWin�� ���� ����Դϴ�.
	/// </summary>
	public ref class GameWin : public System::Windows::Forms::Form
	{
	public:
		GameWin(void)
		{
			InitializeComponent();
			//
			//TODO: ������ �ڵ带 ���⿡ �߰��մϴ�.
			//
		}
	private: System::Windows::Forms::Label^ label1;
	public:
		static String^ userid;
	protected:
		/// <summary>
		/// ��� ���� ��� ���ҽ��� �����մϴ�.
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameWin::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(788, 456);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = userid;
			this->label1->Click += gcnew System::EventHandler(this, &GameWin::label1_Click);
			// 
			// GameWin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1894, 1009);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Name = L"GameWin";
			this->Text = L"GameWin";
			this->Load += gcnew System::EventHandler(this, &GameWin::GameWin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GameWin_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
