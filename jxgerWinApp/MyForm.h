#pragma once

namespace jxgerWinApp {

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
	private: System::Windows::Forms::Button^ button_exit;
    private: System::Windows::Forms::Label^ result_label;


    private: System::Windows::Forms::Button^ btn_0;
    private: System::Windows::Forms::Button^ btn_1;
    private: System::Windows::Forms::Button^ btn_2;
    private: System::Windows::Forms::Button^ btn_3;
    private: System::Windows::Forms::Button^ btn_4;
    private: System::Windows::Forms::Button^ btn_5;
    private: System::Windows::Forms::Button^ btn_6;
    private: System::Windows::Forms::Button^ btn_7;
    private: System::Windows::Forms::Button^ btn_8;
    private: System::Windows::Forms::Button^ btn_9;


    private: System::Windows::Forms::Button^ btn_divide;
    private: System::Windows::Forms::Button^ btn_multiply;
    private: System::Windows::Forms::Button^ btn_percent;
    private: System::Windows::Forms::Button^ btn_opposite;
    private: System::Windows::Forms::Button^ btn_diff;
    private: System::Windows::Forms::Button^ btn_sum;


    private: System::Windows::Forms::Button^ btn_equal;

    private: System::Windows::Forms::Button^ btn_clear;

    private: System::Windows::Forms::Button^ btn_comma;

