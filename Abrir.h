#pragma once
#include <iostream>
#include <windows.h>
#include <string.h>
#include <array>

namespace Apantles {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Abrir
	/// </summary>
	public ref class Abrir : public System::Windows::Forms::Form
	{
	public:
		OpenFileDialog^ Openfdf = gcnew OpenFileDialog();
		SaveFileDialog^ redsem = gcnew SaveFileDialog();
		SaveFileDialog^ nucleo = gcnew SaveFileDialog();
	private: FontAwesome::Sharp::IconButton^ iconButton3;
	private: FontAwesome::Sharp::IconButton^ Iniciar;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;



	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Col10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Col9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Col8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Col7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Col6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Col5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Col4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Col3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Col2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Col1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColPS;


	private: FontAwesome::Sharp::IconButton^ iconButton4;
	private: FontAwesome::Sharp::IconButton^ iconButton5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DSC;

	public:
		OpenFileDialog^ Openfdd = gcnew OpenFileDialog();
		Abrir(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Abrir()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelMenu;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panelTitleBar;
	private: System::Windows::Forms::Label^ title;
	private: FontAwesome::Sharp::IconButton^ iconButton1;
	private: FontAwesome::Sharp::IconButton^ iconButton2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Abrir::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelTitleBar = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->iconButton1 = (gcnew FontAwesome::Sharp::IconButton());
			this->title = (gcnew System::Windows::Forms::Label());
			this->iconButton2 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton3 = (gcnew FontAwesome::Sharp::IconButton());
			this->Iniciar = (gcnew FontAwesome::Sharp::IconButton());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Col10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Col9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Col8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Col7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Col6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Col5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Col4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Col3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Col2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Col1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColPS = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DSC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->iconButton4 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton5 = (gcnew FontAwesome::Sharp::IconButton());
			this->panelMenu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelTitleBar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->panelMenu->Controls->Add(this->button2);
			this->panelMenu->Controls->Add(this->button1);
			this->panelMenu->Controls->Add(this->pictureBox1);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(150, 716);
			this->panelMenu->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->button2->Location = System::Drawing::Point(0, 306);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 105);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Núcleo de red";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &Abrir::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DarkMagenta;
			this->button1->Location = System::Drawing::Point(0, 186);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 105);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Tabla de pesos semánticos";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Abrir::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 138);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panelTitleBar
			// 
			this->panelTitleBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->panelTitleBar->Controls->Add(this->label2);
			this->panelTitleBar->Controls->Add(this->label1);
			this->panelTitleBar->Controls->Add(this->iconButton1);
			this->panelTitleBar->Controls->Add(this->title);
			this->panelTitleBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTitleBar->Location = System::Drawing::Point(150, 0);
			this->panelTitleBar->Name = L"panelTitleBar";
			this->panelTitleBar->Size = System::Drawing::Size(1141, 76);
			this->panelTitleBar->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 38.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1071, 76);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Núcleo de red";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Visible = false;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 38.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1071, 76);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Pesos semánticos";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Visible = false;
			this->label1->Click += gcnew System::EventHandler(this, &Abrir::label1_Click);
			// 
			// iconButton1
			// 
			this->iconButton1->AutoSize = true;
			this->iconButton1->Dock = System::Windows::Forms::DockStyle::Right;
			this->iconButton1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton1->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->iconButton1->IconChar = FontAwesome::Sharp::IconChar::Home;
			this->iconButton1->IconColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->iconButton1->IconSize = 50;
			this->iconButton1->Location = System::Drawing::Point(1071, 0);
			this->iconButton1->Margin = System::Windows::Forms::Padding(0);
			this->iconButton1->Name = L"iconButton1";
			this->iconButton1->Rotation = 0;
			this->iconButton1->Size = System::Drawing::Size(70, 76);
			this->iconButton1->TabIndex = 5;
			this->iconButton1->UseVisualStyleBackColor = true;
			this->iconButton1->Click += gcnew System::EventHandler(this, &Abrir::iconButton1_Click);
			// 
			// title
			// 
			this->title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->title->Dock = System::Windows::Forms::DockStyle::Fill;
			this->title->Font = (gcnew System::Drawing::Font(L"Century Gothic", 38.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->title->Location = System::Drawing::Point(0, 0);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(1141, 76);
			this->title->TabIndex = 4;
			this->title->Text = L"Añada los archivos solicitados";
			this->title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->title->Click += gcnew System::EventHandler(this, &Abrir::title_Click);
			// 
			// iconButton2
			// 
			this->iconButton2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->iconButton2->AutoSize = true;
			this->iconButton2->FlatAppearance->BorderSize = 0;
			this->iconButton2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton2->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->iconButton2->IconChar = FontAwesome::Sharp::IconChar::FileImport;
			this->iconButton2->IconColor = System::Drawing::SystemColors::ControlLightLight;
			this->iconButton2->IconSize = 120;
			this->iconButton2->Location = System::Drawing::Point(447, 79);
			this->iconButton2->Name = L"iconButton2";
			this->iconButton2->Rotation = 0;
			this->iconButton2->Size = System::Drawing::Size(559, 128);
			this->iconButton2->TabIndex = 3;
			this->iconButton2->Text = L"Insertar diccionario";
			this->iconButton2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->iconButton2->UseVisualStyleBackColor = true;
			this->iconButton2->Click += gcnew System::EventHandler(this, &Abrir::iconButton2_Click);
			// 
			// iconButton3
			// 
			this->iconButton3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->iconButton3->AutoSize = true;
			this->iconButton3->FlatAppearance->BorderSize = 0;
			this->iconButton3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton3->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->iconButton3->IconChar = FontAwesome::Sharp::IconChar::FileImport;
			this->iconButton3->IconColor = System::Drawing::SystemColors::ControlLightLight;
			this->iconButton3->IconSize = 120;
			this->iconButton3->Location = System::Drawing::Point(398, 213);
			this->iconButton3->Name = L"iconButton3";
			this->iconButton3->Rotation = 0;
			this->iconButton3->Size = System::Drawing::Size(695, 128);
			this->iconButton3->TabIndex = 4;
			this->iconButton3->Text = L"Insertar archivo filtrado";
			this->iconButton3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->iconButton3->UseVisualStyleBackColor = true;
			this->iconButton3->Click += gcnew System::EventHandler(this, &Abrir::iconButton3_Click);
			// 
			// Iniciar
			// 
			this->Iniciar->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Iniciar->FlatAppearance->BorderSize = 0;
			this->Iniciar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Iniciar->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->Iniciar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Iniciar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->Iniciar->IconChar = FontAwesome::Sharp::IconChar::Check;
			this->Iniciar->IconColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->Iniciar->IconSize = 180;
			this->Iniciar->Location = System::Drawing::Point(633, 501);
			this->Iniciar->Margin = System::Windows::Forms::Padding(0);
			this->Iniciar->Name = L"Iniciar";
			this->Iniciar->Rotation = 0;
			this->Iniciar->Size = System::Drawing::Size(160, 180);
			this->Iniciar->TabIndex = 7;
			this->Iniciar->Text = L"Iniciar";
			this->Iniciar->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->Iniciar->UseVisualStyleBackColor = true;
			this->Iniciar->Visible = false;
			this->Iniciar->Click += gcnew System::EventHandler(this, &Abrir::Iniciar_Click);
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::MistyRose;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(12) {
				this->Column1,
					this->Col10, this->Col9, this->Col8, this->Col7, this->Col6, this->Col5, this->Col4, this->Col3, this->Col2, this->Col1, this->ColPS
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::MistyRose;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->GridColor = System::Drawing::Color::LightPink;
			this->dataGridView1->Location = System::Drawing::Point(150, 76);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::MistyRose;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->Height = 30;
			this->dataGridView1->Size = System::Drawing::Size(1141, 640);
			this->dataGridView1->TabIndex = 20;
			this->dataGridView1->Visible = false;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->HeaderText = L"Palabras definidoras";
			this->Column1->Name = L"Column1";
			// 
			// Col10
			// 
			this->Col10->HeaderText = L"1";
			this->Col10->Name = L"Col10";
			this->Col10->Width = 50;
			// 
			// Col9
			// 
			this->Col9->HeaderText = L"2";
			this->Col9->Name = L"Col9";
			this->Col9->Width = 50;
			// 
			// Col8
			// 
			this->Col8->HeaderText = L"3";
			this->Col8->Name = L"Col8";
			this->Col8->Width = 50;
			// 
			// Col7
			// 
			this->Col7->HeaderText = L"4";
			this->Col7->Name = L"Col7";
			this->Col7->Width = 50;
			// 
			// Col6
			// 
			this->Col6->HeaderText = L"5";
			this->Col6->Name = L"Col6";
			this->Col6->Width = 50;
			// 
			// Col5
			// 
			this->Col5->HeaderText = L"6";
			this->Col5->Name = L"Col5";
			this->Col5->Width = 50;
			// 
			// Col4
			// 
			this->Col4->HeaderText = L"7";
			this->Col4->Name = L"Col4";
			this->Col4->Width = 50;
			// 
			// Col3
			// 
			this->Col3->HeaderText = L"8";
			this->Col3->Name = L"Col3";
			this->Col3->Width = 50;
			// 
			// Col2
			// 
			this->Col2->HeaderText = L"9";
			this->Col2->Name = L"Col2";
			this->Col2->Width = 50;
			// 
			// Col1
			// 
			this->Col1->HeaderText = L"10";
			this->Col1->Name = L"Col1";
			this->Col1->Width = 50;
			// 
			// ColPS
			// 
			this->ColPS->HeaderText = L"Peso Semántico";
			this->ColPS->Name = L"ColPS";
			// 
			// dataGridView2
			// 
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->dataGridView2->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::MistyRose;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn12, this->DSC
			});
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::MistyRose;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->GridColor = System::Drawing::Color::LightPink;
			this->dataGridView2->Location = System::Drawing::Point(150, 76);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::MistyRose;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView2->RowHeadersVisible = false;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView2->RowsDefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridView2->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView2->RowTemplate->Height = 30;
			this->dataGridView2->Size = System::Drawing::Size(1141, 640);
			this->dataGridView2->TabIndex = 21;
			this->dataGridView2->Visible = false;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Palabras definidoras";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"Peso Semántico";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->Width = 200;
			// 
			// DSC
			// 
			this->DSC->HeaderText = L"Distancia semántica cuantitativa";
			this->DSC->Name = L"DSC";
			this->DSC->Width = 200;
			// 
			// iconButton4
			// 
			this->iconButton4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->iconButton4->FlatAppearance->BorderSize = 0;
			this->iconButton4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton4->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->iconButton4->IconChar = FontAwesome::Sharp::IconChar::Check;
			this->iconButton4->IconColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->iconButton4->IconSize = 180;
			this->iconButton4->Location = System::Drawing::Point(554, 493);
			this->iconButton4->Margin = System::Windows::Forms::Padding(0);
			this->iconButton4->Name = L"iconButton4";
			this->iconButton4->Rotation = 0;
			this->iconButton4->Size = System::Drawing::Size(376, 202);
			this->iconButton4->TabIndex = 25;
			this->iconButton4->Text = L"Iniciar con guardado";
			this->iconButton4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->iconButton4->UseVisualStyleBackColor = true;
			this->iconButton4->Visible = false;
			this->iconButton4->Click += gcnew System::EventHandler(this, &Abrir::iconButton4_Click);
			// 
			// iconButton5
			// 
			this->iconButton5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->iconButton5->AutoSize = true;
			this->iconButton5->FlatAppearance->BorderSize = 0;
			this->iconButton5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton5->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->iconButton5->IconChar = FontAwesome::Sharp::IconChar::FileExport;
			this->iconButton5->IconColor = System::Drawing::SystemColors::ControlLightLight;
			this->iconButton5->IconSize = 120;
			this->iconButton5->Location = System::Drawing::Point(303, 344);
			this->iconButton5->Name = L"iconButton5";
			this->iconButton5->Rotation = 0;
			this->iconButton5->Size = System::Drawing::Size(800, 128);
			this->iconButton5->TabIndex = 23;
			this->iconButton5->Text = L"Quiero guardar mis resultados";
			this->iconButton5->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->iconButton5->UseVisualStyleBackColor = true;
			this->iconButton5->Click += gcnew System::EventHandler(this, &Abrir::iconButton5_Click);
			// 
			// Abrir
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->ClientSize = System::Drawing::Size(1291, 716);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Iniciar);
			this->Controls->Add(this->iconButton3);
			this->Controls->Add(this->iconButton2);
			this->Controls->Add(this->panelTitleBar);
			this->Controls->Add(this->panelMenu);
			this->Controls->Add(this->iconButton5);
			this->Controls->Add(this->iconButton4);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Abrir";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Red Semántica";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Abrir::Abrir_Load);
			this->panelMenu->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panelTitleBar->ResumeLayout(false);
			this->panelTitleBar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//Activador de boton de inicio
