﻿#pragma once
#include <cstddef>
#include <cmath>
#include <corecrt_math_defines.h>

namespace Kalkulator1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			//
			//TODO: Add the constructor code here
			//

            InitializeComponent();
            this->btn0->Click += gcnew System::EventHandler(this, &Main::numberButton_Click);
            this->btn1->Click += gcnew System::EventHandler(this, &Main::numberButton_Click);
            this->btn2->Click += gcnew System::EventHandler(this, &Main::numberButton_Click);
            this->btn3->Click += gcnew System::EventHandler(this, &Main::numberButton_Click);
            this->btn4->Click += gcnew System::EventHandler(this, &Main::numberButton_Click);
            this->btn5->Click += gcnew System::EventHandler(this, &Main::numberButton_Click);
            this->btn6->Click += gcnew System::EventHandler(this, &Main::numberButton_Click);
            this->btn7->Click += gcnew System::EventHandler(this, &Main::numberButton_Click);
            this->btn8->Click += gcnew System::EventHandler(this, &Main::numberButton_Click);
            this->btn9->Click += gcnew System::EventHandler(this, &Main::numberButton_Click);


            // Menghubungkan event handler ke tombol operasi
            this->btnPlus->Click += gcnew System::EventHandler(this, &Main::operationButton_Click);
            this->btnMinus->Click += gcnew System::EventHandler(this, &Main::operationButton_Click);
            this->btnMultiply->Click += gcnew System::EventHandler(this, &Main::operationButton_Click);
            this->btnDivide->Click += gcnew System::EventHandler(this, &Main::operationButton_Click);


            // Menghubungkan event handler untuk tombol "=" dan "C"
            this->btnEqual->Click += gcnew System::EventHandler(this, &Main::equalButton_Click);
            this->btnClear->Click += gcnew System::EventHandler(this, &Main::clearButton_Click);

            // Menghubungkan event handler ke tombol-tombol Trigonometri
            this->SinBtn->Click += gcnew System::EventHandler(this, &Main::Trigonometri_Click);
            this->CosBtn->Click += gcnew System::EventHandler(this, &Main::Trigonometri_Click);
            this->TanBtn->Click += gcnew System::EventHandler(this, &Main::Trigonometri_Click);
            this->InversBtn->Click += gcnew System::EventHandler(this, &Main::Trigonometri_Click);

            // Menghubungkan event handler ke tombol "."
            this->PointButton->Click += gcnew System::EventHandler(this, &Main::Point_Click);

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}

    private:
        double firstnumber;
        double secondnumber;
        String^ operation;
        String^ firstchar;
        String^ trigonometri;
        String^ koma;

	private: System::Windows::Forms::Button^ btnClear;
	protected:
	private: System::Windows::Forms::Button^ btnEqual;
	private: System::Windows::Forms::Button^ btnDivide;
	private: System::Windows::Forms::Button^ btnMultiply;
	private: System::Windows::Forms::Button^ btnMinus;
	private: System::Windows::Forms::Button^ btnPlus;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::TextBox^ displayBox;
	private: System::Windows::Forms::Button^ SinBtn;
	private: System::Windows::Forms::Button^ CosBtn;
	private: System::Windows::Forms::Button^ TanBtn;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ InversBtn;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ PointButton;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;

	protected:


























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
            this->btnClear = (gcnew System::Windows::Forms::Button());
            this->btnEqual = (gcnew System::Windows::Forms::Button());
            this->btnDivide = (gcnew System::Windows::Forms::Button());
            this->btnMultiply = (gcnew System::Windows::Forms::Button());
            this->btnMinus = (gcnew System::Windows::Forms::Button());
            this->btnPlus = (gcnew System::Windows::Forms::Button());
            this->btn9 = (gcnew System::Windows::Forms::Button());
            this->btn8 = (gcnew System::Windows::Forms::Button());
            this->btn7 = (gcnew System::Windows::Forms::Button());
            this->btn6 = (gcnew System::Windows::Forms::Button());
            this->btn5 = (gcnew System::Windows::Forms::Button());
            this->btn4 = (gcnew System::Windows::Forms::Button());
            this->btn3 = (gcnew System::Windows::Forms::Button());
            this->btn2 = (gcnew System::Windows::Forms::Button());
            this->btn1 = (gcnew System::Windows::Forms::Button());
            this->btn0 = (gcnew System::Windows::Forms::Button());
            this->displayBox = (gcnew System::Windows::Forms::TextBox());
            this->SinBtn = (gcnew System::Windows::Forms::Button());
            this->CosBtn = (gcnew System::Windows::Forms::Button());
            this->TanBtn = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->InversBtn = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->PointButton = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->panel1->SuspendLayout();
            this->tableLayoutPanel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // btnClear
            // 
            this->btnClear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnClear->BackColor = System::Drawing::Color::RosyBrown;
            this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnClear->Location = System::Drawing::Point(278, 150);
            this->btnClear->Name = L"btnClear";
            this->btnClear->Size = System::Drawing::Size(52, 43);
            this->btnClear->TabIndex = 16;
            this->btnClear->Text = L"C";
            this->btnClear->UseVisualStyleBackColor = false;
            // 
            // btnEqual
            // 
            this->btnEqual->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnEqual->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnEqual->Location = System::Drawing::Point(113, 150);
            this->btnEqual->Name = L"btnEqual";
            this->btnEqual->Size = System::Drawing::Size(49, 43);
            this->btnEqual->TabIndex = 15;
            this->btnEqual->Text = L"=";
            // 
            // btnDivide
            // 
            this->btnDivide->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnDivide->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnDivide->Location = System::Drawing::Point(168, 150);
            this->btnDivide->Name = L"btnDivide";
            this->btnDivide->Size = System::Drawing::Size(49, 43);
            this->btnDivide->TabIndex = 14;
            this->btnDivide->Text = L"/";
            // 
            // btnMultiply
            // 
            this->btnMultiply->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnMultiply->Location = System::Drawing::Point(168, 101);
            this->btnMultiply->Name = L"btnMultiply";
            this->btnMultiply->Size = System::Drawing::Size(49, 43);
            this->btnMultiply->TabIndex = 13;
            this->btnMultiply->Text = L"*";
            // 
            // btnMinus
            // 
            this->btnMinus->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnMinus->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnMinus->Location = System::Drawing::Point(168, 52);
            this->btnMinus->Name = L"btnMinus";
            this->btnMinus->Size = System::Drawing::Size(49, 43);
            this->btnMinus->TabIndex = 12;
            this->btnMinus->Text = L"-";
            // 
            // btnPlus
            // 
            this->btnPlus->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnPlus->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnPlus->Location = System::Drawing::Point(168, 3);
            this->btnPlus->Name = L"btnPlus";
            this->btnPlus->Size = System::Drawing::Size(49, 43);
            this->btnPlus->TabIndex = 11;
            this->btnPlus->Text = L"+";
            // 
            // btn9
            // 
            this->btn9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn9->Location = System::Drawing::Point(113, 3);
            this->btn9->Name = L"btn9";
            this->btn9->Size = System::Drawing::Size(49, 43);
            this->btn9->TabIndex = 10;
            this->btn9->Text = L"9";
            // 
            // btn8
            // 
            this->btn8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn8->Location = System::Drawing::Point(58, 3);
            this->btn8->Name = L"btn8";
            this->btn8->Size = System::Drawing::Size(49, 43);
            this->btn8->TabIndex = 9;
            this->btn8->Text = L"8";
            // 
            // btn7
            // 
            this->btn7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn7->Location = System::Drawing::Point(3, 3);
            this->btn7->Name = L"btn7";
            this->btn7->Size = System::Drawing::Size(49, 43);
            this->btn7->TabIndex = 8;
            this->btn7->Text = L"7";
            // 
            // btn6
            // 
            this->btn6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn6->Location = System::Drawing::Point(113, 52);
            this->btn6->Name = L"btn6";
            this->btn6->Size = System::Drawing::Size(49, 43);
            this->btn6->TabIndex = 7;
            this->btn6->Text = L"6";
            // 
            // btn5
            // 
            this->btn5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn5->Location = System::Drawing::Point(58, 52);
            this->btn5->Name = L"btn5";
            this->btn5->Size = System::Drawing::Size(49, 43);
            this->btn5->TabIndex = 6;
            this->btn5->Text = L"5";
            // 
            // btn4
            // 
            this->btn4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn4->Location = System::Drawing::Point(3, 52);
            this->btn4->Name = L"btn4";
            this->btn4->Size = System::Drawing::Size(49, 43);
            this->btn4->TabIndex = 5;
            this->btn4->Text = L"4";
            // 
            // btn3
            // 
            this->btn3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn3->Location = System::Drawing::Point(113, 101);
            this->btn3->Name = L"btn3";
            this->btn3->Size = System::Drawing::Size(49, 43);
            this->btn3->TabIndex = 4;
            this->btn3->Text = L"3";
            // 
            // btn2
            // 
            this->btn2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn2->Location = System::Drawing::Point(58, 101);
            this->btn2->Name = L"btn2";
            this->btn2->Size = System::Drawing::Size(49, 43);
            this->btn2->TabIndex = 3;
            this->btn2->Text = L"2";
            // 
            // btn1
            // 
            this->btn1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn1->Location = System::Drawing::Point(3, 101);
            this->btn1->Name = L"btn1";
            this->btn1->Size = System::Drawing::Size(49, 43);
            this->btn1->TabIndex = 2;
            this->btn1->Text = L"1";
            // 
            // btn0
            // 
            this->btn0->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn0->Location = System::Drawing::Point(3, 150);
            this->btn0->Name = L"btn0";
            this->btn0->Size = System::Drawing::Size(49, 43);
            this->btn0->TabIndex = 1;
            this->btn0->Text = L"0";
            // 
            // displayBox
            // 
            this->displayBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->displayBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->displayBox->Location = System::Drawing::Point(11, 55);
            this->displayBox->Name = L"displayBox";
            this->displayBox->ReadOnly = true;
            this->displayBox->Size = System::Drawing::Size(333, 29);
            this->displayBox->TabIndex = 0;
            this->displayBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // SinBtn
            // 
            this->SinBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SinBtn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->SinBtn->Location = System::Drawing::Point(223, 3);
            this->SinBtn->Name = L"SinBtn";
            this->SinBtn->Size = System::Drawing::Size(49, 43);
            this->SinBtn->TabIndex = 17;
            this->SinBtn->Text = L"Sin";
            // 
            // CosBtn
            // 
            this->CosBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->CosBtn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->CosBtn->Location = System::Drawing::Point(223, 52);
            this->CosBtn->Name = L"CosBtn";
            this->CosBtn->Size = System::Drawing::Size(49, 43);
            this->CosBtn->TabIndex = 18;
            this->CosBtn->Text = L"Cos";
            // 
            // TanBtn
            // 
            this->TanBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->TanBtn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TanBtn->Location = System::Drawing::Point(223, 101);
            this->TanBtn->Name = L"TanBtn";
            this->TanBtn->Size = System::Drawing::Size(49, 43);
            this->TanBtn->TabIndex = 19;
            this->TanBtn->Text = L"Tan";
            // 
            // button4
            // 
            this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->Location = System::Drawing::Point(223, 150);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(49, 43);
            this->button4->TabIndex = 20;
            this->button4->Text = L"√";
            // 
            // InversBtn
            // 
            this->InversBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->InversBtn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->InversBtn->Location = System::Drawing::Point(278, 3);
            this->InversBtn->Name = L"InversBtn";
            this->InversBtn->Size = System::Drawing::Size(52, 43);
            this->InversBtn->TabIndex = 21;
            this->InversBtn->Text = L"Inv";
            // 
            // button6
            // 
            this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->Location = System::Drawing::Point(278, 52);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(52, 43);
            this->button6->TabIndex = 22;
            this->button6->Text = L"Log";
            // 
            // button7
            // 
            this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button7->Location = System::Drawing::Point(278, 101);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(52, 43);
            this->button7->TabIndex = 23;
            this->button7->Text = L"^";
            // 
            // PointButton
            // 
            this->PointButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->PointButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->PointButton->Location = System::Drawing::Point(58, 150);
            this->PointButton->Name = L"PointButton";
            this->PointButton->Size = System::Drawing::Size(49, 43);
            this->PointButton->TabIndex = 24;
            this->PointButton->Text = L",";
            // 
            // panel1
            // 
            this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->panel1->BackColor = System::Drawing::SystemColors::ButtonFace;
            this->panel1->Controls->Add(this->tableLayoutPanel1);
            this->panel1->Controls->Add(this->displayBox);
            this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel1->Location = System::Drawing::Point(1, -1);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(359, 442);
            this->panel1->TabIndex = 18;
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel1->ColumnCount = 6;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                16.66667F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                16.66667F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                16.66667F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                16.66667F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                16.66667F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                16.66667F)));
            this->tableLayoutPanel1->Controls->Add(this->InversBtn, 5, 0);
            this->tableLayoutPanel1->Controls->Add(this->PointButton, 1, 3);
            this->tableLayoutPanel1->Controls->Add(this->btn0, 0, 3);
            this->tableLayoutPanel1->Controls->Add(this->button6, 5, 1);
            this->tableLayoutPanel1->Controls->Add(this->btn1, 0, 2);
            this->tableLayoutPanel1->Controls->Add(this->button7, 5, 2);
            this->tableLayoutPanel1->Controls->Add(this->btn4, 0, 1);
            this->tableLayoutPanel1->Controls->Add(this->TanBtn, 4, 2);
            this->tableLayoutPanel1->Controls->Add(this->btn7, 0, 0);
            this->tableLayoutPanel1->Controls->Add(this->btnClear, 5, 3);
            this->tableLayoutPanel1->Controls->Add(this->btn2, 1, 2);
            this->tableLayoutPanel1->Controls->Add(this->CosBtn, 4, 1);
            this->tableLayoutPanel1->Controls->Add(this->btn3, 2, 2);
            this->tableLayoutPanel1->Controls->Add(this->btn5, 1, 1);
            this->tableLayoutPanel1->Controls->Add(this->SinBtn, 4, 0);
            this->tableLayoutPanel1->Controls->Add(this->button4, 4, 3);
            this->tableLayoutPanel1->Controls->Add(this->btn8, 1, 0);
            this->tableLayoutPanel1->Controls->Add(this->btnPlus, 3, 0);
            this->tableLayoutPanel1->Controls->Add(this->btnEqual, 2, 3);
            this->tableLayoutPanel1->Controls->Add(this->btn6, 2, 1);
            this->tableLayoutPanel1->Controls->Add(this->btnMinus, 3, 1);
            this->tableLayoutPanel1->Controls->Add(this->btnMultiply, 3, 2);
            this->tableLayoutPanel1->Controls->Add(this->btnDivide, 3, 3);
            this->tableLayoutPanel1->Controls->Add(this->btn9, 2, 0);
            this->tableLayoutPanel1->Location = System::Drawing::Point(11, 130);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 4;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(333, 196);
            this->tableLayoutPanel1->TabIndex = 25;
            // 
            // Main
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(357, 439);
            this->Controls->Add(this->panel1);
            this->Name = L"Main";
            this->Text = L"Main";
            this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->tableLayoutPanel1->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion
	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}


    private: System::Void numberButton_Click(System::Object^ sender, System::EventArgs^ e) {
        Button^ button = safe_cast<Button^>(sender);
        if (displayBox->Text == "Error" || displayBox->Text == "Invalid Input" || displayBox->Text == "Input string was not in a correct format.")
        {
            displayBox->Text = "";
        }
        displayBox->Text += button->Text;   // Menambahkan angka ke displayBox
    }


