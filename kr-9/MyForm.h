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
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
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
	private: System::Windows::Forms::TextBox^ textBoxU0;

	private: System::Windows::Forms::Label^ label1;
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







	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxU0 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(26, 12);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"chisl_solution";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(590, 446);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(648, 271);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(272, 106);
			this->button1->TabIndex = 1;
			this->button1->Text = L"print";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBoxU0
			// 
			this->textBoxU0->Location = System::Drawing::Point(841, 35);
			this->textBoxU0->Name = L"textBoxU0";
			this->textBoxU0->Size = System::Drawing::Size(138, 26);
			this->textBoxU0->TabIndex = 2;
			this->textBoxU0->Text = L"1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(771, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"U0=";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(771, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"alpha=";
			// 
			// textBoxAlpha
			// 
			this->textBoxAlpha->Location = System::Drawing::Point(841, 67);
			this->textBoxAlpha->Name = L"textBoxAlpha";
			this->textBoxAlpha->Size = System::Drawing::Size(138, 26);
			this->textBoxAlpha->TabIndex = 4;
			this->textBoxAlpha->Text = L"1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(771, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"sigma=";
			// 
			// textBoxSigma
			// 
			this->textBoxSigma->Location = System::Drawing::Point(841, 99);
			this->textBoxSigma->Name = L"textBoxSigma";
			this->textBoxSigma->Size = System::Drawing::Size(138, 26);
			this->textBoxSigma->TabIndex = 6;
			this->textBoxSigma->Text = L"4";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(714, 137);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"число шагов=";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(841, 131);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(138, 26);
			this->textBox1->TabIndex = 8;
			this->textBox1->Text = L"1000";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(781, 169);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L"шаг=";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(841, 163);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(138, 26);
			this->textBox2->TabIndex = 10;
			this->textBox2->Text = L"0,001";
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(3, 780);
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
			this->listView1->Location = System::Drawing::Point(56, 487);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(458, 206);
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
			this->columnHeader8->Text = L"ќц. л.п.";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1103, 780);
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
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxU0);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
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
	double v0 = System::Convert::ToDouble(textBoxU0->Text);
	double vkr = v0;
	double alpha = System::Convert::ToDouble(textBoxAlpha->Text);
	double sigma = System::Convert::ToDouble(textBoxSigma->Text);
	double en;

	double len= System::Convert::ToDouble(textBox1->Text);
	double h= System::Convert::ToDouble(textBox2->Text);

	listView1->Items->Clear();

	array<String^ >^ ms = gcnew array< System::String^ >(7);
	

	for (int i = 0; i < len && v0>0; i++)
	{
		chart1->Series["chisl_solution"]->Points->AddXY(x0, v0);
		vkr = vkrNext(x0, v0, h, alpha, sigma);
		x0 = xNext(x0, h);
		v0 = vNext(x0, v0, h, alpha, sigma);
		en = pow(2,3)*(vkr - v0) / (pow(2, 3) - 1);

		//==============================
		
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
};
}