//_________________________________________________________________________________________________________________________________________________________________________
	void Chequeo() {
		if (this->iconButton2->IconColor == System::Drawing::Color::DarkMagenta &&
			this->iconButton3->IconColor == System::Drawing::Color::DarkMagenta) {
			this->Iniciar->Visible = true;
			this->iconButton4->Visible = false;
		}
		if (this->iconButton2->IconColor == System::Drawing::Color::DarkMagenta &&
			this->iconButton3->IconColor == System::Drawing::Color::DarkMagenta &&
			this->iconButton5->IconColor == System::Drawing::Color::DarkMagenta) {
			this->iconButton4->Visible = true;
			this->Iniciar->Visible = false;
		}
		return;
	}
private: System::Void Abrir_Load(System::Object^ sender, System::EventArgs^ e) {

}
//Boton de casa
//_________________________________________________________________________________________________________________________________________________________________________
private: System::Void iconButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->Hide();
	this->Close();
}
private: System::Void title_Click(System::Object^ sender, System::EventArgs^ e) {
}
//Boton de insertar diccionario
//_________________________________________________________________________________________________________________________________________________________________________
private: System::Void iconButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	try{
	Stream^ Dicci;
	Openfdd->Filter = "Excel|*.csv";
	Openfdd->Title = "Inserción de archivo diccionario";

	if (Openfdd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		if ((Dicci = Openfdd->OpenFile()) != nullptr) {
			String^ caption = "Inserción de archivo diccionario";
			String^ strfilename = "Se ha añadido el archivo diccionario con ruta " + Openfdd->FileName;
			MessageBox::Show(strfilename, caption);
			Dicci->Close();
			this->iconButton2->ForeColor = System::Drawing::Color::DarkMagenta;
			this->iconButton2->IconColor = System::Drawing::Color::DarkMagenta;
		}
		else
			MessageBox::Show("El archivo se encuentra dañado");
	}
	else
		MessageBox::Show("No se seleccionó ningun archivo");
	Chequeo();
	}
	catch (Exception^ e) {
		MessageBox::Show("Error en el archivo, favor de verificar formato");
	}
}
//Boton de insertar archivo
//_________________________________________________________________________________________________________________________________________________________________________
private: System::Void iconButton3_Click(System::Object^ sender, System::EventArgs^ e) {
	try{
	Stream^ filtrao;
	Openfdf->Filter = "Excel|*.csv";
	Openfdf->Title = "Inserción de archivo filtrado";

	if (Openfdf->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		if ((filtrao = Openfdf->OpenFile()) != nullptr) {
			String^ caption = "Inserción de archivo filtrado";
			String^ strfilename = "Se ha añadido el archivo filtrado con ruta " + Openfdf->FileName;
			MessageBox::Show(strfilename, caption);
			filtrao->Close();
			this->iconButton3->ForeColor = System::Drawing::Color::DarkMagenta;
			this->iconButton3->IconColor = System::Drawing::Color::DarkMagenta;
		}
		else
			MessageBox::Show("El archivo se encuentra dañado");
	}
	else
		MessageBox::Show("No se seleccionó ningun archivo");
	Chequeo();
	}
	   catch (Exception^ e) {
		   MessageBox::Show("Error en el archivo, favor de verificar formato");
	   }
}
//Boton de guardar archivo
//_________________________________________________________________________________________________________________________________________________________________________
private: System::Void iconButton5_Click(System::Object^ sender, System::EventArgs^ e) {
	try{
	String^ caption = "Guardado de tabla de peso semántico";
	String^ strfilename = "Elija donde desea guardar la tabla semántica";
	MessageBox::Show(strfilename, caption);
	Stream^ red;
	redsem->Filter = "Excel|*.csv";
	redsem->FilterIndex = 2;
	redsem->RestoreDirectory = true;
	redsem->Title = "Elegir destino de archivo filtrado";
	if (redsem->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		if ((red = redsem->OpenFile()) != nullptr) {
			red->Close();
			this->iconButton5->ForeColor = System::Drawing::Color::DarkMagenta;
			this->iconButton5->IconColor = System::Drawing::Color::DarkMagenta;
		}
		else
			MessageBox::Show("No se definio un nombre o lugar");
	}
	else
		MessageBox::Show("No se definio un nombre o lugar");

	String^ capt = "Guardado de tabla nucleo de red";
	String^ ilename = "Elija donde desea guardar la tabla nucleo de red";
	MessageBox::Show(ilename, capt);

	Stream^ nuc;
	nucleo->Filter = "Excel|*.csv";
	nucleo->FilterIndex = 2;
	nucleo->RestoreDirectory = true;
	nucleo->Title = "Elegir destino de archivo filtrado";
	if (nucleo->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		if ((nuc = nucleo->OpenFile()) != nullptr) {
			nuc->Close();
			this->iconButton5->ForeColor = System::Drawing::Color::DarkMagenta;
			this->iconButton5->IconColor = System::Drawing::Color::DarkMagenta;
		}
		else
			MessageBox::Show("No se definio un nombre o lugar");
	}
	else
		MessageBox::Show("No se definio un nombre o lugar");

	Chequeo();
	}
	catch (Exception^ e) {
		MessageBox::Show("Error en el archivo, favor de verificar formato");
	}
}
//Boton de accion
//_________________________________________________________________________________________________________________________________________________________________________
private: System::Void Iniciar_Click(System::Object^ sender, System::EventArgs^ e) {
	try{
	this->iconButton2->Hide();
	this->iconButton3->Hide();
	this->iconButton4->Hide();
	this->iconButton5->Hide();
	this->Iniciar->Hide();
	this->title->Hide();
	this->dataGridView1->Visible = true;
	this->label1->Visible = true;
	this->button1->Visible = true;
	this->button2->Visible = true;
	//_________________________________________________________________________________________________________________________________________________________________________
	//Obtenemos numero de lineas en filtrado
	//_________________________________________________________________________________________________________________________________________________________________________
	StreamReader^ lineas_F = File::OpenText(Openfdf->FileName);
	int num_lineasF;
	while (lineas_F->ReadLine() != nullptr) { num_lineasF++; }
	lineas_F->Close();
	//_________________________________________________________________________________________________________________________________________________________________________
	//Obtenemos numero de lineas en diccionario
	//_________________________________________________________________________________________________________________________________________________________________________
	StreamReader^ lineas_D = File::OpenText(Openfdd->FileName);
	int num_lineasD;
	while (lineas_D->ReadLine() != nullptr) { num_lineasD++; }
	lineas_D->Close();
	//_________________________________________________________________________________________________________________________________________________________________________
	//Obtenemos arreglo de palabras definidoras
	//_________________________________________________________________________________________________________________________________________________________________________
	StreamReader^ defis = File::OpenText(Openfdd->FileName);
	int num_definidoras = 0;
	String^ renglon_D;
	array<String^>^ extraccion;
	array<String^>^ definidoras = gcnew array<String^>(num_lineasD);
	renglon_D = defis->ReadLine();
	for (int a = 1; a < num_lineasD; a++) {
		renglon_D = defis->ReadLine();
		if (renglon_D->IsNullOrEmpty(renglon_D)) {}
		else {
			extraccion = renglon_D->Split(',');
			if (extraccion[0]->IsNullOrEmpty(extraccion[0])) {}
			else {
				definidoras[num_definidoras] = extraccion[0];
				num_definidoras++;
			}
		}
	}
	defis->Close();
//_________________________________________________________________________________________________________________________________________________________________________
//Obtenemos arreglo de palabras definidoras
//_________________________________________________________________________________________________________________________________________________________________________
	int aux=0;
	String^ renglon_F;
	array<String^>^ palabras; 
	array<int^>^ peso = gcnew array<int^>(num_lineasD);
	int uno, dos, tres, cuatro, cinco, seis, siete, ocho, nueve, diez = 0;

	for (int d = 0; d < num_definidoras; d++){	    						//Por cada palabra definidora
		uno = 0; dos = 0;tres = 0;cuatro = 0; cinco = 0; seis = 0; siete = 0; ocho = 0;nueve = 0; diez = 0;
	StreamReader^ final = File::OpenText(Openfdf->FileName);

		for (int l = 0; l < num_lineasF; l++){								//Leo todo el archivo filtrado
			renglon_F = final->ReadLine();								    //Linea por linea
			if (renglon_F->IsNullOrEmpty(renglon_F)) { }						//Si la linea leida no está vacia
			else {
				palabras = renglon_F->Split(',');							//Separo la linea en un arreglo
				int tam_F = palabras->Length;								//Consigo el tamaño del arreglo

				for (int p = 1; p < tam_F; p++) {							//A cada palabra del arreglo
					if (palabras[p]->IsNullOrEmpty(palabras[p])) {}			//Si no está vacia
					else if(palabras[p]==definidoras[d]) {					//La comparo con la palabra definidora en turno
						Int32::TryParse(palabras[p+1],aux);					//Consigo el valor que se le dio a dicha Pd que se encuentra en palabras[p+1]
						if (aux == 1) { uno++; }									//Incremento en uno a valores[] en la posicion del valor dado arriba
						else if (aux == 2) { dos++; }
						else if (aux == 3) { tres++; }
						else if (aux == 4) { cuatro++; }
						else if (aux == 5) { cinco++; }
						else if (aux == 6) { seis++; }
						else if (aux == 7) { siete++; }
						else if (aux == 8) { ocho++; }
						else if (aux == 9) { nueve++; }
						else if (aux == 10) { diez++; }
					}
				}
			}
		}

		int n = this->dataGridView1->Rows->Add();							//añadimos un nuevo renglon a la tabla
		if (uno > 0) { this->dataGridView1->Rows[n]->Cells[1]->Value = uno; }//Imprimo los valores de 0->9 en  la tabla en sus respectivas celdas
		if (dos > 0) { this->dataGridView1->Rows[n]->Cells[2]->Value = dos; }
		if (tres > 0) { this->dataGridView1->Rows[n]->Cells[3]->Value = tres; }
		if (cuatro > 0) { this->dataGridView1->Rows[n]->Cells[4]->Value = cuatro; }
		if (cinco > 0) { this->dataGridView1->Rows[n]->Cells[5]->Value = cinco; }
		if (seis > 0) { this->dataGridView1->Rows[n]->Cells[6]->Value = seis; }
		if (siete > 0) { this->dataGridView1->Rows[n]->Cells[7]->Value = siete; }
		if (ocho > 0) { this->dataGridView1->Rows[n]->Cells[8]->Value = ocho; }
		if (nueve > 0) { this->dataGridView1->Rows[n]->Cells[9]->Value = nueve; }
		if (diez > 0) { this->dataGridView1->Rows[n]->Cells[10]->Value = diez; }
		
		uno = uno * 10;														// Multiplico cada valor de valores por su rank (valores[0]=valores[0]*10
		dos = dos * 9;														//												 valores[1]=valores[1]*9 
		tres = tres * 8;
		cuatro = cuatro * 7;
		cinco = cinco * 6;
		seis = seis * 5;
		siete = siete * 4;
		ocho = ocho * 3;
		nueve = nueve * 2;
		diez = diez * 1;

		peso[d] = uno + dos + tres + cuatro + cinco + seis + siete + ocho + nueve + diez;	//Hago la suma de valores de 0->9 y su suma la añado a peso[d]
			   
		this->dataGridView1->Rows[d]->Cells[11]->Value = peso[d];		    //Imprimo el valor de peso[d] en la celda PS o SW	
		final->Close();
	}

//_________________________________________________________________________________________________________________________________________________________________________
//Añadimos palabras definidoras a la tabla 1
//_________________________________________________________________________________________________________________________________________________________________________
	for (int e = 0; e < num_definidoras; e++) {
		this->dataGridView1->Rows[e]->Cells[0]->Value = definidoras[e];
	}
//_________________________________________________________________________________________________________________________________________________________________________
//Añadimos palabras definidoras y peso semantico a la tabla 2
//_________________________________________________________________________________________________________________________________________________________________________
	//Ordenamos de mayor a menor
	//-------------------------------
	System::Int32^ au;
	System::Int32^ ua;
	String^ curr;
	int curri;
	String^ next;
	int nexti;
	String^ sr;
	String^ rs;
	for (int v = 0; v < 1000; v++)	{
		for (int i = 0; i < num_definidoras - 1; i++) {			//Recorremos el arreglo de pesos semanticos
			if (peso[i] == 0) {}
			else {
				curr = peso[i]->ToString();
				Int32::TryParse(curr, curri);
			}

			if (peso[i + 1] == 0) {}
			else {
				next = peso[i + 1]->ToString();
				Int32::TryParse(next, nexti);
			}

			if (nexti > curri) {						//Si el peso en la posicion	i es menor que el de la posicion i+1
				au = peso[i + 1];							//ponemos el valor del mayor en el menor y viceversa para peso y definidora
				ua = peso[i];
				peso[i + 1] = ua;
				peso[i] = au;
				sr = definidoras[i + 1];
				rs = definidoras[i];
				definidoras[i + 1] = rs;
				definidoras[i] = sr;
			}
		}
	}
//_________________________________________________________________________________________________________________________________________________________________________
//Creamos Distancia semantica cuantitativa
//_________________________________________________________________________________________________________________________________________________________________________
	array<int^>^ dist = gcnew array<int^>(num_lineasD);
	System::Int32^ cien = peso[0];
	String^ ciens = cien->ToString();
	int cieni;
	Int32::TryParse(ciens, cieni);
	int auxi;
	String^ porc;
	int porci;
	for (int e = 0; e < num_definidoras; e++) {
		if (peso[e] == 0) {}
		else {
			porc = peso[e]->ToString();
			Int32::TryParse(porc, porci);
			auxi = porci * 100;
			dist[e] = auxi/cieni;
		}
		
	}
//_________________________________________________________________________________________________________________________________________________________________________
//Añadimos palabras definidoras, pesos semanticos ordenados y Distancia semantica cuantitativa a la tabla 2
//_________________________________________________________________________________________________________________________________________________________________________

	for (int e = 0; e < num_definidoras; e++) {
		int n = this->dataGridView2->Rows->Add();
		this->dataGridView2->Rows[n]->Cells[0]->Value = definidoras[e];
		this->dataGridView2->Rows[n]->Cells[1]->Value = peso[e];
		this->dataGridView2->Rows[n]->Cells[2]->Value = dist[e]+"%";
	}
	}
	catch (Exception^ e) {
		MessageBox::Show("Error en el archivo, favor de verificar formato");
	}
}
//Boton de tabla de pesos semanticos 
//_________________________________________________________________________________________________________________________________________________________________________
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button1->ForeColor = System::Drawing::Color::DarkMagenta;
	this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
		static_cast<System::Int32>(static_cast<System::Byte>(200)));
	this->dataGridView1->Visible = true;
	this->dataGridView2->Visible = false;
	this->label1->Visible = true;
	this->label2->Visible = false;
}
//Boton nucleo de red 
//_________________________________________________________________________________________________________________________________________________________________________
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button2->ForeColor = System::Drawing::Color::DarkMagenta;
	this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
		static_cast<System::Int32>(static_cast<System::Byte>(200)));
	this->dataGridView1->Visible = false;
	this->dataGridView2->Visible = true;
	this->label1->Visible = false;
	this->label2->Visible = true;
}
//Boton exportar tabla de pesos
//_________________________________________________________________________________________________________________________________________________________________________
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
		static_cast<System::Int32>(static_cast<System::Byte>(200)));
	this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
		static_cast<System::Int32>(static_cast<System::Byte>(200)));

	this->dataGridView1->Visible = false;
	this->dataGridView2->Visible = false;
	this->label1->Visible = false;
	this->label2->Visible = false;

}
//Boton exportar nucleo
//_________________________________________________________________________________________________________________________________________________________________________
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
		static_cast<System::Int32>(static_cast<System::Byte>(200)));
	this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
		static_cast<System::Int32>(static_cast<System::Byte>(200)));
	this->dataGridView1->Visible = false;
	this->dataGridView2->Visible = false;
	this->label1->Visible = false;
	this->label2->Visible = false;
	
}
//_________________________________________________________________________________________________________________________________________________________________________
//Boton iniciar con guardado
//_________________________________________________________________________________________________________________________________________________________________________
private: System::Void iconButton4_Click(System::Object^ sender, System::EventArgs^ e) {
	try{
	this->iconButton2->Hide();
	this->iconButton3->Hide();
	this->iconButton4->Hide();
	this->iconButton5->Hide();
	this->Iniciar->Hide();
	this->title->Hide();
	this->dataGridView1->Visible = true;
	this->label1->Visible = true;
	this->button1->Visible = true;
	this->button2->Visible = true;
	//_________________________________________________________________________________________________________________________________________________________________________
	//Obtenemos numero de lineas en filtrado
	//_________________________________________________________________________________________________________________________________________________________________________
	StreamReader^ lineas_F = File::OpenText(Openfdf->FileName);
	int num_lineasF;
	while (lineas_F->ReadLine() != nullptr) { num_lineasF++; }
	lineas_F->Close();
	//_________________________________________________________________________________________________________________________________________________________________________
	//Obtenemos numero de lineas en diccionario
	//_________________________________________________________________________________________________________________________________________________________________________
	StreamReader^ lineas_D = File::OpenText(Openfdd->FileName);
	int num_lineasD;
	while (lineas_D->ReadLine() != nullptr) { num_lineasD++; }
	lineas_F->Close();
	//_________________________________________________________________________________________________________________________________________________________________________
	//Obtenemos arreglo de palabras definidoras
	//_________________________________________________________________________________________________________________________________________________________________________
	StreamReader^ defis = File::OpenText(Openfdd->FileName);
	int num_definidoras = 0;
	String^ renglon_D;
	array<String^>^ extraccion;
	array<String^>^ definidoras = gcnew array<String^>(num_lineasD);
	renglon_D = defis->ReadLine();
	for (int a = 1; a < num_lineasD; a++) {
		renglon_D = defis->ReadLine();
		if (renglon_D->IsNullOrEmpty(renglon_D)) {}
		else {
			extraccion = renglon_D->Split(',');
			if (extraccion[0]->IsNullOrEmpty(extraccion[0])) {}
			else {
				definidoras[num_definidoras] = extraccion[0];
				num_definidoras++;
			}
		}
	}
	defis->Close();
	//_________________________________________________________________________________________________________________________________________________________________________
	//Obtenemos arreglo de palabras definidoras
	//_________________________________________________________________________________________________________________________________________________________________________
	int aux = 0;
	String^ renglon_F;
	array<String^>^ palabras;
	array<int^>^ peso = gcnew array<int^>(num_lineasD);
	int uno, dos, tres, cuatro, cinco, seis, siete, ocho, nueve, diez = 0;
	//Abrimos archivo para guardado
	StreamWriter^ reds = gcnew StreamWriter(redsem->FileName);
	reds->Write("Palabra definidora" + "," +"1" + "," + "2" + "," + "3" + "," + "4" + "," + "5" + "," + "6" + "," + "7" + "," + "8" + "," + "9" + "," + "10" + "," + "Peso semantico");
	reds->Write("\r");

	for (int d = 0; d < num_definidoras; d++) {	    						//Por cada palabra definidora
		uno = 0; dos = 0; tres = 0; cuatro = 0; cinco = 0; seis = 0; siete = 0; ocho = 0; nueve = 0; diez = 0;
		StreamReader^ final = File::OpenText(Openfdf->FileName);

		for (int l = 0; l < num_lineasF; l++) {								//Leo todo el archivo filtrado
			renglon_F = final->ReadLine();								    //Linea por linea
			if (renglon_F->IsNullOrEmpty(renglon_F)) {}						//Si la linea leida no está vacia
			else {
				palabras = renglon_F->Split(',');							//Separo la linea en un arreglo
				int tam_F = palabras->Length;								//Consigo el tamaño del arreglo

				for (int p = 1; p < tam_F; p++) {							//A cada palabra del arreglo
					if (palabras[p]->IsNullOrEmpty(palabras[p])) {}			//Si no está vacia
					else if (palabras[p] == definidoras[d]) {					//La comparo con la palabra definidora en turno
						Int32::TryParse(palabras[p + 1], aux);					//Consigo el valor que se le dio a dicha Pd que se encuentra en palabras[p+1]
						if (aux == 1) { uno++; }									//Incremento en uno a valores[] en la posicion del valor dado arriba
						else if (aux == 2) { dos++; }
						else if (aux == 3) { tres++; }
						else if (aux == 4) { cuatro++; }
						else if (aux == 5) { cinco++; }
						else if (aux == 6) { seis++; }
						else if (aux == 7) { siete++; }
						else if (aux == 8) { ocho++; }
						else if (aux == 9) { nueve++; }
						else if (aux == 10) { diez++; }
					}
				}
			}
		}
		reds->Write(definidoras[d] + ",");
		int n = this->dataGridView1->Rows->Add();							//añadimos un nuevo renglon a la tabla
																			//Imprimo los valores de 0->9 en  la tabla en sus respectivas celdas
		if (uno > 0) { this->dataGridView1->Rows[n]->Cells[1]->Value = uno;}		reds->Write(uno + ",");
		if (dos > 0) { this->dataGridView1->Rows[n]->Cells[2]->Value = dos;}		reds->Write(dos + ",");
		if (tres > 0) { this->dataGridView1->Rows[n]->Cells[3]->Value = tres;}		reds->Write(tres + ","); 
		if (cuatro > 0) { this->dataGridView1->Rows[n]->Cells[4]->Value = cuatro;}  reds->Write(cuatro + ","); 
		if (cinco > 0) { this->dataGridView1->Rows[n]->Cells[5]->Value = cinco;}	reds->Write(cinco + ","); 
		if (seis > 0) { this->dataGridView1->Rows[n]->Cells[6]->Value = seis;}		reds->Write(seis + ",");
		if (siete > 0) { this->dataGridView1->Rows[n]->Cells[7]->Value = siete;}	reds->Write(siete + ","); 
		if (ocho > 0) { this->dataGridView1->Rows[n]->Cells[8]->Value = ocho;}		reds->Write(ocho + ","); 
		if (nueve > 0) { this->dataGridView1->Rows[n]->Cells[9]->Value = nueve;}	reds->Write(nueve + ","); 
		if (diez > 0) { this->dataGridView1->Rows[n]->Cells[10]->Value = diez;}		reds->Write(diez + ","); 

		uno = uno * 10;														// Multiplico cada valor de valores por su rank (valores[0]=valores[0]*10
		dos = dos * 9;														//												 valores[1]=valores[1]*9 
		tres = tres * 8;
		cuatro = cuatro * 7;
		cinco = cinco * 6;
		seis = seis * 5;
		siete = siete * 4;
		ocho = ocho * 3;
		nueve = nueve * 2;
		diez = diez * 1;

		peso[d] = uno + dos + tres + cuatro + cinco + seis + siete + ocho + nueve + diez;	//Hago la suma de valores de 0->9 y su suma la añado a peso[d]

		this->dataGridView1->Rows[d]->Cells[11]->Value = peso[d];		    //Imprimo el valor de peso[d] en la celda PS o SW	
		reds->Write(peso[d]);
		reds->Write("\r");
		final->Close();
	}
	reds->Close();
	//_________________________________________________________________________________________________________________________________________________________________________
	//Añadimos palabras definidoras a la tabla 1
	//_________________________________________________________________________________________________________________________________________________________________________
	for (int e = 0; e < num_definidoras; e++) {
		this->dataGridView1->Rows[e]->Cells[0]->Value = definidoras[e];
	}
	//_________________________________________________________________________________________________________________________________________________________________________
	//Añadimos palabras definidoras y peso semantico a la tabla 2
	//_________________________________________________________________________________________________________________________________________________________________________
		//Ordenamos de mayor a menor
		//-------------------------------
	System::Int32^ au;
	System::Int32^ ua;
	String^ curr;
	int curri;
	String^ next;
	int nexti;
	String^ sr;
	String^ rs;
	for (int v = 0; v < 1000; v++) {
		for (int i = 0; i < num_definidoras - 1; i++) {			//Recorremos el arreglo de pesos semanticos
			if (peso[i] == 0) {}
			else {
				curr = peso[i]->ToString();
				Int32::TryParse(curr, curri);
			}

			if (peso[i + 1] == 0) {}
			else {
				next = peso[i + 1]->ToString();
				Int32::TryParse(next, nexti);
			}

			if (nexti > curri) {						//Si el peso en la posicion	i es menor que el de la posicion i+1
				au = peso[i + 1];							//ponemos el valor del mayor en el menor y viceversa para peso y definidora
				ua = peso[i];
				peso[i + 1] = ua;
				peso[i] = au;
				sr = definidoras[i + 1];
				rs = definidoras[i];
				definidoras[i + 1] = rs;
				definidoras[i] = sr;
			}
		}
	}
	//_________________________________________________________________________________________________________________________________________________________________________
	//Creamos Distancia semantica cuantitativa
	//_________________________________________________________________________________________________________________________________________________________________________
	array<int^>^ dist = gcnew array<int^>(num_lineasD);
	System::Int32^ cien = peso[0];
	String^ ciens = cien->ToString();
	int cieni;
	Int32::TryParse(ciens, cieni);
	int auxi;
	String^ porc;
	int porci;
	for (int e = 0; e < num_definidoras; e++) {
		if (peso[e] == 0) {}
		else {
			porc = peso[e]->ToString();
			Int32::TryParse(porc, porci);
			auxi = porci * 100;
			dist[e] = auxi / cieni;
		}

	}
	//_________________________________________________________________________________________________________________________________________________________________________
	//Añadimos palabras definidoras, pesos semanticos ordenados y Distancia semantica cuantitativa a la tabla 2
	//_________________________________________________________________________________________________________________________________________________________________________
	StreamWriter^ nucs = gcnew StreamWriter(nucleo->FileName);
	nucs->Write("Palabra definidora" + "," + "Peso semantico"+ "," + "Distancia semantica cuantitativa" );
	nucs->Write("\r");

	for (int e = 0; e < num_definidoras; e++) {
		int n = this->dataGridView2->Rows->Add();
		this->dataGridView2->Rows[n]->Cells[0]->Value = definidoras[e];
		this->dataGridView2->Rows[n]->Cells[1]->Value = peso[e];
		this->dataGridView2->Rows[n]->Cells[2]->Value = dist[e] + "%";
		nucs->Write(definidoras[e]+"," + peso[e]+"," +dist[e] + "%");
		nucs->Write("\r");
	}
	nucs->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show("Error en el archivo, favor de verificar formato");
	}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