    private: char user_operation = ' ';
    private: String^ first_num;
    private: bool is_equal = false;

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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->button_exit = (gcnew System::Windows::Forms::Button());
            this->result_label = (gcnew System::Windows::Forms::Label());
            this->btn_clear = (gcnew System::Windows::Forms::Button());
            this->btn_percent = (gcnew System::Windows::Forms::Button());
            this->btn_opposite = (gcnew System::Windows::Forms::Button());
            this->btn_divide = (gcnew System::Windows::Forms::Button());
            this->btn_multiply = (gcnew System::Windows::Forms::Button());
            this->btn_8 = (gcnew System::Windows::Forms::Button());
            this->btn_9 = (gcnew System::Windows::Forms::Button());
            this->btn_7 = (gcnew System::Windows::Forms::Button());
            this->btn_diff = (gcnew System::Windows::Forms::Button());
            this->btn_5 = (gcnew System::Windows::Forms::Button());
            this->btn_6 = (gcnew System::Windows::Forms::Button());
            this->btn_4 = (gcnew System::Windows::Forms::Button());
            this->btn_sum = (gcnew System::Windows::Forms::Button());
            this->btn_2 = (gcnew System::Windows::Forms::Button());
            this->btn_3 = (gcnew System::Windows::Forms::Button());
            this->btn_1 = (gcnew System::Windows::Forms::Button());
            this->btn_equal = (gcnew System::Windows::Forms::Button());
            this->btn_0 = (gcnew System::Windows::Forms::Button());
            this->btn_comma = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // button_exit
            // 
            this->button_exit->FlatAppearance->BorderSize = 0;
            this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button_exit->Location = System::Drawing::Point(242, 0);
            this->button_exit->Margin = System::Windows::Forms::Padding(2);
            this->button_exit->Name = L"button_exit";
            this->button_exit->Size = System::Drawing::Size(20, 20);
            this->button_exit->TabIndex = 0;
            this->button_exit->Text = L"X";
            this->button_exit->UseVisualStyleBackColor = true;
            this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
            // 
            // result_label
            // 
            this->result_label->Font = (gcnew System::Drawing::Font(L"Tahoma", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->result_label->Location = System::Drawing::Point(0, 30);
            this->result_label->Name = L"result_label";
            this->result_label->Size = System::Drawing::Size(250, 48);
            this->result_label->TabIndex = 1;
            this->result_label->Text = L"0";
            this->result_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
            // 
            // btn_clear
            // 
            this->btn_clear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn_clear->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
                static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
            this->btn_clear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btn_clear->Location = System::Drawing::Point(12, 81);
            this->btn_clear->Name = L"btn_clear";
            this->btn_clear->Size = System::Drawing::Size(55, 55);
            this->btn_clear->TabIndex = 2;
            this->btn_clear->Text = L"C";
            this->btn_clear->UseVisualStyleBackColor = false;
            this->btn_clear->Click += gcnew System::EventHandler(this, &MyForm::btn_clear_Click);
            // 
            // btn_percent
            // 
            this->btn_percent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn_percent->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
                static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
            this->btn_percent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_percent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btn_percent->Location = System::Drawing::Point(73, 81);
            this->btn_percent->Name = L"btn_percent";
            this->btn_percent->Size = System::Drawing::Size(55, 55);
            this->btn_percent->TabIndex = 3;
            this->btn_percent->Text = L"%";
            this->btn_percent->UseVisualStyleBackColor = false;
            this->btn_percent->Click += gcnew System::EventHandler(this, &MyForm::btn_percent_Click);
            // 
            // btn_opposite
            // 
            this->btn_opposite->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn_opposite->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
                static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
            this->btn_opposite->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_opposite->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btn_opposite->Location = System::Drawing::Point(12, 325);
            this->btn_opposite->Name = L"btn_opposite";
            this->btn_opposite->Size = System::Drawing::Size(55, 55);
            this->btn_opposite->TabIndex = 4;
            this->btn_opposite->Text = L"+/-";
            this->btn_opposite->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
            this->btn_opposite->UseVisualStyleBackColor = false;
            this->btn_opposite->Click += gcnew System::EventHandler(this, &MyForm::btn_opposite_Click);
            // 
            // btn_divide
            // 
            this->btn_divide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn_divide->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
                static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
            this->btn_divide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btn_divide->Location = System::Drawing::Point(134, 81);
            this->btn_divide->Name = L"btn_divide";
            this->btn_divide->Size = System::Drawing::Size(55, 55);
            this->btn_divide->TabIndex = 5;
            this->btn_divide->Text = L"/";
            this->btn_divide->UseVisualStyleBackColor = false;
            this->btn_divide->Click += gcnew System::EventHandler(this, &MyForm::btn_divide_Click);
            // 
            // btn_multiply
            // 
            this->btn_multiply->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn_multiply->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
                static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
            this->btn_multiply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btn_multiply->Location = System::Drawing::Point(195, 81);
            this->btn_multiply->Name = L"btn_multiply";
            this->btn_multiply->Size = System::Drawing::Size(55, 55);
            this->btn_multiply->TabIndex = 9;
            this->btn_multiply->Text = L"*";
            this->btn_multiply->UseVisualStyleBackColor = false;
            this->btn_multiply->Click += gcnew System::EventHandler(this, &MyForm::btn_multiply_Click);
            // 
            // btn_8
            // 
            this->btn_8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn_8->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
                static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
            this->btn_8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btn_8->Location = System::Drawing::Point(73, 142);
            this->btn_8->Name = L"btn_8";
            this->btn_8->Size = System::Drawing::Size(55, 55);
            this->btn_8->TabIndex = 8;
            this->btn_8->Text = L"8";
            this->btn_8->UseVisualStyleBackColor = false;
            this->btn_8->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
            // 
            // btn_9
            // 
            this->btn_9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn_9->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
                static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
            this->btn_9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btn_9->Location = System::Drawing::Point(134, 142);
            this->btn_9->Name = L"btn_9";
            this->btn_9->Size = System::Drawing::Size(55, 55);
            this->btn_9->TabIndex = 7;
            this->btn_9->Text = L"9";
            this->btn_9->UseVisualStyleBackColor = false;
            this->btn_9->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
            // 
            // btn_7
            // 
            this->btn_7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn_7->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
                static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
            this->btn_7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btn_7->Location = System::Drawing::Point(12, 142);
            this->btn_7->Name = L"btn_7";
            this->btn_7->Size = System::Drawing::Size(55, 55);
            this->btn_7->TabIndex = 6;
            this->btn_7->Text = L"7";
            this->btn_7->UseVisualStyleBackColor = false;
            this->btn_7->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
            // 
            // btn_diff
            // 
            this->btn_diff->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn_diff->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
                static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
            this->btn_diff->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_diff->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btn_diff->Location = System::Drawing::Point(195, 142);
            this->btn_diff->Name = L"btn_diff";
            this->btn_diff->Size = System::Drawing::Size(55, 55);
            this->btn_diff->TabIndex = 13;
            this->btn_diff->Text = L"-";
            this->btn_diff->UseVisualStyleBackColor = false;
            this->btn_diff->Click += gcnew System::EventHandler(this, &MyForm::btn_diff_Click);
            // 
            // btn_5
            // 
            this->btn_5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn_5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
                static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
            this->btn_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btn_5->Location = System::Drawing::Point(73, 203);
            this->btn_5->Name = L"btn_5";
            this->btn_5->Size = System::Drawing::Size(55, 55);
            this->btn_5->TabIndex = 12;
            this->btn_5->Text = L"5";
            this->btn_5->UseVisualStyleBackColor = false;
            this->btn_5->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
            // 
            // btn_6
            // 
            this->btn_6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn_6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
                static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
            this->btn_6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btn_6->Location = System::Drawing::Point(134, 203);
            this->btn_6->Name = L"btn_6";
            this->btn_6->Size = System::Drawing::Size(55, 55);
            this->btn_6->TabIndex = 11;
            this->btn_6->Text = L"6";
            this->btn_6->UseVisualStyleBackColor = false;
            this->btn_6->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
            // 
            // btn_4
            // 
            this->btn_4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn_4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
                static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
            this->btn_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btn_4->Location = System::Drawing::Point(12, 203);
            this->btn_4->Name = L"btn_4";
            this->btn_4->Size = System::Drawing::Size(55, 55);
            this->btn_4->TabIndex = 10;
            this->btn_4->Text = L"4";
            this->btn_4->UseVisualStyleBackColor = false;
            this->btn_4->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
            // 
            // btn_sum
            // 
            this->btn_sum->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn_sum->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
                static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
            this->btn_sum->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_sum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btn_sum->Location = System::Drawing::Point(195, 203);
            this->btn_sum->Name = L"btn_sum";
            this->btn_sum->Size = System::Drawing::Size(55, 55);
            this->btn_sum->TabIndex = 17;
            this->btn_sum->Text = L"+";
            this->btn_sum->UseVisualStyleBackColor = false;
            this->btn_sum->Click += gcnew System::EventHandler(this, &MyForm::btn_sum_Click);
            // 
            // btn_2
            // 
            this->btn_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn_2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
                static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
            this->btn_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btn_2->Location = System::Drawing::Point(73, 264);
            this->btn_2->Name = L"btn_2";
            this->btn_2->Size = System::Drawing::Size(55, 55);
            this->btn_2->TabIndex = 16;
            this->btn_2->Text = L"2";
            this->btn_2->UseVisualStyleBackColor = false;
            this->btn_2->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
            // 
            // btn_3
            // 
            this->btn_3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn_3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
                static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
            this->btn_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btn_3->Location = System::Drawing::Point(134, 264);
            this->btn_3->Name = L"btn_3";
            this->btn_3->Size = System::Drawing::Size(55, 55);
            this->btn_3->TabIndex = 15;
            this->btn_3->Text = L"3";
            this->btn_3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->btn_3->UseVisualStyleBackColor = false;
            this->btn_3->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
            // 
            // btn_1
            // 
            this->btn_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn_1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
                static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
            this->btn_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btn_1->Location = System::Drawing::Point(12, 264);
            this->btn_1->Name = L"btn_1";
            this->btn_1->Size = System::Drawing::Size(55, 55);
            this->btn_1->TabIndex = 14;
            this->btn_1->Text = L"1";
            this->btn_1->UseVisualStyleBackColor = false;
            this->btn_1->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
            // 
            // btn_equal
            // 
            this->btn_equal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
                static_cast<System::Int32>(static_cast<System::Byte>(5)));
            this->btn_equal->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
                static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
            this->btn_equal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btn_equal->Location = System::Drawing::Point(195, 264);
            this->btn_equal->Name = L"btn_equal";
            this->btn_equal->Size = System::Drawing::Size(55, 116);
            this->btn_equal->TabIndex = 21;
            this->btn_equal->Text = L"=";
            this->btn_equal->UseVisualStyleBackColor = false;
            this->btn_equal->Click += gcnew System::EventHandler(this, &MyForm::btn_equal_Click);
            // 
            // btn_0
            // 
            this->btn_0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn_0->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
                static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
            this->btn_0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btn_0->Location = System::Drawing::Point(73, 325);
            this->btn_0->Name = L"btn_0";
            this->btn_0->Size = System::Drawing::Size(55, 55);
            this->btn_0->TabIndex = 20;
            this->btn_0->Text = L"0";
            this->btn_0->UseVisualStyleBackColor = false;
            this->btn_0->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
            // 
            // btn_comma
            // 
            this->btn_comma->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn_comma->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
                static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
            this->btn_comma->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_comma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btn_comma->Location = System::Drawing::Point(134, 323);
            this->btn_comma->Name = L"btn_comma";
            this->btn_comma->Size = System::Drawing::Size(55, 55);
            this->btn_comma->TabIndex = 22;
            this->btn_comma->Text = L",";
            this->btn_comma->UseVisualStyleBackColor = false;
            this->btn_comma->Click += gcnew System::EventHandler(this, &MyForm::btn_comma_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
                static_cast<System::Int32>(static_cast<System::Byte>(33)));
            this->ClientSize = System::Drawing::Size(262, 398);
            this->Controls->Add(this->btn_comma);
            this->Controls->Add(this->btn_equal);
            this->Controls->Add(this->btn_0);
            this->Controls->Add(this->btn_sum);
            this->Controls->Add(this->btn_2);
            this->Controls->Add(this->btn_3);
            this->Controls->Add(this->btn_1);
            this->Controls->Add(this->btn_diff);
            this->Controls->Add(this->btn_5);
            this->Controls->Add(this->btn_6);
            this->Controls->Add(this->btn_4);
            this->Controls->Add(this->btn_multiply);
            this->Controls->Add(this->btn_8);
            this->Controls->Add(this->btn_9);
            this->Controls->Add(this->btn_7);
            this->Controls->Add(this->btn_divide);
            this->Controls->Add(this->btn_opposite);
            this->Controls->Add(this->btn_percent);
            this->Controls->Add(this->btn_clear);
            this->Controls->Add(this->result_label);
            this->Controls->Add(this->button_exit);
            this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Margin = System::Windows::Forms::Padding(2);
            this->Name = L"MyForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Calculator";
            this->ResumeLayout(false);

        }
#pragma endregion
	
   
    private:
        /// <summary>
        /// click on number button
        /// </summary>
        System::Void BtnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
            this->result_label->ForeColor = Color::White;
            Button^ clicked_button = safe_cast<Button^>(sender);