private: System::Void operationButton_Click(System::Object^ sender, System::EventArgs^ e) {
    Button^ button = safe_cast<Button^>(sender);
    if (displayBox->Text == "Error" || displayBox->Text == "Invalid Input" || displayBox->Text == "Input string was not in a correct format.")
    {
        displayBox->Text = "";
    }
    firstchar = displayBox->Text;
    operation = button->Text; // Simpan operasi
    displayBox->Text += " " + operation + " "; // Tampilkan operasi di displayBox
}

private: System::Void Trigonometri_Click(System::Object^ sender, System::EventArgs^ e) {
    if (displayBox->Text == "Error" || displayBox->Text == "Invalid Input" || displayBox->Text == "Input string was not in a correct format.")
    {
        displayBox->Text = "";
    }
    Button^ button = safe_cast<Button^>(sender);
    trigonometri = button->Text; // Simpan Trigonometri ke dalam variav
    displayBox->Text += trigonometri + " "; // Tampilkan operasi di displayBox

}
private: System::Void Point_Click(System::Object^ sender, System::EventArgs^ e) {
    if (displayBox->Text == "Error" || displayBox->Text == "Invalid Input" || displayBox->Text == "Input string was not in a correct format.")
    {
        displayBox->Text = "";
    }
    Button^ button = safe_cast<Button^>(sender);
    koma = button->Text; // Simpan Trigonometri ke dalam variav
    displayBox->Text += koma; // Tampilkan operasi di displayBox

}

