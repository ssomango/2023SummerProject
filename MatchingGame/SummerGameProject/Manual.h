#pragma once
#include <iostream>
#include <vcclr.h>

namespace SummerGameProject {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Manual�� ���� ����Դϴ�.
	/// </summary>
	
	public ref class Manual : public System::Windows::Forms::Form
	{
	public:

		Manual(void)
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
		~Manual()
		{
			if (components)
			{
				delete components;
			}
		}
	public:
		
	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Manual::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(822, 288);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 24);
			this->label1->TabIndex = 0;
			/*this->label1->Text = userid;*/
			this->label1->Click += gcnew System::EventHandler(this, &Manual::label1_Click);
			// 
			// Manual
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1716, 793);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Name = L"Manual";
			this->Text = L"Manual";
			this->Load += gcnew System::EventHandler(this, &Manual::Manual_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void Manual_Load(System::Object^ sender, System::EventArgs^ e) {

		}
		private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

		}
	};
}