            if (this->result_label->Text == "0" || is_equal)
                this->result_label->Text = clicked_button->Text;
            else
                this->result_label->Text = this->result_label->Text + clicked_button->Text;
            is_equal = false;
        }

    
        
    private:
        /// <summary>
        /// exit from application
        /// </summary>
		System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) { 
			this->Close();

		}
    

    private:
        System::Void btn_sum_Click(System::Object^ sender, System::EventArgs^ e) {
            if (user_operation != ' ')
                EqualOperation();
            math_action('+');

        }

    private: 
        System::Void btn_diff_Click(System::Object^ sender, System::EventArgs^ e) {
            if (user_operation != ' ')
                EqualOperation();
            math_action('-');
        }
    private: 
        System::Void btn_multiply_Click(System::Object^ sender, System::EventArgs^ e) {
            if (user_operation != ' ')
                EqualOperation();
            math_action('*');

        }

    private: 
        System::Void btn_divide_Click(System::Object^ sender, System::EventArgs^ e) {
            if (user_operation != ' ')
                EqualOperation();
            math_action('/');

        }

    private: 
        System::Void btn_equal_Click(System::Object^ sender, System::EventArgs^ e) {
            if (user_operation == ' ')
                return;
            EqualOperation();

        }


    private: 
        System::Void btn_percent_Click(System::Object^ sender, System::EventArgs^ e) {
            if (user_operation != ' ')
                EqualOperation();
            math_action('%');
        }

    private:
        System::Void btn_comma_Click(System::Object^ sender, System::EventArgs^ e) {
            String^ text = this->result_label->Text;
            if (!text->Contains(",")) {
                this->result_label->Text = this->result_label->Text + ",";
                is_equal = false;
            }
        }

    private:
        System::Void math_action(char action) {
            this->first_num = this->result_label->Text;
            user_operation = action;
            this->result_label->Text = "0";
        }

    private:
        System::Void EqualOperation() {
            double num1 = System::Convert::ToDouble(this->first_num);
            double num2 = System::Convert::ToDouble(this->result_label->Text);

            double res = 0;

            switch (this->user_operation)
            {
            case '+':
                res = num1 + num2;
                break;
            case '-':
                res = num1 - num2;
                break;
            case '*':
                res = num1 * num2;
                break;
            case '/':
                if (num2 == 0) {
                    this->result_label->ForeColor = Color::DarkRed;
                    MessageBox::Show(this, "Division by zero!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                }
                else
                    res = num1 / num2;
                break;
            case '%':
                if((int)num1 == num1 && (int)num2 == num2 && num2 != 0)
                    res = (int)num1 % (int)num2;
                else {
                    this->result_label->ForeColor = Color::DarkRed;
                    MessageBox::Show(this, "It is impossible to take the remainder of a fractional number!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                }
                break;

            default:
                break;
            }

            this->result_label->Text = System::Convert::ToString(res);
            user_operation = ' ';
            is_equal = true;
        }

    private: 
        System::Void btn_clear_Click(System::Object^ sender, System::EventArgs^ e) {
			user_operation = ' ';
            first_num = "";
            this->result_label->Text = "0";
        }
    private: 
        System::Void btn_opposite_Click(System::Object^ sender, System::EventArgs^ e) {
            double num = System::Convert::ToDouble(this->result_label->Text);

            if (num > 0)
                this->result_label->Text = "-" + this->result_label->Text;
            else if (num < 0)
                this->result_label->Text = this->result_label->Text->Replace("-", "");
        }
    };
}
