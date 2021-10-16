#pragma once
#include "solution.cpp"
//#include <pair>
#include <utility>
#include <string>

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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;

	private: System::Windows::Forms::ColumnHeader^ columnHeader8;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxEpsilon;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;



	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::TabPage^ tabPage8;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListView^ listView2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::ColumnHeader^ columnHeader9;
	private: System::Windows::Forms::ColumnHeader^ columnHeader10;
	private: System::Windows::Forms::ColumnHeader^ columnHeader11;
	private: System::Windows::Forms::ColumnHeader^ columnHeader12;
	private: System::Windows::Forms::ColumnHeader^ columnHeader13;
	private: System::Windows::Forms::ColumnHeader^ columnHeader14;
	private: System::Windows::Forms::ListView^ listView3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader15;
	private: System::Windows::Forms::ColumnHeader^ columnHeader16;
	private: System::Windows::Forms::ColumnHeader^ columnHeader17;
	private: System::Windows::Forms::ColumnHeader^ columnHeader18;
	private: System::Windows::Forms::ColumnHeader^ columnHeader19;
	private: System::Windows::Forms::ColumnHeader^ columnHeader20;
	private: System::Windows::Forms::ColumnHeader^ columnHeader21;
	private: System::Windows::Forms::ListView^ listView4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader22;
	private: System::Windows::Forms::ColumnHeader^ columnHeader23;
	private: System::Windows::Forms::ColumnHeader^ columnHeader24;
	private: System::Windows::Forms::ColumnHeader^ columnHeader25;
	private: System::Windows::Forms::ColumnHeader^ columnHeader26;
	private: System::Windows::Forms::ColumnHeader^ columnHeader27;
	private: System::Windows::Forms::ColumnHeader^ columnHeader28;
private: System::Windows::Forms::Panel^ panel1;

private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Label^ labelMistakeIndex2;

private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ labelMistake2;
private: System::Windows::Forms::Label^ labelMin2;
private: System::Windows::Forms::Label^ labelMax2;
private: System::Windows::Forms::Label^ labelSmaller2;
private: System::Windows::Forms::Label^ labelDouble2;
private: System::Windows::Forms::Label^ labelN2;






private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::Label^ labelMistakeIndex4;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ labelMistake4;
private: System::Windows::Forms::Label^ labelMin4;
private: System::Windows::Forms::Label^ labelMax4;
private: System::Windows::Forms::Label^ labelSmaller4;
private: System::Windows::Forms::Label^ labelDouble4;
private: System::Windows::Forms::Label^ labelN4;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Label^ labelMistakeIndex3;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ labelMistake3;
private: System::Windows::Forms::Label^ labelMin3;
private: System::Windows::Forms::Label^ labelMax3;
private: System::Windows::Forms::Label^ labelSmaller3;
private: System::Windows::Forms::Label^ labelDouble3;
private: System::Windows::Forms::Label^ labelN3;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^ областьЗначенийToolStripMenuItem;



