#pragma once
#include <iostream>
#include <time.h>

namespace dots {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	bool m = true;
	int mas[4][4] = { 0 };
	int k = 16, z, f = 1, f1 = 0, i1 = 0, chet = 0, c = 0, a = 0;
	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;












	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ èãğàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íîâàÿÈãğàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ òàáëèöàĞåêîğäîâToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	protected:


	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->èãğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íîâàÿÈãğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òàáëèöàĞåêîğäîâToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(207, 153);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(52, 52);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(265, 153);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(52, 52);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(323, 153);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(52, 52);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(381, 153);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(52, 52);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(233, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 46);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Ïÿòíàøêè";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(207, 211);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(52, 52);
			this->pictureBox5->TabIndex = 17;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox5_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(265, 211);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(52, 52);
			this->pictureBox6->TabIndex = 18;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MyForm::pictureBox6_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(323, 211);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(52, 52);
			this->pictureBox7->TabIndex = 19;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(381, 211);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(52, 52);
			this->pictureBox8->TabIndex = 20;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &MyForm::pictureBox8_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Location = System::Drawing::Point(207, 269);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(52, 52);
			this->pictureBox9->TabIndex = 21;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &MyForm::pictureBox9_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->Location = System::Drawing::Point(265, 269);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(52, 52);
			this->pictureBox10->TabIndex = 22;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &MyForm::pictureBox10_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Location = System::Drawing::Point(323, 269);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(52, 52);
			this->pictureBox11->TabIndex = 23;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &MyForm::pictureBox11_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->Location = System::Drawing::Point(381, 269);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(52, 52);
			this->pictureBox12->TabIndex = 24;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &MyForm::pictureBox12_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->Location = System::Drawing::Point(207, 327);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(52, 52);
			this->pictureBox13->TabIndex = 25;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &MyForm::pictureBox13_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->Location = System::Drawing::Point(265, 327);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(52, 52);
			this->pictureBox14->TabIndex = 26;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &MyForm::pictureBox14_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->Location = System::Drawing::Point(323, 327);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(52, 52);
			this->pictureBox15->TabIndex = 27;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &MyForm::pictureBox15_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->Location = System::Drawing::Point(381, 327);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(52, 52);
			this->pictureBox16->TabIndex = 28;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &MyForm::pictureBox16_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->èãğàToolStripMenuItem,
					this->òàáëèöàĞåêîğäîâToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(658, 24);
			this->menuStrip1->TabIndex = 29;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// èãğàToolStripMenuItem
			// 
			this->èãğàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->íîâàÿÈãğàToolStripMenuItem,
					this->âûõîäToolStripMenuItem
			});
			this->èãğàToolStripMenuItem->Name = L"èãğàToolStripMenuItem";
			this->èãğàToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->èãğàToolStripMenuItem->Text = L"Èãğà";
			// 
			// íîâàÿÈãğàToolStripMenuItem
			// 
			this->íîâàÿÈãğàToolStripMenuItem->Name = L"íîâàÿÈãğàToolStripMenuItem";
			this->íîâàÿÈãğàToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->íîâàÿÈãğàToolStripMenuItem->Text = L"Íîâàÿ èãğà";
			this->íîâàÿÈãğàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::íîâàÿÈãğàToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem_Click);
			// 
			// òàáëèöàĞåêîğäîâToolStripMenuItem
			// 
			this->òàáëèöàĞåêîğäîâToolStripMenuItem->Name = L"òàáëèöàĞåêîğäîâToolStripMenuItem";
			this->òàáëèöàĞåêîğäîâToolStripMenuItem->Size = System::Drawing::Size(120, 20);
			this->òàáëèöàĞåêîğäîâToolStripMenuItem->Text = L"Òàáëèöà ğåêîğäîâ";
			this->òàáëèöàĞåêîğäîâToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::òàáëèöàĞåêîğäîâToolStripMenuItem_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(223, 403);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 46);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Ñ÷åò:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(335, 403);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 46);
			this->label3->TabIndex = 31;
			this->label3->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(164, 458);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 46);
			this->label4->TabIndex = 32;
			this->label4->Text = L"Íèê:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 25, System::Drawing::FontStyle::Bold));
			this->textBox1->Location = System::Drawing::Point(265, 458);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(284, 52);
			this->textBox1->TabIndex = 33;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 25, System::Drawing::FontStyle::Bold));
			this->richTextBox1->Location = System::Drawing::Point(13, 28);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(633, 501);
			this->richTextBox1->TabIndex = 34;
			this->richTextBox1->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LavenderBlush;
			this->ClientSize = System::Drawing::Size(658, 541);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"pyatnashki";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ str;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Visible = false;
		srand(time(0));
		for (int q = 0; q < 16; q++)
		{
			z = rand() % k + 1;
			f = 0;
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					if ((mas[i][j] == 0) && (f == 0))
					{
						i1++;
						mas[i][j] = z;
						this->Controls["picturebox" + Convert::ToString(i1)]->BackgroundImage = Image::FromFile(z + ".png");
						f = 1;
						break;
					}
					if (mas[i][j] == z)
					{
						f = 1; f1 = 1; break;
					}
				}
			}
			if (f1 == 1)
			{
				f1 = 0;
				q--;
			}
		}
	}

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (a == 0) {
			if (mas[1][0] == 16)
			{
				c = mas[0][0]; mas[0][0] = mas[1][0]; mas[1][0] = c;
				this->Controls["pictureBox" + Convert::ToString(1)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(5)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[0][1] == 16)
			{
				c = mas[0][0]; mas[0][0] = mas[0][1]; mas[0][1] = c;
				this->Controls["pictureBox" + Convert::ToString(1)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(2)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[0][0] == 1 && mas[0][1] == 2 && mas[0][2] == 3 && mas[0][3] == 4
				&& mas[1][0] == 5 && mas[1][1] == 6 && mas[1][2] == 7 && mas[1][3] == 8
				&& mas[2][0] == 9 && mas[2][1] == 10 && mas[2][2] == 11 && mas[2][3] == 12
				&& mas[3][0] == 13 && mas[3][1] == 14 && mas[3][2] == 15 && mas[3][3] == 16) a = 1;
			if (chet==10) {
				str = textBox1->Text+" " + Convert::ToString(chet);
				StreamWriter f1("records.txt", true);
				f1.WriteLine(str);
				f1.Close();
			}
		}
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (a == 0) {
			if (mas[0][0] == 16)
			{
				c = mas[0][1]; mas[0][1] = mas[0][0]; mas[0][0] = c;
				this->Controls["pictureBox" + Convert::ToString(2)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(1)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[0][2] == 16)
			{
				c = mas[0][1]; mas[0][1] = mas[0][2]; mas[0][2] = c;
				this->Controls["pictureBox" + Convert::ToString(2)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(3)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[1][1] == 16)
			{
				c = mas[0][1]; mas[0][1] = mas[1][1]; mas[1][1] = c;
				this->Controls["pictureBox" + Convert::ToString(2)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(6)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[0][0] == 1 && mas[0][1] == 2 && mas[0][2] == 3 && mas[0][3] == 4
				&& mas[1][0] == 5 && mas[1][1] == 6 && mas[1][2] == 7 && mas[1][3] == 8
				&& mas[2][0] == 9 && mas[2][1] == 10 && mas[2][2] == 11 && mas[2][3] == 12
				&& mas[3][0] == 13 && mas[3][1] == 14 && mas[3][2] == 15 && mas[3][3] == 16) a = 1;
			if (chet==10) {
				str = textBox1->Text + " " + Convert::ToString(chet);
				StreamWriter f1("records.txt", true);
				f1.WriteLine(str);
				f1.Close();
			}
		}
	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (a == 0) {
			if (mas[0][1] == 16)
			{
				c = mas[0][2]; mas[0][2] = mas[0][1]; mas[0][1] = c;
				this->Controls["pictureBox" + Convert::ToString(3)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(2)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[0][3] == 16)
			{
				c = mas[0][2]; mas[0][2] = mas[0][3]; mas[0][3] = c;
				this->Controls["pictureBox" + Convert::ToString(3)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(4)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[1][2] == 16)
			{
				c = mas[0][2]; mas[0][2] = mas[1][2]; mas[1][2] = c;
				this->Controls["pictureBox" + Convert::ToString(3)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(7)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[0][0] == 1 && mas[0][1] == 2 && mas[0][2] == 3 && mas[0][3] == 4
				&& mas[1][0] == 5 && mas[1][1] == 6 && mas[1][2] == 7 && mas[1][3] == 8
				&& mas[2][0] == 9 && mas[2][1] == 10 && mas[2][2] == 11 && mas[2][3] == 12
				&& mas[3][0] == 13 && mas[3][1] == 14 && mas[3][2] == 15 && mas[3][3] == 16) a = 1;
			if (chet==10) {
				str = textBox1->Text + " " + Convert::ToString(chet);
				StreamWriter f1("records.txt", true);
				f1.WriteLine(str);
				f1.Close();
			}
		}
	}
	private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (a == 0) {
			if (mas[0][2] == 16)
			{
				c = mas[0][3]; mas[0][3] = mas[0][2]; mas[0][2] = c;
				this->Controls["pictureBox" + Convert::ToString(4)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(3)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[1][3] == 16)
			{
				c = mas[0][3]; mas[0][3] = mas[1][3]; mas[1][3] = c;
				this->Controls["pictureBox" + Convert::ToString(4)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(8)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[0][0] == 1 && mas[0][1] == 2 && mas[0][2] == 3 && mas[0][3] == 4
				&& mas[1][0] == 5 && mas[1][1] == 6 && mas[1][2] == 7 && mas[1][3] == 8
				&& mas[2][0] == 9 && mas[2][1] == 10 && mas[2][2] == 11 && mas[2][3] == 12
				&& mas[3][0] == 13 && mas[3][1] == 14 && mas[3][2] == 15 && mas[3][3] == 16) a = 1;
			if (chet==10) {
				str = textBox1->Text + " " + Convert::ToString(chet);
				StreamWriter f1("records.txt", true);
				f1.WriteLine(str);
				f1.Close();
			}
		}
	}
	private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (a == 0) {
			if (mas[0][0] == 16)
			{
				c = mas[1][0]; mas[1][0] = mas[0][0]; mas[0][0] = c;
				this->Controls["pictureBox" + Convert::ToString(5)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(1)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[2][0] == 16)
			{
				c = mas[1][0]; mas[1][0] = mas[2][0]; mas[2][0] = c;
				this->Controls["pictureBox" + Convert::ToString(5)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(9)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[1][1] == 16)
			{
				c = mas[1][0]; mas[1][0] = mas[1][1]; mas[1][1] = c;
				this->Controls["pictureBox" + Convert::ToString(5)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(6)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[0][0] == 1 && mas[0][1] == 2 && mas[0][2] == 3 && mas[0][3] == 4
				&& mas[1][0] == 5 && mas[1][1] == 6 && mas[1][2] == 7 && mas[1][3] == 8
				&& mas[2][0] == 9 && mas[2][1] == 10 && mas[2][2] == 11 && mas[2][3] == 12
				&& mas[3][0] == 13 && mas[3][1] == 14 && mas[3][2] == 15 && mas[3][3] == 16) a = 1;
			if (chet==10) {
				str = textBox1->Text + " " + Convert::ToString(chet);
				StreamWriter f1("records.txt", true);
				f1.WriteLine(str);
				f1.Close();
			}
		}
	}
	private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (a == 0) {
			if (mas[0][1] == 16)
			{
				c = mas[1][1]; mas[1][1] = mas[0][1]; mas[0][1] = c;
				this->Controls["pictureBox" + Convert::ToString(6)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(2)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[2][1] == 16)
			{
				c = mas[1][1]; mas[1][1] = mas[2][1]; mas[2][1] = c;
				this->Controls["pictureBox" + Convert::ToString(6)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(10)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[1][2] == 16)
			{
				c = mas[1][1]; mas[1][1] = mas[1][2]; mas[1][2] = c;
				this->Controls["pictureBox" + Convert::ToString(6)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(7)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[1][0] == 16)
			{
				c = mas[1][1]; mas[1][1] = mas[1][0]; mas[1][0] = c;
				this->Controls["pictureBox" + Convert::ToString(6)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(5)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[0][0] == 1 && mas[0][1] == 2 && mas[0][2] == 3 && mas[0][3] == 4
				&& mas[1][0] == 5 && mas[1][1] == 6 && mas[1][2] == 7 && mas[1][3] == 8
				&& mas[2][0] == 9 && mas[2][1] == 10 && mas[2][2] == 11 && mas[2][3] == 12
				&& mas[3][0] == 13 && mas[3][1] == 14 && mas[3][2] == 15 && mas[3][3] == 16) a = 1;
			if (chet==10) {
				str = textBox1->Text + " " + Convert::ToString(chet);
				StreamWriter f1("records.txt", true);
				f1.WriteLine(str);
				f1.Close();
			}
		}
	}
	private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (a == 0) {
			if (mas[1][1] == 16)
			{
				c = mas[1][2]; mas[1][2] = mas[1][1]; mas[1][1] = c;
				this->Controls["pictureBox" + Convert::ToString(7)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(6)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[1][3] == 16)
			{
				c = mas[1][2]; mas[1][2] = mas[1][3]; mas[1][3] = c;
				this->Controls["pictureBox" + Convert::ToString(7)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(8)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[2][2] == 16)
			{
				c = mas[1][2]; mas[1][2] = mas[2][2]; mas[2][2] = c;
				this->Controls["pictureBox" + Convert::ToString(7)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(11)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[0][2] == 16)
			{
				c = mas[1][2]; mas[1][2] = mas[0][2]; mas[0][2] = c;
				this->Controls["pictureBox" + Convert::ToString(7)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(3)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[0][0] == 1 && mas[0][1] == 2 && mas[0][2] == 3 && mas[0][3] == 4
				&& mas[1][0] == 5 && mas[1][1] == 6 && mas[1][2] == 7 && mas[1][3] == 8
				&& mas[2][0] == 9 && mas[2][1] == 10 && mas[2][2] == 11 && mas[2][3] == 12
				&& mas[3][0] == 13 && mas[3][1] == 14 && mas[3][2] == 15 && mas[3][3] == 16) a = 1;
			if (chet==10) {
				str = textBox1->Text + " " + Convert::ToString(chet);
				StreamWriter f1("records.txt", true);
				f1.WriteLine(str);
				f1.Close();
			}
		}
	}

	private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (a == 0) {
			if (mas[0][3] == 16)
			{
				c = mas[1][3]; mas[1][3] = mas[0][3]; mas[0][3] = c;
				this->Controls["pictureBox" + Convert::ToString(8)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(4)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[2][3] == 16)
			{
				c = mas[1][3]; mas[1][3] = mas[2][3]; mas[2][3] = c;
				this->Controls["pictureBox" + Convert::ToString(8)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(12)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[1][2] == 16)
			{
				c = mas[1][3]; mas[1][3] = mas[1][2]; mas[1][2] = c;
				this->Controls["pictureBox" + Convert::ToString(8)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(7)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[0][0] == 1 && mas[0][1] == 2 && mas[0][2] == 3 && mas[0][3] == 4
				&& mas[1][0] == 5 && mas[1][1] == 6 && mas[1][2] == 7 && mas[1][3] == 8
				&& mas[2][0] == 9 && mas[2][1] == 10 && mas[2][2] == 11 && mas[2][3] == 12
				&& mas[3][0] == 13 && mas[3][1] == 14 && mas[3][2] == 15 && mas[3][3] == 16) a = 1;
			if (chet==10) {
				str = textBox1->Text + " " + Convert::ToString(chet);
				StreamWriter f1("records.txt", true);
				f1.WriteLine(str);
				f1.Close();
			}
		}
	}
	private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (a == 0) {
			if (mas[1][0] == 16)
			{
				c = mas[2][0]; mas[2][0] = mas[1][0]; mas[1][0] = c;
				this->Controls["pictureBox" + Convert::ToString(9)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(5)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[3][0] == 16)
			{
				c = mas[2][0]; mas[2][0] = mas[3][0]; mas[3][0] = c;
				this->Controls["pictureBox" + Convert::ToString(9)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(13)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[2][1] == 16)
			{
				c = mas[2][0]; mas[2][0] = mas[2][1]; mas[2][1] = c;
				this->Controls["pictureBox" + Convert::ToString(9)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(10)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[0][0] == 1 && mas[0][1] == 2 && mas[0][2] == 3 && mas[0][3] == 4
				&& mas[1][0] == 5 && mas[1][1] == 6 && mas[1][2] == 7 && mas[1][3] == 8
				&& mas[2][0] == 9 && mas[2][1] == 10 && mas[2][2] == 11 && mas[2][3] == 12
				&& mas[3][0] == 13 && mas[3][1] == 14 && mas[3][2] == 15 && mas[3][3] == 16) a = 1;
			if (chet==10) {
				str = textBox1->Text + " " + Convert::ToString(chet);
				StreamWriter f1("records.txt", true);
				f1.WriteLine(str);
				f1.Close();
			}
		}
	}
	private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (a == 0) {
			if (mas[1][1] == 16)
			{
				c = mas[2][1]; mas[2][1] = mas[1][1]; mas[1][1] = c;
				this->Controls["pictureBox" + Convert::ToString(10)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(6)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[2][0] == 16)
			{
				c = mas[2][1]; mas[2][1] = mas[2][0]; mas[2][0] = c;
				this->Controls["pictureBox" + Convert::ToString(10)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(9)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[2][2] == 16)
			{
				c = mas[2][1]; mas[2][1] = mas[2][2]; mas[2][2] = c;
				this->Controls["pictureBox" + Convert::ToString(10)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(11)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[3][1] == 16)
			{
				c = mas[2][1]; mas[2][1] = mas[3][1]; mas[3][1] = c;
				this->Controls["pictureBox" + Convert::ToString(10)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(14)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[0][0] == 1 && mas[0][1] == 2 && mas[0][2] == 3 && mas[0][3] == 4
				&& mas[1][0] == 5 && mas[1][1] == 6 && mas[1][2] == 7 && mas[1][3] == 8
				&& mas[2][0] == 9 && mas[2][1] == 10 && mas[2][2] == 11 && mas[2][3] == 12
				&& mas[3][0] == 13 && mas[3][1] == 14 && mas[3][2] == 15 && mas[3][3] == 16) a = 1;
			if (chet==10) {
				str = textBox1->Text + " " + Convert::ToString(chet);
				StreamWriter f1("records.txt", true);
				f1.WriteLine(str);
				f1.Close();
			}
		}
	}
private: System::Void pictureBox11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (a == 0) {
		if (mas[2][3] == 16)
		{
			c = mas[2][2]; mas[2][2] = mas[2][3]; mas[2][3] = c;
			this->Controls["pictureBox" + Convert::ToString(11)]->BackgroundImage = Image::FromFile(16 + ".png");
			this->Controls["pictureBox" + Convert::ToString(12)]->BackgroundImage = Image::FromFile(c + ".png");
			chet += 1;
			label3->Text = Convert::ToString(chet);
		}
		if (mas[2][1] == 16)
		{
			c = mas[2][2]; mas[2][2] = mas[2][1]; mas[2][1] = c;
			this->Controls["pictureBox" + Convert::ToString(11)]->BackgroundImage = Image::FromFile(16 + ".png");
			this->Controls["pictureBox" + Convert::ToString(10)]->BackgroundImage = Image::FromFile(c + ".png");
			chet += 1;
			label3->Text = Convert::ToString(chet);
		}
		if (mas[3][2] == 16)
		{
			c = mas[2][2]; mas[2][2] = mas[3][2]; mas[3][2] = c;
			this->Controls["pictureBox" + Convert::ToString(11)]->BackgroundImage = Image::FromFile(16 + ".png");
			this->Controls["pictureBox" + Convert::ToString(15)]->BackgroundImage = Image::FromFile(c + ".png");
			chet += 1;
			label3->Text = Convert::ToString(chet);
		}
		if (mas[1][2] == 16)
		{
			c = mas[2][2]; mas[2][2] = mas[1][2]; mas[1][2] = c;
			this->Controls["pictureBox" + Convert::ToString(11)]->BackgroundImage = Image::FromFile(16 + ".png");
			this->Controls["pictureBox" + Convert::ToString(7)]->BackgroundImage = Image::FromFile(c + ".png");
			chet += 1;
			label3->Text = Convert::ToString(chet);
		}
		if (mas[0][0] == 1 && mas[0][1] == 2 && mas[0][2] == 3 && mas[0][3] == 4
			&& mas[1][0] == 5 && mas[1][1] == 6 && mas[1][2] == 7 && mas[1][3] == 8
			&& mas[2][0] == 9 && mas[2][1] == 10 && mas[2][2] == 11 && mas[2][3] == 12
			&& mas[3][0] == 13 && mas[3][1] == 14 && mas[3][2] == 15 && mas[3][3] == 16) a = 1;
		if (chet==10) {
			str = textBox1->Text + " " + Convert::ToString(chet);
			StreamWriter f1("records.txt", true);
			f1.WriteLine(str);
			f1.Close();
		}
	}
}
private: System::Void pictureBox12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (a == 0) {
		if (mas[2][2] == 16)
		{
			c = mas[2][3]; mas[2][3] = mas[2][2]; mas[2][2] = c;
			this->Controls["pictureBox" + Convert::ToString(12)]->BackgroundImage = Image::FromFile(16 + ".png");
			this->Controls["pictureBox" + Convert::ToString(11)]->BackgroundImage = Image::FromFile(c + ".png");
			chet += 1;
			label3->Text = Convert::ToString(chet);
		}
		if (mas[1][3] == 16)
		{
			c = mas[2][3]; mas[2][3] = mas[1][3]; mas[1][3] = c;
			this->Controls["pictureBox" + Convert::ToString(12)]->BackgroundImage = Image::FromFile(16 + ".png");
			this->Controls["pictureBox" + Convert::ToString(8)]->BackgroundImage = Image::FromFile(c + ".png");
			chet += 1;
			label3->Text = Convert::ToString(chet);
		}
		if (mas[3][3] == 16)
		{
			c = mas[2][3]; mas[2][3] = mas[3][3]; mas[3][3] = c;
			this->Controls["pictureBox" + Convert::ToString(12)]->BackgroundImage = Image::FromFile(16 + ".png");
			this->Controls["pictureBox" + Convert::ToString(16)]->BackgroundImage = Image::FromFile(c + ".png");
			chet += 1;
			label3->Text = Convert::ToString(chet);
		}
		if (mas[0][0] == 1 && mas[0][1] == 2 && mas[0][2] == 3 && mas[0][3] == 4
			&& mas[1][0] == 5 && mas[1][1] == 6 && mas[1][2] == 7 && mas[1][3] == 8
			&& mas[2][0] == 9 && mas[2][1] == 10 && mas[2][2] == 11 && mas[2][3] == 12
			&& mas[3][0] == 13 && mas[3][1] == 14 && mas[3][2] == 15 && mas[3][3] == 16) a = 1;
		if (chet==10) {
			str = textBox1->Text + " " + Convert::ToString(chet);
			StreamWriter f1("records.txt", true);
			f1.WriteLine(str);
			f1.Close();
		}
	}
}
	private: System::Void pictureBox13_Click(System::Object^ sender, System::EventArgs^ e) {
		if (a == 0) {
			if (mas[3][1] == 16)
			{
				c = mas[3][0]; mas[3][0] = mas[3][1]; mas[3][1] = c;
				this->Controls["pictureBox" + Convert::ToString(13)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(14)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);
			}
			if (mas[2][0] == 16)
			{
				c = mas[3][0]; mas[3][0] = mas[2][0]; mas[2][0] = c;
				this->Controls["pictureBox" + Convert::ToString(13)]->BackgroundImage = Image::FromFile(16 + ".png");
				this->Controls["pictureBox" + Convert::ToString(9)]->BackgroundImage = Image::FromFile(c + ".png");
				chet += 1;
				label3->Text = Convert::ToString(chet);

			}
			if (mas[0][0] == 1 && mas[0][1] == 2 && mas[0][2] == 3 && mas[0][3] == 4
				&& mas[1][0] == 5 && mas[1][1] == 6 && mas[1][2] == 7 && mas[1][3] == 8
				&& mas[2][0] == 9 && mas[2][1] == 10 && mas[2][2] == 11 && mas[2][3] == 12
				&& mas[3][0] == 13 && mas[3][1] == 14 && mas[3][2] == 15 && mas[3][3] == 16) a = 1;
			if (chet==10) {
				str = textBox1->Text + " " + Convert::ToString(chet);
				StreamWriter f1("records.txt", true);
				f1.WriteLine(str);
				f1.Close();
			}
		}
	}
private: System::Void pictureBox14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (a == 0) {
		if (mas[3][2] == 16)
		{
			c = mas[3][1]; mas[3][1] = mas[3][2]; mas[3][2] = c;
			this->Controls["pictureBox" + Convert::ToString(14)]->BackgroundImage = Image::FromFile(16 + ".png");
			this->Controls["pictureBox" + Convert::ToString(15)]->BackgroundImage = Image::FromFile(c + ".png");
			chet += 1;
			label3->Text = Convert::ToString(chet);
		}
		if (mas[3][0] == 16)
		{
			c = mas[3][1]; mas[3][1] = mas[3][0]; mas[3][0] = c;
			this->Controls["pictureBox" + Convert::ToString(14)]->BackgroundImage = Image::FromFile(16 + ".png");
			this->Controls["pictureBox" + Convert::ToString(13)]->BackgroundImage = Image::FromFile(c + ".png");
			chet += 1;
			label3->Text = Convert::ToString(chet);
		}
		if (mas[2][1] == 16)
		{
			c = mas[3][1]; mas[3][1] = mas[2][1]; mas[2][1] = c;
			this->Controls["pictureBox" + Convert::ToString(14)]->BackgroundImage = Image::FromFile(16 + ".png");
			this->Controls["pictureBox" + Convert::ToString(10)]->BackgroundImage = Image::FromFile(c + ".png");
			chet += 1;
			label3->Text = Convert::ToString(chet);
		}
		if (mas[0][0] == 1 && mas[0][1] == 2 && mas[0][2] == 3 && mas[0][3] == 4
			&& mas[1][0] == 5 && mas[1][1] == 6 && mas[1][2] == 7 && mas[1][3] == 8
			&& mas[2][0] == 9 && mas[2][1] == 10 && mas[2][2] == 11 && mas[2][3] == 12
			&& mas[3][0] == 13 && mas[3][1] == 14 && mas[3][2] == 15 && mas[3][3] == 16) a = 1;
		if (chet==10) {
			str = textBox1->Text + " " + Convert::ToString(chet);
			StreamWriter f1("records.txt", true);
			f1.WriteLine(str);
			f1.Close();
		}
	}
}
private: System::Void pictureBox15_Click(System::Object^ sender, System::EventArgs^ e) {
	if (a == 0) {
		if (mas[3][3] == 16)
		{
			c = mas[3][2]; mas[3][2] = mas[3][3]; mas[3][3] = c;
			this->Controls["pictureBox" + Convert::ToString(15)]->BackgroundImage = Image::FromFile(16 + ".png");
			this->Controls["pictureBox" + Convert::ToString(16)]->BackgroundImage = Image::FromFile(c + ".png");
			chet += 1;
			label3->Text = Convert::ToString(chet);
		}
		if (mas[3][1] == 16)
		{
			c = mas[3][2]; mas[3][2] = mas[3][1]; mas[3][1] = c;
			this->Controls["pictureBox" + Convert::ToString(15)]->BackgroundImage = Image::FromFile(16 + ".png");
			this->Controls["pictureBox" + Convert::ToString(14)]->BackgroundImage = Image::FromFile(c + ".png");
			chet += 1;
			label3->Text = Convert::ToString(chet);
		}
		if (mas[2][2] == 16)
		{
			c = mas[3][2]; mas[3][2] = mas[2][2]; mas[2][2] = c;
			this->Controls["pictureBox" + Convert::ToString(15)]->BackgroundImage = Image::FromFile(16 + ".png");
			this->Controls["pictureBox" + Convert::ToString(11)]->BackgroundImage = Image::FromFile(c + ".png");
			chet += 1;
			label3->Text = Convert::ToString(chet);
		}
		if (mas[0][0] == 1 && mas[0][1] == 2 && mas[0][2] == 3 && mas[0][3] == 4
			&& mas[1][0] == 5 && mas[1][1] == 6 && mas[1][2] == 7 && mas[1][3] == 8
			&& mas[2][0] == 9 && mas[2][1] == 10 && mas[2][2] == 11 && mas[2][3] == 12
			&& mas[3][0] == 13 && mas[3][1] == 14 && mas[3][2] == 15 && mas[3][3] == 16) a = 1;
		if (chet==10) {
			str = textBox1->Text + " " + Convert::ToString(chet);
			StreamWriter f1("records.txt", true);
			f1.WriteLine(str);
			f1.Close();
		}
	}
}
private: System::Void pictureBox16_Click(System::Object^ sender, System::EventArgs^ e) {
	if (a == 0) {
		if (mas[2][3] == 16)
		{
			c = mas[3][3]; mas[3][3] = mas[2][3]; mas[2][3] = c;
			this->Controls["pictureBox" + Convert::ToString(16)]->BackgroundImage = Image::FromFile(16 + ".png");
			this->Controls["pictureBox" + Convert::ToString(12)]->BackgroundImage = Image::FromFile(c + ".png");
			chet += 1;
			label3->Text = Convert::ToString(chet);
		}
		if (mas[3][2] == 16)
		{
			c = mas[3][3]; mas[3][3] = mas[3][2]; mas[3][2] = c;
			this->Controls["pictureBox" + Convert::ToString(16)]->BackgroundImage = Image::FromFile(16 + ".png");
			this->Controls["pictureBox" + Convert::ToString(15)]->BackgroundImage = Image::FromFile(c + ".png");
			chet += 1;
			label3->Text = Convert::ToString(chet);
		}
		if (mas[0][0] == 1 && mas[0][1] == 2 && mas[0][2] == 3 && mas[0][3] == 4
			&& mas[1][0] == 5 && mas[1][1] == 6 && mas[1][2] == 7 && mas[1][3] == 8
			&& mas[2][0] == 9 && mas[2][1] == 10 && mas[2][2] == 11 && mas[2][3] == 12
			&& mas[3][0] == 13 && mas[3][1] == 14 && mas[3][2] == 15 && mas[3][3] == 16) a = 1;
		if (chet==10) {
			str = textBox1->Text + " " + Convert::ToString(chet);
			StreamWriter f1("records.txt", true);
			f1.WriteLine(str);
			f1.Close();
		}
	}
}
private: System::Void íîâàÿÈãğàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Restart();
}
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Close();
}
private: System::Void òàáëèöàĞåêîğäîâToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	m = !m;
	if (m == false) {
		try {
			richTextBox1->Visible = true;
			richTextBox1->Clear();
			StreamReader f1("records.txt");
			String^ str1;
			while (!f1.EndOfStream) {
				str1 = f1.ReadLine();
				richTextBox1->Text += str1 + "\n";
			}
		}
		catch (...) {

		}
	}
	else
		richTextBox1->Visible = false;
}
};
}
