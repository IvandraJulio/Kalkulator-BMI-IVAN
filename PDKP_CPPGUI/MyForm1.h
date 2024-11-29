#pragma once

namespace PDKPCPPGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			
		}

	protected:
		
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_bmi;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox3;


	protected:

	private:
		
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_bmi = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Brown;
			this->button1->Location = System::Drawing::Point(812, 539);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 67);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Keluar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label2->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(351, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(368, 41);
			this->label2->TabIndex = 2;
			this->label2->Text = L"BMI Calculator";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(40, 244);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 29);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Berat Badan";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1901, 762);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 29);
			this->label4->TabIndex = 4;
			this->label4->Text = L"label4";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(34, 297);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 29);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Tinggi Badan";
			// 
			// btn_bmi
			// 
			this->btn_bmi->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->btn_bmi->Location = System::Drawing::Point(45, 542);
			this->btn_bmi->Name = L"btn_bmi";
			this->btn_bmi->Size = System::Drawing::Size(170, 47);
			this->btn_bmi->TabIndex = 6;
			this->btn_bmi->Text = L"Hitung";
			this->btn_bmi->UseVisualStyleBackColor = false;
			this->btn_bmi->Click += gcnew System::EventHandler(this, &MyForm1::btn_bmi_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(598, 232);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(239, 29);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Hasil Penghitungan";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm1::label5_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(236, 242);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(246, 35);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(238, 294);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(244, 35);
			this->textBox2->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label6->Location = System::Drawing::Point(34, 348);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(164, 29);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Jenis Kelamin";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Pria", L"Wanita" });
			this->comboBox1->Location = System::Drawing::Point(238, 348);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(244, 37);
			this->comboBox1->TabIndex = 11;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox1_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(34, 398);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 29);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Usia ";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(236, 398);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(244, 35);
			this->textBox3->TabIndex = 13;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1024, 618);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btn_bmi);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//(method modul 4)
//(function modul 4)
		Application::Exit();
	}
		   //(class modul 5 OOP)
	private:
		//(tipe data modul 1)
		double weight;
		double height;

		// (modul 6 Setter dan Getter)
		void setWeight(double w) {
			weight = w;
		}

		double getWeight() {
			return weight;
		}

		void setHeight(double h) {
			height = h / 100.0;
		}

		double getHeight() {
			return height;
		}

	private: System::Void btn_bmi_Click(System::Object^ sender, System::EventArgs^ e)
	{
		double Bmi;

		try
		{
			setWeight(Convert::ToDouble(textBox1->Text));
			setHeight(Convert::ToDouble(textBox2->Text));

			Bmi = getWeight() / (getHeight() * getHeight());

			if (Bmi < 18.5)
			{
				label5->Text = Bmi.ToString("F2") + "\nKekurangan berat badan \nPilih makanan yang padat akan kalori";
			}
			else if (Bmi >= 18.5 && Bmi <= 24.9)
			{
				label5->Text = Bmi.ToString("F2") + "\nBerat badan anda ideal \nBagus, Pastikan kalori sesuai \ndengan kebutuhan harian";
			}
			else if (Bmi >= 25 && Bmi <= 29.9)
			{
				label5->Text = Bmi.ToString("F2") + "\nBerat badan anda berlebih \nLakukan olahraga dan diet";
			}
			else if (Bmi >= 30)
			{
				label5->Text = Bmi.ToString("F2") + "\nBerat badan anda obesitas \nLakukan diet dan temui dokter untuk konsul";
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Masukkan berat dan tinggi badan secara benar", "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
