#pragma once
#include "solution.cpp"

using namespace std;

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
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::ComboBox^ comboBox1;
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

	private: System::Windows::Forms::Label^ labelMistake;
	private: System::Windows::Forms::Label^ labelMin;
	private: System::Windows::Forms::Label^ labelMax;
	private: System::Windows::Forms::Label^ labelSmaller;
	private: System::Windows::Forms::Label^ labelDouble;
	private: System::Windows::Forms::Label^ labelN;
	private: System::Windows::Forms::Label^ label15;








	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->labelN = (gcnew System::Windows::Forms::Label());
			this->labelDouble = (gcnew System::Windows::Forms::Label());
			this->labelSmaller = (gcnew System::Windows::Forms::Label());
			this->labelMax = (gcnew System::Windows::Forms::Label());
			this->labelMin = (gcnew System::Windows::Forms::Label());
			this->labelMistake = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(891, 488);
			this->chart1->Name = L"chart1";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"chisl_solution";
			this->chart1->Series->Add(series3);
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
			this->label2->Location = System::Drawing::Point(465, 278);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"alpha=";
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
			this->textBox3->Text = L"0,000001";
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
			this->textBoxEpsilon->Text = L"0,000001";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->labelMistake);
			this->groupBox1->Controls->Add(this->labelMin);
			this->groupBox1->Controls->Add(this->labelMax);
			this->groupBox1->Controls->Add(this->labelSmaller);
			this->groupBox1->Controls->Add(this->labelDouble);
			this->groupBox1->Controls->Add(this->labelN);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
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
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(51, 15);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(67, 20);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Задача";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Тестовая", L"Основная" });
			this->comboBox1->Location = System::Drawing::Point(56, 65);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(169, 28);
			this->comboBox1->TabIndex = 20;
			this->comboBox1->Tag = L"";
			this->comboBox1->Text = L"Тестовая";
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
			// 
			// tabPage5
			// 
			this->tabPage5->Location = System::Drawing::Point(4, 29);
			this->tabPage5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage5->Size = System::Drawing::Size(248, 1);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"U0=1";
			this->tabPage5->UseVisualStyleBackColor = true;
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
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(20, 82);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 20);
			this->label9->TabIndex = 1;
			this->label9->Text = L"n=";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(20, 102);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(137, 20);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Число удвоений:";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(20, 122);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(131, 20);
			this->label11->TabIndex = 3;
			this->label11->Text = L"Число делений:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(20, 142);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(161, 20);
			this->label12->TabIndex = 4;
			this->label12->Text = L"Максимальный шаг:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(20, 162);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 20);
			this->label13->TabIndex = 5;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(20, 163);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(154, 20);
			this->label14->TabIndex = 6;
			this->label14->Text = L"Минимальный шаг:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(20, 183);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(187, 20);
			this->label15->TabIndex = 7;
			this->label15->Text = L"Максимальная ошибка:";
			// 
			// labelN
			// 
			this->labelN->AutoSize = true;
			this->labelN->Location = System::Drawing::Point(53, 82);
			this->labelN->Name = L"labelN";
			this->labelN->Size = System::Drawing::Size(18, 20);
			this->labelN->TabIndex = 8;
			this->labelN->Text = L"0";
			// 
			// labelDouble
			// 
			this->labelDouble->AutoSize = true;
			this->labelDouble->Location = System::Drawing::Point(163, 102);
			this->labelDouble->Name = L"labelDouble";
			this->labelDouble->Size = System::Drawing::Size(18, 20);
			this->labelDouble->TabIndex = 9;
			this->labelDouble->Text = L"0";
			// 
			// labelSmaller
			// 
			this->labelSmaller->AutoSize = true;
			this->labelSmaller->Location = System::Drawing::Point(157, 122);
			this->labelSmaller->Name = L"labelSmaller";
			this->labelSmaller->Size = System::Drawing::Size(18, 20);
			this->labelSmaller->TabIndex = 10;
			this->labelSmaller->Text = L"0";
			// 
			// labelMax
			// 
			this->labelMax->AutoSize = true;
			this->labelMax->Location = System::Drawing::Point(187, 142);
			this->labelMax->Name = L"labelMax";
			this->labelMax->Size = System::Drawing::Size(18, 20);
			this->labelMax->TabIndex = 11;
			this->labelMax->Text = L"0";
			// 
			// labelMin
			// 
			this->labelMin->AutoSize = true;
			this->labelMin->Location = System::Drawing::Point(180, 163);
			this->labelMin->Name = L"labelMin";
			this->labelMin->Size = System::Drawing::Size(18, 20);
			this->labelMin->TabIndex = 12;
			this->labelMin->Text = L"0";
			// 
			// labelMistake
			// 
			this->labelMistake->AutoSize = true;
			this->labelMistake->Location = System::Drawing::Point(213, 183);
			this->labelMistake->Name = L"labelMistake";
			this->labelMistake->Size = System::Drawing::Size(18, 20);
			this->labelMistake->TabIndex = 13;
			this->labelMistake->Text = L"0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1664, 1025);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->tabControl2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label8);
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
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->Series["chisl_solution"]->Points->Clear();
	double x0 = 0;
	double v0 = System::Convert::ToDouble(tabControl1->SelectedIndex+1);
	double vkr = v0;
	double alpha = System::Convert::ToDouble(textBoxAlpha->Text);
	double sigma = System::Convert::ToDouble(textBoxSigma->Text);
	double en;
	double epsilon = System::Convert::ToDouble(textBoxEpsilon->Text);

	double len= System::Convert::ToDouble(textBox1->Text);
	double h= System::Convert::ToDouble(textBox2->Text);
	double modS = 0;

	listView1->Items->Clear();

	array<String^ >^ ms = gcnew array< System::String^ >(7);
	

	for (int i = 0; i < len && v0>0; i++)
	{
		chart1->Series["chisl_solution"]->Points->AddXY(x0, v0);
		vkr = vkrNext(x0, v0, h, alpha, sigma);
		x0 = xNext(x0, h);
		v0 = vNext(x0, v0, h, alpha, sigma);
		en = pow(2,3)*(vkr - v0) / (pow(2, 3) - 1);

		






		//Заполнение справки и таблицы(ЗАКОНЧИТЬ)==============================
		
		ms[0] = i.ToString();
		ms[1] = x0.ToString();
		ms[2] = h.ToString();
		ms[3] = v0.ToString();
		ms[4] = vkr.ToString();
		ms[5] = (vkr-v0).ToString();
		ms[6] = en.ToString();
		
		ListViewItem^ listViewItem0 = gcnew ListViewItem(ms);
		listView1->Items->Add(listViewItem0);
	}
	chart1->Series["chisl_solution"]->Points->AddXY(x0, v0);
	x0 = xNext(x0, h);
	v0 = vNext(x0, v0, h, alpha, sigma);
	
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
	tabControl2->SelectTab(tabControl1->SelectedIndex);
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