private: System::ComponentModel::IContainer^ components;











	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code

		double mods(double x, double v, double h, double alpha, double sigma)
		{
			double x12, v12;
			x12 = xNext(x, h / 2);
			v12 = vNext(x, v, h / 2, alpha, sigma);
			double v1kr = vNext(x12, v12, h / 2, alpha, sigma);
			double v1 = vNext(x, v, h, alpha, sigma);
			//MessageBox::Show((v1kr - v1).ToString());
			double s = (v1kr - v1)/(pow(2,3)-1);//pow(2,3)-возведение 2 в степень порядка метода
			//MessageBox::Show((abs(s)).ToString());
			return abs(s);
		}





		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxAlpha = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxSigma = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxEpsilon = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->labelMistakeIndex4 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->labelMistake4 = (gcnew System::Windows::Forms::Label());
			this->labelMin4 = (gcnew System::Windows::Forms::Label());
			this->labelMax4 = (gcnew System::Windows::Forms::Label());
			this->labelSmaller4 = (gcnew System::Windows::Forms::Label());
			this->labelDouble4 = (gcnew System::Windows::Forms::Label());
			this->labelN4 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->labelMistakeIndex3 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->labelMistake3 = (gcnew System::Windows::Forms::Label());
			this->labelMin3 = (gcnew System::Windows::Forms::Label());
			this->labelMax3 = (gcnew System::Windows::Forms::Label());
			this->labelSmaller3 = (gcnew System::Windows::Forms::Label());
			this->labelDouble3 = (gcnew System::Windows::Forms::Label());
			this->labelN3 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->labelMistakeIndex2 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->labelMistake2 = (gcnew System::Windows::Forms::Label());
			this->labelMin2 = (gcnew System::Windows::Forms::Label());
			this->labelMax2 = (gcnew System::Windows::Forms::Label());
			this->labelSmaller2 = (gcnew System::Windows::Forms::Label());
			this->labelDouble2 = (gcnew System::Windows::Forms::Label());
			this->labelN2 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader13 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader14 = (gcnew System::Windows::Forms::ColumnHeader());
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader15 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader16 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader17 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader18 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader19 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader20 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader21 = (gcnew System::Windows::Forms::ColumnHeader());
			this->listView4 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader22 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader23 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader24 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader25 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader26 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader27 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader28 = (gcnew System::Windows::Forms::ColumnHeader());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->областьЗначенийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(891, 488);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Solution_U0_1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Solution_U0_2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Solution_U0_3";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Legend = L"Legend1";
			series4->Name = L"Solution_U0_4";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Size = System::Drawing::Size(642, 446);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(56, 105);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(171, 31);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ContextMenuStrip = this->contextMenuStrip1;
			this->label2->Location = System::Drawing::Point(465, 278);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"alpha=";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBoxAlpha
			// 
			this->textBoxAlpha->Location = System::Drawing::Point(470, 302);
			this->textBoxAlpha->Name = L"textBoxAlpha";
			this->textBoxAlpha->Size = System::Drawing::Size(198, 26);
			this->textBoxAlpha->TabIndex = 4;
			this->textBoxAlpha->Text = L"1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(465, 348);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"sigma=";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textBoxSigma
			// 
			this->textBoxSigma->Location = System::Drawing::Point(470, 371);
			this->textBoxSigma->Name = L"textBoxSigma";
			this->textBoxSigma->Size = System::Drawing::Size(198, 26);
			this->textBoxSigma->TabIndex = 6;
			this->textBoxSigma->Text = L"4";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(465, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Макс. число шагов";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(470, 169);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(198, 26);
			this->textBox1->TabIndex = 8;
			this->textBox1->Text = L"1000";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(465, 211);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Начальный шаг";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(470, 234);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(198, 26);
			this->textBox2->TabIndex = 10;
			this->textBox2->Text = L"0.001";
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(3, 1025);
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
			this->listView1->Location = System::Drawing::Point(56, 488);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(636, 487);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"i";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Xi";
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"hi";
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Vi";
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"V^i";
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Vi-V^i";
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Оц. л.п.";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(470, 40);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(198, 26);
			this->textBox3->TabIndex = 14;
			this->textBox3->Text = L"0.000001";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(465, 15);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(224, 20);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Точность выхода за границу";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(465, 80);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(222, 20);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Контроль лок. погрешности";
			// 
			// textBoxEpsilon
			// 
			this->textBoxEpsilon->Location = System::Drawing::Point(470, 105);
			this->textBoxEpsilon->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxEpsilon->Name = L"textBoxEpsilon";
			this->textBoxEpsilon->Size = System::Drawing::Size(198, 26);
			this->textBoxEpsilon->TabIndex = 16;
			this->textBoxEpsilon->Text = L"0.000001";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->panel4);
			this->groupBox1->Controls->Add(this->panel3);
			this->groupBox1->Controls->Add(this->panel2);
			this->groupBox1->Controls->Add(this->panel1);
			this->groupBox1->Controls->Add(this->tabControl1);
			this->groupBox1->Location = System::Drawing::Point(825, 40);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Size = System::Drawing::Size(708, 409);
			this->groupBox1->TabIndex = 18;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Справка";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->labelMistakeIndex4);
			this->panel4->Controls->Add(this->label20);
			this->panel4->Controls->Add(this->labelMistake4);
			this->panel4->Controls->Add(this->labelMin4);
			this->panel4->Controls->Add(this->labelMax4);
			this->panel4->Controls->Add(this->labelSmaller4);
			this->panel4->Controls->Add(this->labelDouble4);
			this->panel4->Controls->Add(this->labelN4);
			this->panel4->Controls->Add(this->label41);
			this->panel4->Controls->Add(this->label42);
			this->panel4->Controls->Add(this->label43);
			this->panel4->Controls->Add(this->label44);
			this->panel4->Controls->Add(this->label45);
			this->panel4->Controls->Add(this->label46);
			this->panel4->Controls->Add(this->label47);
			this->panel4->Location = System::Drawing::Point(13, 70);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(234, 168);
			this->panel4->TabIndex = 19;
			this->panel4->Visible = false;
			// 
			// labelMistakeIndex4
			// 
			this->labelMistakeIndex4->AutoSize = true;
			this->labelMistakeIndex4->Location = System::Drawing::Point(95, 130);
			this->labelMistakeIndex4->Name = L"labelMistakeIndex4";
			this->labelMistakeIndex4->Size = System::Drawing::Size(18, 20);
			this->labelMistakeIndex4->TabIndex = 15;
			this->labelMistakeIndex4->Text = L"0";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(7, 130);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(90, 20);
			this->label20->TabIndex = 14;
			this->label20->Text = L"в точке x =";
			// 
			// labelMistake4
			// 
			this->labelMistake4->AutoSize = true;
			this->labelMistake4->Location = System::Drawing::Point(200, 113);
			this->labelMistake4->Name = L"labelMistake4";
			this->labelMistake4->Size = System::Drawing::Size(18, 20);
			this->labelMistake4->TabIndex = 13;
			this->labelMistake4->Text = L"0";
			// 
			// labelMin4
			// 
			this->labelMin4->AutoSize = true;
			this->labelMin4->Location = System::Drawing::Point(167, 93);
			this->labelMin4->Name = L"labelMin4";
			this->labelMin4->Size = System::Drawing::Size(18, 20);
			this->labelMin4->TabIndex = 12;
			this->labelMin4->Text = L"0";
			// 
			// labelMax4
			// 
			this->labelMax4->AutoSize = true;
			this->labelMax4->Location = System::Drawing::Point(174, 72);
			this->labelMax4->Name = L"labelMax4";
			this->labelMax4->Size = System::Drawing::Size(18, 20);
			this->labelMax4->TabIndex = 11;
			this->labelMax4->Text = L"0";
			// 
			// labelSmaller4
			// 
			this->labelSmaller4->AutoSize = true;
			this->labelSmaller4->Location = System::Drawing::Point(144, 52);
			this->labelSmaller4->Name = L"labelSmaller4";
			this->labelSmaller4->Size = System::Drawing::Size(18, 20);
			this->labelSmaller4->TabIndex = 10;
			this->labelSmaller4->Text = L"0";
			// 
			// labelDouble4
			// 
			this->labelDouble4->AutoSize = true;
			this->labelDouble4->Location = System::Drawing::Point(150, 32);
			this->labelDouble4->Name = L"labelDouble4";
			this->labelDouble4->Size = System::Drawing::Size(18, 20);
			this->labelDouble4->TabIndex = 9;
			this->labelDouble4->Text = L"0";
			// 
			// labelN4
			// 
			this->labelN4->AutoSize = true;
			this->labelN4->Location = System::Drawing::Point(40, 12);
			this->labelN4->Name = L"labelN4";
			this->labelN4->Size = System::Drawing::Size(18, 20);
			this->labelN4->TabIndex = 8;
			this->labelN4->Text = L"0";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(7, 113);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(187, 20);
			this->label41->TabIndex = 7;
			this->label41->Text = L"Максимальная ошибка:";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(7, 93);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(154, 20);
			this->label42->TabIndex = 6;
			this->label42->Text = L"Минимальный шаг:";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(7, 92);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(0, 20);
			this->label43->TabIndex = 5;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(7, 72);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(161, 20);
			this->label44->TabIndex = 4;
			this->label44->Text = L"Максимальный шаг:";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(7, 52);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(131, 20);
			this->label45->TabIndex = 3;
			this->label45->Text = L"Число делений:";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(7, 32);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(137, 20);
			this->label46->TabIndex = 2;
			this->label46->Text = L"Число удвоений:";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(7, 12);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(27, 20);
			this->label47->TabIndex = 1;
			this->label47->Text = L"n=";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->labelMistakeIndex3);
			this->panel3->Controls->Add(this->label19);
			this->panel3->Controls->Add(this->labelMistake3);
			this->panel3->Controls->Add(this->labelMin3);
			this->panel3->Controls->Add(this->labelMax3);
			this->panel3->Controls->Add(this->labelSmaller3);
			this->panel3->Controls->Add(this->labelDouble3);
			this->panel3->Controls->Add(this->labelN3);
			this->panel3->Controls->Add(this->label33);
			this->panel3->Controls->Add(this->label34);
			this->panel3->Controls->Add(this->label35);
			this->panel3->Controls->Add(this->label36);
			this->panel3->Controls->Add(this->label37);
			this->panel3->Controls->Add(this->label38);
			this->panel3->Controls->Add(this->label39);
			this->panel3->Location = System::Drawing::Point(13, 70);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(234, 168);
			this->panel3->TabIndex = 18;
			this->panel3->Visible = false;
			// 
			// labelMistakeIndex3
			// 
			this->labelMistakeIndex3->AutoSize = true;
			this->labelMistakeIndex3->Location = System::Drawing::Point(95, 130);
			this->labelMistakeIndex3->Name = L"labelMistakeIndex3";
			this->labelMistakeIndex3->Size = System::Drawing::Size(18, 20);
			this->labelMistakeIndex3->TabIndex = 15;
			this->labelMistakeIndex3->Text = L"0";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(7, 130);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(90, 20);
			this->label19->TabIndex = 14;
			this->label19->Text = L"в точке x =";
			// 
			// labelMistake3
			// 
			this->labelMistake3->AutoSize = true;
			this->labelMistake3->Location = System::Drawing::Point(200, 113);
			this->labelMistake3->Name = L"labelMistake3";
			this->labelMistake3->Size = System::Drawing::Size(18, 20);
			this->labelMistake3->TabIndex = 13;
			this->labelMistake3->Text = L"0";
			// 
			// labelMin3
			// 
			this->labelMin3->AutoSize = true;
			this->labelMin3->Location = System::Drawing::Point(167, 93);
			this->labelMin3->Name = L"labelMin3";
			this->labelMin3->Size = System::Drawing::Size(18, 20);
			this->labelMin3->TabIndex = 12;
			this->labelMin3->Text = L"0";
			// 
			// labelMax3
			// 
			this->labelMax3->AutoSize = true;
			this->labelMax3->Location = System::Drawing::Point(174, 72);
			this->labelMax3->Name = L"labelMax3";
			this->labelMax3->Size = System::Drawing::Size(18, 20);
			this->labelMax3->TabIndex = 11;
			this->labelMax3->Text = L"0";
			// 
			// labelSmaller3
			// 
			this->labelSmaller3->AutoSize = true;
			this->labelSmaller3->Location = System::Drawing::Point(144, 52);
			this->labelSmaller3->Name = L"labelSmaller3";
			this->labelSmaller3->Size = System::Drawing::Size(18, 20);
			this->labelSmaller3->TabIndex = 10;
			this->labelSmaller3->Text = L"0";
			// 
			// labelDouble3
			// 
			this->labelDouble3->AutoSize = true;
			this->labelDouble3->Location = System::Drawing::Point(150, 32);
			this->labelDouble3->Name = L"labelDouble3";
			this->labelDouble3->Size = System::Drawing::Size(18, 20);
			this->labelDouble3->TabIndex = 9;
			this->labelDouble3->Text = L"0";
			// 
			// labelN3
			// 
			this->labelN3->AutoSize = true;
			this->labelN3->Location = System::Drawing::Point(40, 12);
			this->labelN3->Name = L"labelN3";
			this->labelN3->Size = System::Drawing::Size(18, 20);
			this->labelN3->TabIndex = 8;
			this->labelN3->Text = L"0";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(7, 113);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(187, 20);
			this->label33->TabIndex = 7;
			this->label33->Text = L"Максимальная ошибка:";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(7, 93);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(154, 20);
			this->label34->TabIndex = 6;
			this->label34->Text = L"Минимальный шаг:";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(7, 92);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(0, 20);
			this->label35->TabIndex = 5;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(7, 72);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(161, 20);
			this->label36->TabIndex = 4;
			this->label36->Text = L"Максимальный шаг:";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(7, 52);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(131, 20);
			this->label37->TabIndex = 3;
			this->label37->Text = L"Число делений:";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(7, 32);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(137, 20);
			this->label38->TabIndex = 2;
			this->label38->Text = L"Число удвоений:";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(7, 12);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(27, 20);
			this->label39->TabIndex = 1;
			this->label39->Text = L"n=";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->labelMistakeIndex2);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Controls->Add(this->labelMistake2);
			this->panel2->Controls->Add(this->labelMin2);
			this->panel2->Controls->Add(this->labelMax2);
			this->panel2->Controls->Add(this->labelSmaller2);
			this->panel2->Controls->Add(this->labelDouble2);
			this->panel2->Controls->Add(this->labelN2);
			this->panel2->Controls->Add(this->label25);
			this->panel2->Controls->Add(this->label26);
			this->panel2->Controls->Add(this->label27);
			this->panel2->Controls->Add(this->label28);
			this->panel2->Controls->Add(this->label29);
			this->panel2->Controls->Add(this->label30);
			this->panel2->Controls->Add(this->label31);
			this->panel2->Location = System::Drawing::Point(13, 70);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(234, 168);
			this->panel2->TabIndex = 17;
			this->panel2->Visible = false;
			// 
			// labelMistakeIndex2
			// 
			this->labelMistakeIndex2->AutoSize = true;
			this->labelMistakeIndex2->Location = System::Drawing::Point(95, 130);
			this->labelMistakeIndex2->Name = L"labelMistakeIndex2";
			this->labelMistakeIndex2->Size = System::Drawing::Size(18, 20);
			this->labelMistakeIndex2->TabIndex = 15;
			this->labelMistakeIndex2->Text = L"0";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(7, 130);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(90, 20);
			this->label18->TabIndex = 14;
			this->label18->Text = L"в точке x =";
			// 
			// labelMistake2
			// 
			this->labelMistake2->AutoSize = true;
			this->labelMistake2->Location = System::Drawing::Point(200, 113);
			this->labelMistake2->Name = L"labelMistake2";
			this->labelMistake2->Size = System::Drawing::Size(18, 20);
			this->labelMistake2->TabIndex = 13;
			this->labelMistake2->Text = L"0";
			// 
			// labelMin2
			// 
			this->labelMin2->AutoSize = true;
			this->labelMin2->Location = System::Drawing::Point(167, 93);
			this->labelMin2->Name = L"labelMin2";
			this->labelMin2->Size = System::Drawing::Size(18, 20);
			this->labelMin2->TabIndex = 12;
			this->labelMin2->Text = L"0";
			// 
			// labelMax2
			// 
			this->labelMax2->AutoSize = true;
			this->labelMax2->Location = System::Drawing::Point(174, 72);
			this->labelMax2->Name = L"labelMax2";
			this->labelMax2->Size = System::Drawing::Size(18, 20);
			this->labelMax2->TabIndex = 11;
			this->labelMax2->Text = L"0";
			// 
			// labelSmaller2
			// 
			this->labelSmaller2->AutoSize = true;
			this->labelSmaller2->Location = System::Drawing::Point(144, 52);
			this->labelSmaller2->Name = L"labelSmaller2";
			this->labelSmaller2->Size = System::Drawing::Size(18, 20);
			this->labelSmaller2->TabIndex = 10;
			this->labelSmaller2->Text = L"0";
			// 
			// labelDouble2
			// 
			this->labelDouble2->AutoSize = true;
			this->labelDouble2->Location = System::Drawing::Point(150, 32);
			this->labelDouble2->Name = L"labelDouble2";
			this->labelDouble2->Size = System::Drawing::Size(18, 20);
			this->labelDouble2->TabIndex = 9;
			this->labelDouble2->Text = L"0";
			// 
			// labelN2
			// 
			this->labelN2->AutoSize = true;
			this->labelN2->Location = System::Drawing::Point(40, 12);
			this->labelN2->Name = L"labelN2";
			this->labelN2->Size = System::Drawing::Size(18, 20);
			this->labelN2->TabIndex = 8;
			this->labelN2->Text = L"0";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(7, 113);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(187, 20);
			this->label25->TabIndex = 7;
			this->label25->Text = L"Максимальная ошибка:";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(7, 93);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(154, 20);
			this->label26->TabIndex = 6;
			this->label26->Text = L"Минимальный шаг:";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(7, 92);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(0, 20);
			this->label27->TabIndex = 5;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(7, 72);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(161, 20);
			this->label28->TabIndex = 4;
			this->label28->Text = L"Максимальный шаг:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(7, 52);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(131, 20);
			this->label29->TabIndex = 3;
			this->label29->Text = L"Число делений:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(7, 32);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(137, 20);
			this->label30->TabIndex = 2;
			this->label30->Text = L"Число удвоений:";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(7, 12);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(27, 20);
			this->label31->TabIndex = 1;
			this->label31->Text = L"n=";
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
			this->panel1->Location = System::Drawing::Point(13, 70);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(234, 168);
			this->panel1->TabIndex = 16;
			// 
			// labelMistakeIndex1
			// 
			this->labelMistakeIndex1->AutoSize = true;
			this->labelMistakeIndex1->Location = System::Drawing::Point(95, 130);
			this->labelMistakeIndex1->Name = L"labelMistakeIndex1";
			this->labelMistakeIndex1->Size = System::Drawing::Size(18, 20);
			this->labelMistakeIndex1->TabIndex = 15;
			this->labelMistakeIndex1->Text = L"0";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(7, 130);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(90, 20);
			this->label16->TabIndex = 14;
			this->label16->Text = L"в точке x =";
			// 
			// labelMistake1
			// 
			this->labelMistake1->AutoSize = true;
			this->labelMistake1->Location = System::Drawing::Point(200, 113);
			this->labelMistake1->Name = L"labelMistake1";
			this->labelMistake1->Size = System::Drawing::Size(18, 20);
			this->labelMistake1->TabIndex = 13;
			this->labelMistake1->Text = L"0";
			// 
			// labelMin1
			// 
			this->labelMin1->AutoSize = true;
			this->labelMin1->Location = System::Drawing::Point(167, 93);
			this->labelMin1->Name = L"labelMin1";
			this->labelMin1->Size = System::Drawing::Size(18, 20);
			this->labelMin1->TabIndex = 12;
			this->labelMin1->Text = L"0";
			// 
			// labelMax1
			// 
			this->labelMax1->AutoSize = true;
			this->labelMax1->Location = System::Drawing::Point(174, 72);
			this->labelMax1->Name = L"labelMax1";
			this->labelMax1->Size = System::Drawing::Size(18, 20);
			this->labelMax1->TabIndex = 11;
			this->labelMax1->Text = L"0";
			// 
			// labelSmaller1
			// 
			this->labelSmaller1->AutoSize = true;
			this->labelSmaller1->Location = System::Drawing::Point(144, 52);
			this->labelSmaller1->Name = L"labelSmaller1";
			this->labelSmaller1->Size = System::Drawing::Size(18, 20);
			this->labelSmaller1->TabIndex = 10;
			this->labelSmaller1->Text = L"0";
			// 
			// labelDouble1
			// 
			this->labelDouble1->AutoSize = true;
			this->labelDouble1->Location = System::Drawing::Point(150, 32);
			this->labelDouble1->Name = L"labelDouble1";
			this->labelDouble1->Size = System::Drawing::Size(18, 20);
			this->labelDouble1->TabIndex = 9;
			this->labelDouble1->Text = L"0";
			// 
			// labelN1
			// 
			this->labelN1->AutoSize = true;
			this->labelN1->Location = System::Drawing::Point(40, 12);
			this->labelN1->Name = L"labelN1";
			this->labelN1->Size = System::Drawing::Size(18, 20);
			this->labelN1->TabIndex = 8;
			this->labelN1->Text = L"0";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(7, 113);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(187, 20);
			this->label15->TabIndex = 7;
			this->label15->Text = L"Максимальная ошибка:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(7, 93);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(154, 20);
			this->label14->TabIndex = 6;
			this->label14->Text = L"Минимальный шаг:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(7, 92);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 20);
			this->label13->TabIndex = 5;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(7, 72);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(161, 20);
			this->label12->TabIndex = 4;
			this->label12->Text = L"Максимальный шаг:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(7, 52);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(131, 20);
			this->label11->TabIndex = 3;
			this->label11->Text = L"Число делений:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(7, 32);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(137, 20);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Число удвоений:";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(7, 12);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 20);
			this->label9->TabIndex = 1;
			this->label9->Text = L"n=";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(9, 26);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(256, 34);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->Selected += gcnew System::Windows::Forms::TabControlEventHandler(this, &MyForm::tabControl1_Selected);
			this->tabControl1->Click += gcnew System::EventHandler(this, &MyForm::tabControl1_Click);
			// 
			// tabPage1
			// 
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage1->Size = System::Drawing::Size(248, 1);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"U0=1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage2->Size = System::Drawing::Size(248, 1);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"U0=2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(248, 1);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"U0=3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(248, 1);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"U0=4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Controls->Add(this->tabPage7);
			this->tabControl2->Controls->Add(this->tabPage8);
			this->tabControl2->Location = System::Drawing::Point(56, 446);
			this->tabControl2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(256, 34);
			this->tabControl2->TabIndex = 21;
			this->tabControl2->Selected += gcnew System::Windows::Forms::TabControlEventHandler(this, &MyForm::tabControl2_Selected);
			this->tabControl2->Click += gcnew System::EventHandler(this, &MyForm::tabControl2_Click);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->label1);
			this->tabPage5->Location = System::Drawing::Point(4, 29);
			this->tabPage5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage5->Size = System::Drawing::Size(248, 1);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"U0=1";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// tabPage6
			// 
			this->tabPage6->Location = System::Drawing::Point(4, 29);
			this->tabPage6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage6->Size = System::Drawing::Size(248, 1);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"U0=2";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// tabPage7
			// 
			this->tabPage7->Location = System::Drawing::Point(4, 29);
			this->tabPage7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(248, 1);
			this->tabPage7->TabIndex = 2;
			this->tabPage7->Text = L"U0=3";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// tabPage8
			// 
			this->tabPage8->Location = System::Drawing::Point(4, 29);
			this->tabPage8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Size = System::Drawing::Size(248, 1);
			this->tabPage8->TabIndex = 3;
			this->tabPage8->Text = L"U0=4";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->checkBox4);
			this->groupBox2->Controls->Add(this->checkBox3);
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Location = System::Drawing::Point(56, 203);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox2->Size = System::Drawing::Size(256, 62);
			this->groupBox2->TabIndex = 22;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Начальные значения";
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(180, 26);
			this->checkBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(44, 24);
			this->checkBox4->TabIndex = 26;
			this->checkBox4->Text = L"4";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(123, 26);
			this->checkBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(44, 24);
			this->checkBox3->TabIndex = 25;
			this->checkBox3->Text = L"3";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(66, 26);
			this->checkBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(44, 24);
			this->checkBox2->TabIndex = 24;
			this->checkBox2->Text = L"2";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(9, 26);
			this->checkBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(44, 24);
			this->checkBox1->TabIndex = 23;
			this->checkBox1->Text = L"1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnHeader7, this->columnHeader9,
					this->columnHeader10, this->columnHeader11, this->columnHeader12, this->columnHeader13, this->columnHeader14
			});
			this->listView2->FullRowSelect = true;
			this->listView2->GridLines = true;
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(56, 488);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(636, 487);
			this->listView2->TabIndex = 23;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			this->listView2->Visible = false;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"i";
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"Xi";
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"hi";
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"Vi";
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"V^i";
			// 
			// columnHeader13
			// 
			this->columnHeader13->Text = L"Vi-V^i";
			// 
			// columnHeader14
			// 
			this->columnHeader14->Text = L"Оц. л.п.";
			// 
			// listView3
			// 
			this->listView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnHeader15, this->columnHeader16,
					this->columnHeader17, this->columnHeader18, this->columnHeader19, this->columnHeader20, this->columnHeader21
			});
			this->listView3->FullRowSelect = true;
			this->listView3->GridLines = true;
			this->listView3->HideSelection = false;
			this->listView3->Location = System::Drawing::Point(56, 488);
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(636, 487);
			this->listView3->TabIndex = 24;
			this->listView3->UseCompatibleStateImageBehavior = false;
			this->listView3->View = System::Windows::Forms::View::Details;
			this->listView3->Visible = false;
			// 
			// columnHeader15
			// 
			this->columnHeader15->Text = L"i";
			// 
			// columnHeader16
			// 
			this->columnHeader16->Text = L"Xi";
			// 
			// columnHeader17
			// 
			this->columnHeader17->Text = L"hi";
			// 
			// columnHeader18
			// 
			this->columnHeader18->Text = L"Vi";
			// 
			// columnHeader19
			// 
			this->columnHeader19->Text = L"V^i";
			// 
			// columnHeader20
			// 
			this->columnHeader20->Text = L"Vi-V^i";
			// 
			// columnHeader21
			// 
			this->columnHeader21->Text = L"Оц. л.п.";
			// 
			// listView4
			// 
			this->listView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnHeader22, this->columnHeader23,
					this->columnHeader24, this->columnHeader25, this->columnHeader26, this->columnHeader27, this->columnHeader28
			});
			this->listView4->FullRowSelect = true;
			this->listView4->GridLines = true;
			this->listView4->HideSelection = false;
			this->listView4->Location = System::Drawing::Point(53, 488);
			this->listView4->Name = L"listView4";
			this->listView4->Size = System::Drawing::Size(636, 487);
			this->listView4->TabIndex = 25;
			this->listView4->UseCompatibleStateImageBehavior = false;
			this->listView4->View = System::Windows::Forms::View::Details;
			this->listView4->Visible = false;
			// 
			// columnHeader22
			// 
			this->columnHeader22->Text = L"i";
			// 
			// columnHeader23
			// 
			this->columnHeader23->Text = L"Xi";
			// 
			// columnHeader24
			// 
			this->columnHeader24->Text = L"hi";
			// 
			// columnHeader25
			// 
			this->columnHeader25->Text = L"Vi";
			// 
			// columnHeader26
			// 
			this->columnHeader26->Text = L"V^i";
			// 
			// columnHeader27
			// 
			this->columnHeader27->Text = L"Vi-V^i";
			// 
			// columnHeader28
			// 
			this->columnHeader28->Text = L"Оц. л.п.";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->областьЗначенийToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(232, 36);
			// 
			// областьЗначенийToolStripMenuItem
			// 
			this->областьЗначенийToolStripMenuItem->Name = L"областьЗначенийToolStripMenuItem";
			this->областьЗначенийToolStripMenuItem->Size = System::Drawing::Size(231, 32);
			this->областьЗначенийToolStripMenuItem->Text = L"Область значений";
			this->областьЗначенийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::областьЗначенийToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1664, 1025);
			this->Controls->Add(this->listView4);
			this->Controls->Add(this->listView3);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->tabControl2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBoxEpsilon);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->splitter1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxSigma);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxAlpha);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Name = L"MyForm";
			this->Text = L"Иванов Георгий 1 команда, задача №9";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->chart1->Series["Solution_U0_1"]->Points->Clear();
	this->chart1->Series["Solution_U0_2"]->Points->Clear();
	this->chart1->Series["Solution_U0_3"]->Points->Clear();
	this->chart1->Series["Solution_U0_4"]->Points->Clear();

	double x0 = 0;
	
	double alpha = System::Convert::ToDouble(textBoxAlpha->Text);
	double sigma = System::Convert::ToDouble(textBoxSigma->Text);
	double en;
	double epsilon = System::Convert::ToDouble(textBoxEpsilon->Text);

	int len= System::Convert::ToInt16(textBox1->Text);
	double h= System::Convert::ToDouble(textBox2->Text);
	double prevH = h;

	//переменные для контроля длины шага
	double modS = 0;
	

	int counterU = 0;
	int counterL = 0;

	double maxH = h;
	double minH = h;

	double maxMistake=0;
	int mistakeIndex = 0;

	listView1->Items->Clear();

	array<String^>^ ms = gcnew array< System::String^ >(7);
	//отрисовка всех графиков
	std::pair<int, std::string> kva[4];


	int CheckArray[4] = { 0,0,0,0 };
	kva[0].second = kva[1].second = kva[2].second = kva[3].second = "Solution_U0_";
	for (int i = 0; i < 4; i++)
	{
		kva[i].second.push_back('1'+i);
	}
	if (checkBox1->Checked)
	{
		kva[0].first = 1;
	}
	else
	{
		kva[0].first = 0;
	}
	if (checkBox2->Checked)
	{
		kva[1].first = 1;
	}
	else
	{
		kva[1].first = 0;
	}
	if (checkBox3->Checked)
	{
		kva[2].first = 1;
	}
	else
	{
		kva[2].first = 0;
	}
	if (checkBox4->Checked)
	{
		kva[3].first = 1;
	}
	else
	{
		kva[3].first = 0;
	}

	for (int j = 0; j < 4; j++)
	{
		if (kva[j].first == 0)
		{
			continue;
		}
		h = System::Convert::ToDouble(textBox2->Text);
		en = 0;
		x0 = 0;
		double v0 = j + 1;
		double vkr = v0;

		double prevX = x0;
		double prevV = v0;



		//
		chart1->Series[gcnew String(kva[j].second.c_str())]->Points->AddXY(x0, v0);//отрисовка начальной точки

		//
		ms[0] = "0";
		ms[1] = x0.ToString();
		ms[2] = "0";
		ms[3] = v0.ToString();
		ms[4] = vkr.ToString();
		ms[5] = (vkr - v0).ToString();
		ms[6] = en.ToString();

		ListViewItem^ listViewItem0 = gcnew ListViewItem(ms);//заполнение таблиц для каждого графика
		switch (j)
		{
		case 0:
			listView1->Items->Add(listViewItem0);
			break;
		case 1:
			listView2->Items->Add(listViewItem0);
			break;
		case 2:
			listView3->Items->Add(listViewItem0);
			break;
		case 3:
			listView4->Items->Add(listViewItem0);
			break;
		}
		


		int i = 0;
		for (i; i < len && v0>0; i++)
		{
			prevH = h;

			vkr = vkrNext(x0, v0, h, alpha, sigma);
			x0 = xNext(x0, h);
			v0 = vNext(x0, v0, h, alpha, sigma);
			en = pow(2, 3) * (vkr - v0) / (pow(2, 3) - 1);

			modS = mods(prevX, prevV, h, alpha, sigma);
			//если |S|<Epsilon->увеличиваем шаг в 2 раза и принимаем нашу точку
			if (modS < epsilon)
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
				en = pow(2, 3) * (vkr - prevV) / (pow(2, 3) - 1)*pow(2,3);
			}

			if (maxMistake < modS)
			{
				maxMistake = modS;
				mistakeIndex = i;
			}


			



			chart1->Series[gcnew String(kva[j].second.c_str())]->Points->AddXY(x0, v0);//отрисовка точки

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
			switch (j)
			{
			case 0:
				listView1->Items->Add(listViewItem0);
				break;
			case 1:
				listView2->Items->Add(listViewItem0);
				break;
			case 2:
				listView3->Items->Add(listViewItem0);
				break;
			case 3:
				listView4->Items->Add(listViewItem0);
				break;
			}



			prevX = x0;
			prevV = v0;

		}

		//Заполнение справок для каждого графика
		switch (j)
		{
		case 0:
			labelN1->Text = i.ToString();
			labelDouble1->Text = counterU.ToString();
			labelSmaller1->Text = counterL.ToString();
			labelMax1->Text = maxH.ToString();
			labelMin1->Text = minH.ToString();
			labelMistake1->Text = maxMistake.ToString();
			labelMistakeIndex1->Text = mistakeIndex.ToString();
			break;
		case 1:
			labelN2->Text = i.ToString();
			labelDouble2->Text = counterU.ToString();
			labelSmaller2->Text = counterL.ToString();
			labelMax2->Text = maxH.ToString();
			labelMin2->Text = minH.ToString();
			labelMistake2->Text = maxMistake.ToString();
			labelMistakeIndex2->Text = mistakeIndex.ToString();
			break;
		case 2:
			labelN3->Text = i.ToString();
			labelDouble3->Text = counterU.ToString();
			labelSmaller3->Text = counterL.ToString();
			labelMax3->Text = maxH.ToString();
			labelMin3->Text = minH.ToString();
			labelMistake3->Text = maxMistake.ToString();
			labelMistakeIndex3->Text = mistakeIndex.ToString();
			break;
		case 3:
			labelN4->Text = i.ToString();
			labelDouble4->Text = counterU.ToString();
			labelSmaller4->Text = counterL.ToString();
			labelMax4->Text = maxH.ToString();
			labelMin4->Text = minH.ToString();
			labelMistake4->Text = maxMistake.ToString();
			labelMistakeIndex4->Text = mistakeIndex.ToString();
			break;
		}
		
	}




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
private: System::Void tabControl1_Selected(System::Object^ sender, System::Windows::Forms::TabControlEventArgs^ e) {
	//смена отображения справок
	switch (tabControl1->SelectedIndex)
	{
	case 0:
		if (panel1->Visible == false)
		{
			panel1->Visible = true;
			if (panel2->Visible == true)
			{
				panel2->Visible = false;
				return;
			}
			if (panel3->Visible == true)
			{
				panel3->Visible = false;
				return;
			}
			if (panel4->Visible == true)
			{
				panel4->Visible = false;
				return;
			}
		}
		break;
	case 1:
		if (panel2->Visible == false)
		{
			panel2->Visible = true;
			if (panel1->Visible == true)
			{
				panel1->Visible = false;
				return;
			}
			if (panel3->Visible == true)
			{
				panel3->Visible = false;
				return;
			}
			if (panel4->Visible == true)
			{
				panel4->Visible = false;
				return;
			}
		}
		break;
	case 2:
		if (panel3->Visible == false)
		{
			panel3->Visible = true;
			if (panel1->Visible == true)
			{
				panel1->Visible = false;
				return;
			}
			if (panel2->Visible == true)
			{
				panel2->Visible = false;
				return;
			}
			if (panel4->Visible == true)
			{
				panel4->Visible = false;
				return;
			}
		}
		break;
	case 3:
		if (panel4->Visible == false)
		{
			panel4->Visible = true;
			if (panel1->Visible == true)
			{
				panel1->Visible = false;
				return;
			}
			if (panel2->Visible == true)
			{
				panel2->Visible = false;
				return;
			}
			if (panel3->Visible == true)
			{
				panel3->Visible = false;
				return;
			}
		}
		break;
	}
	
}
private: System::Void tabControl2_Selected(System::Object^ sender, System::Windows::Forms::TabControlEventArgs^ e) {
	switch (tabControl2->SelectedIndex)
	{
	case 0:
		if (listView1->Visible == false)
		{
			listView1->Visible = true;
			if (listView2->Visible == true)
			{
				listView2->Visible = false;
				return;
			}
			if (listView3->Visible == true)
			{
				listView3->Visible = false;
				return;
			}
			if (listView4->Visible == true)
			{
				listView4->Visible = false;
				return;
			}
		}
		break;
	case 1:
		if (listView2->Visible == false)
		{
			listView2->Visible = true;
			if (listView1->Visible == true)
			{
				listView1->Visible = false;
				return;
			}
			if (listView3->Visible == true)
			{
				listView3->Visible = false;
				return;
			}
			if (listView4->Visible == true)
			{
				listView4->Visible = false;
				return;
			}
		}
		break;
	case 2:
		if (listView3->Visible == false)
		{
			listView3->Visible = true;
			if (listView1->Visible == true)
			{
				listView1->Visible = false;
				return;
			}
			if (listView2->Visible == true)
			{
				listView2->Visible = false;
				return;
			}
			if (listView4->Visible == true)
			{
				listView4->Visible = false;
				return;
			}
		}
		break;
	case 3:
		if (listView4->Visible == false)
		{
			listView4->Visible = true;
			if (listView1->Visible == true)
			{
				listView1->Visible = false;
				return;
			}
			if (listView2->Visible == true)
			{
				listView2->Visible = false;
				return;
			}
			if (listView3->Visible == true)
			{
				listView3->Visible = false;
				return;
			}
		}
		break;
	}
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
	MessageBox::Show("sda");
}
};
}
