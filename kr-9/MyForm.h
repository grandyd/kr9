#pragma once
#include "solution.cpp"
//#include <pair>
#include <utility>
#include <string>
#include <vector>

//using namespace std;
//using namespace System;

namespace kr9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			delete VecU0;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:
	private: System::Windows::Forms::Button^ button1;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxAlpha;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxSigma;




	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;

	private: System::Windows::Forms::ColumnHeader^ columnHeader8;





	private: System::Windows::Forms::GroupBox^ groupBox1;













	private: System::Windows::Forms::GroupBox^ groupBox2;




	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ labelMistake1;


	private: System::Windows::Forms::Label^ labelMin1;

	private: System::Windows::Forms::Label^ labelMax1;

	private: System::Windows::Forms::Label^ labelSmaller1;

	private: System::Windows::Forms::Label^ labelDouble1;

	private: System::Windows::Forms::Label^ labelN1;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ labelMistakeIndex1;

	private: System::Windows::Forms::Label^ label16;

























	private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::ContextMenuStrip^ contextMenuStripAlpha;

























































	private: System::Windows::Forms::ToolStripMenuItem^ областьЗначенийToolStripMenuItem;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBoxU0;

	private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::ToolStripMenuItem^ описаниеToolStripMenuItem;
private: System::Windows::Forms::ContextMenuStrip^ contextMenuStripSigma;
private: System::Windows::Forms::ToolStripMenuItem^ областьЗначенийToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ описаниеToolStripMenuItem1;
private: System::Windows::Forms::ContextMenuStrip^ contextMenuStripU0;
private: System::Windows::Forms::ToolStripMenuItem^ областьЗначенийToolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^ описаниеToolStripMenuItem2;
private: System::Windows::Forms::GroupBox^ groupBox3;
private: System::Windows::Forms::TextBox^ textBoxX0;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::ContextMenuStrip^ contextMenuStripX0;
private: System::Windows::Forms::ToolStripMenuItem^ областьЗначенийToolStripMenuItem3;
private: System::Windows::Forms::ToolStripMenuItem^ описаниеToolStripMenuItem3;