private: System::Void equalButton_Click(System::Object^ sender, System::EventArgs^ e) {
    //Ambil dan pisahkan angka dan operasi dengan spasi (' ') dan menyimpannya sebagai array 
    array<String^>^ parts = displayBox->Text->Split(' ');
    bool apakahTrigonometri = false;
    bool logaritma = false;
    bool akar = false;
    bool pangkat = false;
    bool operasiBiasa = false;

    for each (String ^ bagian in parts) {
        if (bagian == "Sin" || bagian == "Cos" || bagian == "Tan" || bagian == "Inv") {
            apakahTrigonometri = true;
            break; // Tidak perlu lanjutkan jika sudah ditemukan
        }
        else if (bagian == "+" || bagian == "-" || bagian == "*" || bagian == "/") {
            operasiBiasa = true;
            break;
        }
    }

    if (apakahTrigonometri) {


        if (parts[0] == "Tan" || parts[0] == "Cos" || parts[0] == "Sin") {
            if (parts->Length == 2 && parts[1] != "") {

                double radian = Double::Parse(parts[1]) * M_PI / 180.0; //Rumus radian
                double hasil;

                if (parts[0] == "Sin") hasil = sin(radian);
                else if (parts[0] == "Cos") hasil = cos(radian);
                else if (parts[0] == "Tan") hasil = tan(radian);

                displayBox->Text = hasil.ToString();

                return;
            }
            else {
                displayBox->Text = "Invalid Input";
                return;
            }

        }
        else if (parts[0] == "Inv") {
            if (parts->Length == 3 && parts[2] != "")
            {
                double nilai = Double::Parse(parts[2]);
                double hasil;

                if (nilai >= -1.0 && nilai <= 1.0) {
                    if (parts[0] + parts[1] == "InvSin") hasil = asin(nilai);
                    else if (parts[0] + parts[1] == "InvCos") hasil = acos(nilai);
                    else if (parts[0] + parts[1] == "InvTan") hasil = atan(nilai);

                    double sudut = hasil * (180.0 / M_PI); //Rumus radian
                    displayBox->Text = sudut.ToString();

                    return;
                }
                else {
                    displayBox->Text = "Invalid Input";
                    return;
                }


            }
            else {
                displayBox->Text = "Invalid Input";
                return;
            }
        }

    }
    else if (operasiBiasa) {
        try
        {
            //jika angka kedua tidak ada
            if (parts->Length < 3 || String::IsNullOrWhiteSpace(parts[2])) {
                displayBox->Text = "Error";
                return;
            }

            //jika variabel yang di hitung lebih dari 2
            if (parts->Length > 3 && parts[0] != "") {

                double result = 0;
                int arrayLength = parts->Length;
                Generic::List<System::String^>^ parts2 = gcnew Generic::List<System::String^>();

                // Langkah 1: Proses perkalian (*) dan pembagian (/)
                for (size_t i = 0; i < arrayLength; i++) {
                    System::String^ part = parts[i];

                    if (part == "*") {
                        double kiri = Double::Parse(parts2[parts2->Count - 1]);
                        double kanan = Double::Parse(parts[++i]);
                        parts2[parts2->Count - 1] = (kiri * kanan).ToString();
                    }
                    else if (part == "/") {
                        double kiri = Double::Parse(parts2[parts2->Count - 1]);
                        double kanan = Double::Parse(parts[++i]);
                        parts2[parts2->Count - 1] = (kiri / kanan).ToString();
                    }
                    else {
                        parts2->Add(part);  // Tambahkan angka atau operator
                    }
                }

                // Langkah 2: Proses penjumlahan (+) dan pengurangann (-)
                result = Double::Parse(parts2[0]); /*mengabil angka pertama dari "parts2"*/
                for (size_t i = 1; i < parts2->Count; i += 2) {
                    System::String^ operation = parts2[i]; /*menyimpan operasi yang di iterasi kedala variabel*/
                    double kanan = Double::Parse(parts2[i + 1]);

                    if (operation == "+") {
                        result += kanan;
                    }
                    else if (operation == "-") {
                        result -= kanan;
                    }
                }

                // Tampilkan hasil di displayBox
                displayBox->Text = result.ToString();
                return;
            }
            //jika angka pertama dalam perhitungan adala - dan variabel nnya lebih dari 2
            else if (parts->Length > 5 && parts[1] == "-" && parts[0] == "") {
                double result = 0;
                int arrayLength = parts->Length;


                Generic::List<System::String^>^ parts2 = gcnew Generic::List<System::String^>();

                // Langkah 1: Proses perkalian (*) dan pembagian (/)
                for (size_t i = 1; i < arrayLength; i++) {
                    System::String^ part = parts[i];

                    if (part == "*") {
                        double kiri = Double::Parse(parts2[parts2->Count - 1]);
                        double kanan = Double::Parse(parts[++i]);
                        parts2[parts2->Count - 1] = (kiri * kanan).ToString();
                    }
                    else if (part == "/") {
                        double kiri = Double::Parse(parts2[parts2->Count - 1]);
                        double kanan = Double::Parse(parts[++i]);
                        parts2[parts2->Count - 1] = (kiri / kanan).ToString();
                    }
                    else {
                        parts2->Add(part);  // Tambahkan angka atau operator
                    }
                }

                // Langkah 2: Proses penjumlahan (+) dan pengurangan (-)

                result = Double::Parse(parts2[0] + parts2[1]);
                for (size_t i = 2; i < parts2->Count; i += 2) {
                    System::String^ operatorPart = parts2[i];
                    double kanan = Double::Parse(parts2[i + 1]);

                    if (operatorPart == "+") {
                        result += kanan;
                    }
                    else if (operatorPart == "-") {
                        result -= kanan;
                    }
                }

                // Tampilkan hasil di displayBox
                displayBox->Text = result.ToString();
                return;
            }



            if (parts[0] == "" && parts[1] == "-") {

                //untuk mendapatkan variabel pertama untuk di kalkulasi, jika angka pertama adalah minus
                parts[0] = parts[1] + parts[2];
                int arrayLength = parts->Length;
                if (arrayLength <= 3) {
                    displayBox->Text = parts[0];
                }
                else {
                    firstnumber = Double::Parse(parts[0]);
                    operation = parts[3];
                    secondnumber = Double::Parse(parts[4]);

                }


            }
            else if (parts[0] != "") {
                firstnumber = Double::Parse(parts[0]);
                operation = parts[1];
                secondnumber = Double::Parse(parts[2]);
            }
            else {
                displayBox->Text = "Error";
            }


            //error handling


            double result;
            if (operation == "+") {
                result = firstnumber + secondnumber;
            }
            else if (operation == "-") {
                result = firstnumber - secondnumber;
            }
            else if (operation == "*") {
                result = firstnumber * secondnumber;
            }
            else if (operation == "/") {
                if (secondnumber != 0) {
                    result = firstnumber / secondnumber;
                }
                else {
                    displayBox->Text = "Error";
                    return;
                }
            }

            displayBox->Text = result.ToString(); // Tampilkan hasil


        }
        catch (Exception^ ex)
        {
            displayBox->Text = ex->Message; // Tampilkan hasil
            return;
        }


    }
    else if (logaritma) {


    }
    else if (pangkat) {


    }
    else if (akar) {

    }

}









private: System::Void clearButton_Click(System::Object^ sender, System::EventArgs^ e) {
    displayBox->Clear(); // Bersihkan displayBox
    firstnumber = 0;
    secondnumber = 0;
    operation = "";
}



};


}