private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::ContextMenuStrip^ contextMenuStripBorder;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::GroupBox^ groupBox4;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ textBoxEpsilon;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Button^ button4;









	private: System::ComponentModel::IContainer^ components;











	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		//стр 17
		double mods(double x, double v, double h, double alpha, double sigma)
		{
			double vkr = vkrNext(x, v, h, alpha, sigma);
			double v1 = vNext(x, v, h, alpha, sigma);
			double s = (vkr - v1) / (pow(2, 3) - 1);//pow(2,3)-возведение 2 в степень порядка метода
			return abs(s);
		}

		int ChartSeriesCounter = 0;//счетчик числа графиков
		std::vector<double>* VecU0=new std::vector<double>;




		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStripAlpha = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->областьЗначенийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->описаниеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBoxAlpha = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStripSigma = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->областьЗначенийToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->описаниеToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBoxSigma = (gcnew System::Windows::Forms::TextBox());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->contextMenuStripBorder = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->labelMistakeIndex1 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->labelMistake1 = (gcnew System::Windows::Forms::Label());
			this->labelMin1 = (gcnew System::Windows::Forms::Label());
			this->labelMax1 = (gcnew System::Windows::Forms::Label());
			this->labelSmaller1 = (gcnew System::Windows::Forms::Label());
			this->labelDouble1 = (gcnew System::Windows::Forms::Label());
			this->labelN1 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxU0 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStripU0 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->областьЗначенийToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->описаниеToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxX0 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStripX0 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->областьЗначенийToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->описаниеToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxEpsilon = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->contextMenuStripAlpha->SuspendLayout();
			this->contextMenuStripSigma->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->contextMenuStripU0->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->contextMenuStripX0->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->AxisX->Title = L"Время, сек";
			chartArea1->AxisY->Title = L"Уровень жидкости, метры";
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(594, 317);
			this->chart1->Margin = System::Windows::Forms::Padding(2);
			this->chart1->Name = L"chart1";
			this->chart1->Size = System::Drawing::Size(428, 290);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			title1->Name = L"Title1";
			title1->Text = L"График зависимости уровня воды в сосуде от времени";
			this->chart1->Titles->Add(title1);
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(37, 100);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 20);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ContextMenuStrip = this->contextMenuStripAlpha;
			this->label2->Location = System::Drawing::Point(5, 16);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"alpha=";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// contextMenuStripAlpha
			// 
			this->contextMenuStripAlpha->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStripAlpha->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->областьЗначенийToolStripMenuItem,
					this->описаниеToolStripMenuItem
			});
			this->contextMenuStripAlpha->Name = L"contextMenuStrip1";
			this->contextMenuStripAlpha->Size = System::Drawing::Size(176, 48);
			this->contextMenuStripAlpha->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::contextMenuStrip1_Opening_1);
			// 
			// областьЗначенийToolStripMenuItem
			// 
			this->областьЗначенийToolStripMenuItem->Name = L"областьЗначенийToolStripMenuItem";
			this->областьЗначенийToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->областьЗначенийToolStripMenuItem->Text = L"Область значений";
			this->областьЗначенийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::областьЗначенийToolStripMenuItem_Click);
			// 
			// описаниеToolStripMenuItem
			// 
			this->описаниеToolStripMenuItem->Name = L"описаниеToolStripMenuItem";
			this->описаниеToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->описаниеToolStripMenuItem->Text = L"Описание";
			this->описаниеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::описаниеToolStripMenuItem_Click);
			// 
			// textBoxAlpha
			// 
			this->textBoxAlpha->Location = System::Drawing::Point(47, 16);
			this->textBoxAlpha->Margin = System::Windows::Forms::Padding(2);
			this->textBoxAlpha->Name = L"textBoxAlpha";
			this->textBoxAlpha->Size = System::Drawing::Size(100, 20);
			this->textBoxAlpha->TabIndex = 4;
			this->textBoxAlpha->Text = L"1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ContextMenuStrip = this->contextMenuStripSigma;
			this->label3->Location = System::Drawing::Point(5, 36);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"sigma=";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// contextMenuStripSigma
			// 
			this->contextMenuStripSigma->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStripSigma->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->областьЗначенийToolStripMenuItem1,
					this->описаниеToolStripMenuItem1
			});
			this->contextMenuStripSigma->Name = L"contextMenuStripSigma";
			this->contextMenuStripSigma->Size = System::Drawing::Size(176, 48);
			// 
			// областьЗначенийToolStripMenuItem1
			// 
			this->областьЗначенийToolStripMenuItem1->Name = L"областьЗначенийToolStripMenuItem1";
			this->областьЗначенийToolStripMenuItem1->Size = System::Drawing::Size(175, 22);
			this->областьЗначенийToolStripMenuItem1->Text = L"Область значений";
			this->областьЗначенийToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::областьЗначенийToolStripMenuItem1_Click);
			// 
			// описаниеToolStripMenuItem1
			// 
			this->описаниеToolStripMenuItem1->Name = L"описаниеToolStripMenuItem1";
			this->описаниеToolStripMenuItem1->Size = System::Drawing::Size(175, 22);
			this->описаниеToolStripMenuItem1->Text = L"Описание";
			this->описаниеToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::описаниеToolStripMenuItem1_Click);
			// 
			// textBoxSigma
			// 
			this->textBoxSigma->Location = System::Drawing::Point(47, 36);
			this->textBoxSigma->Margin = System::Windows::Forms::Padding(2);
			this->textBoxSigma->Name = L"textBoxSigma";
			this->textBoxSigma->Size = System::Drawing::Size(100, 20);
			this->textBoxSigma->TabIndex = 6;
			this->textBoxSigma->Text = L"4";
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->Margin = System::Windows::Forms::Padding(2);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(2, 666);
			this->splitter1->TabIndex = 13;
			this->splitter1->TabStop = false;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader8
			});
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(37, 317);
			this->listView1->Margin = System::Windows::Forms::Padding(2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(501, 318);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"i";
			this->columnHeader1->Width = 38;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Xi";
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"hi-1";
			this->columnHeader3->Width = 109;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Vi";
			this->columnHeader4->Width = 124;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"V^i";
			this->columnHeader5->Width = 126;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Vi-V^i";
			this->columnHeader6->Width = 159;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Оц. л.п.";
			this->columnHeader8->Width = 383;
			// 
			// contextMenuStripBorder
			// 
			this->contextMenuStripBorder->Name = L"contextMenuStripBorder";
			this->contextMenuStripBorder->Size = System::Drawing::Size(61, 4);
			this->contextMenuStripBorder->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::contextMenuStripBorder_Opening);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->panel1);
			this->groupBox1->Location = System::Drawing::Point(550, 26);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(472, 266);
			this->groupBox1->TabIndex = 18;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Справка";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->labelMistakeIndex1);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->labelMistake1);
			this->panel1->Controls->Add(this->labelMin1);
			this->panel1->Controls->Add(this->labelMax1);
			this->panel1->Controls->Add(this->labelSmaller1);
			this->panel1->Controls->Add(this->labelDouble1);
			this->panel1->Controls->Add(this->labelN1);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Location = System::Drawing::Point(9, 45);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(317, 109);
			this->panel1->TabIndex = 16;
			// 
			// labelMistakeIndex1
			// 
			this->labelMistakeIndex1->AutoSize = true;
			this->labelMistakeIndex1->Location = System::Drawing::Point(63, 84);
			this->labelMistakeIndex1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelMistakeIndex1->Name = L"labelMistakeIndex1";
			this->labelMistakeIndex1->Size = System::Drawing::Size(13, 13);
			this->labelMistakeIndex1->TabIndex = 15;
			this->labelMistakeIndex1->Text = L"0";
			this->labelMistakeIndex1->Click += gcnew System::EventHandler(this, &MyForm::labelMistakeIndex1_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(5, 84);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(61, 13);
			this->label16->TabIndex = 14;
			this->label16->Text = L"в точке x =";
			// 
			// labelMistake1
			// 
			this->labelMistake1->AutoSize = true;
			this->labelMistake1->Location = System::Drawing::Point(117, 73);
			this->labelMistake1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelMistake1->MaximumSize = System::Drawing::Size(200, 0);
			this->labelMistake1->Name = L"labelMistake1";
			this->labelMistake1->Size = System::Drawing::Size(13, 13);
			this->labelMistake1->TabIndex = 13;
			this->labelMistake1->Text = L"0";
			// 
			// labelMin1
			// 
			this->labelMin1->AutoSize = true;
			this->labelMin1->Location = System::Drawing::Point(111, 60);
			this->labelMin1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelMin1->Name = L"labelMin1";
			this->labelMin1->Size = System::Drawing::Size(13, 13);
			this->labelMin1->TabIndex = 12;
			this->labelMin1->Text = L"0";
			// 
			// labelMax1
			// 
			this->labelMax1->AutoSize = true;
			this->labelMax1->Location = System::Drawing::Point(116, 47);
			this->labelMax1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelMax1->MaximumSize = System::Drawing::Size(67, 0);
			this->labelMax1->Name = L"labelMax1";
			this->labelMax1->Size = System::Drawing::Size(13, 13);
			this->labelMax1->TabIndex = 11;
			this->labelMax1->Text = L"0";
			// 
			// labelSmaller1
			// 
			this->labelSmaller1->AutoSize = true;
			this->labelSmaller1->Location = System::Drawing::Point(96, 34);
			this->labelSmaller1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelSmaller1->Name = L"labelSmaller1";
			this->labelSmaller1->Size = System::Drawing::Size(13, 13);
			this->labelSmaller1->TabIndex = 10;
			this->labelSmaller1->Text = L"0";
			// 
			// labelDouble1
			// 
			this->labelDouble1->AutoSize = true;
			this->labelDouble1->Location = System::Drawing::Point(100, 21);
			this->labelDouble1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelDouble1->Name = L"labelDouble1";
			this->labelDouble1->Size = System::Drawing::Size(13, 13);
			this->labelDouble1->TabIndex = 9;
			this->labelDouble1->Text = L"0";
			// 
			// labelN1
			// 
			this->labelN1->AutoSize = true;
			this->labelN1->Location = System::Drawing::Point(27, 8);
			this->labelN1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelN1->MaximumSize = System::Drawing::Size(67, 0);
			this->labelN1->Name = L"labelN1";
			this->labelN1->Size = System::Drawing::Size(13, 13);
			this->labelN1->TabIndex = 8;
			this->labelN1->Text = L"0";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(5, 73);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(114, 13);
			this->label15->TabIndex = 7;
			this->label15->Text = L"Максимальная ОЛП:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(5, 60);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(105, 13);
			this->label14->TabIndex = 6;
			this->label14->Text = L"Минимальный шаг:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(5, 60);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 13);
			this->label13->TabIndex = 5;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(5, 47);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(111, 13);
			this->label12->TabIndex = 4;
			this->label12->Text = L"Максимальный шаг:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(5, 34);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(87, 13);
			this->label11->TabIndex = 3;
			this->label11->Text = L"Число делений:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(5, 21);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(92, 13);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Число удвоений:";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(5, 8);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(19, 13);
			this->label9->TabIndex = 1;
			this->label9->Text = L"n=";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBoxSigma);
			this->groupBox2->Controls->Add(this->textBoxAlpha);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Location = System::Drawing::Point(37, 155);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(180, 67);
			this->groupBox2->TabIndex = 22;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Параметры системы";
			// 
			// textBoxU0
			// 
			this->textBoxU0->Location = System::Drawing::Point(39, 37);
			this->textBoxU0->Margin = System::Windows::Forms::Padding(2);
			this->textBoxU0->Name = L"textBoxU0";
			this->textBoxU0->Size = System::Drawing::Size(100, 20);
			this->textBoxU0->TabIndex = 24;
			this->textBoxU0->Text = L"1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ContextMenuStrip = this->contextMenuStripU0;
			this->label1->Location = System::Drawing::Point(9, 39);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 13);
			this->label1->TabIndex = 24;
			this->label1->Text = L"U0=";
			// 
			// contextMenuStripU0
			// 
			this->contextMenuStripU0->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStripU0->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->областьЗначенийToolStripMenuItem2,
					this->описаниеToolStripMenuItem2
			});
			this->contextMenuStripU0->Name = L"contextMenuStripU0";
			this->contextMenuStripU0->Size = System::Drawing::Size(176, 48);
			// 
			// областьЗначенийToolStripMenuItem2
			// 
			this->областьЗначенийToolStripMenuItem2->Name = L"областьЗначенийToolStripMenuItem2";
			this->областьЗначенийToolStripMenuItem2->Size = System::Drawing::Size(175, 22);
			this->областьЗначенийToolStripMenuItem2->Text = L"Область значений";
			this->областьЗначенийToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::областьЗначенийToolStripMenuItem2_Click);
			// 
			// описаниеToolStripMenuItem2
			// 
			this->описаниеToolStripMenuItem2->Name = L"описаниеToolStripMenuItem2";
			this->описаниеToolStripMenuItem2->Size = System::Drawing::Size(175, 22);
			this->описаниеToolStripMenuItem2->Text = L"Описание";
			this->описаниеToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::описаниеToolStripMenuItem2_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(37, 124);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 26);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Очистить график";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_2);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBoxX0);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->textBoxU0);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Location = System::Drawing::Point(37, 228);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2);
			this->groupBox3->Size = System::Drawing::Size(180, 67);
			this->groupBox3->TabIndex = 24;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Параметры задачи Коши";
			// 
			// textBoxX0
			// 
			this->textBoxX0->Location = System::Drawing::Point(39, 15);
			this->textBoxX0->Margin = System::Windows::Forms::Padding(2);
			this->textBoxX0->Name = L"textBoxX0";
			this->textBoxX0->Size = System::Drawing::Size(100, 20);
			this->textBoxX0->TabIndex = 25;
			this->textBoxX0->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ContextMenuStrip = this->contextMenuStripU0;
			this->label8->Location = System::Drawing::Point(9, 17);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(26, 13);
			this->label8->TabIndex = 26;
			this->label8->Text = L"X0=";
			// 
			// contextMenuStripX0
			// 
			this->contextMenuStripX0->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStripX0->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->областьЗначенийToolStripMenuItem3,
					this->описаниеToolStripMenuItem3
			});
			this->contextMenuStripX0->Name = L"contextMenuStripX0";
			this->contextMenuStripX0->Size = System::Drawing::Size(176, 48);
			// 
			// областьЗначенийToolStripMenuItem3
			// 
			this->областьЗначенийToolStripMenuItem3->Name = L"областьЗначенийToolStripMenuItem3";
			this->областьЗначенийToolStripMenuItem3->Size = System::Drawing::Size(175, 22);
			this->областьЗначенийToolStripMenuItem3->Text = L"Область значений";
			this->областьЗначенийToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::областьЗначенийToolStripMenuItem3_Click);
			// 
			// описаниеToolStripMenuItem3
			// 
			this->описаниеToolStripMenuItem3->Name = L"описаниеToolStripMenuItem3";
			this->описаниеToolStripMenuItem3->Size = System::Drawing::Size(175, 22);
			this->описаниеToolStripMenuItem3->Text = L"Описание";
			this->описаниеToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::описаниеToolStripMenuItem3_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(12, 26);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(136, 13);
			this->label17->TabIndex = 27;
			this->label17->Text = L"Постановка задачи Коши";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 42);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(315, 32);
			this->pictureBox1->TabIndex = 26;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label18);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->textBoxEpsilon);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->textBox3);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->textBox2);
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->textBox1);
			this->groupBox4->Location = System::Drawing::Point(333, 38);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(201, 242);
			this->groupBox4->TabIndex = 28;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Параметры метода";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(20, 27);
			this->label18->MaximumSize = System::Drawing::Size(150, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(137, 26);
			this->label18->TabIndex = 18;
			this->label18->Text = L"Задачи решена явным методом РК 3 го порядка";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(16, 113);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(148, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Контроль лок. погрешности";
			// 
			// textBoxEpsilon
			// 
			this->textBoxEpsilon->Location = System::Drawing::Point(19, 129);
			this->textBoxEpsilon->Name = L"textBoxEpsilon";
			this->textBoxEpsilon->Size = System::Drawing::Size(133, 20);
			this->textBoxEpsilon->TabIndex = 16;
			this->textBoxEpsilon->Text = L"0,000001";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ContextMenuStrip = this->contextMenuStripBorder;
			this->label6->Location = System::Drawing::Point(16, 71);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(176, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Точность выхода на границу по u";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(19, 87);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(133, 20);
			this->textBox3->TabIndex = 14;
			this->textBox3->Text = L"0,000001";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 198);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Начальный шаг";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(19, 213);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(133, 20);
			this->textBox2->TabIndex = 10;
			this->textBox2->Text = L"0,001";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 152);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Макс. число шагов";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(19, 171);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(133, 20);
			this->textBox1->TabIndex = 8;
			this->textBox1->Text = L"1000";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(178, 98);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(98, 27);
			this->button4->TabIndex = 30;
			this->button4->Text = L"Справка";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1109, 666);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->splitter1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Иванов Георгий 1 команда, задача №9";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->contextMenuStripAlpha->ResumeLayout(false);
			this->contextMenuStripSigma->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->contextMenuStripU0->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->contextMenuStripX0->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Проверки заполнения полей параметров системы
	if (textBoxAlpha->Text=="")
	{
		MessageBox::Show("Вы не задали параметр Alpha");
		return;
	}
	else if (textBoxSigma->Text=="")
	{
		MessageBox::Show("Вы не задали параметр Sigma");
		return;
	}
	else if (textBoxU0->Text=="")
	{
		MessageBox::Show("Вы не задали начальное значение задачи Коши");
		return;
	}

	//Проверка наличия графика U0
	double u0 = System::Convert::ToDouble(textBoxU0->Text);
	
	//for (auto i = VecU0->begin(); i!= VecU0->end(); i++)
	//{
	//	if (*i==u0)
	//	{
	//		MessageBox::Show("График для U0=" + u0.ToString() + " уже создан");
	//		return;
	//	}
	//}

	//VecU0->push_back(u0);
	//===========================

	ChartSeriesCounter++;

	


	double x0 = System::Convert::ToDouble(textBoxX0->Text);
	
	double alpha = System::Convert::ToDouble(textBoxAlpha->Text);
	double sigma = System::Convert::ToDouble(textBoxSigma->Text);
	double en;//лок погр
	double epsilon = System::Convert::ToDouble(textBoxEpsilon->Text);

	double escape_control = System::Convert::ToDouble(textBox3->Text);

	int len= System::Convert::ToInt16(textBox1->Text);
	double h= System::Convert::ToDouble(textBox2->Text);
	double prevH = h;


	String^ SeriesName = "U0=" + u0.ToString() + " Alpha=" + alpha.ToString() + " Sigma=" + sigma.ToString();
		//String^ SeriesName("График для U0=");
		//SeriesName = SeriesName + u0.ToString();
	
	chart1->Series->Add(SeriesName);
	chart1->Series[SeriesName]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;



	//переменные для контроля длины шага
	double modS = 0;
	

	int counterU = 0;
	int counterL = 0;

	double maxH = h;
	double minH = h;

	double maxMistake=0;
	double mistakeIndex = 0;

	listView1->Items->Clear();

	array<String^>^ ms = gcnew array< System::String^ >(7);
	


		
		h = System::Convert::ToDouble(textBox2->Text);
		en = 0;
		double v0 = u0;
		double vkr = v0;

		double prevX = x0;
		double prevV = v0;



		//
		chart1->Series[SeriesName]->Points->AddXY(x0, v0);//отрисовка начальной точки

		//
		ms[0] = "0";
		ms[1] = x0.ToString();
		ms[2] = "0";
		ms[3] = v0.ToString();
		ms[4] = vkr.ToString();
		ms[5] = (vkr - v0).ToString();
		ms[6] = en.ToString();

		ListViewItem^ listViewItem0 = gcnew ListViewItem(ms);//заполнение таблицы начальными условиями
		listView1->Items->Add(listViewItem0);
			
		


		int i = 0;
		for (i;( i < len && v0>0); i++)
		{
			prevH = h;

			vkr = vkrNext(x0, v0, h, alpha, sigma);
			x0 = xNext(x0, h);
			v0 = vNext(x0, v0, h, alpha, sigma);
			

			modS = mods(x0, v0, h, alpha, sigma);
			//если |S|<Epsilon->увеличиваем шаг в 2 раза и принимаем нашу точку
			if (modS<=epsilon && modS>=epsilon/(pow(2,4)))
			{

			}
			else if (modS < epsilon)
			{
				h *= 2;
				if (maxH < h)
				{
					maxH = h;
				}
				counterU++;
			}
			//если |S|>Epsilon->уменьшаем шаг в 2 раза и расчитываем точку заного
			else if (modS > epsilon)
			{
				h /= 2;
				if (minH > h)
				{
					minH = h;
				}
				counterL++;
				//расчёт новой точки
				vkr = vkrNext(prevX, prevV, h, alpha, sigma);
				x0 = xNext(prevX, h);
				v0 = vNext(prevX, prevV, h, alpha, sigma);
			}
			en = pow(2, 3) * (vkr - v0) / (pow(2, 3) - 1);
			if (maxMistake < (modS*pow(2,3)))
			{
				maxMistake = modS;
				mistakeIndex = x0;
			}


			

			//while (v0<0)
			//{
			//	h /= 2;
			//	if (minH > h)
			//	{
			//		minH = h;
			//	}
			//	counterL++;
			//	//расчёт новой точки
			//	vkr = vkrNext(prevX, prevV, h, alpha, sigma);
			//	x0 = xNext(prevX, h);
			//	v0 = vNext(prevX, prevV, h, alpha, sigma);
			//	en = pow(2, 3) * (vkr - prevV) / (pow(2, 3) - 1) * pow(2, 3);
			//	if (v0 > System::Convert::ToDouble(textBox3->Text))
			//	{
			//		break;
			//	}
			//}

			chart1->Series[SeriesName]->Points->AddXY(x0, v0);//отрисовка точки

			//Заполнение таблицы==============================

			ms[0] = i.ToString();
			ms[1] = x0.ToString();
			ms[2] = h.ToString();
			ms[2] = (x0 - prevX).ToString();
			ms[3] = v0.ToString();
			ms[4] = vkr.ToString();
			ms[5] = (vkr - v0).ToString();
			ms[6] = en.ToString();

			//prevH = h;

			ListViewItem^ listViewItem0 = gcnew ListViewItem(ms);//заполнение таблиц для каждого графика
	
			listView1->Items->Add(listViewItem0);



			prevX = x0;
			prevV = v0;

		}

		//Заполнение справки

		labelN1->Text = (i-1).ToString();
		labelDouble1->Text = counterU.ToString();
		labelSmaller1->Text = counterL.ToString();
		labelMax1->Text = maxH.ToString();
		labelMin1->Text = minH.ToString();
		labelMistake1->Text = maxMistake.ToString();
		labelMistakeIndex1->Text = mistakeIndex.ToString();
			
	
		
	




	//chart1->Series["chisl_solution"]->Points->AddXY(x0, v0);
	//x0 = xNext(x0, h);
	//v0 = vNext(x0, v0, h, alpha, sigma);
	
}
private: System::Void splitContainer1_Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabControl1_Click(System::Object^ sender, System::EventArgs^ e) {
	/*tabControl2->SelectTab(tabControl1->SelectedIndex);*/
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabControl2_Click(System::Object^ sender, System::EventArgs^ e) {
	/*tabControl1->SelectTab(tabControl2->SelectedIndex);*/
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	groupBox1->Visible = false;
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
}


private: System::Void Выход_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	//MessageBox::Show("Определяет угол между стенкой и нормалью");
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Определяет площадь отверстия, через которое вытекает жидкость");
}
private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Значения больше 0");
}
private: System::Void областьЗначенийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Область допустимых значений: от 0, до 3.14");
}
private: System::Void button2_Click_2(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->Series->Clear();
}
private: System::Void contextMenuStrip1_Opening_1(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void описаниеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Alpha определяет угол между стенкой сосуда и нормалью поверхности, сквозь которое вытекает жидкость");
}
private: System::Void областьЗначенийToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Область допустимых значений: не отрицательное число");
}
private: System::Void описаниеToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Sigma определяет площадь поверхности, через которую вытекает жидкость, измеряется в м^2");
}
private: System::Void областьЗначенийToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Область допустимых значений: не отрицательное число");
}
private: System::Void описаниеToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("U0 определяет начальный уровень воды в сосуде");
}
private: System::Void labelMistakeIndex1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void областьЗначенийToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Область значений: любое действительное число");
}
private: System::Void описаниеToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Определяет начальное значение X для задачи Коши");
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Постановка задачи: Из сосуда вытекает вода по закону:(-0.6)o*sqrt(2*g)");
	pictureBox1->Visible = true;
}
private: System::Void contextMenuStripBorder_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	MessageBox::Show("Точность выхода на границу измеряется в метрах");
}
};
}
