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
	/// Summary for Categoria
	/// </summary>
	public ref class Categoria : public System::Windows::Forms::Form	{	

	public:
		OpenFileDialog^ Openfdp = gcnew OpenFileDialog();
		OpenFileDialog^ Openfdd = gcnew OpenFileDialog();
		OpenFileDialog^ Openfdg = gcnew OpenFileDialog();
		OpenFileDialog^ Openfdc = gcnew OpenFileDialog();

		array<String^>^ Imprimir = gcnew array<String^>(100);
		array<Object^>^ AVar1 = gcnew array<String^>(10);
		array<Object^>^ AVar2 = gcnew array<String^>(10);
		array<Object^>^ AVar3 = gcnew array<String^>(10);
		array<Object^>^ AVar4 = gcnew array<String^>(10);
		array<Object^>^ AVar5 = gcnew array<String^>(10);
		array<Object^>^ AVar6 = gcnew array<String^>(10);
		array<Object^>^ AVar7 = gcnew array<String^>(10);
		array<Object^>^ AVar8 = gcnew array<String^>(10);
		array<Object^>^ AVar9 = gcnew array<String^>(10);
		array<Object^>^ AVar10 = gcnew array<String^>(10);
		int v1 = 0;
		int v2 = 0;
		int v3 = 0;
		int v4 = 0;
		int v5 = 0;
		int v6 = 0;
		int v7 = 0;
		int v8 = 0;
		int v9 = 0;
		int v10 = 0;
		int num_definidoras = 0;
		int num_categorias = 0;
	private: System::Windows::Forms::Label^ titulo;
	private: System::Windows::Forms::Label^ instruccion;
	public:
	public:



	private: FontAwesome::Sharp::IconButton^ grupos;
	private: FontAwesome::Sharp::IconButton^ iconButton2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::CheckBox^ checkBox100;
	private: System::Windows::Forms::CheckBox^ checkBox99;
	private: System::Windows::Forms::CheckBox^ checkBox98;
	private: System::Windows::Forms::CheckBox^ checkBox97;
	private: System::Windows::Forms::CheckBox^ checkBox96;
	private: System::Windows::Forms::CheckBox^ checkBox95;
	private: System::Windows::Forms::CheckBox^ checkBox94;
	private: System::Windows::Forms::CheckBox^ checkBox93;
	private: System::Windows::Forms::CheckBox^ checkBox92;
	private: System::Windows::Forms::CheckBox^ checkBox91;
	private: System::Windows::Forms::CheckBox^ checkBox81;
	private: System::Windows::Forms::CheckBox^ checkBox71;
	private: System::Windows::Forms::CheckBox^ checkBox61;
	private: System::Windows::Forms::CheckBox^ checkBox51;
	private: System::Windows::Forms::CheckBox^ checkBox41;
	private: System::Windows::Forms::CheckBox^ checkBox31;
	private: System::Windows::Forms::CheckBox^ checkBox21;
	private: System::Windows::Forms::CheckBox^ checkBox11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox8;
	private: System::Windows::Forms::CheckBox^ checkBox9;
	private: System::Windows::Forms::CheckBox^ checkBox10;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::CheckBox^ checkBox12;
	private: System::Windows::Forms::CheckBox^ checkBox13;
	private: System::Windows::Forms::CheckBox^ checkBox14;
	private: System::Windows::Forms::CheckBox^ checkBox15;
	private: System::Windows::Forms::CheckBox^ checkBox16;
	private: System::Windows::Forms::CheckBox^ checkBox17;
	private: System::Windows::Forms::CheckBox^ checkBox18;
	private: System::Windows::Forms::CheckBox^ checkBox19;
	private: System::Windows::Forms::CheckBox^ checkBox20;
	private: System::Windows::Forms::CheckBox^ checkBox22;
	private: System::Windows::Forms::CheckBox^ checkBox23;
	private: System::Windows::Forms::CheckBox^ checkBox24;
	private: System::Windows::Forms::CheckBox^ checkBox25;
	private: System::Windows::Forms::CheckBox^ checkBox26;
	private: System::Windows::Forms::CheckBox^ checkBox27;
	private: System::Windows::Forms::CheckBox^ checkBox28;
	private: System::Windows::Forms::CheckBox^ checkBox29;
	private: System::Windows::Forms::CheckBox^ checkBox30;
	private: System::Windows::Forms::CheckBox^ checkBox32;
	private: System::Windows::Forms::CheckBox^ checkBox33;
	private: System::Windows::Forms::CheckBox^ checkBox34;
	private: System::Windows::Forms::CheckBox^ checkBox35;
	private: System::Windows::Forms::CheckBox^ checkBox36;
	private: System::Windows::Forms::CheckBox^ checkBox37;
	private: System::Windows::Forms::CheckBox^ checkBox38;
	private: System::Windows::Forms::CheckBox^ checkBox39;
	private: System::Windows::Forms::CheckBox^ checkBox40;
	private: System::Windows::Forms::CheckBox^ checkBox42;
	private: System::Windows::Forms::CheckBox^ checkBox43;
	private: System::Windows::Forms::CheckBox^ checkBox44;
	private: System::Windows::Forms::CheckBox^ checkBox45;
	private: System::Windows::Forms::CheckBox^ checkBox46;
	private: System::Windows::Forms::CheckBox^ checkBox47;
	private: System::Windows::Forms::CheckBox^ checkBox48;
	private: System::Windows::Forms::CheckBox^ checkBox49;
	private: System::Windows::Forms::CheckBox^ checkBox50;
	private: System::Windows::Forms::CheckBox^ checkBox52;
	private: System::Windows::Forms::CheckBox^ checkBox53;
	private: System::Windows::Forms::CheckBox^ checkBox54;
	private: System::Windows::Forms::CheckBox^ checkBox55;
	private: System::Windows::Forms::CheckBox^ checkBox56;
	private: System::Windows::Forms::CheckBox^ checkBox57;
	private: System::Windows::Forms::CheckBox^ checkBox58;
	private: System::Windows::Forms::CheckBox^ checkBox59;
	private: System::Windows::Forms::CheckBox^ checkBox60;
	private: System::Windows::Forms::CheckBox^ checkBox62;
	private: System::Windows::Forms::CheckBox^ checkBox63;
	private: System::Windows::Forms::CheckBox^ checkBox64;
	private: System::Windows::Forms::CheckBox^ checkBox65;
	private: System::Windows::Forms::CheckBox^ checkBox66;
	private: System::Windows::Forms::CheckBox^ checkBox67;
	private: System::Windows::Forms::CheckBox^ checkBox68;
	private: System::Windows::Forms::CheckBox^ checkBox69;
	private: System::Windows::Forms::CheckBox^ checkBox70;
	private: System::Windows::Forms::CheckBox^ checkBox72;
	private: System::Windows::Forms::CheckBox^ checkBox73;
	private: System::Windows::Forms::CheckBox^ checkBox74;
	private: System::Windows::Forms::CheckBox^ checkBox75;
	private: System::Windows::Forms::CheckBox^ checkBox76;
	private: System::Windows::Forms::CheckBox^ checkBox77;
	private: System::Windows::Forms::CheckBox^ checkBox78;
	private: System::Windows::Forms::CheckBox^ checkBox79;
	private: System::Windows::Forms::CheckBox^ checkBox80;
	private: System::Windows::Forms::CheckBox^ checkBox82;
	private: System::Windows::Forms::CheckBox^ checkBox83;
	private: System::Windows::Forms::CheckBox^ checkBox84;
	private: System::Windows::Forms::CheckBox^ checkBox85;
	private: System::Windows::Forms::CheckBox^ checkBox86;
	private: System::Windows::Forms::CheckBox^ checkBox87;
	private: System::Windows::Forms::CheckBox^ checkBox88;
	private: System::Windows::Forms::CheckBox^ checkBox89;
	private: System::Windows::Forms::CheckBox^ checkBox90;
private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column19;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column20;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column21;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column22;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column23;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column24;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column25;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column26;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column27;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column28;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column29;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column30;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column31;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column32;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column33;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column34;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column35;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column36;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column37;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column38;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column39;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column40;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column41;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column42;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column43;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column44;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column45;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column46;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column47;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column48;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column49;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column50;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column51;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column52;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column53;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column54;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column55;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column56;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column57;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column58;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column59;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column60;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column61;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column62;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column63;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column64;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column65;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column66;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column67;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column68;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column69;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column70;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column71;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column72;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column73;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column74;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column75;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column76;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column77;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column78;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column79;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column80;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column81;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column82;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column83;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column84;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column85;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column86;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column87;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column88;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column89;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column90;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column91;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column92;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column93;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column94;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column95;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column96;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column97;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column98;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column99;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column100;
private: System::Windows::Forms::Button^ button5;
private: FontAwesome::Sharp::IconButton^ iconButton3;
private: System::Windows::Forms::Button^ button2;

	public:
		   SaveFileDialog^ redsem = gcnew SaveFileDialog();
	public:
		Categoria(void)
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
		~Categoria()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelTitleBar;
	protected:
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panelMenu;
	private: FontAwesome::Sharp::IconButton^ iconButton1;
	private: FontAwesome::Sharp::IconButton^ Iniciar;
	private: FontAwesome::Sharp::IconButton^ Palabras;
	private: FontAwesome::Sharp::IconButton^ Diccionario;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Categoria::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panelTitleBar = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column28 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column29 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column30 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column31 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column32 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column33 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column34 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column35 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column36 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column37 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column38 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column39 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column40 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column41 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column42 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column43 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column44 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column45 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column46 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column47 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column48 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column49 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column50 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column51 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column52 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column53 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column54 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column55 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column56 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column57 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column58 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column59 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column60 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column61 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column62 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column63 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column64 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column65 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column66 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column67 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column68 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column69 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column70 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column71 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column72 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column73 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column74 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column75 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column76 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column77 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column78 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column79 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column80 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column81 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column82 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column83 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column84 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column85 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column86 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column87 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column88 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column89 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column90 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column91 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column92 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column93 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column94 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column95 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column96 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column97 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column98 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column99 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column100 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->titulo = (gcnew System::Windows::Forms::Label());
			this->instruccion = (gcnew System::Windows::Forms::Label());
			this->iconButton1 = (gcnew FontAwesome::Sharp::IconButton());
			this->title = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->iconButton3 = (gcnew FontAwesome::Sharp::IconButton());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->Iniciar = (gcnew FontAwesome::Sharp::IconButton());
			this->Palabras = (gcnew FontAwesome::Sharp::IconButton());
			this->Diccionario = (gcnew FontAwesome::Sharp::IconButton());
			this->grupos = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton2 = (gcnew FontAwesome::Sharp::IconButton());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->checkBox100 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox99 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox98 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox97 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox96 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox95 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox94 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox93 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox92 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox91 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox81 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox71 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox61 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox51 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox41 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox31 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox21 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox19 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox20 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox22 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox23 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox24 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox25 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox26 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox27 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox28 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox29 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox30 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox32 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox33 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox34 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox35 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox36 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox37 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox38 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox39 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox40 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox42 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox43 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox44 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox45 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox46 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox47 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox48 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox49 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox50 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox52 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox53 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox54 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox55 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox56 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox57 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox58 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox59 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox60 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox62 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox63 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox64 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox65 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox66 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox67 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox68 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox69 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox70 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox72 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox73 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox74 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox75 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox76 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox77 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox78 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox79 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox80 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox82 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox83 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox84 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox85 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox86 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox87 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox88 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox89 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox90 = (gcnew System::Windows::Forms::CheckBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panelTitleBar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelMenu->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// panelTitleBar
			// 
			this->panelTitleBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->panelTitleBar->Controls->Add(this->dataGridView1);
			this->panelTitleBar->Controls->Add(this->titulo);
			this->panelTitleBar->Controls->Add(this->instruccion);
			this->panelTitleBar->Controls->Add(this->iconButton1);
			this->panelTitleBar->Controls->Add(this->title);
			this->panelTitleBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTitleBar->Location = System::Drawing::Point(150, 0);
			this->panelTitleBar->Name = L"panelTitleBar";
			this->panelTitleBar->Size = System::Drawing::Size(1141, 76);
			this->panelTitleBar->TabIndex = 6;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 2.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(99) {
				this->Column2,
					this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10, this->Column11,
					this->Column12, this->Column13, this->Column14, this->Column15, this->Column16, this->Column17, this->Column18, this->Column19,
					this->Column20, this->Column21, this->Column22, this->Column23, this->Column24, this->Column25, this->Column26, this->Column27,
					this->Column28, this->Column29, this->Column30, this->Column31, this->Column32, this->Column33, this->Column34, this->Column35,
					this->Column36, this->Column37, this->Column38, this->Column39, this->Column40, this->Column41, this->Column42, this->Column43,
					this->Column44, this->Column45, this->Column46, this->Column47, this->Column48, this->Column49, this->Column50, this->Column51,
					this->Column52, this->Column53, this->Column54, this->Column55, this->Column56, this->Column57, this->Column58, this->Column59,
					this->Column60, this->Column61, this->Column62, this->Column63, this->Column64, this->Column65, this->Column66, this->Column67,
					this->Column68, this->Column69, this->Column70, this->Column71, this->Column72, this->Column73, this->Column74, this->Column75,
					this->Column76, this->Column77, this->Column78, this->Column79, this->Column80, this->Column81, this->Column82, this->Column83,
					this->Column84, this->Column85, this->Column86, this->Column87, this->Column88, this->Column89, this->Column90, this->Column91,
					this->Column92, this->Column93, this->Column94, this->Column95, this->Column96, this->Column97, this->Column98, this->Column99,
					this->Column100
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->Height = 85;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView1->Size = System::Drawing::Size(1071, 76);
			this->dataGridView1->TabIndex = 13;
			this->dataGridView1->Visible = false;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 21;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 21;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Column4";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 21;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Column5";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 21;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Column6";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 21;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Column7";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 21;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Column8";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 21;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Column9";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			this->Column9->Width = 21;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Column10";
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			this->Column10->Width = 21;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Column11";
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			this->Column11->Width = 21;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Column12";
			this->Column12->Name = L"Column12";
			this->Column12->ReadOnly = true;
			this->Column12->Width = 21;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"Column13";
			this->Column13->Name = L"Column13";
			this->Column13->ReadOnly = true;
			this->Column13->Width = 21;
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"Column14";
			this->Column14->Name = L"Column14";
			this->Column14->ReadOnly = true;
			this->Column14->Width = 21;
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"Column15";
			this->Column15->Name = L"Column15";
			this->Column15->ReadOnly = true;
			this->Column15->Width = 21;
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"Column16";
			this->Column16->Name = L"Column16";
			this->Column16->ReadOnly = true;
			this->Column16->Width = 21;
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"Column17";
			this->Column17->Name = L"Column17";
			this->Column17->ReadOnly = true;
			this->Column17->Width = 21;
			// 
			// Column18
			// 
			this->Column18->HeaderText = L"Column18";
			this->Column18->Name = L"Column18";
			this->Column18->ReadOnly = true;
			this->Column18->Width = 21;
			// 
			// Column19
			// 
			this->Column19->HeaderText = L"Column19";
			this->Column19->Name = L"Column19";
			this->Column19->ReadOnly = true;
			this->Column19->Width = 21;
			// 
			// Column20
			// 
			this->Column20->HeaderText = L"Column20";
			this->Column20->Name = L"Column20";
			this->Column20->ReadOnly = true;
			this->Column20->Width = 21;
			// 
			// Column21
			// 
			this->Column21->HeaderText = L"Column21";
			this->Column21->Name = L"Column21";
			this->Column21->ReadOnly = true;
			this->Column21->Width = 21;
			// 
			// Column22
			// 
			this->Column22->HeaderText = L"Column22";
			this->Column22->Name = L"Column22";
			this->Column22->ReadOnly = true;
			this->Column22->Width = 21;
			// 
			// Column23
			// 
			this->Column23->HeaderText = L"Column23";
			this->Column23->Name = L"Column23";
			this->Column23->ReadOnly = true;
			this->Column23->Width = 21;
			// 
			// Column24
			// 
			this->Column24->HeaderText = L"Column24";
			this->Column24->Name = L"Column24";
			this->Column24->ReadOnly = true;
			this->Column24->Width = 21;
			// 
			// Column25
			// 
			this->Column25->HeaderText = L"Column25";
			this->Column25->Name = L"Column25";
			this->Column25->ReadOnly = true;
			this->Column25->Width = 21;
			// 
			// Column26
			// 
			this->Column26->HeaderText = L"Column26";
			this->Column26->Name = L"Column26";
			this->Column26->ReadOnly = true;
			this->Column26->Width = 21;
			// 
			// Column27
			// 
			this->Column27->HeaderText = L"Column27";
			this->Column27->Name = L"Column27";
			this->Column27->ReadOnly = true;
			this->Column27->Width = 21;
			// 
			// Column28
			// 
			this->Column28->HeaderText = L"Column28";
			this->Column28->Name = L"Column28";
			this->Column28->ReadOnly = true;
			this->Column28->Width = 21;
			// 
			// Column29
			// 
			this->Column29->HeaderText = L"Column29";
			this->Column29->Name = L"Column29";
			this->Column29->ReadOnly = true;
			this->Column29->Width = 21;
			// 
			// Column30
			// 
			this->Column30->HeaderText = L"Column30";
			this->Column30->Name = L"Column30";
			this->Column30->ReadOnly = true;
			this->Column30->Width = 21;
			// 
			// Column31
			// 
			this->Column31->HeaderText = L"Column31";
			this->Column31->Name = L"Column31";
			this->Column31->ReadOnly = true;
			this->Column31->Width = 21;
			// 
			// Column32
			// 
			this->Column32->HeaderText = L"Column32";
			this->Column32->Name = L"Column32";
			this->Column32->ReadOnly = true;
			this->Column32->Width = 21;
			// 
			// Column33
			// 
			this->Column33->HeaderText = L"Column33";
			this->Column33->Name = L"Column33";
			this->Column33->ReadOnly = true;
			this->Column33->Width = 21;
			// 
			// Column34
			// 
			this->Column34->HeaderText = L"Column34";
			this->Column34->Name = L"Column34";
			this->Column34->ReadOnly = true;
			this->Column34->Width = 21;
			// 
			// Column35
			// 
			this->Column35->HeaderText = L"Column35";
			this->Column35->Name = L"Column35";
			this->Column35->ReadOnly = true;
			this->Column35->Width = 21;
			// 
			// Column36
			// 
			this->Column36->HeaderText = L"Column36";
			this->Column36->Name = L"Column36";
			this->Column36->ReadOnly = true;
			this->Column36->Width = 21;
			// 
			// Column37
			// 
			this->Column37->HeaderText = L"Column37";
			this->Column37->Name = L"Column37";
			this->Column37->ReadOnly = true;
			this->Column37->Width = 21;
			// 
			// Column38
			// 
			this->Column38->HeaderText = L"Column38";
			this->Column38->Name = L"Column38";
			this->Column38->ReadOnly = true;
			this->Column38->Width = 21;
			// 
			// Column39
			// 
			this->Column39->HeaderText = L"Column39";
			this->Column39->Name = L"Column39";
			this->Column39->ReadOnly = true;
			this->Column39->Width = 21;
			// 
			// Column40
			// 
			this->Column40->HeaderText = L"Column40";
			this->Column40->Name = L"Column40";
			this->Column40->ReadOnly = true;
			this->Column40->Width = 21;
			// 
			// Column41
			// 
			this->Column41->HeaderText = L"Column41";
			this->Column41->Name = L"Column41";
			this->Column41->ReadOnly = true;
			this->Column41->Width = 21;
			// 
			// Column42
			// 
			this->Column42->HeaderText = L"Column42";
			this->Column42->Name = L"Column42";
			this->Column42->ReadOnly = true;
			this->Column42->Width = 21;
			// 
			// Column43
			// 
			this->Column43->HeaderText = L"Column43";
			this->Column43->Name = L"Column43";
			this->Column43->ReadOnly = true;
			this->Column43->Width = 21;
			// 
			// Column44
			// 
			this->Column44->HeaderText = L"Column44";
			this->Column44->Name = L"Column44";
			this->Column44->ReadOnly = true;
			this->Column44->Width = 21;
			// 
			// Column45
			// 
			this->Column45->HeaderText = L"Column45";
			this->Column45->Name = L"Column45";
			this->Column45->ReadOnly = true;
			this->Column45->Width = 21;
			// 
			// Column46
			// 
			this->Column46->HeaderText = L"Column46";
			this->Column46->Name = L"Column46";
			this->Column46->ReadOnly = true;
			this->Column46->Width = 21;
			// 
			// Column47
			// 
			this->Column47->HeaderText = L"Column47";
			this->Column47->Name = L"Column47";
			this->Column47->ReadOnly = true;
			this->Column47->Width = 21;
			// 
			// Column48
			// 
			this->Column48->HeaderText = L"Column48";
			this->Column48->Name = L"Column48";
			this->Column48->ReadOnly = true;
			this->Column48->Width = 21;
			// 
			// Column49
			// 
			this->Column49->HeaderText = L"Column49";
			this->Column49->Name = L"Column49";
			this->Column49->ReadOnly = true;
			this->Column49->Width = 21;
			// 
			// Column50
			// 
			this->Column50->HeaderText = L"Column50";
			this->Column50->Name = L"Column50";
			this->Column50->ReadOnly = true;
			this->Column50->Width = 21;
			// 
			// Column51
			// 
			this->Column51->HeaderText = L"Column51";
			this->Column51->Name = L"Column51";
			this->Column51->ReadOnly = true;
			this->Column51->Width = 21;
			// 
			// Column52
			// 
			this->Column52->HeaderText = L"Column52";
			this->Column52->Name = L"Column52";
			this->Column52->ReadOnly = true;
			this->Column52->Width = 21;
			// 
			// Column53
			// 
			this->Column53->HeaderText = L"Column53";
			this->Column53->Name = L"Column53";
			this->Column53->ReadOnly = true;
			this->Column53->Width = 21;
			// 
			// Column54
			// 
			this->Column54->HeaderText = L"Column54";
			this->Column54->Name = L"Column54";
			this->Column54->ReadOnly = true;
			this->Column54->Width = 21;
			// 
			// Column55
			// 
			this->Column55->HeaderText = L"Column55";
			this->Column55->Name = L"Column55";
			this->Column55->ReadOnly = true;
			this->Column55->Width = 21;
			// 
			// Column56
			// 
			this->Column56->HeaderText = L"Column56";
			this->Column56->Name = L"Column56";
			this->Column56->ReadOnly = true;
			this->Column56->Width = 21;
			// 
			// Column57
			// 
			this->Column57->HeaderText = L"Column57";
			this->Column57->Name = L"Column57";
			this->Column57->ReadOnly = true;
			this->Column57->Width = 21;
			// 
			// Column58
			// 
			this->Column58->HeaderText = L"Column58";
			this->Column58->Name = L"Column58";
			this->Column58->ReadOnly = true;
			this->Column58->Width = 21;
			// 
			// Column59
			// 
			this->Column59->HeaderText = L"Column59";
			this->Column59->Name = L"Column59";
			this->Column59->ReadOnly = true;
			this->Column59->Width = 21;
			// 
			// Column60
			// 
			this->Column60->HeaderText = L"Column60";
			this->Column60->Name = L"Column60";
			this->Column60->ReadOnly = true;
			this->Column60->Width = 21;
			// 
			// Column61
			// 
			this->Column61->HeaderText = L"Column61";
			this->Column61->Name = L"Column61";
			this->Column61->ReadOnly = true;
			this->Column61->Width = 21;
			// 
			// Column62
			// 
			this->Column62->HeaderText = L"Column62";
			this->Column62->Name = L"Column62";
			this->Column62->ReadOnly = true;
			this->Column62->Width = 21;
			// 
			// Column63
			// 
			this->Column63->HeaderText = L"Column63";
			this->Column63->Name = L"Column63";
			this->Column63->ReadOnly = true;
			this->Column63->Width = 21;
			// 
			// Column64
			// 
			this->Column64->HeaderText = L"Column64";
			this->Column64->Name = L"Column64";
			this->Column64->ReadOnly = true;
			this->Column64->Width = 21;
			// 
			// Column65
			// 
			this->Column65->HeaderText = L"Column65";
			this->Column65->Name = L"Column65";
			this->Column65->ReadOnly = true;
			this->Column65->Width = 21;
			// 
			// Column66
			// 
			this->Column66->HeaderText = L"Column66";
			this->Column66->Name = L"Column66";
			this->Column66->ReadOnly = true;
			this->Column66->Width = 21;
			// 
			// Column67
			// 
			this->Column67->HeaderText = L"Column67";
			this->Column67->Name = L"Column67";
			this->Column67->ReadOnly = true;
			this->Column67->Width = 21;
			// 
			// Column68
			// 
			this->Column68->HeaderText = L"Column68";
			this->Column68->Name = L"Column68";
			this->Column68->ReadOnly = true;
			this->Column68->Width = 21;
			// 
			// Column69
			// 
			this->Column69->HeaderText = L"Column69";
			this->Column69->Name = L"Column69";
			this->Column69->ReadOnly = true;
			this->Column69->Width = 21;
			// 
			// Column70
			// 
			this->Column70->HeaderText = L"Column70";
			this->Column70->Name = L"Column70";
			this->Column70->ReadOnly = true;
			this->Column70->Width = 21;
			// 
			// Column71
			// 
			this->Column71->HeaderText = L"Column71";
			this->Column71->Name = L"Column71";
			this->Column71->ReadOnly = true;
			this->Column71->Width = 21;
			// 
			// Column72
			// 
			this->Column72->HeaderText = L"Column72";
			this->Column72->Name = L"Column72";
			this->Column72->ReadOnly = true;
			this->Column72->Width = 21;
			// 
			// Column73
			// 
			this->Column73->HeaderText = L"Column73";
			this->Column73->Name = L"Column73";
			this->Column73->ReadOnly = true;
			this->Column73->Width = 21;
			// 
			// Column74
			// 
			this->Column74->HeaderText = L"Column74";
			this->Column74->Name = L"Column74";
			this->Column74->ReadOnly = true;
			this->Column74->Width = 21;
			// 
			// Column75
			// 
			this->Column75->HeaderText = L"Column75";
			this->Column75->Name = L"Column75";
			this->Column75->ReadOnly = true;
			this->Column75->Width = 21;
			// 
			// Column76
			// 
			this->Column76->HeaderText = L"Column76";
			this->Column76->Name = L"Column76";
			this->Column76->ReadOnly = true;
			this->Column76->Width = 21;
			// 
			// Column77
			// 
			this->Column77->HeaderText = L"Column77";
			this->Column77->Name = L"Column77";
			this->Column77->ReadOnly = true;
			this->Column77->Width = 21;
			// 
			// Column78
			// 
			this->Column78->HeaderText = L"Column78";
			this->Column78->Name = L"Column78";
			this->Column78->ReadOnly = true;
			this->Column78->Width = 21;
			// 
			// Column79
			// 
			this->Column79->HeaderText = L"Column79";
			this->Column79->Name = L"Column79";
			this->Column79->ReadOnly = true;
			this->Column79->Width = 21;
			// 
			// Column80
			// 
			this->Column80->HeaderText = L"Column80";
			this->Column80->Name = L"Column80";
			this->Column80->ReadOnly = true;
			this->Column80->Width = 21;
			// 
			// Column81
			// 
			this->Column81->HeaderText = L"Column81";
			this->Column81->Name = L"Column81";
			this->Column81->ReadOnly = true;
			this->Column81->Width = 21;
			// 
			// Column82
			// 
			this->Column82->HeaderText = L"Column82";
			this->Column82->Name = L"Column82";
			this->Column82->ReadOnly = true;
			this->Column82->Width = 21;
			// 
			// Column83
			// 
			this->Column83->HeaderText = L"Column83";
			this->Column83->Name = L"Column83";
			this->Column83->ReadOnly = true;
			this->Column83->Width = 21;
			// 
			// Column84
			// 
			this->Column84->HeaderText = L"Column84";
			this->Column84->Name = L"Column84";
			this->Column84->ReadOnly = true;
			this->Column84->Width = 21;
			// 
			// Column85
			// 
			this->Column85->HeaderText = L"Column85";
			this->Column85->Name = L"Column85";
			this->Column85->ReadOnly = true;
			this->Column85->Width = 21;
			// 
			// Column86
			// 
			this->Column86->HeaderText = L"Column86";
			this->Column86->Name = L"Column86";
			this->Column86->ReadOnly = true;
			this->Column86->Width = 21;
			// 
			// Column87
			// 
			this->Column87->HeaderText = L"Column87";
			this->Column87->Name = L"Column87";
			this->Column87->ReadOnly = true;
			this->Column87->Width = 21;
			// 
			// Column88
			// 
			this->Column88->HeaderText = L"Column88";
			this->Column88->Name = L"Column88";
			this->Column88->ReadOnly = true;
			this->Column88->Width = 21;
			// 
			// Column89
			// 
			this->Column89->HeaderText = L"Column89";
			this->Column89->Name = L"Column89";
			this->Column89->ReadOnly = true;
			this->Column89->Width = 21;
			// 
			// Column90
			// 
			this->Column90->HeaderText = L"Column90";
			this->Column90->Name = L"Column90";
			this->Column90->ReadOnly = true;
			this->Column90->Width = 21;
			// 
			// Column91
			// 
			this->Column91->HeaderText = L"Column91";
			this->Column91->Name = L"Column91";
			this->Column91->ReadOnly = true;
			this->Column91->Width = 21;
			// 
			// Column92
			// 
			this->Column92->HeaderText = L"Column92";
			this->Column92->Name = L"Column92";
			this->Column92->ReadOnly = true;
			this->Column92->Width = 21;
			// 
			// Column93
			// 
			this->Column93->HeaderText = L"Column93";
			this->Column93->Name = L"Column93";
			this->Column93->ReadOnly = true;
			this->Column93->Width = 21;
			// 
			// Column94
			// 
			this->Column94->HeaderText = L"Column94";
			this->Column94->Name = L"Column94";
			this->Column94->ReadOnly = true;
			this->Column94->Width = 21;
			// 
			// Column95
			// 
			this->Column95->HeaderText = L"Column95";
			this->Column95->Name = L"Column95";
			this->Column95->ReadOnly = true;
			this->Column95->Width = 21;
			// 
			// Column96
			// 
			this->Column96->HeaderText = L"Column96";
			this->Column96->Name = L"Column96";
			this->Column96->ReadOnly = true;
			this->Column96->Width = 21;
			// 
			// Column97
			// 
			this->Column97->HeaderText = L"Column97";
			this->Column97->Name = L"Column97";
			this->Column97->ReadOnly = true;
			this->Column97->Width = 21;
			// 
			// Column98
			// 
			this->Column98->HeaderText = L"Column98";
			this->Column98->Name = L"Column98";
			this->Column98->ReadOnly = true;
			this->Column98->Width = 21;
			// 
			// Column99
			// 
			this->Column99->HeaderText = L"Column99";
			this->Column99->Name = L"Column99";
			this->Column99->ReadOnly = true;
			this->Column99->Width = 21;
			// 
			// Column100
			// 
			this->Column100->HeaderText = L"Column100";
			this->Column100->Name = L"Column100";
			this->Column100->ReadOnly = true;
			this->Column100->Width = 21;
			// 
			// titulo
			// 
			this->titulo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->titulo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->titulo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 38.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titulo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->titulo->Location = System::Drawing::Point(0, 0);
			this->titulo->Name = L"titulo";
			this->titulo->Size = System::Drawing::Size(1071, 76);
			this->titulo->TabIndex = 8;
			this->titulo->Text = L"Grupos";
			this->titulo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->titulo->Visible = false;
			// 
			// instruccion
			// 
			this->instruccion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->instruccion->Dock = System::Windows::Forms::DockStyle::Fill;
			this->instruccion->Font = (gcnew System::Drawing::Font(L"Century Gothic", 38.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->instruccion->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->instruccion->Location = System::Drawing::Point(0, 0);
			this->instruccion->Name = L"instruccion";
			this->instruccion->Size = System::Drawing::Size(1071, 76);
			this->instruccion->TabIndex = 7;
			this->instruccion->Text = L"Inserte los archivos solicitados";
			this->instruccion->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->iconButton1->TabIndex = 6;
			this->iconButton1->UseVisualStyleBackColor = true;
			this->iconButton1->Click += gcnew System::EventHandler(this, &Categoria::iconButton1_Click);
			// 
			// title
			// 
			this->title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->title->Dock = System::Windows::Forms::DockStyle::Fill;
			this->title->Font = (gcnew System::Drawing::Font(L"Century Gothic", 38.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->title->Location = System::Drawing::Point(0, 0);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(1141, 76);
			this->title->TabIndex = 5;
			this->title->Text = L"Inserte los archivos solicitados";
			this->title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->title->Click += gcnew System::EventHandler(this, &Categoria::title_Click);
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
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->panelMenu->Controls->Add(this->button2);
			this->panelMenu->Controls->Add(this->iconButton3);
			this->panelMenu->Controls->Add(this->button5);
			this->panelMenu->Controls->Add(this->pictureBox1);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(150, 716);
			this->panelMenu->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->button2->Location = System::Drawing::Point(0, 275);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 105);
			this->button2->TabIndex = 42;
			this->button2->Text = L"Exportar categorías";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &Categoria::button2_Click);
			// 
			// iconButton3
			// 
			this->iconButton3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->iconButton3->FlatAppearance->BorderSize = 0;
			this->iconButton3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton3->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->iconButton3->IconChar = FontAwesome::Sharp::IconChar::Check;
			this->iconButton3->IconColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->iconButton3->IconSize = 120;
			this->iconButton3->Location = System::Drawing::Point(0, 495);
			this->iconButton3->Margin = System::Windows::Forms::Padding(0);
			this->iconButton3->Name = L"iconButton3";
			this->iconButton3->Rotation = 0;
			this->iconButton3->Size = System::Drawing::Size(150, 221);
			this->iconButton3->TabIndex = 41;
			this->iconButton3->Text = L"Iniciar";
			this->iconButton3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->iconButton3->UseVisualStyleBackColor = true;
			this->iconButton3->Visible = false;
			this->iconButton3->Click += gcnew System::EventHandler(this, &Categoria::iconButton3_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->button5->Location = System::Drawing::Point(0, 150);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(150, 105);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Nuevo filtrado";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &Categoria::button5_Click);
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
			this->Iniciar->Location = System::Drawing::Point(1035, 497);
			this->Iniciar->Margin = System::Windows::Forms::Padding(0);
			this->Iniciar->Name = L"Iniciar";
			this->Iniciar->Rotation = 0;
			this->Iniciar->Size = System::Drawing::Size(186, 197);
			this->Iniciar->TabIndex = 9;
			this->Iniciar->Text = L"Iniciar";
			this->Iniciar->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->Iniciar->UseVisualStyleBackColor = true;
			this->Iniciar->Visible = false;
			this->Iniciar->Click += gcnew System::EventHandler(this, &Categoria::Iniciar_Click);
			// 
			// Palabras
			// 
			this->Palabras->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Palabras->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Palabras->FlatAppearance->BorderSize = 0;
			this->Palabras->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Palabras->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->Palabras->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Palabras->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Palabras->IconChar = FontAwesome::Sharp::IconChar::FileImport;
			this->Palabras->IconColor = System::Drawing::SystemColors::ControlLightLight;
			this->Palabras->IconSize = 120;
			this->Palabras->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Palabras->Location = System::Drawing::Point(374, 214);
			this->Palabras->Margin = System::Windows::Forms::Padding(0, 20, 0, 0);
			this->Palabras->Name = L"Palabras";
			this->Palabras->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Palabras->Rotation = 0;
			this->Palabras->Size = System::Drawing::Size(708, 128);
			this->Palabras->TabIndex = 8;
			this->Palabras->Text = L"Insertar palabras filtradas";
			this->Palabras->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Palabras->UseVisualStyleBackColor = true;
			this->Palabras->Click += gcnew System::EventHandler(this, &Categoria::Palabras_Click);
			// 
			// Diccionario
			// 
			this->Diccionario->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Diccionario->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Diccionario->FlatAppearance->BorderSize = 0;
			this->Diccionario->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Diccionario->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->Diccionario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Diccionario->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Diccionario->IconChar = FontAwesome::Sharp::IconChar::FileImport;
			this->Diccionario->IconColor = System::Drawing::SystemColors::ControlLightLight;
			this->Diccionario->IconSize = 120;
			this->Diccionario->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Diccionario->Location = System::Drawing::Point(374, 479);
			this->Diccionario->Margin = System::Windows::Forms::Padding(0, 20, 0, 0);
			this->Diccionario->Name = L"Diccionario";
			this->Diccionario->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Diccionario->Rotation = 0;
			this->Diccionario->Size = System::Drawing::Size(570, 128);
			this->Diccionario->TabIndex = 7;
			this->Diccionario->Text = L"Insertar categorías";
			this->Diccionario->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Diccionario->UseVisualStyleBackColor = true;
			this->Diccionario->Click += gcnew System::EventHandler(this, &Categoria::Diccionario_Click);
			// 
			// grupos
			// 
			this->grupos->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->grupos->AutoSize = true;
			this->grupos->Cursor = System::Windows::Forms::Cursors::Hand;
			this->grupos->FlatAppearance->BorderSize = 0;
			this->grupos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->grupos->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->grupos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->grupos->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->grupos->IconChar = FontAwesome::Sharp::IconChar::FileImport;
			this->grupos->IconColor = System::Drawing::SystemColors::ControlLightLight;
			this->grupos->IconSize = 120;
			this->grupos->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->grupos->Location = System::Drawing::Point(374, 78);
			this->grupos->Margin = System::Windows::Forms::Padding(0, 20, 0, 0);
			this->grupos->Name = L"grupos";
			this->grupos->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->grupos->Rotation = 0;
			this->grupos->Size = System::Drawing::Size(760, 126);
			this->grupos->TabIndex = 27;
			this->grupos->Text = L"Insertar datos de los grupos";
			this->grupos->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->grupos->UseVisualStyleBackColor = true;
			this->grupos->Click += gcnew System::EventHandler(this, &Categoria::grupos_Click);
			// 
			// iconButton2
			// 
			this->iconButton2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->iconButton2->AutoSize = true;
			this->iconButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton2->FlatAppearance->BorderSize = 0;
			this->iconButton2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton2->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->iconButton2->IconChar = FontAwesome::Sharp::IconChar::FileImport;
			this->iconButton2->IconColor = System::Drawing::SystemColors::ControlLightLight;
			this->iconButton2->IconSize = 120;
			this->iconButton2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->iconButton2->Location = System::Drawing::Point(374, 354);
			this->iconButton2->Margin = System::Windows::Forms::Padding(0, 20, 0, 0);
			this->iconButton2->Name = L"iconButton2";
			this->iconButton2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->iconButton2->Rotation = 0;
			this->iconButton2->Size = System::Drawing::Size(575, 126);
			this->iconButton2->TabIndex = 28;
			this->iconButton2->Text = L"Insertar diccionario";
			this->iconButton2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->iconButton2->UseVisualStyleBackColor = true;
			this->iconButton2->Click += gcnew System::EventHandler(this, &Categoria::iconButton2_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 10;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->Controls->Add(this->checkBox100, 9, 10);
			this->tableLayoutPanel1->Controls->Add(this->checkBox99, 9, 9);
			this->tableLayoutPanel1->Controls->Add(this->checkBox98, 9, 8);
			this->tableLayoutPanel1->Controls->Add(this->checkBox97, 9, 7);
			this->tableLayoutPanel1->Controls->Add(this->checkBox96, 9, 6);
			this->tableLayoutPanel1->Controls->Add(this->checkBox95, 9, 5);
			this->tableLayoutPanel1->Controls->Add(this->checkBox94, 9, 4);
			this->tableLayoutPanel1->Controls->Add(this->checkBox93, 9, 3);
			this->tableLayoutPanel1->Controls->Add(this->checkBox92, 9, 2);
			this->tableLayoutPanel1->Controls->Add(this->checkBox91, 9, 1);
			this->tableLayoutPanel1->Controls->Add(this->checkBox81, 8, 1);
			this->tableLayoutPanel1->Controls->Add(this->checkBox71, 7, 1);
			this->tableLayoutPanel1->Controls->Add(this->checkBox61, 6, 1);
			this->tableLayoutPanel1->Controls->Add(this->checkBox51, 5, 1);
			this->tableLayoutPanel1->Controls->Add(this->checkBox41, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->checkBox31, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->checkBox21, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->checkBox11, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label10, 9, 0);
			this->tableLayoutPanel1->Controls->Add(this->label9, 8, 0);
			this->tableLayoutPanel1->Controls->Add(this->label8, 7, 0);
			this->tableLayoutPanel1->Controls->Add(this->label7, 6, 0);
			this->tableLayoutPanel1->Controls->Add(this->label6, 5, 0);
			this->tableLayoutPanel1->Controls->Add(this->label5, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->label4, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->label3, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->checkBox7, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->checkBox6, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->checkBox5, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->checkBox4, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->checkBox3, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->checkBox2, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->checkBox1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->checkBox8, 0, 8);
			this->tableLayoutPanel1->Controls->Add(this->checkBox9, 0, 9);
			this->tableLayoutPanel1->Controls->Add(this->checkBox10, 0, 10);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->checkBox12, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->checkBox13, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->checkBox14, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->checkBox15, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->checkBox16, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->checkBox17, 1, 7);
			this->tableLayoutPanel1->Controls->Add(this->checkBox18, 1, 8);
			this->tableLayoutPanel1->Controls->Add(this->checkBox19, 1, 9);
			this->tableLayoutPanel1->Controls->Add(this->checkBox20, 1, 10);
			this->tableLayoutPanel1->Controls->Add(this->checkBox22, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->checkBox23, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->checkBox24, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->checkBox25, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->checkBox26, 2, 6);
			this->tableLayoutPanel1->Controls->Add(this->checkBox27, 2, 7);
			this->tableLayoutPanel1->Controls->Add(this->checkBox28, 2, 8);
			this->tableLayoutPanel1->Controls->Add(this->checkBox29, 2, 9);
			this->tableLayoutPanel1->Controls->Add(this->checkBox30, 2, 10);
			this->tableLayoutPanel1->Controls->Add(this->checkBox32, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->checkBox33, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->checkBox34, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->checkBox35, 3, 5);
			this->tableLayoutPanel1->Controls->Add(this->checkBox36, 3, 6);
			this->tableLayoutPanel1->Controls->Add(this->checkBox37, 3, 7);
			this->tableLayoutPanel1->Controls->Add(this->checkBox38, 3, 8);
			this->tableLayoutPanel1->Controls->Add(this->checkBox39, 3, 9);
			this->tableLayoutPanel1->Controls->Add(this->checkBox40, 3, 10);
			this->tableLayoutPanel1->Controls->Add(this->checkBox42, 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->checkBox43, 4, 3);
			this->tableLayoutPanel1->Controls->Add(this->checkBox44, 4, 4);
			this->tableLayoutPanel1->Controls->Add(this->checkBox45, 4, 5);
			this->tableLayoutPanel1->Controls->Add(this->checkBox46, 4, 6);
			this->tableLayoutPanel1->Controls->Add(this->checkBox47, 4, 7);
			this->tableLayoutPanel1->Controls->Add(this->checkBox48, 4, 8);
			this->tableLayoutPanel1->Controls->Add(this->checkBox49, 4, 9);
			this->tableLayoutPanel1->Controls->Add(this->checkBox50, 4, 10);
			this->tableLayoutPanel1->Controls->Add(this->checkBox52, 5, 2);
			this->tableLayoutPanel1->Controls->Add(this->checkBox53, 5, 3);
			this->tableLayoutPanel1->Controls->Add(this->checkBox54, 5, 4);
			this->tableLayoutPanel1->Controls->Add(this->checkBox55, 5, 5);
			this->tableLayoutPanel1->Controls->Add(this->checkBox56, 5, 6);
			this->tableLayoutPanel1->Controls->Add(this->checkBox57, 5, 7);
			this->tableLayoutPanel1->Controls->Add(this->checkBox58, 5, 8);
			this->tableLayoutPanel1->Controls->Add(this->checkBox59, 5, 9);
			this->tableLayoutPanel1->Controls->Add(this->checkBox60, 5, 10);
			this->tableLayoutPanel1->Controls->Add(this->checkBox62, 6, 2);
			this->tableLayoutPanel1->Controls->Add(this->checkBox63, 6, 3);
			this->tableLayoutPanel1->Controls->Add(this->checkBox64, 6, 4);
			this->tableLayoutPanel1->Controls->Add(this->checkBox65, 6, 5);
			this->tableLayoutPanel1->Controls->Add(this->checkBox66, 6, 6);
			this->tableLayoutPanel1->Controls->Add(this->checkBox67, 6, 7);
			this->tableLayoutPanel1->Controls->Add(this->checkBox68, 6, 8);
			this->tableLayoutPanel1->Controls->Add(this->checkBox69, 6, 9);
			this->tableLayoutPanel1->Controls->Add(this->checkBox70, 6, 10);
			this->tableLayoutPanel1->Controls->Add(this->checkBox72, 7, 2);
			this->tableLayoutPanel1->Controls->Add(this->checkBox73, 7, 3);
			this->tableLayoutPanel1->Controls->Add(this->checkBox74, 7, 4);
			this->tableLayoutPanel1->Controls->Add(this->checkBox75, 7, 5);
			this->tableLayoutPanel1->Controls->Add(this->checkBox76, 7, 6);
			this->tableLayoutPanel1->Controls->Add(this->checkBox77, 7, 7);
			this->tableLayoutPanel1->Controls->Add(this->checkBox78, 7, 8);
			this->tableLayoutPanel1->Controls->Add(this->checkBox79, 7, 9);
			this->tableLayoutPanel1->Controls->Add(this->checkBox80, 7, 10);
			this->tableLayoutPanel1->Controls->Add(this->checkBox82, 8, 2);
			this->tableLayoutPanel1->Controls->Add(this->checkBox83, 8, 3);
			this->tableLayoutPanel1->Controls->Add(this->checkBox84, 8, 4);
			this->tableLayoutPanel1->Controls->Add(this->checkBox85, 8, 5);
			this->tableLayoutPanel1->Controls->Add(this->checkBox86, 8, 6);
			this->tableLayoutPanel1->Controls->Add(this->checkBox87, 8, 7);
			this->tableLayoutPanel1->Controls->Add(this->checkBox88, 8, 8);
			this->tableLayoutPanel1->Controls->Add(this->checkBox89, 8, 9);
			this->tableLayoutPanel1->Controls->Add(this->checkBox90, 8, 10);
			this->tableLayoutPanel1->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
			this->tableLayoutPanel1->Location = System::Drawing::Point(150, 78);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 11;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090908F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090908F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090908F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090908F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090908F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090908F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090908F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090908F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090908F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090908F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090908F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1141, 638);
			this->tableLayoutPanel1->TabIndex = 38;
			this->tableLayoutPanel1->Visible = false;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Categoria::tableLayoutPanel1_Paint);
			// 
			// checkBox100
			// 
			this->checkBox100->AutoSize = true;
			this->checkBox100->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox100->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox100->Location = System::Drawing::Point(192, 573);
			this->checkBox100->Name = L"checkBox100";
			this->checkBox100->Size = System::Drawing::Size(15, 14);
			this->checkBox100->TabIndex = 139;
			this->checkBox100->UseVisualStyleBackColor = true;
			this->checkBox100->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox100_CheckedChanged);
			// 
			// checkBox99
			// 
			this->checkBox99->AutoSize = true;
			this->checkBox99->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox99->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox99->Location = System::Drawing::Point(192, 516);
			this->checkBox99->Name = L"checkBox99";
			this->checkBox99->Size = System::Drawing::Size(15, 14);
			this->checkBox99->TabIndex = 138;
			this->checkBox99->UseVisualStyleBackColor = true;
			this->checkBox99->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox99_CheckedChanged);
			// 
			// checkBox98
			// 
			this->checkBox98->AutoSize = true;
			this->checkBox98->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox98->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox98->Location = System::Drawing::Point(192, 459);
			this->checkBox98->Name = L"checkBox98";
			this->checkBox98->Size = System::Drawing::Size(15, 14);
			this->checkBox98->TabIndex = 137;
			this->checkBox98->UseVisualStyleBackColor = true;
			this->checkBox98->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox98_CheckedChanged);
			// 
			// checkBox97
			// 
			this->checkBox97->AutoSize = true;
			this->checkBox97->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox97->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox97->Location = System::Drawing::Point(192, 402);
			this->checkBox97->Name = L"checkBox97";
			this->checkBox97->Size = System::Drawing::Size(15, 14);
			this->checkBox97->TabIndex = 136;
			this->checkBox97->UseVisualStyleBackColor = true;
			this->checkBox97->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox97_CheckedChanged);
			// 
			// checkBox96
			// 
			this->checkBox96->AutoSize = true;
			this->checkBox96->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox96->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox96->Location = System::Drawing::Point(192, 345);
			this->checkBox96->Name = L"checkBox96";
			this->checkBox96->Size = System::Drawing::Size(15, 14);
			this->checkBox96->TabIndex = 135;
			this->checkBox96->UseVisualStyleBackColor = true;
			this->checkBox96->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox96_CheckedChanged);
			// 
			// checkBox95
			// 
			this->checkBox95->AutoSize = true;
			this->checkBox95->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox95->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox95->Location = System::Drawing::Point(192, 288);
			this->checkBox95->Name = L"checkBox95";
			this->checkBox95->Size = System::Drawing::Size(15, 14);
			this->checkBox95->TabIndex = 134;
			this->checkBox95->UseVisualStyleBackColor = true;
			this->checkBox95->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox95_CheckedChanged);
			// 
			// checkBox94
			// 
			this->checkBox94->AutoSize = true;
			this->checkBox94->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox94->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox94->Location = System::Drawing::Point(192, 231);
			this->checkBox94->Name = L"checkBox94";
			this->checkBox94->Size = System::Drawing::Size(15, 14);
			this->checkBox94->TabIndex = 133;
			this->checkBox94->UseVisualStyleBackColor = true;
			this->checkBox94->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox94_CheckedChanged);
			// 
			// checkBox93
			// 
			this->checkBox93->AutoSize = true;
			this->checkBox93->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox93->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox93->Location = System::Drawing::Point(192, 174);
			this->checkBox93->Name = L"checkBox93";
			this->checkBox93->Size = System::Drawing::Size(15, 14);
			this->checkBox93->TabIndex = 132;
			this->checkBox93->UseVisualStyleBackColor = true;
			this->checkBox93->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox93_CheckedChanged);
			// 
			// checkBox92
			// 
			this->checkBox92->AutoSize = true;
			this->checkBox92->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox92->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox92->Location = System::Drawing::Point(192, 117);
			this->checkBox92->Name = L"checkBox92";
			this->checkBox92->Size = System::Drawing::Size(15, 14);
			this->checkBox92->TabIndex = 131;
			this->checkBox92->UseVisualStyleBackColor = true;
			this->checkBox92->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox92_CheckedChanged);
			// 
			// checkBox91
			// 
			this->checkBox91->AutoSize = true;
			this->checkBox91->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox91->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox91->Location = System::Drawing::Point(192, 60);
			this->checkBox91->Name = L"checkBox91";
			this->checkBox91->Size = System::Drawing::Size(15, 14);
			this->checkBox91->TabIndex = 130;
			this->checkBox91->UseVisualStyleBackColor = true;
			this->checkBox91->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox91_CheckedChanged);
			// 
			// checkBox81
			// 
			this->checkBox81->AutoSize = true;
			this->checkBox81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox81->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox81->Location = System::Drawing::Point(171, 60);
			this->checkBox81->Name = L"checkBox81";
			this->checkBox81->Size = System::Drawing::Size(15, 14);
			this->checkBox81->TabIndex = 120;
			this->checkBox81->UseVisualStyleBackColor = true;
			this->checkBox81->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox81_CheckedChanged);
			// 
			// checkBox71
			// 
			this->checkBox71->AutoSize = true;
			this->checkBox71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox71->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox71->Location = System::Drawing::Point(150, 60);
			this->checkBox71->Name = L"checkBox71";
			this->checkBox71->Size = System::Drawing::Size(15, 14);
			this->checkBox71->TabIndex = 110;
			this->checkBox71->UseVisualStyleBackColor = true;
			this->checkBox71->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox71_CheckedChanged);
			// 
			// checkBox61
			// 
			this->checkBox61->AutoSize = true;
			this->checkBox61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox61->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox61->Location = System::Drawing::Point(129, 60);
			this->checkBox61->Name = L"checkBox61";
			this->checkBox61->Size = System::Drawing::Size(15, 14);
			this->checkBox61->TabIndex = 100;
			this->checkBox61->UseVisualStyleBackColor = true;
			this->checkBox61->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox61_CheckedChanged);
			// 
			// checkBox51
			// 
			this->checkBox51->AutoSize = true;
			this->checkBox51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox51->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox51->Location = System::Drawing::Point(108, 60);
			this->checkBox51->Name = L"checkBox51";
			this->checkBox51->Size = System::Drawing::Size(15, 14);
			this->checkBox51->TabIndex = 90;
			this->checkBox51->UseVisualStyleBackColor = true;
			this->checkBox51->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox51_CheckedChanged);
			// 
			// checkBox41
			// 
			this->checkBox41->AutoSize = true;
			this->checkBox41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox41->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox41->Location = System::Drawing::Point(87, 60);
			this->checkBox41->Name = L"checkBox41";
			this->checkBox41->Size = System::Drawing::Size(15, 14);
			this->checkBox41->TabIndex = 80;
			this->checkBox41->UseVisualStyleBackColor = true;
			this->checkBox41->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox41_CheckedChanged);
			// 
			// checkBox31
			// 
			this->checkBox31->AutoSize = true;
			this->checkBox31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox31->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox31->Location = System::Drawing::Point(66, 60);
			this->checkBox31->Name = L"checkBox31";
			this->checkBox31->Size = System::Drawing::Size(15, 14);
			this->checkBox31->TabIndex = 70;
			this->checkBox31->UseVisualStyleBackColor = true;
			this->checkBox31->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox31_CheckedChanged);
			// 
			// checkBox21
			// 
			this->checkBox21->AutoSize = true;
			this->checkBox21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox21->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox21->Location = System::Drawing::Point(45, 60);
			this->checkBox21->Name = L"checkBox21";
			this->checkBox21->Size = System::Drawing::Size(15, 14);
			this->checkBox21->TabIndex = 60;
			this->checkBox21->UseVisualStyleBackColor = true;
			this->checkBox21->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox21_CheckedChanged);
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox11->Location = System::Drawing::Point(24, 60);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(15, 14);
			this->checkBox11->TabIndex = 50;
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox11_CheckedChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label10->Location = System::Drawing::Point(192, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 29);
			this->label10->TabIndex = 49;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(171, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 29);
			this->label9->TabIndex = 48;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Location = System::Drawing::Point(150, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 29);
			this->label8->TabIndex = 47;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(129, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 29);
			this->label7->TabIndex = 46;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(108, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 29);
			this->label6->TabIndex = 45;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(87, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 29);
			this->label5->TabIndex = 44;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(66, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 29);
			this->label4->TabIndex = 43;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(45, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 29);
			this->label3->TabIndex = 42;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(24, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 29);
			this->label2->TabIndex = 41;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox7->Location = System::Drawing::Point(3, 402);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(15, 14);
			this->checkBox7->TabIndex = 36;
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox7_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox6->Location = System::Drawing::Point(3, 345);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(15, 14);
			this->checkBox6->TabIndex = 35;
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox6_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox5->Location = System::Drawing::Point(3, 288);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(15, 14);
			this->checkBox5->TabIndex = 34;
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox5_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox4->Location = System::Drawing::Point(3, 231);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(15, 14);
			this->checkBox4->TabIndex = 32;
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox4_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox3->Location = System::Drawing::Point(3, 174);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(15, 14);
			this->checkBox3->TabIndex = 33;
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox2->Location = System::Drawing::Point(3, 117);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 31;
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox1->Location = System::Drawing::Point(3, 60);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 30;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox1_CheckedChanged_1);
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox8->Location = System::Drawing::Point(3, 459);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(15, 14);
			this->checkBox8->TabIndex = 37;
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox8_CheckedChanged);
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox9->Location = System::Drawing::Point(3, 516);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(15, 14);
			this->checkBox9->TabIndex = 38;
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox9_CheckedChanged);
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox10->Location = System::Drawing::Point(3, 573);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(15, 14);
			this->checkBox10->TabIndex = 39;
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox10_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 29);
			this->label1->TabIndex = 40;
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox12->Location = System::Drawing::Point(24, 117);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(15, 14);
			this->checkBox12->TabIndex = 51;
			this->checkBox12->UseVisualStyleBackColor = true;
			this->checkBox12->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox12_CheckedChanged);
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox13->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox13->Location = System::Drawing::Point(24, 174);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(15, 14);
			this->checkBox13->TabIndex = 52;
			this->checkBox13->UseVisualStyleBackColor = true;
			this->checkBox13->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox13_CheckedChanged);
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox14->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox14->Location = System::Drawing::Point(24, 231);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(15, 14);
			this->checkBox14->TabIndex = 53;
			this->checkBox14->UseVisualStyleBackColor = true;
			this->checkBox14->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox14_CheckedChanged);
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox15->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox15->Location = System::Drawing::Point(24, 288);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(15, 14);
			this->checkBox15->TabIndex = 54;
			this->checkBox15->UseVisualStyleBackColor = true;
			this->checkBox15->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox15_CheckedChanged);
			// 
			// checkBox16
			// 
			this->checkBox16->AutoSize = true;
			this->checkBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox16->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox16->Location = System::Drawing::Point(24, 345);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(15, 14);
			this->checkBox16->TabIndex = 55;
			this->checkBox16->UseVisualStyleBackColor = true;
			this->checkBox16->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox16_CheckedChanged);
			// 
			// checkBox17
			// 
			this->checkBox17->AutoSize = true;
			this->checkBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox17->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox17->Location = System::Drawing::Point(24, 402);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(15, 14);
			this->checkBox17->TabIndex = 56;
			this->checkBox17->UseVisualStyleBackColor = true;
			this->checkBox17->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox17_CheckedChanged);
			// 
			// checkBox18
			// 
			this->checkBox18->AutoSize = true;
			this->checkBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox18->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox18->Location = System::Drawing::Point(24, 459);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(15, 14);
			this->checkBox18->TabIndex = 57;
			this->checkBox18->UseVisualStyleBackColor = true;
			this->checkBox18->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox18_CheckedChanged);
			// 
			// checkBox19
			// 
			this->checkBox19->AutoSize = true;
			this->checkBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox19->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox19->Location = System::Drawing::Point(24, 516);
			this->checkBox19->Name = L"checkBox19";
			this->checkBox19->Size = System::Drawing::Size(15, 14);
			this->checkBox19->TabIndex = 58;
			this->checkBox19->UseVisualStyleBackColor = true;
			this->checkBox19->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox19_CheckedChanged);
			// 
			// checkBox20
			// 
			this->checkBox20->AutoSize = true;
			this->checkBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox20->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox20->Location = System::Drawing::Point(24, 573);
			this->checkBox20->Name = L"checkBox20";
			this->checkBox20->Size = System::Drawing::Size(15, 14);
			this->checkBox20->TabIndex = 59;
			this->checkBox20->UseVisualStyleBackColor = true;
			this->checkBox20->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox20_CheckedChanged);
			// 
			// checkBox22
			// 
			this->checkBox22->AutoSize = true;
			this->checkBox22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox22->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox22->Location = System::Drawing::Point(45, 117);
			this->checkBox22->Name = L"checkBox22";
			this->checkBox22->Size = System::Drawing::Size(15, 14);
			this->checkBox22->TabIndex = 61;
			this->checkBox22->UseVisualStyleBackColor = true;
			this->checkBox22->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox22_CheckedChanged);
			// 
			// checkBox23
			// 
			this->checkBox23->AutoSize = true;
			this->checkBox23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox23->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox23->Location = System::Drawing::Point(45, 174);
			this->checkBox23->Name = L"checkBox23";
			this->checkBox23->Size = System::Drawing::Size(15, 14);
			this->checkBox23->TabIndex = 62;
			this->checkBox23->UseVisualStyleBackColor = true;
			this->checkBox23->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox23_CheckedChanged);
			// 
			// checkBox24
			// 
			this->checkBox24->AutoSize = true;
			this->checkBox24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox24->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox24->Location = System::Drawing::Point(45, 231);
			this->checkBox24->Name = L"checkBox24";
			this->checkBox24->Size = System::Drawing::Size(15, 14);
			this->checkBox24->TabIndex = 63;
			this->checkBox24->UseVisualStyleBackColor = true;
			this->checkBox24->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox24_CheckedChanged);
			// 
			// checkBox25
			// 
			this->checkBox25->AutoSize = true;
			this->checkBox25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox25->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox25->Location = System::Drawing::Point(45, 288);
			this->checkBox25->Name = L"checkBox25";
			this->checkBox25->Size = System::Drawing::Size(15, 14);
			this->checkBox25->TabIndex = 64;
			this->checkBox25->UseVisualStyleBackColor = true;
			this->checkBox25->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox25_CheckedChanged);
			// 
			// checkBox26
			// 
			this->checkBox26->AutoSize = true;
			this->checkBox26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox26->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox26->Location = System::Drawing::Point(45, 345);
			this->checkBox26->Name = L"checkBox26";
			this->checkBox26->Size = System::Drawing::Size(15, 14);
			this->checkBox26->TabIndex = 65;
			this->checkBox26->UseVisualStyleBackColor = true;
			this->checkBox26->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox26_CheckedChanged);
			// 
			// checkBox27
			// 
			this->checkBox27->AutoSize = true;
			this->checkBox27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox27->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox27->Location = System::Drawing::Point(45, 402);
			this->checkBox27->Name = L"checkBox27";
			this->checkBox27->Size = System::Drawing::Size(15, 14);
			this->checkBox27->TabIndex = 66;
			this->checkBox27->UseVisualStyleBackColor = true;
			this->checkBox27->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox27_CheckedChanged);
			// 
			// checkBox28
			// 
			this->checkBox28->AutoSize = true;
			this->checkBox28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox28->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox28->Location = System::Drawing::Point(45, 459);
			this->checkBox28->Name = L"checkBox28";
			this->checkBox28->Size = System::Drawing::Size(15, 14);
			this->checkBox28->TabIndex = 67;
			this->checkBox28->UseVisualStyleBackColor = true;
			this->checkBox28->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox28_CheckedChanged);
			// 
			// checkBox29
			// 
			this->checkBox29->AutoSize = true;
			this->checkBox29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox29->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox29->Location = System::Drawing::Point(45, 516);
			this->checkBox29->Name = L"checkBox29";
			this->checkBox29->Size = System::Drawing::Size(15, 14);
			this->checkBox29->TabIndex = 68;
			this->checkBox29->UseVisualStyleBackColor = true;
			this->checkBox29->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox29_CheckedChanged);
			// 
			// checkBox30
			// 
			this->checkBox30->AutoSize = true;
			this->checkBox30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox30->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox30->Location = System::Drawing::Point(45, 573);
			this->checkBox30->Name = L"checkBox30";
			this->checkBox30->Size = System::Drawing::Size(15, 14);
			this->checkBox30->TabIndex = 69;
			this->checkBox30->UseVisualStyleBackColor = true;
			this->checkBox30->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox30_CheckedChanged);
			// 
			// checkBox32
			// 
			this->checkBox32->AutoSize = true;
			this->checkBox32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox32->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox32->Location = System::Drawing::Point(66, 117);
			this->checkBox32->Name = L"checkBox32";
			this->checkBox32->Size = System::Drawing::Size(15, 14);
			this->checkBox32->TabIndex = 71;
			this->checkBox32->UseVisualStyleBackColor = true;
			this->checkBox32->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox32_CheckedChanged);
			// 
			// checkBox33
			// 
			this->checkBox33->AutoSize = true;
			this->checkBox33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox33->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox33->Location = System::Drawing::Point(66, 174);
			this->checkBox33->Name = L"checkBox33";
			this->checkBox33->Size = System::Drawing::Size(15, 14);
			this->checkBox33->TabIndex = 72;
			this->checkBox33->UseVisualStyleBackColor = true;
			this->checkBox33->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox33_CheckedChanged);
			// 
			// checkBox34
			// 
			this->checkBox34->AutoSize = true;
			this->checkBox34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox34->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox34->Location = System::Drawing::Point(66, 231);
			this->checkBox34->Name = L"checkBox34";
			this->checkBox34->Size = System::Drawing::Size(15, 14);
			this->checkBox34->TabIndex = 73;
			this->checkBox34->UseVisualStyleBackColor = true;
			this->checkBox34->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox34_CheckedChanged);
			// 
			// checkBox35
			// 
			this->checkBox35->AutoSize = true;
			this->checkBox35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox35->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox35->Location = System::Drawing::Point(66, 288);
			this->checkBox35->Name = L"checkBox35";
			this->checkBox35->Size = System::Drawing::Size(15, 14);
			this->checkBox35->TabIndex = 74;
			this->checkBox35->UseVisualStyleBackColor = true;
			this->checkBox35->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox35_CheckedChanged);
			// 
			// checkBox36
			// 
			this->checkBox36->AutoSize = true;
			this->checkBox36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox36->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox36->Location = System::Drawing::Point(66, 345);
			this->checkBox36->Name = L"checkBox36";
			this->checkBox36->Size = System::Drawing::Size(15, 14);
			this->checkBox36->TabIndex = 75;
			this->checkBox36->UseVisualStyleBackColor = true;
			this->checkBox36->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox36_CheckedChanged);
			// 
			// checkBox37
			// 
			this->checkBox37->AutoSize = true;
			this->checkBox37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox37->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox37->Location = System::Drawing::Point(66, 402);
			this->checkBox37->Name = L"checkBox37";
			this->checkBox37->Size = System::Drawing::Size(15, 14);
			this->checkBox37->TabIndex = 76;
			this->checkBox37->UseVisualStyleBackColor = true;
			this->checkBox37->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox37_CheckedChanged);
			// 
			// checkBox38
			// 
			this->checkBox38->AutoSize = true;
			this->checkBox38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox38->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox38->Location = System::Drawing::Point(66, 459);
			this->checkBox38->Name = L"checkBox38";
			this->checkBox38->Size = System::Drawing::Size(15, 14);
			this->checkBox38->TabIndex = 77;
			this->checkBox38->UseVisualStyleBackColor = true;
			this->checkBox38->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox38_CheckedChanged);
			// 
			// checkBox39
			// 
			this->checkBox39->AutoSize = true;
			this->checkBox39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox39->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox39->Location = System::Drawing::Point(66, 516);
			this->checkBox39->Name = L"checkBox39";
			this->checkBox39->Size = System::Drawing::Size(15, 14);
			this->checkBox39->TabIndex = 78;
			this->checkBox39->UseVisualStyleBackColor = true;
			this->checkBox39->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox39_CheckedChanged);
			// 
			// checkBox40
			// 
			this->checkBox40->AutoSize = true;
			this->checkBox40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox40->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox40->Location = System::Drawing::Point(66, 573);
			this->checkBox40->Name = L"checkBox40";
			this->checkBox40->Size = System::Drawing::Size(15, 14);
			this->checkBox40->TabIndex = 79;
			this->checkBox40->UseVisualStyleBackColor = true;
			this->checkBox40->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox40_CheckedChanged);
			// 
			// checkBox42
			// 
			this->checkBox42->AutoSize = true;
			this->checkBox42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox42->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox42->Location = System::Drawing::Point(87, 117);
			this->checkBox42->Name = L"checkBox42";
			this->checkBox42->Size = System::Drawing::Size(15, 14);
			this->checkBox42->TabIndex = 81;
			this->checkBox42->UseVisualStyleBackColor = true;
			this->checkBox42->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox42_CheckedChanged);
			// 
			// checkBox43
			// 
			this->checkBox43->AutoSize = true;
			this->checkBox43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox43->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox43->Location = System::Drawing::Point(87, 174);
			this->checkBox43->Name = L"checkBox43";
			this->checkBox43->Size = System::Drawing::Size(15, 14);
			this->checkBox43->TabIndex = 82;
			this->checkBox43->UseVisualStyleBackColor = true;
			this->checkBox43->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox43_CheckedChanged);
			// 
			// checkBox44
			// 
			this->checkBox44->AutoSize = true;
			this->checkBox44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox44->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox44->Location = System::Drawing::Point(87, 231);
			this->checkBox44->Name = L"checkBox44";
			this->checkBox44->Size = System::Drawing::Size(15, 14);
			this->checkBox44->TabIndex = 83;
			this->checkBox44->UseVisualStyleBackColor = true;
			this->checkBox44->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox44_CheckedChanged);
			// 
			// checkBox45
			// 
			this->checkBox45->AutoSize = true;
			this->checkBox45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox45->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox45->Location = System::Drawing::Point(87, 288);
			this->checkBox45->Name = L"checkBox45";
			this->checkBox45->Size = System::Drawing::Size(15, 14);
			this->checkBox45->TabIndex = 84;
			this->checkBox45->UseVisualStyleBackColor = true;
			this->checkBox45->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox45_CheckedChanged);
			// 
			// checkBox46
			// 
			this->checkBox46->AutoSize = true;
			this->checkBox46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox46->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox46->Location = System::Drawing::Point(87, 345);
			this->checkBox46->Name = L"checkBox46";
			this->checkBox46->Size = System::Drawing::Size(15, 14);
			this->checkBox46->TabIndex = 85;
			this->checkBox46->UseVisualStyleBackColor = true;
			this->checkBox46->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox46_CheckedChanged);
			// 
			// checkBox47
			// 
			this->checkBox47->AutoSize = true;
			this->checkBox47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox47->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox47->Location = System::Drawing::Point(87, 402);
			this->checkBox47->Name = L"checkBox47";
			this->checkBox47->Size = System::Drawing::Size(15, 14);
			this->checkBox47->TabIndex = 86;
			this->checkBox47->UseVisualStyleBackColor = true;
			this->checkBox47->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox47_CheckedChanged);
			// 
			// checkBox48
			// 
			this->checkBox48->AutoSize = true;
			this->checkBox48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox48->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox48->Location = System::Drawing::Point(87, 459);
			this->checkBox48->Name = L"checkBox48";
			this->checkBox48->Size = System::Drawing::Size(15, 14);
			this->checkBox48->TabIndex = 87;
			this->checkBox48->UseVisualStyleBackColor = true;
			this->checkBox48->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox48_CheckedChanged);
			// 
			// checkBox49
			// 
			this->checkBox49->AutoSize = true;
			this->checkBox49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox49->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox49->Location = System::Drawing::Point(87, 516);
			this->checkBox49->Name = L"checkBox49";
			this->checkBox49->Size = System::Drawing::Size(15, 14);
			this->checkBox49->TabIndex = 88;
			this->checkBox49->UseVisualStyleBackColor = true;
			this->checkBox49->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox49_CheckedChanged);
			// 
			// checkBox50
			// 
			this->checkBox50->AutoSize = true;
			this->checkBox50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox50->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox50->Location = System::Drawing::Point(87, 573);
			this->checkBox50->Name = L"checkBox50";
			this->checkBox50->Size = System::Drawing::Size(15, 14);
			this->checkBox50->TabIndex = 89;
			this->checkBox50->UseVisualStyleBackColor = true;
			this->checkBox50->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox50_CheckedChanged);
			// 
			// checkBox52
			// 
			this->checkBox52->AutoSize = true;
			this->checkBox52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox52->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox52->Location = System::Drawing::Point(108, 117);
			this->checkBox52->Name = L"checkBox52";
			this->checkBox52->Size = System::Drawing::Size(15, 14);
			this->checkBox52->TabIndex = 91;
			this->checkBox52->UseVisualStyleBackColor = true;
			this->checkBox52->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox52_CheckedChanged);
			// 
			// checkBox53
			// 
			this->checkBox53->AutoSize = true;
			this->checkBox53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox53->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox53->Location = System::Drawing::Point(108, 174);
			this->checkBox53->Name = L"checkBox53";
			this->checkBox53->Size = System::Drawing::Size(15, 14);
			this->checkBox53->TabIndex = 92;
			this->checkBox53->UseVisualStyleBackColor = true;
			this->checkBox53->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox53_CheckedChanged);
			// 
			// checkBox54
			// 
			this->checkBox54->AutoSize = true;
			this->checkBox54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox54->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox54->Location = System::Drawing::Point(108, 231);
			this->checkBox54->Name = L"checkBox54";
			this->checkBox54->Size = System::Drawing::Size(15, 14);
			this->checkBox54->TabIndex = 93;
			this->checkBox54->UseVisualStyleBackColor = true;
			this->checkBox54->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox54_CheckedChanged);
			// 
			// checkBox55
			// 
			this->checkBox55->AutoSize = true;
			this->checkBox55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox55->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox55->Location = System::Drawing::Point(108, 288);
			this->checkBox55->Name = L"checkBox55";
			this->checkBox55->Size = System::Drawing::Size(15, 14);
			this->checkBox55->TabIndex = 94;
			this->checkBox55->UseVisualStyleBackColor = true;
			this->checkBox55->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox55_CheckedChanged);
			// 
			// checkBox56
			// 
			this->checkBox56->AutoSize = true;
			this->checkBox56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox56->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox56->Location = System::Drawing::Point(108, 345);
			this->checkBox56->Name = L"checkBox56";
			this->checkBox56->Size = System::Drawing::Size(15, 14);
			this->checkBox56->TabIndex = 95;
			this->checkBox56->UseVisualStyleBackColor = true;
			this->checkBox56->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox56_CheckedChanged);
			// 
			// checkBox57
			// 
			this->checkBox57->AutoSize = true;
			this->checkBox57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox57->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox57->Location = System::Drawing::Point(108, 402);
			this->checkBox57->Name = L"checkBox57";
			this->checkBox57->Size = System::Drawing::Size(15, 14);
			this->checkBox57->TabIndex = 96;
			this->checkBox57->UseVisualStyleBackColor = true;
			this->checkBox57->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox57_CheckedChanged);
			// 
			// checkBox58
			// 
			this->checkBox58->AutoSize = true;
			this->checkBox58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox58->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox58->Location = System::Drawing::Point(108, 459);
			this->checkBox58->Name = L"checkBox58";
			this->checkBox58->Size = System::Drawing::Size(15, 14);
			this->checkBox58->TabIndex = 97;
			this->checkBox58->UseVisualStyleBackColor = true;
			this->checkBox58->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox58_CheckedChanged);
			// 
			// checkBox59
			// 
			this->checkBox59->AutoSize = true;
			this->checkBox59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox59->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox59->Location = System::Drawing::Point(108, 516);
			this->checkBox59->Name = L"checkBox59";
			this->checkBox59->Size = System::Drawing::Size(15, 14);
			this->checkBox59->TabIndex = 98;
			this->checkBox59->UseVisualStyleBackColor = true;
			this->checkBox59->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox59_CheckedChanged);
			// 
			// checkBox60
			// 
			this->checkBox60->AutoSize = true;
			this->checkBox60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox60->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox60->Location = System::Drawing::Point(108, 573);
			this->checkBox60->Name = L"checkBox60";
			this->checkBox60->Size = System::Drawing::Size(15, 14);
			this->checkBox60->TabIndex = 99;
			this->checkBox60->UseVisualStyleBackColor = true;
			this->checkBox60->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox60_CheckedChanged);
			// 
			// checkBox62
			// 
			this->checkBox62->AutoSize = true;
			this->checkBox62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox62->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox62->Location = System::Drawing::Point(129, 117);
			this->checkBox62->Name = L"checkBox62";
			this->checkBox62->Size = System::Drawing::Size(15, 14);
			this->checkBox62->TabIndex = 101;
			this->checkBox62->UseVisualStyleBackColor = true;
			this->checkBox62->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox62_CheckedChanged);
			// 
			// checkBox63
			// 
			this->checkBox63->AutoSize = true;
			this->checkBox63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox63->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox63->Location = System::Drawing::Point(129, 174);
			this->checkBox63->Name = L"checkBox63";
			this->checkBox63->Size = System::Drawing::Size(15, 14);
			this->checkBox63->TabIndex = 102;
			this->checkBox63->UseVisualStyleBackColor = true;
			this->checkBox63->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox63_CheckedChanged);
			// 
			// checkBox64
			// 
			this->checkBox64->AutoSize = true;
			this->checkBox64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox64->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox64->Location = System::Drawing::Point(129, 231);
			this->checkBox64->Name = L"checkBox64";
			this->checkBox64->Size = System::Drawing::Size(15, 14);
			this->checkBox64->TabIndex = 103;
			this->checkBox64->UseVisualStyleBackColor = true;
			this->checkBox64->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox64_CheckedChanged);
			// 
			// checkBox65
			// 
			this->checkBox65->AutoSize = true;
			this->checkBox65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox65->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox65->Location = System::Drawing::Point(129, 288);
			this->checkBox65->Name = L"checkBox65";
			this->checkBox65->Size = System::Drawing::Size(15, 14);
			this->checkBox65->TabIndex = 104;
			this->checkBox65->UseVisualStyleBackColor = true;
			this->checkBox65->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox65_CheckedChanged);
			// 
			// checkBox66
			// 
			this->checkBox66->AutoSize = true;
			this->checkBox66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox66->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox66->Location = System::Drawing::Point(129, 345);
			this->checkBox66->Name = L"checkBox66";
			this->checkBox66->Size = System::Drawing::Size(15, 14);
			this->checkBox66->TabIndex = 105;
			this->checkBox66->UseVisualStyleBackColor = true;
			this->checkBox66->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox66_CheckedChanged);
			// 
			// checkBox67
			// 
			this->checkBox67->AutoSize = true;
			this->checkBox67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox67->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox67->Location = System::Drawing::Point(129, 402);
			this->checkBox67->Name = L"checkBox67";
			this->checkBox67->Size = System::Drawing::Size(15, 14);
			this->checkBox67->TabIndex = 106;
			this->checkBox67->UseVisualStyleBackColor = true;
			this->checkBox67->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox67_CheckedChanged);
			// 
			// checkBox68
			// 
			this->checkBox68->AutoSize = true;
			this->checkBox68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox68->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox68->Location = System::Drawing::Point(129, 459);
			this->checkBox68->Name = L"checkBox68";
			this->checkBox68->Size = System::Drawing::Size(15, 14);
			this->checkBox68->TabIndex = 107;
			this->checkBox68->UseVisualStyleBackColor = true;
			this->checkBox68->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox68_CheckedChanged);
			// 
			// checkBox69
			// 
			this->checkBox69->AutoSize = true;
			this->checkBox69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox69->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox69->Location = System::Drawing::Point(129, 516);
			this->checkBox69->Name = L"checkBox69";
			this->checkBox69->Size = System::Drawing::Size(15, 14);
			this->checkBox69->TabIndex = 108;
			this->checkBox69->UseVisualStyleBackColor = true;
			this->checkBox69->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox69_CheckedChanged);
			// 
			// checkBox70
			// 
			this->checkBox70->AutoSize = true;
			this->checkBox70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox70->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox70->Location = System::Drawing::Point(129, 573);
			this->checkBox70->Name = L"checkBox70";
			this->checkBox70->Size = System::Drawing::Size(15, 14);
			this->checkBox70->TabIndex = 109;
			this->checkBox70->UseVisualStyleBackColor = true;
			this->checkBox70->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox70_CheckedChanged);
			// 
			// checkBox72
			// 
			this->checkBox72->AutoSize = true;
			this->checkBox72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox72->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox72->Location = System::Drawing::Point(150, 117);
			this->checkBox72->Name = L"checkBox72";
			this->checkBox72->Size = System::Drawing::Size(15, 14);
			this->checkBox72->TabIndex = 111;
			this->checkBox72->UseVisualStyleBackColor = true;
			this->checkBox72->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox72_CheckedChanged);
			// 
			// checkBox73
			// 
			this->checkBox73->AutoSize = true;
			this->checkBox73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox73->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox73->Location = System::Drawing::Point(150, 174);
			this->checkBox73->Name = L"checkBox73";
			this->checkBox73->Size = System::Drawing::Size(15, 14);
			this->checkBox73->TabIndex = 112;
			this->checkBox73->UseVisualStyleBackColor = true;
			this->checkBox73->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox73_CheckedChanged);
			// 
			// checkBox74
			// 
			this->checkBox74->AutoSize = true;
			this->checkBox74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox74->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox74->Location = System::Drawing::Point(150, 231);
			this->checkBox74->Name = L"checkBox74";
			this->checkBox74->Size = System::Drawing::Size(15, 14);
			this->checkBox74->TabIndex = 113;
			this->checkBox74->UseVisualStyleBackColor = true;
			this->checkBox74->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox74_CheckedChanged);
			// 
			// checkBox75
			// 
			this->checkBox75->AutoSize = true;
			this->checkBox75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox75->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox75->Location = System::Drawing::Point(150, 288);
			this->checkBox75->Name = L"checkBox75";
			this->checkBox75->Size = System::Drawing::Size(15, 14);
			this->checkBox75->TabIndex = 114;
			this->checkBox75->UseVisualStyleBackColor = true;
			this->checkBox75->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox75_CheckedChanged);
			// 
			// checkBox76
			// 
			this->checkBox76->AutoSize = true;
			this->checkBox76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox76->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox76->Location = System::Drawing::Point(150, 345);
			this->checkBox76->Name = L"checkBox76";
			this->checkBox76->Size = System::Drawing::Size(15, 14);
			this->checkBox76->TabIndex = 115;
			this->checkBox76->UseVisualStyleBackColor = true;
			this->checkBox76->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox76_CheckedChanged);
			// 
			// checkBox77
			// 
			this->checkBox77->AutoSize = true;
			this->checkBox77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox77->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox77->Location = System::Drawing::Point(150, 402);
			this->checkBox77->Name = L"checkBox77";
			this->checkBox77->Size = System::Drawing::Size(15, 14);
			this->checkBox77->TabIndex = 116;
			this->checkBox77->UseVisualStyleBackColor = true;
			this->checkBox77->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox77_CheckedChanged);
			// 
			// checkBox78
			// 
			this->checkBox78->AutoSize = true;
			this->checkBox78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox78->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox78->Location = System::Drawing::Point(150, 459);
			this->checkBox78->Name = L"checkBox78";
			this->checkBox78->Size = System::Drawing::Size(15, 14);
			this->checkBox78->TabIndex = 117;
			this->checkBox78->UseVisualStyleBackColor = true;
			this->checkBox78->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox78_CheckedChanged);
			// 
			// checkBox79
			// 
			this->checkBox79->AutoSize = true;
			this->checkBox79->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox79->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox79->Location = System::Drawing::Point(150, 516);
			this->checkBox79->Name = L"checkBox79";
			this->checkBox79->Size = System::Drawing::Size(15, 14);
			this->checkBox79->TabIndex = 118;
			this->checkBox79->UseVisualStyleBackColor = true;
			this->checkBox79->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox79_CheckedChanged);
			// 
			// checkBox80
			// 
			this->checkBox80->AutoSize = true;
			this->checkBox80->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox80->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox80->Location = System::Drawing::Point(150, 573);
			this->checkBox80->Name = L"checkBox80";
			this->checkBox80->Size = System::Drawing::Size(15, 14);
			this->checkBox80->TabIndex = 119;
			this->checkBox80->UseVisualStyleBackColor = true;
			this->checkBox80->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox80_CheckedChanged);
			// 
			// checkBox82
			// 
			this->checkBox82->AutoSize = true;
			this->checkBox82->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox82->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox82->Location = System::Drawing::Point(171, 117);
			this->checkBox82->Name = L"checkBox82";
			this->checkBox82->Size = System::Drawing::Size(15, 14);
			this->checkBox82->TabIndex = 121;
			this->checkBox82->UseVisualStyleBackColor = true;
			this->checkBox82->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox82_CheckedChanged);
			// 
			// checkBox83
			// 
			this->checkBox83->AutoSize = true;
			this->checkBox83->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox83->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox83->Location = System::Drawing::Point(171, 174);
			this->checkBox83->Name = L"checkBox83";
			this->checkBox83->Size = System::Drawing::Size(15, 14);
			this->checkBox83->TabIndex = 122;
			this->checkBox83->UseVisualStyleBackColor = true;
			this->checkBox83->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox83_CheckedChanged);
			// 
			// checkBox84
			// 
			this->checkBox84->AutoSize = true;
			this->checkBox84->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox84->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox84->Location = System::Drawing::Point(171, 231);
			this->checkBox84->Name = L"checkBox84";
			this->checkBox84->Size = System::Drawing::Size(15, 14);
			this->checkBox84->TabIndex = 123;
			this->checkBox84->UseVisualStyleBackColor = true;
			this->checkBox84->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox84_CheckedChanged);
			// 
			// checkBox85
			// 
			this->checkBox85->AutoSize = true;
			this->checkBox85->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox85->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox85->Location = System::Drawing::Point(171, 288);
			this->checkBox85->Name = L"checkBox85";
			this->checkBox85->Size = System::Drawing::Size(15, 14);
			this->checkBox85->TabIndex = 124;
			this->checkBox85->UseVisualStyleBackColor = true;
			this->checkBox85->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox85_CheckedChanged);
			// 
			// checkBox86
			// 
			this->checkBox86->AutoSize = true;
			this->checkBox86->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox86->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox86->Location = System::Drawing::Point(171, 345);
			this->checkBox86->Name = L"checkBox86";
			this->checkBox86->Size = System::Drawing::Size(15, 14);
			this->checkBox86->TabIndex = 125;
			this->checkBox86->UseVisualStyleBackColor = true;
			this->checkBox86->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox86_CheckedChanged);
			// 
			// checkBox87
			// 
			this->checkBox87->AutoSize = true;
			this->checkBox87->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox87->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox87->Location = System::Drawing::Point(171, 402);
			this->checkBox87->Name = L"checkBox87";
			this->checkBox87->Size = System::Drawing::Size(15, 14);
			this->checkBox87->TabIndex = 126;
			this->checkBox87->UseVisualStyleBackColor = true;
			this->checkBox87->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox87_CheckedChanged);
			// 
			// checkBox88
			// 
			this->checkBox88->AutoSize = true;
			this->checkBox88->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox88->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox88->Location = System::Drawing::Point(171, 459);
			this->checkBox88->Name = L"checkBox88";
			this->checkBox88->Size = System::Drawing::Size(15, 14);
			this->checkBox88->TabIndex = 127;
			this->checkBox88->UseVisualStyleBackColor = true;
			this->checkBox88->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox88_CheckedChanged);
			// 
			// checkBox89
			// 
			this->checkBox89->AutoSize = true;
			this->checkBox89->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox89->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox89->Location = System::Drawing::Point(171, 516);
			this->checkBox89->Name = L"checkBox89";
			this->checkBox89->Size = System::Drawing::Size(15, 14);
			this->checkBox89->TabIndex = 128;
			this->checkBox89->UseVisualStyleBackColor = true;
			this->checkBox89->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox89_CheckedChanged);
			// 
			// checkBox90
			// 
			this->checkBox90->AutoSize = true;
			this->checkBox90->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox90->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox90->Location = System::Drawing::Point(171, 573);
			this->checkBox90->Name = L"checkBox90";
			this->checkBox90->Size = System::Drawing::Size(15, 14);
			this->checkBox90->TabIndex = 129;
			this->checkBox90->UseVisualStyleBackColor = true;
			this->checkBox90->CheckedChanged += gcnew System::EventHandler(this, &Categoria::checkBox90_CheckedChanged);
			// 
			// dataGridView2
			// 
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->dataGridView2->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::MistyRose;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn12
			});
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::MistyRose;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->GridColor = System::Drawing::Color::LightPink;
			this->dataGridView2->Location = System::Drawing::Point(150, 76);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::MistyRose;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView2->RowHeadersVisible = false;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView2->RowsDefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView2->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView2->RowTemplate->Height = 30;
			this->dataGridView2->Size = System::Drawing::Size(1141, 640);
			this->dataGridView2->TabIndex = 39;
			this->dataGridView2->Visible = false;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Categoría";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"Iteraciones";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->Width = 200;
			// 
			// Categoria
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->ClientSize = System::Drawing::Size(1291, 716);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->iconButton2);
			this->Controls->Add(this->grupos);
			this->Controls->Add(this->Iniciar);
			this->Controls->Add(this->Palabras);
			this->Controls->Add(this->Diccionario);
			this->Controls->Add(this->panelTitleBar);
			this->Controls->Add(this->panelMenu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Categoria";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Categorías";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panelTitleBar->ResumeLayout(false);
			this->panelTitleBar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panelMenu->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//Activador de boton de inicio
//_________________________________________________________________________________________________________________________________________________________________________
void Chequeo() {
	if (this->Diccionario->IconColor == System::Drawing::Color::DarkMagenta &&
		this->Palabras->IconColor == System::Drawing::Color::DarkMagenta	&&
		this->grupos->IconColor == System::Drawing::Color::DarkMagenta	&&
		this->iconButton2->IconColor == System::Drawing::Color::DarkMagenta) {
		this->Iniciar->Visible = true;
	}
	
	return;
}
private: System::Void title_Click(System::Object^ sender, System::EventArgs^ e) {
}
//Boton de casa
//__________________________________________________________________________________________________________________________________
private: System::Void iconButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->Hide();
	this->Close();
}
//Boton Insertar datos de los grupos
//_____________________________________________________________________________________
private: System::Void grupos_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		Stream^ grupos;
		Openfdg->Filter = "Excel|*.csv";
		Openfdg->Title = "Inserción de datos de los grupos";

		if (Openfdg->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if ((grupos = Openfdg->OpenFile()) != nullptr) {
				String^ caption = "Inserción de datos de los grupos";
				String^ strfilename = "Se ha añadido el archivo datos de los grupos con ruta " + Openfdg->FileName;
				MessageBox::Show(strfilename, caption);
				grupos->Close();
				this->grupos->ForeColor = System::Drawing::Color::DarkMagenta;
				this->grupos->IconColor = System::Drawing::Color::DarkMagenta;
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
//Boton de Diccionario
//_____________________________________________________________________________________
private: System::Void iconButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
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

//Boton filtrado
//_________________________________________________________________________________________________________________________________________________________________________
private: System::Void Palabras_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		Stream^ Pal;
		Openfdp->Filter = "Excel|*.csv";
		Openfdp->Title = "Inserción de archivo palabras filtradas";

		if (Openfdp->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if ((Pal = Openfdp->OpenFile()) != nullptr) {
				String^ caption = "Inserción de palabras filtradas";
				String^ strfilename = "Se ha añadido el archivo de palabras filtradas con ruta " + Openfdp->FileName;
				MessageBox::Show(strfilename, caption);
				Pal->Close();
				this->Palabras->ForeColor = System::Drawing::Color::DarkMagenta;
				this->Palabras->IconColor = System::Drawing::Color::DarkMagenta;
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

//Boton categoria
//_________________________________________________________________________________________________________________________________________________________________________
private: System::Void Diccionario_Click(System::Object^ sender, System::EventArgs^ e) {
	//Apertura de archivo
	try {
		Stream^ Dicc;
		Openfdc->Filter = "Excel|*.csv";
		Openfdc->Title = "Inserción de archivo categoría";

		if (Openfdc->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if ((Dicc = Openfdc->OpenFile()) != nullptr) {
				String^ caption = "Inserción de categoría";
				String^ strfilename = "Se ha añadido el archivo de categoría con ruta " + Openfdc->FileName;
				MessageBox::Show(strfilename, caption);
				Dicc->Close();
				this->Diccionario->ForeColor = System::Drawing::Color::DarkMagenta;
				this->Diccionario->IconColor = System::Drawing::Color::DarkMagenta;
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


//Boton de iniciar
//_________________________________________________________________________________________________________________________________________________________________________
private: System::Void Iniciar_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		this->Diccionario->Visible = false;
		this->Palabras->Visible = false;
		this->iconButton2->Visible = false;
		this->grupos->Visible = false;
		this->Iniciar->Visible = false;
		this->dataGridView1->Visible = false;
		this->dataGridView2->Visible = false;
		this->instruccion->Visible = false;
		this->titulo->Visible = true;
		this->iconButton3->Visible = true;
		this->tableLayoutPanel1->Visible = true;


//_________________________________________________________________________________________________________________________________________________________________________
//Obtenemos numero de lineas en grupos
//_________________________________________________________________________________________________________________________________________________________________________
		StreamReader^ lineas_G = File::OpenText(Openfdg->FileName);
		int num_lineasG;
		while (lineas_G->ReadLine() != nullptr) { num_lineasG++; }
		lineas_G->Close();
//_________________________________________________________________________________________________________________________________________________________________________
//Obtenemos grupos y subgrupos
//_________________________________________________________________________________________________________________________________________________________________________
		StreamReader^ datos = File::OpenText(Openfdg->FileName);
		String^ renglon_G;
		array<String^>^ Agrupos;
		array<String^>^ Asubgrupos;
		array<String^>^ palabras;
		String^ Var1;
		String^ Var2;
		String^ Var3;
		String^ Var4;
		String^ Var5;
		String^ Var6;
		String^ Var7;
		String^ Var8;
		String^ Var9;
		String^ Var10;

		renglon_G = datos->ReadLine();										//Leemos linea de titulos para sacar grupos
		Agrupos = renglon_G->Split(',');									//Separamos linea por comas 
		int tam_Agrupos = Agrupos->Length;									//Contamos numero de celdas en linea
		int assis;
		for (int d = 1; d < tam_Agrupos; d++) {
			if (Agrupos[d]->IsNullOrEmpty(Agrupos[d])) {
				assis = d;
				break;
			}
		}
		Agrupos->Resize(Agrupos, assis);										//Ajustamos el tamaño de Agrupos al numero de grupos encontrados
		tam_Agrupos = Agrupos->Length;
		tam_Agrupos--;

		if (tam_Agrupos <= 0) { MessageBox::Show("Se ingreso un archivo datos de los grupos con formato erroneo o sin grupos"); }
		if (tam_Agrupos > 10) { MessageBox::Show("Se ingreso un archivo datos de los grupos con formato erroneo o con mas de 10 grupos"); }
		if (tam_Agrupos == 1) {
			if (Agrupos[1]->IsNullOrEmpty(Agrupos[1])) {}
			else { Var1 = Agrupos[1]; }
			this->label1->Text = Agrupos[1];
		}
		if (tam_Agrupos == 2) {
			if (Agrupos[1]->IsNullOrEmpty(Agrupos[1])) {}
			else { Var1 = Agrupos[1]; }
			if (Agrupos[2]->IsNullOrEmpty(Agrupos[2])) {}
			else { Var2 = Agrupos[2]; }
			this->label1->Text = Agrupos[1];
			this->label2->Text = Agrupos[2];
		}
		if (tam_Agrupos == 3) {
			if (Agrupos[1]->IsNullOrEmpty(Agrupos[1])) {}
			else { Var1 = Agrupos[1]; }
			if (Agrupos[2]->IsNullOrEmpty(Agrupos[2])) {}
			else { Var2 = Agrupos[2]; }
			if (Agrupos[3]->IsNullOrEmpty(Agrupos[3])) {}
			else { Var3 = Agrupos[3]; }
			this->label1->Text = Agrupos[1];
			this->label2->Text = Agrupos[2];
			this->label3->Text = Agrupos[3];
		}
		if (tam_Agrupos == 4) {
			if (Agrupos[1]->IsNullOrEmpty(Agrupos[1])) {}
			else { Var1 = Agrupos[1]; }
			if (Agrupos[2]->IsNullOrEmpty(Agrupos[2])) {}
			else { Var2 = Agrupos[2]; }
			if (Agrupos[3]->IsNullOrEmpty(Agrupos[3])) {}
			else { Var3 = Agrupos[3]; }
			if (Agrupos[4]->IsNullOrEmpty(Agrupos[4])) {}
			else { Var4 = Agrupos[4]; }
			this->label1->Text = Agrupos[1];
			this->label2->Text = Agrupos[2];
			this->label3->Text = Agrupos[3];
			this->label4->Text = Agrupos[4];
		}
		if (tam_Agrupos == 5) {
			if (Agrupos[1]->IsNullOrEmpty(Agrupos[1])) {}
			else { Var1 = Agrupos[1]; }
			if (Agrupos[2]->IsNullOrEmpty(Agrupos[2])) {}
			else { Var2 = Agrupos[2]; }
			if (Agrupos[3]->IsNullOrEmpty(Agrupos[3])) {}
			else { Var3 = Agrupos[3]; }
			if (Agrupos[4]->IsNullOrEmpty(Agrupos[4])) {}
			else { Var4 = Agrupos[4]; }
			if (Agrupos[5]->IsNullOrEmpty(Agrupos[5])) {}
			else { Var5 = Agrupos[5]; }
			this->label1->Text = Agrupos[1];
			this->label2->Text = Agrupos[2];
			this->label3->Text = Agrupos[3];
			this->label4->Text = Agrupos[4];
			this->label5->Text = Agrupos[5];
		}
		if (tam_Agrupos == 6) {
			if (Agrupos[1]->IsNullOrEmpty(Agrupos[1])) {}
			else { Var1 = Agrupos[1]; }
			if (Agrupos[2]->IsNullOrEmpty(Agrupos[2])) {}
			else { Var2 = Agrupos[2]; }
			if (Agrupos[3]->IsNullOrEmpty(Agrupos[3])) {}
			else { Var3 = Agrupos[3]; }
			if (Agrupos[4]->IsNullOrEmpty(Agrupos[4])) {}
			else { Var4 = Agrupos[4]; }
			if (Agrupos[5]->IsNullOrEmpty(Agrupos[5])) {}
			else { Var5 = Agrupos[5]; }
			if (Agrupos[6]->IsNullOrEmpty(Agrupos[6])) {}
			else { Var6 = Agrupos[6]; }
			this->label1->Text = Agrupos[1];
			this->label2->Text = Agrupos[2];
			this->label3->Text = Agrupos[3];
			this->label4->Text = Agrupos[4];
			this->label5->Text = Agrupos[5];
			this->label6->Text = Agrupos[6];
		}
		if (tam_Agrupos == 7) {
			if (Agrupos[1]->IsNullOrEmpty(Agrupos[1])) {}
			else { Var1 = Agrupos[1]; }
			if (Agrupos[2]->IsNullOrEmpty(Agrupos[2])) {}
			else { Var2 = Agrupos[2]; }
			if (Agrupos[3]->IsNullOrEmpty(Agrupos[3])) {}
			else { Var3 = Agrupos[3]; }
			if (Agrupos[4]->IsNullOrEmpty(Agrupos[4])) {}
			else { Var4 = Agrupos[4]; }
			if (Agrupos[5]->IsNullOrEmpty(Agrupos[5])) {}
			else { Var5 = Agrupos[5]; }
			if (Agrupos[6]->IsNullOrEmpty(Agrupos[6])) {}
			else { Var6 = Agrupos[6]; }
			if (Agrupos[7]->IsNullOrEmpty(Agrupos[7])) {}
			else { Var7 = Agrupos[7]; }
			this->label1->Text = Agrupos[1];
			this->label2->Text = Agrupos[2];
			this->label3->Text = Agrupos[3];
			this->label4->Text = Agrupos[4];
			this->label5->Text = Agrupos[5];
			this->label6->Text = Agrupos[6];
			this->label7->Text = Agrupos[7];
		}
		if (tam_Agrupos == 8) {
			if (Agrupos[1]->IsNullOrEmpty(Agrupos[1])) {}
			else { Var1 = Agrupos[1]; }
			if (Agrupos[2]->IsNullOrEmpty(Agrupos[2])) {}
			else { Var2 = Agrupos[2]; }
			if (Agrupos[3]->IsNullOrEmpty(Agrupos[3])) {}
			else { Var3 = Agrupos[3]; }
			if (Agrupos[4]->IsNullOrEmpty(Agrupos[4])) {}
			else { Var4 = Agrupos[4]; }
			if (Agrupos[5]->IsNullOrEmpty(Agrupos[5])) {}
			else { Var5 = Agrupos[5]; }
			if (Agrupos[6]->IsNullOrEmpty(Agrupos[6])) {}
			else { Var6 = Agrupos[6]; }
			if (Agrupos[7]->IsNullOrEmpty(Agrupos[7])) {}
			else { Var7 = Agrupos[7]; }
			if (Agrupos[8]->IsNullOrEmpty(Agrupos[8])) {}
			else { Var8 = Agrupos[8]; }
			this->label1->Text = Agrupos[1];
			this->label2->Text = Agrupos[2];
			this->label3->Text = Agrupos[3];
			this->label4->Text = Agrupos[4];
			this->label5->Text = Agrupos[5];
			this->label6->Text = Agrupos[6];
			this->label7->Text = Agrupos[7];
			this->label8->Text = Agrupos[8];
		}
		if (tam_Agrupos == 9) {
			if (Agrupos[1]->IsNullOrEmpty(Agrupos[1])) {}
			else { Var1 = Agrupos[1]; }
			if (Agrupos[2]->IsNullOrEmpty(Agrupos[2])) {}
			else { Var2 = Agrupos[2]; }
			if (Agrupos[3]->IsNullOrEmpty(Agrupos[3])) {}
			else { Var3 = Agrupos[3]; }
			if (Agrupos[4]->IsNullOrEmpty(Agrupos[4])) {}
			else { Var4 = Agrupos[4]; }
			if (Agrupos[5]->IsNullOrEmpty(Agrupos[5])) {}
			else { Var5 = Agrupos[5]; }
			if (Agrupos[6]->IsNullOrEmpty(Agrupos[6])) {}
			else { Var6 = Agrupos[6]; }
			if (Agrupos[7]->IsNullOrEmpty(Agrupos[7])) {}
			else { Var7 = Agrupos[7]; }
			if (Agrupos[8]->IsNullOrEmpty(Agrupos[8])) {}
			else { Var8 = Agrupos[8]; }
			if (Agrupos[9]->IsNullOrEmpty(Agrupos[9])) {}
			else { Var9 = Agrupos[9]; }
			this->label1->Text = Agrupos[1];
			this->label2->Text = Agrupos[2];
			this->label3->Text = Agrupos[3];
			this->label4->Text = Agrupos[4];
			this->label5->Text = Agrupos[5];
			this->label6->Text = Agrupos[6];
			this->label7->Text = Agrupos[7];
			this->label8->Text = Agrupos[8];
			this->label9->Text = Agrupos[9];
		}
		if (tam_Agrupos == 10) {
			if (Agrupos[1]->IsNullOrEmpty(Agrupos[1])) {}
			else { Var1 = Agrupos[1]; }
			if (Agrupos[2]->IsNullOrEmpty(Agrupos[2])) {}
			else { Var2 = Agrupos[2]; }
			if (Agrupos[3]->IsNullOrEmpty(Agrupos[3])) {}
			else { Var3 = Agrupos[3]; }
			if (Agrupos[4]->IsNullOrEmpty(Agrupos[4])) {}
			else { Var4 = Agrupos[4]; }
			if (Agrupos[5]->IsNullOrEmpty(Agrupos[5])) {}
			else { Var5 = Agrupos[5]; }
			if (Agrupos[6]->IsNullOrEmpty(Agrupos[6])) {}
			else { Var6 = Agrupos[6]; }
			if (Agrupos[7]->IsNullOrEmpty(Agrupos[7])) {}
			else { Var7 = Agrupos[7]; }
			if (Agrupos[8]->IsNullOrEmpty(Agrupos[8])) {}
			else { Var8 = Agrupos[8]; }
			if (Agrupos[9]->IsNullOrEmpty(Agrupos[9])) {}
			else { Var9 = Agrupos[9]; }
			if (Agrupos[10]->IsNullOrEmpty(Agrupos[10])) {}
			else { Var10 = Agrupos[10]; }
			this->label1->Text = Agrupos[1];
			this->label2->Text = Agrupos[2];
			this->label3->Text = Agrupos[3];
			this->label4->Text = Agrupos[4];
			this->label5->Text = Agrupos[5];
			this->label6->Text = Agrupos[6];
			this->label7->Text = Agrupos[7];
			this->label8->Text = Agrupos[8];
			this->label9->Text = Agrupos[9];
			this->label10->Text = Agrupos[10];
		}

		String^ auxdos;
		for (int l = 0; l < num_lineasG; l++) {

			bool b1 = false;
			bool b2 = false;
			bool b3 = false;
			bool b4 = false;
			bool b5 = false;
			bool b6 = false;
			bool b7 = false;
			bool b8 = false;
			bool b9 = false;
			bool b10 = false;

			renglon_G = datos->ReadLine();								    //Linea por linea
			if (renglon_G->IsNullOrEmpty(renglon_G)) {}						//Si la linea leida no está vacia
			else {
				palabras = renglon_G->Split(',');							//Separo la linea en un arreglo

				if (palabras[1]->IsNullOrEmpty(palabras[1])) {}				//Si la celda no esta vacia
				else {
					for (int c = 0; c < v1; c++) {							//Recorro todo el Avar
						auxdos = AVar1[c]->ToString();
						if (palabras[1] == auxdos) { b1 = true; }				//Si la palabra en turno se encuentra en AVar activo bandera		
					}
					if (b1 == false) { AVar1[v1] = palabras[1]; v1++; }		//Si no se activo la bandera añadimos la palabra al AVar e incrementamos v y bajamos bandera	
				}

				if (palabras[2]->IsNullOrEmpty(palabras[2])) {}
				else {
					for (int c = 0; c < v2; c++) {
						auxdos = AVar2[c]->ToString();
						if (palabras[2] == auxdos) { b2 = true; }
					}
					if (b2 == false) { AVar2[v2] = palabras[2]; v2++; }
				}

				if (palabras[3]->IsNullOrEmpty(palabras[3])) {}
				else {
					for (int c = 0; c < v3; c++) {
						auxdos = AVar3[c]->ToString();
						if (palabras[3] == auxdos) { b3 = true; }
					}
					if (b3 == false) { AVar3[v3] = palabras[3]; v3++; }
				}

				if (palabras[4]->IsNullOrEmpty(palabras[4])) {}
				else {
					for (int c = 0; c < v4; c++) {
						auxdos = AVar4[c]->ToString();
						if (palabras[4] == auxdos) { b4 = true; }
					}
					if (b4 == false) { AVar4[v4] = palabras[4]; v4++; }
				}

				if (palabras[5]->IsNullOrEmpty(palabras[5])) {}
				else {
					for (int c = 0; c < v5; c++) {
						auxdos = AVar5[c]->ToString();
						if (palabras[5] == auxdos) { b5 = true; }
					}
					if (b5 == false) { AVar5[v5] = palabras[5]; v5++; }
				}

			}
		}
		datos->Close();

//______________________________________________________________________________________________________________________
//Sistema que llena la tabla de grupos y subgrupos
//______________________________________________________________________________________________________________________
//Columna 1
		if (v1 == 0) {
			this->checkBox1->Hide();
			this->checkBox2->Hide();
			this->checkBox3->Hide();
			this->checkBox4->Hide();
			this->checkBox5->Hide();
			this->checkBox6->Hide();
			this->checkBox7->Hide();
			this->checkBox8->Hide();
			this->checkBox9->Hide();
			this->checkBox10->Hide();
		}
		if (v1 == 1) {
			this->checkBox1->Text = AVar1[0]->ToString();
			this->checkBox2->Hide();
			this->checkBox3->Hide();
			this->checkBox4->Hide();
			this->checkBox5->Hide();
			this->checkBox6->Hide();
			this->checkBox7->Hide();
			this->checkBox8->Hide();
			this->checkBox9->Hide();
			this->checkBox10->Hide();

		}
		if (v1 == 2) {
			this->checkBox1->Text = AVar1[0]->ToString();
			this->checkBox2->Text = AVar1[1]->ToString();
			this->checkBox3->Hide();
			this->checkBox4->Hide();
			this->checkBox5->Hide();
			this->checkBox6->Hide();
			this->checkBox7->Hide();
			this->checkBox8->Hide();
			this->checkBox9->Hide();
			this->checkBox10->Hide();
		}
		if (v1 == 3) {
			this->checkBox1->Text = AVar1[0]->ToString();
			this->checkBox2->Text = AVar1[1]->ToString();
			this->checkBox3->Text = AVar1[2]->ToString();
			this->checkBox4->Hide();
			this->checkBox5->Hide();
			this->checkBox6->Hide();
			this->checkBox7->Hide();
			this->checkBox8->Hide();
			this->checkBox9->Hide();
			this->checkBox10->Hide();
		}
		if (v1 == 4) {
			this->checkBox1->Text = AVar1[0]->ToString();
			this->checkBox2->Text = AVar1[1]->ToString();
			this->checkBox3->Text = AVar1[2]->ToString();
			this->checkBox4->Text = AVar1[3]->ToString();
			this->checkBox5->Hide();
			this->checkBox6->Hide();
			this->checkBox7->Hide();
			this->checkBox8->Hide();
			this->checkBox9->Hide();
			this->checkBox10->Hide();
		}
		if (v1 == 5) {
			this->checkBox1->Text = AVar1[0]->ToString();
			this->checkBox2->Text = AVar1[1]->ToString();
			this->checkBox3->Text = AVar1[2]->ToString();
			this->checkBox4->Text = AVar1[3]->ToString();
			this->checkBox5->Text = AVar1[4]->ToString();
			this->checkBox6->Hide();
			this->checkBox7->Hide();
			this->checkBox8->Hide();
			this->checkBox9->Hide();
			this->checkBox10->Hide();
		}
		if (v1 == 6) {
			this->checkBox1->Text = AVar1[0]->ToString();
			this->checkBox2->Text = AVar1[1]->ToString();
			this->checkBox3->Text = AVar1[2]->ToString();
			this->checkBox4->Text = AVar1[3]->ToString();
			this->checkBox5->Text = AVar1[4]->ToString();
			this->checkBox6->Text = AVar1[5]->ToString();
			this->checkBox7->Hide();
			this->checkBox8->Hide();
			this->checkBox9->Hide();
			this->checkBox10->Hide();
		}
		if (v1 == 7) {
			this->checkBox1->Text = AVar1[0]->ToString();
			this->checkBox2->Text = AVar1[1]->ToString();
			this->checkBox3->Text = AVar1[2]->ToString();
			this->checkBox4->Text = AVar1[3]->ToString();
			this->checkBox5->Text = AVar1[4]->ToString();
			this->checkBox6->Text = AVar1[5]->ToString();
			this->checkBox7->Text = AVar1[6]->ToString();
			this->checkBox8->Hide();
			this->checkBox9->Hide();
			this->checkBox10->Hide();
		}
		if (v1 == 8) {
			this->checkBox1->Text = AVar1[0]->ToString();
			this->checkBox2->Text = AVar1[1]->ToString();
			this->checkBox3->Text = AVar1[2]->ToString();
			this->checkBox4->Text = AVar1[3]->ToString();
			this->checkBox5->Text = AVar1[4]->ToString();
			this->checkBox6->Text = AVar1[5]->ToString();
			this->checkBox7->Text = AVar1[6]->ToString();
			this->checkBox8->Text = AVar1[7]->ToString();
			this->checkBox9->Hide();
			this->checkBox10->Hide();
		}
		if (v1 == 9) {
			this->checkBox1->Text = AVar1[0]->ToString();
			this->checkBox2->Text = AVar1[1]->ToString();
			this->checkBox3->Text = AVar1[2]->ToString();
			this->checkBox4->Text = AVar1[3]->ToString();
			this->checkBox5->Text = AVar1[4]->ToString();
			this->checkBox6->Text = AVar1[5]->ToString();
			this->checkBox7->Text = AVar1[6]->ToString();
			this->checkBox8->Text = AVar1[7]->ToString();
			this->checkBox9->Text = AVar1[8]->ToString();
			this->checkBox10->Hide();
		}
		if (v1 == 10) {
			this->checkBox1->Text = AVar1[0]->ToString();
			this->checkBox2->Text = AVar1[1]->ToString();
			this->checkBox3->Text = AVar1[2]->ToString();
			this->checkBox4->Text = AVar1[3]->ToString();
			this->checkBox5->Text = AVar1[4]->ToString();
			this->checkBox6->Text = AVar1[5]->ToString();
			this->checkBox7->Text = AVar1[6]->ToString();
			this->checkBox8->Text = AVar1[7]->ToString();
			this->checkBox9->Text = AVar1[8]->ToString();
			this->checkBox10->Text = AVar1[9]->ToString();
		}
//Columna 2
		if (v2 == 0) {
			this->checkBox11->Hide();
			this->checkBox12->Hide();
			this->checkBox13->Hide();
			this->checkBox14->Hide();
			this->checkBox15->Hide();
			this->checkBox16->Hide();
			this->checkBox17->Hide();
			this->checkBox18->Hide();
			this->checkBox19->Hide();
			this->checkBox20->Hide();
		}
		if (v2 == 1) {
			this->checkBox11->Text = AVar2[0]->ToString();
			this->checkBox12->Hide();
			this->checkBox13->Hide();
			this->checkBox14->Hide();
			this->checkBox15->Hide();
			this->checkBox16->Hide();
			this->checkBox17->Hide();
			this->checkBox18->Hide();
			this->checkBox19->Hide();
			this->checkBox20->Hide();
		}
		if (v2 == 2) {
			this->checkBox11->Text = AVar2[0]->ToString();
			this->checkBox12->Text = AVar2[1]->ToString();
			this->checkBox13->Hide();
			this->checkBox14->Hide();
			this->checkBox15->Hide();
			this->checkBox16->Hide();
			this->checkBox17->Hide();
			this->checkBox18->Hide();
			this->checkBox19->Hide();
			this->checkBox20->Hide();
		}
		if (v2 == 3) {
			this->checkBox11->Text = AVar2[0]->ToString();
			this->checkBox12->Text = AVar2[1]->ToString();
			this->checkBox13->Text = AVar2[2]->ToString();
			this->checkBox14->Hide();
			this->checkBox15->Hide();
			this->checkBox16->Hide();
			this->checkBox17->Hide();
			this->checkBox18->Hide();
			this->checkBox19->Hide();
			this->checkBox20->Hide();
		}
		if (v2 == 4) {
			this->checkBox11->Text = AVar2[0]->ToString();
			this->checkBox12->Text = AVar2[1]->ToString();
			this->checkBox13->Text = AVar2[2]->ToString();
			this->checkBox14->Text = AVar2[3]->ToString();
			this->checkBox15->Hide();
			this->checkBox16->Hide();
			this->checkBox17->Hide();
			this->checkBox18->Hide();
			this->checkBox19->Hide();
			this->checkBox20->Hide();
		}
		if (v2 == 5) {
			this->checkBox11->Text = AVar2[0]->ToString();
			this->checkBox12->Text = AVar2[1]->ToString();
			this->checkBox13->Text = AVar2[2]->ToString();
			this->checkBox14->Text = AVar2[3]->ToString();
			this->checkBox15->Text = AVar2[4]->ToString();
			this->checkBox16->Hide();
			this->checkBox17->Hide();
			this->checkBox18->Hide();
			this->checkBox19->Hide();
			this->checkBox20->Hide();
		}
		if (v2 == 6) {
			this->checkBox11->Text = AVar2[0]->ToString();
			this->checkBox12->Text = AVar2[1]->ToString();
			this->checkBox13->Text = AVar2[2]->ToString();
			this->checkBox14->Text = AVar2[3]->ToString();
			this->checkBox15->Text = AVar2[4]->ToString();
			this->checkBox16->Text = AVar2[5]->ToString();
			this->checkBox17->Hide();
			this->checkBox18->Hide();
			this->checkBox19->Hide();
			this->checkBox20->Hide();
		}
		if (v2 == 7) {
			this->checkBox11->Text = AVar2[0]->ToString();
			this->checkBox12->Text = AVar2[1]->ToString();
			this->checkBox13->Text = AVar2[2]->ToString();
			this->checkBox14->Text = AVar2[3]->ToString();
			this->checkBox15->Text = AVar2[4]->ToString();
			this->checkBox16->Text = AVar2[5]->ToString();
			this->checkBox17->Text = AVar2[6]->ToString();
			this->checkBox18->Hide();
			this->checkBox19->Hide();
			this->checkBox20->Hide();
		}
		if (v2 == 8) {
			this->checkBox11->Text = AVar2[0]->ToString();
			this->checkBox12->Text = AVar2[1]->ToString();
			this->checkBox13->Text = AVar2[2]->ToString();
			this->checkBox14->Text = AVar2[3]->ToString();
			this->checkBox15->Text = AVar2[4]->ToString();
			this->checkBox16->Text = AVar2[5]->ToString();
			this->checkBox17->Text = AVar2[6]->ToString();
			this->checkBox18->Text = AVar2[7]->ToString();
			this->checkBox19->Hide();
			this->checkBox20->Hide();
		}
		if (v2 == 9) {
			this->checkBox11->Text = AVar2[0]->ToString();
			this->checkBox12->Text = AVar2[1]->ToString();
			this->checkBox13->Text = AVar2[2]->ToString();
			this->checkBox14->Text = AVar2[3]->ToString();
			this->checkBox15->Text = AVar2[4]->ToString();
			this->checkBox16->Text = AVar2[5]->ToString();
			this->checkBox17->Text = AVar2[6]->ToString();
			this->checkBox18->Text = AVar2[7]->ToString();
			this->checkBox19->Text = AVar2[8]->ToString();
			this->checkBox20->Hide();
		}
		if (v2 == 10) {
			this->checkBox11->Text = AVar2[0]->ToString();
			this->checkBox12->Text = AVar2[1]->ToString();
			this->checkBox13->Text = AVar2[2]->ToString();
			this->checkBox14->Text = AVar2[3]->ToString();
			this->checkBox15->Text = AVar2[4]->ToString();
			this->checkBox16->Text = AVar2[5]->ToString();
			this->checkBox17->Text = AVar2[6]->ToString();
			this->checkBox18->Text = AVar2[7]->ToString();
			this->checkBox19->Text = AVar2[8]->ToString();
			this->checkBox20->Text = AVar2[9]->ToString();
		}
		//Columna 3
		if (v3 == 0) {
			this->checkBox21->Hide();
			this->checkBox22->Hide();
			this->checkBox23->Hide();
			this->checkBox24->Hide();
			this->checkBox25->Hide();
			this->checkBox26->Hide();
			this->checkBox27->Hide();
			this->checkBox28->Hide();
			this->checkBox29->Hide();
			this->checkBox30->Hide();
		}
		if (v3 == 1) {
			this->checkBox21->Text = AVar3[0]->ToString();
			this->checkBox22->Hide();
			this->checkBox23->Hide();
			this->checkBox24->Hide();
			this->checkBox25->Hide();
			this->checkBox26->Hide();
			this->checkBox27->Hide();
			this->checkBox28->Hide();
			this->checkBox29->Hide();
			this->checkBox30->Hide();
		}
		if (v3 == 2) {
			this->checkBox21->Text = AVar3[0]->ToString();
			this->checkBox22->Text = AVar3[1]->ToString();
			this->checkBox23->Hide();
			this->checkBox24->Hide();
			this->checkBox25->Hide();
			this->checkBox26->Hide();
			this->checkBox27->Hide();
			this->checkBox28->Hide();
			this->checkBox29->Hide();
			this->checkBox30->Hide();
		}
		if (v3 == 3) {
			this->checkBox21->Text = AVar3[0]->ToString();
			this->checkBox22->Text = AVar3[1]->ToString();
			this->checkBox23->Text = AVar3[2]->ToString();
			this->checkBox24->Hide();
			this->checkBox25->Hide();
			this->checkBox26->Hide();
			this->checkBox27->Hide();
			this->checkBox28->Hide();
			this->checkBox29->Hide();
			this->checkBox30->Hide();
		}
		if (v3 == 4) {
			this->checkBox21->Text = AVar3[0]->ToString();
			this->checkBox22->Text = AVar3[1]->ToString();
			this->checkBox23->Text = AVar3[2]->ToString();
			this->checkBox24->Text = AVar3[3]->ToString();
			this->checkBox25->Hide();
			this->checkBox26->Hide();
			this->checkBox27->Hide();
			this->checkBox28->Hide();
			this->checkBox29->Hide();
			this->checkBox30->Hide();
		}
		if (v3 == 5) {
			this->checkBox21->Text = AVar3[0]->ToString();
			this->checkBox22->Text = AVar3[1]->ToString();
			this->checkBox23->Text = AVar3[2]->ToString();
			this->checkBox24->Text = AVar3[3]->ToString();
			this->checkBox25->Text = AVar3[4]->ToString();
			this->checkBox26->Hide();
			this->checkBox27->Hide();
			this->checkBox28->Hide();
			this->checkBox29->Hide();
			this->checkBox30->Hide();
		}
		if (v3 == 6) {
			this->checkBox21->Text = AVar3[0]->ToString();
			this->checkBox22->Text = AVar3[1]->ToString();
			this->checkBox23->Text = AVar3[2]->ToString();
			this->checkBox24->Text = AVar3[3]->ToString();
			this->checkBox25->Text = AVar3[4]->ToString();
			this->checkBox26->Text = AVar3[5]->ToString();
			this->checkBox27->Hide();
			this->checkBox28->Hide();
			this->checkBox29->Hide();
			this->checkBox30->Hide();
		}
		if (v3 == 7) {
			this->checkBox21->Text = AVar3[0]->ToString();
			this->checkBox22->Text = AVar3[1]->ToString();
			this->checkBox23->Text = AVar3[2]->ToString();
			this->checkBox24->Text = AVar3[3]->ToString();
			this->checkBox25->Text = AVar3[4]->ToString();
			this->checkBox26->Text = AVar3[5]->ToString();
			this->checkBox27->Text = AVar3[6]->ToString();
			this->checkBox28->Hide();
			this->checkBox29->Hide();
			this->checkBox30->Hide();
		}
		if (v3 == 8) {
			this->checkBox21->Text = AVar3[0]->ToString();
			this->checkBox22->Text = AVar3[1]->ToString();
			this->checkBox23->Text = AVar3[2]->ToString();
			this->checkBox24->Text = AVar3[3]->ToString();
			this->checkBox25->Text = AVar3[4]->ToString();
			this->checkBox26->Text = AVar3[5]->ToString();
			this->checkBox27->Text = AVar3[6]->ToString();
			this->checkBox28->Text = AVar3[7]->ToString();
			this->checkBox29->Hide();
			this->checkBox30->Hide();
		}
		if (v3 == 9) {
			this->checkBox21->Text = AVar3[0]->ToString();
			this->checkBox22->Text = AVar3[1]->ToString();
			this->checkBox23->Text = AVar3[2]->ToString();
			this->checkBox24->Text = AVar3[3]->ToString();
			this->checkBox25->Text = AVar3[4]->ToString();
			this->checkBox26->Text = AVar3[5]->ToString();
			this->checkBox27->Text = AVar3[6]->ToString();
			this->checkBox28->Text = AVar3[7]->ToString();
			this->checkBox29->Text = AVar3[8]->ToString();
			this->checkBox30->Hide();
		}
		if (v3 == 10) {
			this->checkBox21->Text = AVar3[0]->ToString();
			this->checkBox22->Text = AVar3[1]->ToString();
			this->checkBox23->Text = AVar3[2]->ToString();
			this->checkBox24->Text = AVar3[3]->ToString();
			this->checkBox25->Text = AVar3[4]->ToString();
			this->checkBox26->Text = AVar3[5]->ToString();
			this->checkBox27->Text = AVar3[6]->ToString();
			this->checkBox28->Text = AVar3[7]->ToString();
			this->checkBox29->Text = AVar3[8]->ToString();
			this->checkBox30->Text = AVar3[9]->ToString();
		}
		//Columna 4
		if (v4 == 0) {
			this->checkBox31->Hide();
			this->checkBox32->Hide();
			this->checkBox33->Hide();
			this->checkBox34->Hide();
			this->checkBox35->Hide();
			this->checkBox36->Hide();
			this->checkBox37->Hide();
			this->checkBox38->Hide();
			this->checkBox39->Hide();
			this->checkBox40->Hide();
		}
		if (v4 == 1) {
			this->checkBox31->Text = AVar4[0]->ToString();
			this->checkBox32->Hide();
			this->checkBox33->Hide();
			this->checkBox34->Hide();
			this->checkBox35->Hide();
			this->checkBox36->Hide();
			this->checkBox37->Hide();
			this->checkBox38->Hide();
			this->checkBox39->Hide();
			this->checkBox40->Hide();
		}
		if (v4 == 2) {
			this->checkBox31->Text = AVar4[0]->ToString();
			this->checkBox32->Text = AVar4[1]->ToString();
			this->checkBox33->Hide();
			this->checkBox34->Hide();
			this->checkBox35->Hide();
			this->checkBox36->Hide();
			this->checkBox37->Hide();
			this->checkBox38->Hide();
			this->checkBox39->Hide();
			this->checkBox40->Hide();
		}
		if (v4 == 3) {
			this->checkBox31->Text = AVar4[0]->ToString();
			this->checkBox32->Text = AVar4[1]->ToString();
			this->checkBox33->Text = AVar4[2]->ToString();
			this->checkBox34->Hide();
			this->checkBox35->Hide();
			this->checkBox36->Hide();
			this->checkBox37->Hide();
			this->checkBox38->Hide();
			this->checkBox39->Hide();
			this->checkBox40->Hide();
		}
		if (v4 == 4) {
			this->checkBox31->Text = AVar4[0]->ToString();
			this->checkBox32->Text = AVar4[1]->ToString();
			this->checkBox33->Text = AVar4[2]->ToString();
			this->checkBox34->Text = AVar4[3]->ToString();
			this->checkBox35->Hide();
			this->checkBox36->Hide();
			this->checkBox37->Hide();
			this->checkBox38->Hide();
			this->checkBox39->Hide();
			this->checkBox40->Hide();
		}
		if (v4 == 5) {
			this->checkBox31->Text = AVar4[0]->ToString();
			this->checkBox32->Text = AVar4[1]->ToString();
			this->checkBox33->Text = AVar4[2]->ToString();
			this->checkBox34->Text = AVar4[3]->ToString();
			this->checkBox35->Text = AVar4[4]->ToString();
			this->checkBox36->Hide();
			this->checkBox37->Hide();
			this->checkBox38->Hide();
			this->checkBox39->Hide();
			this->checkBox40->Hide();
		}
		if (v4 == 6) {
			this->checkBox31->Text = AVar4[0]->ToString();
			this->checkBox32->Text = AVar4[1]->ToString();
			this->checkBox33->Text = AVar4[2]->ToString();
			this->checkBox34->Text = AVar4[3]->ToString();
			this->checkBox35->Text = AVar4[4]->ToString();
			this->checkBox36->Text = AVar4[5]->ToString();
			this->checkBox37->Hide();
			this->checkBox38->Hide();
			this->checkBox39->Hide();
			this->checkBox40->Hide();
		}
		if (v4 == 7) {
			this->checkBox31->Text = AVar4[0]->ToString();
			this->checkBox32->Text = AVar4[1]->ToString();
			this->checkBox33->Text = AVar4[2]->ToString();
			this->checkBox34->Text = AVar4[3]->ToString();
			this->checkBox35->Text = AVar4[4]->ToString();
			this->checkBox36->Text = AVar4[5]->ToString();
			this->checkBox37->Text = AVar4[6]->ToString();
			this->checkBox38->Hide();
			this->checkBox39->Hide();
			this->checkBox40->Hide();
		}
		if (v4 == 8) {
			this->checkBox31->Text = AVar4[0]->ToString();
			this->checkBox32->Text = AVar4[1]->ToString();
			this->checkBox33->Text = AVar4[2]->ToString();
			this->checkBox34->Text = AVar4[3]->ToString();
			this->checkBox35->Text = AVar4[4]->ToString();
			this->checkBox36->Text = AVar4[5]->ToString();
			this->checkBox37->Text = AVar4[6]->ToString();
			this->checkBox38->Text = AVar4[7]->ToString();
			this->checkBox39->Hide();
			this->checkBox40->Hide();
		}
		if (v4 == 9) {
			this->checkBox31->Text = AVar4[0]->ToString();
			this->checkBox32->Text = AVar4[1]->ToString();
			this->checkBox33->Text = AVar4[2]->ToString();
			this->checkBox34->Text = AVar4[3]->ToString();
			this->checkBox35->Text = AVar4[4]->ToString();
			this->checkBox36->Text = AVar4[5]->ToString();
			this->checkBox37->Text = AVar4[6]->ToString();
			this->checkBox38->Text = AVar4[7]->ToString();
			this->checkBox39->Text = AVar4[8]->ToString();
			this->checkBox40->Hide();
		}
		if (v4 == 10) {
			this->checkBox31->Text = AVar4[0]->ToString();
			this->checkBox32->Text = AVar4[1]->ToString();
			this->checkBox33->Text = AVar4[2]->ToString();
			this->checkBox34->Text = AVar4[3]->ToString();
			this->checkBox35->Text = AVar4[4]->ToString();
			this->checkBox36->Text = AVar4[5]->ToString();
			this->checkBox37->Text = AVar4[6]->ToString();
			this->checkBox38->Text = AVar4[7]->ToString();
			this->checkBox39->Text = AVar4[8]->ToString();
			this->checkBox40->Text = AVar4[9]->ToString();
		}
		//Columna 5
		if (v5 == 0) {
			this->checkBox41->Hide();
			this->checkBox42->Hide();
			this->checkBox43->Hide();
			this->checkBox44->Hide();
			this->checkBox45->Hide();
			this->checkBox46->Hide();
			this->checkBox47->Hide();
			this->checkBox48->Hide();
			this->checkBox49->Hide();
			this->checkBox50->Hide();
		}
		if (v5 == 1) {
			this->checkBox41->Text = AVar5[0]->ToString();
			this->checkBox42->Hide();
			this->checkBox43->Hide();
			this->checkBox44->Hide();
			this->checkBox45->Hide();
			this->checkBox46->Hide();
			this->checkBox47->Hide();
			this->checkBox48->Hide();
			this->checkBox49->Hide();
			this->checkBox50->Hide();
		}
		if (v5 == 2) {
			this->checkBox41->Text = AVar5[0]->ToString();
			this->checkBox42->Text = AVar5[1]->ToString();
			this->checkBox43->Hide();
			this->checkBox44->Hide();
			this->checkBox45->Hide();
			this->checkBox46->Hide();
			this->checkBox47->Hide();
			this->checkBox48->Hide();
			this->checkBox49->Hide();
			this->checkBox50->Hide();
		}
		if (v5 == 3) {
			this->checkBox41->Text = AVar5[0]->ToString();
			this->checkBox42->Text = AVar5[1]->ToString();
			this->checkBox43->Text = AVar5[2]->ToString();
			this->checkBox44->Hide();
			this->checkBox45->Hide();
			this->checkBox46->Hide();
			this->checkBox47->Hide();
			this->checkBox48->Hide();
			this->checkBox49->Hide();
			this->checkBox50->Hide();
		}
		if (v5 == 4) {
			this->checkBox41->Text = AVar5[0]->ToString();
			this->checkBox42->Text = AVar5[1]->ToString();
			this->checkBox43->Text = AVar5[2]->ToString();
			this->checkBox44->Text = AVar5[3]->ToString();
			this->checkBox45->Hide();
			this->checkBox46->Hide();
			this->checkBox47->Hide();
			this->checkBox48->Hide();
			this->checkBox49->Hide();
			this->checkBox50->Hide();
		}
		if (v5 == 5) {
			this->checkBox41->Text = AVar5[0]->ToString();
			this->checkBox42->Text = AVar5[1]->ToString();
			this->checkBox43->Text = AVar5[2]->ToString();
			this->checkBox44->Text = AVar5[3]->ToString();
			this->checkBox45->Text = AVar5[4]->ToString();
			this->checkBox46->Hide();
			this->checkBox47->Hide();
			this->checkBox48->Hide();
			this->checkBox49->Hide();
			this->checkBox50->Hide();
		}
		if (v5 == 6) {
			this->checkBox41->Text = AVar5[0]->ToString();
			this->checkBox42->Text = AVar5[1]->ToString();
			this->checkBox43->Text = AVar5[2]->ToString();
			this->checkBox44->Text = AVar5[3]->ToString();
			this->checkBox45->Text = AVar5[4]->ToString();
			this->checkBox46->Text = AVar5[5]->ToString();
			this->checkBox47->Hide();
			this->checkBox48->Hide();
			this->checkBox49->Hide();
			this->checkBox50->Hide();
		}
		if (v5 == 7) {
			this->checkBox41->Text = AVar5[0]->ToString();
			this->checkBox42->Text = AVar5[1]->ToString();
			this->checkBox43->Text = AVar5[2]->ToString();
			this->checkBox44->Text = AVar5[3]->ToString();
			this->checkBox45->Text = AVar5[4]->ToString();
			this->checkBox46->Text = AVar5[5]->ToString();
			this->checkBox47->Text = AVar5[6]->ToString();
			this->checkBox48->Hide();
			this->checkBox49->Hide();
			this->checkBox50->Hide();
		}
		if (v5 == 8) {
			this->checkBox41->Text = AVar5[0]->ToString();
			this->checkBox42->Text = AVar5[1]->ToString();
			this->checkBox43->Text = AVar5[2]->ToString();
			this->checkBox44->Text = AVar5[3]->ToString();
			this->checkBox45->Text = AVar5[4]->ToString();
			this->checkBox46->Text = AVar5[5]->ToString();
			this->checkBox47->Text = AVar5[6]->ToString();
			this->checkBox48->Text = AVar5[7]->ToString();
			this->checkBox49->Hide();
			this->checkBox50->Hide();
		}
		if (v5 == 9) {
			this->checkBox41->Text = AVar5[0]->ToString();
			this->checkBox42->Text = AVar5[1]->ToString();
			this->checkBox43->Text = AVar5[2]->ToString();
			this->checkBox44->Text = AVar5[3]->ToString();
			this->checkBox45->Text = AVar5[4]->ToString();
			this->checkBox46->Text = AVar5[5]->ToString();
			this->checkBox47->Text = AVar5[6]->ToString();
			this->checkBox48->Text = AVar5[7]->ToString();
			this->checkBox49->Text = AVar5[8]->ToString();
			this->checkBox50->Hide();
		}
		if (v5 == 10) {
			this->checkBox41->Text = AVar5[0]->ToString();
			this->checkBox42->Text = AVar5[1]->ToString();
			this->checkBox43->Text = AVar5[2]->ToString();
			this->checkBox44->Text = AVar5[3]->ToString();
			this->checkBox45->Text = AVar5[4]->ToString();
			this->checkBox46->Text = AVar5[5]->ToString();
			this->checkBox47->Text = AVar5[6]->ToString();
			this->checkBox48->Text = AVar5[7]->ToString();
			this->checkBox49->Text = AVar5[8]->ToString();
			this->checkBox50->Text = AVar5[9]->ToString();
		}
		//Columna 6
		if (v6 == 0) {
			this->checkBox51->Hide();
			this->checkBox52->Hide();
			this->checkBox53->Hide();
			this->checkBox54->Hide();
			this->checkBox55->Hide();
			this->checkBox56->Hide();
			this->checkBox57->Hide();
			this->checkBox58->Hide();
			this->checkBox59->Hide();
			this->checkBox60->Hide();
		}
		if (v6 == 1) {
			this->checkBox51->Text = AVar6[0]->ToString();
			this->checkBox52->Hide();
			this->checkBox53->Hide();
			this->checkBox54->Hide();
			this->checkBox55->Hide();
			this->checkBox56->Hide();
			this->checkBox57->Hide();
			this->checkBox58->Hide();
			this->checkBox59->Hide();
			this->checkBox60->Hide();
		}
		if (v6 == 2) {
			this->checkBox51->Text = AVar6[0]->ToString();
			this->checkBox52->Text = AVar6[1]->ToString();
			this->checkBox53->Hide();
			this->checkBox54->Hide();
			this->checkBox55->Hide();
			this->checkBox56->Hide();
			this->checkBox57->Hide();
			this->checkBox58->Hide();
			this->checkBox59->Hide();
			this->checkBox60->Hide();
		}
		if (v6 == 3) {
			this->checkBox51->Text = AVar6[0]->ToString();
			this->checkBox52->Text = AVar6[1]->ToString();
			this->checkBox53->Text = AVar6[2]->ToString();
			this->checkBox54->Hide();
			this->checkBox55->Hide();
			this->checkBox56->Hide();
			this->checkBox57->Hide();
			this->checkBox58->Hide();
			this->checkBox59->Hide();
			this->checkBox60->Hide();
		}
		if (v6 == 4) {
			this->checkBox51->Text = AVar6[0]->ToString();
			this->checkBox52->Text = AVar6[1]->ToString();
			this->checkBox53->Text = AVar6[2]->ToString();
			this->checkBox54->Text = AVar6[3]->ToString();
			this->checkBox55->Hide();
			this->checkBox56->Hide();
			this->checkBox57->Hide();
			this->checkBox58->Hide();
			this->checkBox59->Hide();
			this->checkBox60->Hide();
		}
		if (v6 == 5) {
			this->checkBox51->Text = AVar6[0]->ToString();
			this->checkBox52->Text = AVar6[1]->ToString();
			this->checkBox53->Text = AVar6[2]->ToString();
			this->checkBox54->Text = AVar6[3]->ToString();
			this->checkBox55->Text = AVar6[4]->ToString();
			this->checkBox56->Hide();
			this->checkBox57->Hide();
			this->checkBox58->Hide();
			this->checkBox59->Hide();
			this->checkBox60->Hide();
		}
		if (v6 == 6) {
			this->checkBox51->Text = AVar6[0]->ToString();
			this->checkBox52->Text = AVar6[1]->ToString();
			this->checkBox53->Text = AVar6[2]->ToString();
			this->checkBox54->Text = AVar6[3]->ToString();
			this->checkBox55->Text = AVar6[4]->ToString();
			this->checkBox56->Text = AVar6[5]->ToString();
			this->checkBox57->Hide();
			this->checkBox58->Hide();
			this->checkBox59->Hide();
			this->checkBox60->Hide();
		}
		if (v6 == 7) {
			this->checkBox51->Text = AVar6[0]->ToString();
			this->checkBox52->Text = AVar6[1]->ToString();
			this->checkBox53->Text = AVar6[2]->ToString();
			this->checkBox54->Text = AVar6[3]->ToString();
			this->checkBox55->Text = AVar6[4]->ToString();
			this->checkBox56->Text = AVar6[5]->ToString();
			this->checkBox57->Text = AVar6[6]->ToString();
			this->checkBox58->Hide();
			this->checkBox59->Hide();
			this->checkBox60->Hide();
		}
		if (v6 == 8) {
			this->checkBox51->Text = AVar6[0]->ToString();
			this->checkBox52->Text = AVar6[1]->ToString();
			this->checkBox53->Text = AVar6[2]->ToString();
			this->checkBox54->Text = AVar6[3]->ToString();
			this->checkBox55->Text = AVar6[4]->ToString();
			this->checkBox56->Text = AVar6[5]->ToString();
			this->checkBox57->Text = AVar6[6]->ToString();
			this->checkBox58->Text = AVar6[7]->ToString();
			this->checkBox59->Hide();
			this->checkBox60->Hide();
		}
		if (v6 == 9) {
			this->checkBox51->Text = AVar6[0]->ToString();
			this->checkBox52->Text = AVar6[1]->ToString();
			this->checkBox53->Text = AVar6[2]->ToString();
			this->checkBox54->Text = AVar6[3]->ToString();
			this->checkBox55->Text = AVar6[4]->ToString();
			this->checkBox56->Text = AVar6[5]->ToString();
			this->checkBox57->Text = AVar6[6]->ToString();
			this->checkBox58->Text = AVar6[7]->ToString();
			this->checkBox59->Text = AVar6[8]->ToString();
			this->checkBox60->Hide();
		}
		if (v6 == 10) {
			this->checkBox51->Text = AVar6[0]->ToString();
			this->checkBox52->Text = AVar6[1]->ToString();
			this->checkBox53->Text = AVar6[2]->ToString();
			this->checkBox54->Text = AVar6[3]->ToString();
			this->checkBox55->Text = AVar6[4]->ToString();
			this->checkBox56->Text = AVar6[5]->ToString();
			this->checkBox57->Text = AVar6[6]->ToString();
			this->checkBox58->Text = AVar6[7]->ToString();
			this->checkBox59->Text = AVar6[8]->ToString();
			this->checkBox60->Text = AVar6[9]->ToString();
		}
		//Columna 7
		if (v7 == 0) {
			this->checkBox61->Hide();
			this->checkBox62->Hide();
			this->checkBox63->Hide();
			this->checkBox64->Hide();
			this->checkBox65->Hide();
			this->checkBox66->Hide();
			this->checkBox67->Hide();
			this->checkBox68->Hide();
			this->checkBox69->Hide();
			this->checkBox70->Hide();
		}
		if (v7 == 1) {
			this->checkBox61->Text = AVar7[0]->ToString();
			this->checkBox62->Hide();
			this->checkBox63->Hide();
			this->checkBox64->Hide();
			this->checkBox65->Hide();
			this->checkBox66->Hide();
			this->checkBox67->Hide();
			this->checkBox68->Hide();
			this->checkBox69->Hide();
			this->checkBox70->Hide();
		}
		if (v7 == 2) {
			this->checkBox61->Text = AVar7[0]->ToString();
			this->checkBox62->Text = AVar7[1]->ToString();
			this->checkBox63->Hide();
			this->checkBox64->Hide();
			this->checkBox65->Hide();
			this->checkBox66->Hide();
			this->checkBox67->Hide();
			this->checkBox68->Hide();
			this->checkBox69->Hide();
			this->checkBox70->Hide();
		}
		if (v7 == 3) {
			this->checkBox61->Text = AVar7[0]->ToString();
			this->checkBox62->Text = AVar7[1]->ToString();
			this->checkBox63->Text = AVar7[2]->ToString();
			this->checkBox64->Hide();
			this->checkBox65->Hide();
			this->checkBox66->Hide();
			this->checkBox67->Hide();
			this->checkBox68->Hide();
			this->checkBox69->Hide();
			this->checkBox70->Hide();
		}
		if (v7 == 4) {
			this->checkBox61->Text = AVar7[0]->ToString();
			this->checkBox62->Text = AVar7[1]->ToString();
			this->checkBox63->Text = AVar7[2]->ToString();
			this->checkBox64->Text = AVar7[3]->ToString();
			this->checkBox65->Hide();
			this->checkBox66->Hide();
			this->checkBox67->Hide();
			this->checkBox68->Hide();
			this->checkBox69->Hide();
			this->checkBox70->Hide();
		}
		if (v7 == 5) {
			this->checkBox61->Text = AVar7[0]->ToString();
			this->checkBox62->Text = AVar7[1]->ToString();
			this->checkBox63->Text = AVar7[2]->ToString();
			this->checkBox64->Text = AVar7[3]->ToString();
			this->checkBox65->Text = AVar7[4]->ToString();
			this->checkBox66->Hide();
			this->checkBox67->Hide();
			this->checkBox68->Hide();
			this->checkBox69->Hide();
			this->checkBox70->Hide();
		}
		if (v7 == 6) {
			this->checkBox61->Text = AVar7[0]->ToString();
			this->checkBox62->Text = AVar7[1]->ToString();
			this->checkBox63->Text = AVar7[2]->ToString();
			this->checkBox64->Text = AVar7[3]->ToString();
			this->checkBox65->Text = AVar7[4]->ToString();
			this->checkBox66->Text = AVar7[5]->ToString();
			this->checkBox67->Hide();
			this->checkBox68->Hide();
			this->checkBox69->Hide();
			this->checkBox70->Hide();
		}
		if (v7 == 7) {
			this->checkBox61->Text = AVar7[0]->ToString();
			this->checkBox62->Text = AVar7[1]->ToString();
			this->checkBox63->Text = AVar7[2]->ToString();
			this->checkBox64->Text = AVar7[3]->ToString();
			this->checkBox65->Text = AVar7[4]->ToString();
			this->checkBox66->Text = AVar7[5]->ToString();
			this->checkBox67->Text = AVar7[6]->ToString();
			this->checkBox68->Hide();
			this->checkBox69->Hide();
			this->checkBox70->Hide();
		}
		if (v7 == 8) {
			this->checkBox61->Text = AVar7[0]->ToString();
			this->checkBox62->Text = AVar7[1]->ToString();
			this->checkBox63->Text = AVar7[2]->ToString();
			this->checkBox64->Text = AVar7[3]->ToString();
			this->checkBox65->Text = AVar7[4]->ToString();
			this->checkBox66->Text = AVar7[5]->ToString();
			this->checkBox67->Text = AVar7[6]->ToString();
			this->checkBox68->Text = AVar7[7]->ToString();
			this->checkBox69->Hide();
			this->checkBox70->Hide();
		}
		if (v7 == 9) {
			this->checkBox61->Text = AVar7[0]->ToString();
			this->checkBox62->Text = AVar7[1]->ToString();
			this->checkBox63->Text = AVar7[2]->ToString();
			this->checkBox64->Text = AVar7[3]->ToString();
			this->checkBox65->Text = AVar7[4]->ToString();
			this->checkBox66->Text = AVar7[5]->ToString();
			this->checkBox67->Text = AVar7[6]->ToString();
			this->checkBox68->Text = AVar7[7]->ToString();
			this->checkBox69->Text = AVar7[8]->ToString();
			this->checkBox70->Hide();
		}
		if (v7 == 10) {
			this->checkBox61->Text = AVar7[0]->ToString();
			this->checkBox62->Text = AVar7[1]->ToString();
			this->checkBox63->Text = AVar7[2]->ToString();
			this->checkBox64->Text = AVar7[3]->ToString();
			this->checkBox65->Text = AVar7[4]->ToString();
			this->checkBox66->Text = AVar7[5]->ToString();
			this->checkBox67->Text = AVar7[6]->ToString();
			this->checkBox68->Text = AVar7[7]->ToString();
			this->checkBox69->Text = AVar7[8]->ToString();
			this->checkBox70->Text = AVar7[9]->ToString();
		}
		//Columna 8
		if (v8 == 0) {
			this->checkBox71->Hide();
			this->checkBox72->Hide();
			this->checkBox73->Hide();
			this->checkBox74->Hide();
			this->checkBox75->Hide();
			this->checkBox76->Hide();
			this->checkBox77->Hide();
			this->checkBox78->Hide();
			this->checkBox79->Hide();
			this->checkBox80->Hide();
		}
		if (v8 == 1) {
			this->checkBox71->Text = AVar8[0]->ToString();
			this->checkBox72->Hide();
			this->checkBox73->Hide();
			this->checkBox74->Hide();
			this->checkBox75->Hide();
			this->checkBox76->Hide();
			this->checkBox77->Hide();
			this->checkBox78->Hide();
			this->checkBox79->Hide();
			this->checkBox80->Hide();
		}
		if (v8 == 2) {
			this->checkBox71->Text = AVar8[0]->ToString();
			this->checkBox72->Text = AVar8[1]->ToString();
			this->checkBox73->Hide();
			this->checkBox74->Hide();
			this->checkBox75->Hide();
			this->checkBox76->Hide();
			this->checkBox77->Hide();
			this->checkBox78->Hide();
			this->checkBox79->Hide();
			this->checkBox80->Hide();
		}
		if (v8 == 3) {
			this->checkBox71->Text = AVar8[0]->ToString();
			this->checkBox72->Text = AVar8[1]->ToString();
			this->checkBox73->Text = AVar8[2]->ToString();
			this->checkBox74->Hide();
			this->checkBox75->Hide();
			this->checkBox76->Hide();
			this->checkBox77->Hide();
			this->checkBox78->Hide();
			this->checkBox79->Hide();
			this->checkBox80->Hide();
		}
		if (v8 == 4) {
			this->checkBox71->Text = AVar8[0]->ToString();
			this->checkBox72->Text = AVar8[1]->ToString();
			this->checkBox73->Text = AVar8[2]->ToString();
			this->checkBox74->Text = AVar8[3]->ToString();
			this->checkBox75->Hide();
			this->checkBox76->Hide();
			this->checkBox77->Hide();
			this->checkBox78->Hide();
			this->checkBox79->Hide();
			this->checkBox80->Hide();
		}
		if (v8 == 5) {
			this->checkBox71->Text = AVar8[0]->ToString();
			this->checkBox72->Text = AVar8[1]->ToString();
			this->checkBox73->Text = AVar8[2]->ToString();
			this->checkBox74->Text = AVar8[3]->ToString();
			this->checkBox75->Text = AVar8[4]->ToString();
			this->checkBox76->Hide();
			this->checkBox77->Hide();
			this->checkBox78->Hide();
			this->checkBox79->Hide();
			this->checkBox80->Hide();
		}
		if (v8 == 6) {
			this->checkBox71->Text = AVar8[0]->ToString();
			this->checkBox72->Text = AVar8[1]->ToString();
			this->checkBox73->Text = AVar8[2]->ToString();
			this->checkBox74->Text = AVar8[3]->ToString();
			this->checkBox75->Text = AVar8[4]->ToString();
			this->checkBox76->Text = AVar8[5]->ToString();
			this->checkBox77->Hide();
			this->checkBox78->Hide();
			this->checkBox79->Hide();
			this->checkBox80->Hide();
		}
		if (v8 == 7) {
			this->checkBox71->Text = AVar8[0]->ToString();
			this->checkBox72->Text = AVar8[1]->ToString();
			this->checkBox73->Text = AVar8[2]->ToString();
			this->checkBox74->Text = AVar8[3]->ToString();
			this->checkBox75->Text = AVar8[4]->ToString();
			this->checkBox76->Text = AVar8[5]->ToString();
			this->checkBox77->Text = AVar8[6]->ToString();
			this->checkBox78->Hide();
			this->checkBox79->Hide();
			this->checkBox80->Hide();
		}
		if (v8 == 8) {
			this->checkBox71->Text = AVar8[0]->ToString();
			this->checkBox72->Text = AVar8[1]->ToString();
			this->checkBox73->Text = AVar8[2]->ToString();
			this->checkBox74->Text = AVar8[3]->ToString();
			this->checkBox75->Text = AVar8[4]->ToString();
			this->checkBox76->Text = AVar8[5]->ToString();
			this->checkBox77->Text = AVar8[6]->ToString();
			this->checkBox78->Text = AVar8[7]->ToString();
			this->checkBox79->Hide();
			this->checkBox80->Hide();
		}
		if (v8 == 9) {
			this->checkBox71->Text = AVar8[0]->ToString();
			this->checkBox72->Text = AVar8[1]->ToString();
			this->checkBox73->Text = AVar8[2]->ToString();
			this->checkBox74->Text = AVar8[3]->ToString();
			this->checkBox75->Text = AVar8[4]->ToString();
			this->checkBox76->Text = AVar8[5]->ToString();
			this->checkBox77->Text = AVar8[6]->ToString();
			this->checkBox78->Text = AVar8[7]->ToString();
			this->checkBox79->Text = AVar8[8]->ToString();
			this->checkBox80->Hide();
		}
		if (v8 == 10) {
			this->checkBox71->Text = AVar8[0]->ToString();
			this->checkBox72->Text = AVar8[1]->ToString();
			this->checkBox73->Text = AVar8[2]->ToString();
			this->checkBox74->Text = AVar8[3]->ToString();
			this->checkBox75->Text = AVar8[4]->ToString();
			this->checkBox76->Text = AVar8[5]->ToString();
			this->checkBox77->Text = AVar8[6]->ToString();
			this->checkBox78->Text = AVar8[7]->ToString();
			this->checkBox79->Text = AVar8[8]->ToString();
			this->checkBox80->Text = AVar8[9]->ToString();
		}
		//Columna 9
		if (v9 == 0) {
			this->checkBox81->Hide();
			this->checkBox82->Hide();
			this->checkBox83->Hide();
			this->checkBox84->Hide();
			this->checkBox85->Hide();
			this->checkBox86->Hide();
			this->checkBox87->Hide();
			this->checkBox88->Hide();
			this->checkBox89->Hide();
			this->checkBox90->Hide();
		}
		if (v9 == 1) {
			this->checkBox81->Text = AVar9[0]->ToString();
			this->checkBox82->Hide();
			this->checkBox83->Hide();
			this->checkBox84->Hide();
			this->checkBox85->Hide();
			this->checkBox86->Hide();
			this->checkBox87->Hide();
			this->checkBox88->Hide();
			this->checkBox89->Hide();
			this->checkBox90->Hide();
		}
		if (v9 == 2) {
			this->checkBox81->Text = AVar9[0]->ToString();
			this->checkBox82->Text = AVar9[1]->ToString();
			this->checkBox83->Hide();
			this->checkBox84->Hide();
			this->checkBox85->Hide();
			this->checkBox86->Hide();
			this->checkBox87->Hide();
			this->checkBox88->Hide();
			this->checkBox89->Hide();
			this->checkBox90->Hide();
		}
		if (v9 == 3) {
			this->checkBox81->Text = AVar9[0]->ToString();
			this->checkBox82->Text = AVar9[1]->ToString();
			this->checkBox83->Text = AVar9[2]->ToString();
			this->checkBox84->Hide();
			this->checkBox85->Hide();
			this->checkBox86->Hide();
			this->checkBox87->Hide();
			this->checkBox88->Hide();
			this->checkBox89->Hide();
			this->checkBox90->Hide();
		}
		if (v9 == 4) {
			this->checkBox81->Text = AVar9[0]->ToString();
			this->checkBox82->Text = AVar9[1]->ToString();
			this->checkBox83->Text = AVar9[2]->ToString();
			this->checkBox84->Text = AVar9[3]->ToString();
			this->checkBox85->Hide();
			this->checkBox86->Hide();
			this->checkBox87->Hide();
			this->checkBox88->Hide();
			this->checkBox89->Hide();
			this->checkBox90->Hide();
		}
		if (v9 == 5) {
			this->checkBox81->Text = AVar9[0]->ToString();
			this->checkBox82->Text = AVar9[1]->ToString();
			this->checkBox83->Text = AVar9[2]->ToString();
			this->checkBox84->Text = AVar9[3]->ToString();
			this->checkBox85->Text = AVar9[4]->ToString();
			this->checkBox86->Hide();
			this->checkBox87->Hide();
			this->checkBox88->Hide();
			this->checkBox89->Hide();
			this->checkBox90->Hide();
		}
		if (v9 == 6) {
			this->checkBox81->Text = AVar9[0]->ToString();
			this->checkBox82->Text = AVar9[1]->ToString();
			this->checkBox83->Text = AVar9[2]->ToString();
			this->checkBox84->Text = AVar9[3]->ToString();
			this->checkBox85->Text = AVar9[4]->ToString();
			this->checkBox86->Text = AVar9[5]->ToString();
			this->checkBox87->Hide();
			this->checkBox88->Hide();
			this->checkBox89->Hide();
			this->checkBox90->Hide();
		}
		if (v9 == 7) {
			this->checkBox81->Text = AVar9[0]->ToString();
			this->checkBox82->Text = AVar9[1]->ToString();
			this->checkBox83->Text = AVar9[2]->ToString();
			this->checkBox84->Text = AVar9[3]->ToString();
			this->checkBox85->Text = AVar9[4]->ToString();
			this->checkBox86->Text = AVar9[5]->ToString();
			this->checkBox87->Text = AVar9[6]->ToString();
			this->checkBox88->Hide();
			this->checkBox89->Hide();
			this->checkBox90->Hide();
		}
		if (v9 == 8) {
			this->checkBox81->Text = AVar9[0]->ToString();
			this->checkBox82->Text = AVar9[1]->ToString();
			this->checkBox83->Text = AVar9[2]->ToString();
			this->checkBox84->Text = AVar9[3]->ToString();
			this->checkBox85->Text = AVar9[4]->ToString();
			this->checkBox86->Text = AVar9[5]->ToString();
			this->checkBox87->Text = AVar9[6]->ToString();
			this->checkBox88->Text = AVar9[7]->ToString();
			this->checkBox89->Hide();
			this->checkBox90->Hide();
		}
		if (v9 == 9) {
			this->checkBox81->Text = AVar9[0]->ToString();
			this->checkBox82->Text = AVar9[1]->ToString();
			this->checkBox83->Text = AVar9[2]->ToString();
			this->checkBox84->Text = AVar9[3]->ToString();
			this->checkBox85->Text = AVar9[4]->ToString();
			this->checkBox86->Text = AVar9[5]->ToString();
			this->checkBox87->Text = AVar9[6]->ToString();
			this->checkBox88->Text = AVar9[7]->ToString();
			this->checkBox89->Text = AVar9[8]->ToString();
			this->checkBox90->Hide();
		}
		if (v9 == 10) {
			this->checkBox81->Text = AVar9[0]->ToString();
			this->checkBox82->Text = AVar9[1]->ToString();
			this->checkBox83->Text = AVar9[2]->ToString();
			this->checkBox84->Text = AVar9[3]->ToString();
			this->checkBox85->Text = AVar9[4]->ToString();
			this->checkBox86->Text = AVar9[5]->ToString();
			this->checkBox87->Text = AVar9[6]->ToString();
			this->checkBox88->Text = AVar9[7]->ToString();
			this->checkBox89->Text = AVar9[8]->ToString();
			this->checkBox90->Text = AVar9[9]->ToString();
		}
		//Columna 10
		if (v10 == 0) {
			this->checkBox91->Hide();
			this->checkBox92->Hide();
			this->checkBox93->Hide();
			this->checkBox94->Hide();
			this->checkBox95->Hide();
			this->checkBox96->Hide();
			this->checkBox97->Hide();
			this->checkBox98->Hide();
			this->checkBox99->Hide();
			this->checkBox100->Hide();
		}
		if (v10 == 1) {
			this->checkBox91->Text = AVar10[0]->ToString();
			this->checkBox92->Hide();
			this->checkBox93->Hide();
			this->checkBox94->Hide();
			this->checkBox95->Hide();
			this->checkBox96->Hide();
			this->checkBox97->Hide();
			this->checkBox98->Hide();
			this->checkBox99->Hide();
			this->checkBox100->Hide();
		}
		if (v10 == 2) {
			this->checkBox91->Text = AVar10[0]->ToString();
			this->checkBox92->Text = AVar10[1]->ToString();
			this->checkBox93->Hide();
			this->checkBox94->Hide();
			this->checkBox95->Hide();
			this->checkBox96->Hide();
			this->checkBox97->Hide();
			this->checkBox98->Hide();
			this->checkBox99->Hide();
			this->checkBox100->Hide();
		}
		if (v10 == 3) {
			this->checkBox91->Text = AVar10[0]->ToString();
			this->checkBox92->Text = AVar10[1]->ToString();
			this->checkBox93->Text = AVar10[2]->ToString();
			this->checkBox94->Hide();
			this->checkBox95->Hide();
			this->checkBox96->Hide();
			this->checkBox97->Hide();
			this->checkBox98->Hide();
			this->checkBox99->Hide();
			this->checkBox100->Hide();
		}
		if (v10 == 4) {
			this->checkBox91->Text = AVar10[0]->ToString();
			this->checkBox92->Text = AVar10[1]->ToString();
			this->checkBox93->Text = AVar10[2]->ToString();
			this->checkBox94->Text = AVar10[3]->ToString();
			this->checkBox95->Hide();
			this->checkBox96->Hide();
			this->checkBox97->Hide();
			this->checkBox98->Hide();
			this->checkBox99->Hide();
			this->checkBox100->Hide();
		}
		if (v10 == 5) {
			this->checkBox91->Text = AVar10[0]->ToString();
			this->checkBox92->Text = AVar10[1]->ToString();
			this->checkBox93->Text = AVar10[2]->ToString();
			this->checkBox94->Text = AVar10[3]->ToString();
			this->checkBox95->Text = AVar10[4]->ToString();
			this->checkBox96->Hide();
			this->checkBox97->Hide();
			this->checkBox98->Hide();
			this->checkBox99->Hide();
			this->checkBox100->Hide();
		}
		if (v10 == 6) {
			this->checkBox91->Text = AVar10[0]->ToString();
			this->checkBox92->Text = AVar10[1]->ToString();
			this->checkBox93->Text = AVar10[2]->ToString();
			this->checkBox94->Text = AVar10[3]->ToString();
			this->checkBox95->Text = AVar10[4]->ToString();
			this->checkBox96->Text = AVar10[5]->ToString();
			this->checkBox97->Hide();
			this->checkBox98->Hide();
			this->checkBox99->Hide();
			this->checkBox100->Hide();
		}
		if (v10 == 7) {
			this->checkBox91->Text = AVar10[0]->ToString();
			this->checkBox92->Text = AVar10[1]->ToString();
			this->checkBox93->Text = AVar10[2]->ToString();
			this->checkBox94->Text = AVar10[3]->ToString();
			this->checkBox95->Text = AVar10[4]->ToString();
			this->checkBox96->Text = AVar10[5]->ToString();
			this->checkBox97->Text = AVar10[6]->ToString();
			this->checkBox98->Hide();
			this->checkBox99->Hide();
			this->checkBox100->Hide();
		}
		if (v10 == 8) {
			this->checkBox91->Text = AVar10[0]->ToString();
			this->checkBox92->Text = AVar10[1]->ToString();
			this->checkBox93->Text = AVar10[2]->ToString();
			this->checkBox94->Text = AVar10[3]->ToString();
			this->checkBox95->Text = AVar10[4]->ToString();
			this->checkBox96->Text = AVar10[5]->ToString();
			this->checkBox97->Text = AVar10[6]->ToString();
			this->checkBox98->Text = AVar10[7]->ToString();
			this->checkBox99->Hide();
			this->checkBox100->Hide();
		}
		if (v10 == 9) {
			this->checkBox91->Text = AVar10[0]->ToString();
			this->checkBox92->Text = AVar10[1]->ToString();
			this->checkBox93->Text = AVar10[2]->ToString();
			this->checkBox94->Text = AVar10[3]->ToString();
			this->checkBox95->Text = AVar10[4]->ToString();
			this->checkBox96->Text = AVar10[5]->ToString();
			this->checkBox97->Text = AVar10[6]->ToString();
			this->checkBox98->Text = AVar10[7]->ToString();
			this->checkBox99->Text = AVar10[8]->ToString();
			this->checkBox100->Hide();
		}
		if (v10 == 10) {
			this->checkBox91->Text = AVar10[0]->ToString();
			this->checkBox92->Text = AVar10[1]->ToString();
			this->checkBox93->Text = AVar10[2]->ToString();
			this->checkBox94->Text = AVar10[3]->ToString();
			this->checkBox95->Text = AVar10[4]->ToString();
			this->checkBox96->Text = AVar10[5]->ToString();
			this->checkBox97->Text = AVar10[6]->ToString();
			this->checkBox98->Text = AVar10[7]->ToString();
			this->checkBox99->Text = AVar10[8]->ToString();
			this->checkBox100->Text = AVar10[9]->ToString();
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("Error en el archivo, favor de verificar formato");
	}
		
}

//Boton de iniciar categorias
//_________________________________________________________________________________________________________________________________________________________________________
private: System::Void iconButton3_Click(System::Object^ sender, System::EventArgs^ e) {
	try{
		this->iconButton3->Visible = false;
		this->dataGridView1->Visible = true;
		this->dataGridView2->Visible = true;
		this->button2->Visible = true;
		this->button5->Visible = true;
		this->tableLayoutPanel1->Visible = false;
		this->titulo->Visible = false;

//_________________________________________________________________________________________________________________________________________________________________________
//Obtenemos numero de lineas en datos de los grupos
//_________________________________________________________________________________________________________________________________________________________________________
		StreamReader^ lineas_G = File::OpenText(Openfdg->FileName);
		int num_lineasG;
		while (lineas_G->ReadLine() != nullptr) { num_lineasG++; }
		lineas_G->Close();
//_________________________________________________________________________________________________________________________________________________________________________
//Obtenemos id de participantes de los subgrupos que eligio el usuario 
//_________________________________________________________________________________________________________________________________________________________________________
		array<String^>^ IDS = gcnew array<String^>(10000);
		int num_IDS = 0;
		array<String^>^ IDS1 = gcnew array<String^>(10000);
		int num_IDS1 = 0;
		array<String^>^ IDS2 = gcnew array<String^>(10000);
		int num_IDS2 = 0;
		array<String^>^ IDS3 = gcnew array<String^>(10000);
		int num_IDS3 = 0;
		array<String^>^ IDS4 = gcnew array<String^>(10000);
		int num_IDS4 = 0;
		array<String^>^ IDS5 = gcnew array<String^>(10000);
		int num_IDS5 = 0;
		array<String^>^ IDS6 = gcnew array<String^>(10000);
		int num_IDS6 = 0;
		array<String^>^ IDS7 = gcnew array<String^>(10000);
		int num_IDS7 = 0;
		array<String^>^ IDS8 = gcnew array<String^>(10000);
		int num_IDS8 = 0;
		array<String^>^ IDS9 = gcnew array<String^>(10000);
		int num_IDS9 = 0;
		array<String^>^ IDS10 = gcnew array<String^>(10000);
		int num_IDS10 = 0;
//_____________________________________________________________________________________________________________________________________________________________________________________
		int za = 0;
		for (int i = 1; i < 100; i++) {
			if (Imprimir[i]->IsNullOrEmpty(Imprimir[i])) {}
			else {															//Por cada palabra que eligio el usuario
				
				this->dataGridView1->Rows[0]->Cells[za]->Value = Imprimir[i];	za++; //Añadimos la palabra al titulo
				StreamReader^ aidis = File::OpenText(Openfdg->FileName);	//Abrimos el archivo de datos de los grupos
				String^ renglon_Da;
				array<String^>^ Aaidis;
				for (int a = 0; a <= num_lineasG; a++) {						//Corremos todo el archivo de datos
					renglon_Da = aidis->ReadLine();							//leemos una linea
					if (renglon_Da->IsNullOrEmpty(renglon_Da)) {}
					else {													//si no está vacia
						Aaidis = renglon_Da->Split(',');					//la volvemos arreglo 
						if (Aaidis[1] == Imprimir[i]) {						//si la palabra i aparece en la posición 1
							IDS1[num_IDS1] = Aaidis[0];							//la añadimos al  arreglo IDS
							num_IDS1++;
						}
						if (Aaidis[2] == Imprimir[i]) {
							IDS2[num_IDS2] = Aaidis[0];
							num_IDS2++;
						}
						if (Aaidis[3] == Imprimir[i]) {
							IDS3[num_IDS3] = Aaidis[0];
							num_IDS3++;
						}
						if (Aaidis[4] == Imprimir[i]) {
							IDS4[num_IDS4] = Aaidis[0];
							num_IDS4++;
						}
						if (Aaidis[5] == Imprimir[i]) {
							IDS5[num_IDS5] = Aaidis[0];
							num_IDS5++;
						}
						if (Aaidis[6] == Imprimir[i]) {
							IDS6[num_IDS6] = Aaidis[0];
							num_IDS6++;
						}
						if (Aaidis[7] == Imprimir[i]) {
							IDS7[num_IDS7] = Aaidis[0];
							num_IDS7++;
						}
						if (Aaidis[8] == Imprimir[i]) {
							IDS8[num_IDS8] = Aaidis[0];
							num_IDS8++;
						}
						if (Aaidis[9] == Imprimir[i]) {
							IDS9[num_IDS9] = Aaidis[0];
							num_IDS9++;
						}
						if (Aaidis[10] == Imprimir[i]) {
							IDS10[num_IDS10] = Aaidis[0];
							num_IDS10++;
						}

						//if (Aaidis[2] == Imprimir[i]) {						
						//	for (int c = 0; c < num_IDS; c++) {					//Recorro todo el IDS
						//		if (Aaidis[0] == IDS[i]) { b2 = true; }	       //si el ID ya está en IDS activo bandera		
						//	}
						//	//if (b2 == false) { IDS[num_IDS] = Aaidis[0]; num_IDS++;} //si no aparece en IDS la añadimos
						//}
					}
				}
				aidis->Close();
			}
		}

		bool b1 = false;
		bool b2 = false;
		bool b3 = false;
		bool b4 = false;
		bool b5 = false;
		bool b6 = false;
		bool b7 = false;
		bool b8 = false;
		bool b9 = false;
		bool b10 = false;
		//______________________________Activamos bandera en caso de que aparezca un elemento de cada grupo__________________________________________________________________________________________
		for (int i = 1; i < 100; i++) {
			if (Imprimir[i]->IsNullOrEmpty(Imprimir[i])) {}
			else {

				for (int x = 0; x < v1; x++) {
					if (Imprimir[i] == AVar1[x]) {
						b1 = true;
					}
				}
				for (int x = 0; x < v2; x++) {
					if (Imprimir[i] == AVar2[x]) {
						b2 = true;
					}
				}
				for (int x = 0; x < v3; x++) {
					if (Imprimir[i] == AVar3[x]) {
						b3 = true;
					}
				}
				for (int x = 0; x < v4; x++) {
					if (Imprimir[i] == AVar4[x]) {
						b4 = true;
					}
				}
				for (int x = 0; x < v5; x++) {
					if (Imprimir[i] == AVar5[x]) {
						b5 = true;
					}
				}
				for (int x = 0; x < v6; x++) {
					if (Imprimir[i] == AVar6[x]) {
						b6 = true;
					}
				}
				for (int x = 0; x < v7; x++) {
					if (Imprimir[i] == AVar7[x]) {
						b7 = true;
					}
				}
				for (int x = 0; x < v8; x++) {
					if (Imprimir[i] == AVar8[x]) {
						b8 = true;
					}
				}
				for (int x = 0; x < v9; x++) {
					if (Imprimir[i] == AVar9[x]) {
						b9 = true;
					}
				}
				for (int x = 0; x < v10; x++) {
					if (Imprimir[i] == AVar10[x]) {
						b10 = true;
					}
				}
			}
		}
		//__________________________________________________________________________________________________________________________________________________________________________________
		//Tenemos diez casos probables de uso y actuamos dependiendo el caso, si cada bool es verdadero recorremos el arreglo buscando el conjunto union
		//__________________________________________________________________________________________________________________________________________________________________________________
		if (b1 && b2 && b3 && b4 && b5 && b6 && b7 && b8 && b9 && b10) {
			for (int a = 0; a < num_IDS1; a++) {
				for (int b = 0; b < num_IDS2; b++) {
					for (int c = 0; c < num_IDS3; c++) {
						for (int d = 0; d < num_IDS4; d++) {
							for (int e = 0; e < num_IDS5; e++) {
								for (int f = 0; f < num_IDS6; f++) {
									for (int g = 0; g < num_IDS7; g++) {
										for (int h = 0; h < num_IDS8; h++) {
											for (int i = 0; b < num_IDS9; i++) {
												for (int j = 0; j < num_IDS10; j++) {
													if (IDS1[a] == IDS2[b]) {
														if (IDS2[b] == IDS3[c]) {
															if (IDS3[c] == IDS4[d]) {
																if (IDS4[d] == IDS5[e]) {
																	if (IDS5[e] == IDS6[f]) {
																		if (IDS6[f] == IDS7[g]) {
																			if (IDS7[g] == IDS8[h]) {
																				if (IDS8[h] == IDS9[i]) {
																					if (IDS9[i] == IDS10[j]) {
																						IDS[num_IDS] = IDS1[a];
																						num_IDS++;
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		else if (b1 && b2 && b3 && b4 && b5 && b6 && b7 && b8 && b9) {
			for (int a = 0; a < num_IDS1; a++) {
				for (int b = 0; b < num_IDS2; b++) {
					for (int c = 0; c < num_IDS3; c++) {
						for (int d = 0; d < num_IDS4; d++) {
							for (int e = 0; e < num_IDS5; e++) {
								for (int f = 0; f < num_IDS6; f++) {
									for (int g = 0; g < num_IDS7; g++) {
										for (int h = 0; h < num_IDS8; h++) {
											for (int i = 0; b < num_IDS9; i++) {
												if (IDS1[a] == IDS2[b]) {
													if (IDS2[b] == IDS3[c]) {
														if (IDS3[c] == IDS4[d]) {
															if (IDS4[d] == IDS5[e]) {
																if (IDS5[e] == IDS6[f]) {
																	if (IDS6[f] == IDS7[g]) {
																		if (IDS7[g] == IDS8[h]) {
																			if (IDS8[h] == IDS9[i]) {
																				IDS[num_IDS] = IDS1[a];
																				num_IDS++;
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		else if (b1 && b2 && b3 && b4 && b5 && b6 && b7 && b8) {
			for (int a = 0; a < num_IDS1; a++) {
				for (int b = 0; b < num_IDS2; b++) {
					for (int c = 0; c < num_IDS3; c++) {
						for (int d = 0; d < num_IDS4; d++) {
							for (int e = 0; e < num_IDS5; e++) {
								for (int f = 0; f < num_IDS6; f++) {
									for (int g = 0; g < num_IDS7; g++) {
										for (int h = 0; h < num_IDS8; h++) {
											if (IDS1[a] == IDS2[b]) {
												if (IDS2[b] == IDS3[c]) {
													if (IDS3[c] == IDS4[d]) {
														if (IDS4[d] == IDS5[e]) {
															if (IDS5[e] == IDS6[f]) {
																if (IDS6[f] == IDS7[g]) {
																	if (IDS7[g] == IDS8[h]) {
																		IDS[num_IDS] = IDS1[a];
																		num_IDS++;
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		else if (b1 && b2 && b3 && b4 && b5 && b6 && b7) {
			for (int a = 0; a < num_IDS1; a++) {
				for (int b = 0; b < num_IDS2; b++) {
					for (int c = 0; c < num_IDS3; c++) {
						for (int d = 0; d < num_IDS4; d++) {
							for (int e = 0; e < num_IDS5; e++) {
								for (int f = 0; f < num_IDS6; f++) {
									for (int g = 0; g < num_IDS7; g++) {
										if (IDS1[a] == IDS2[b]) {
											if (IDS2[b] == IDS3[c]) {
												if (IDS3[c] == IDS4[d]) {
													if (IDS4[d] == IDS5[e]) {
														if (IDS5[e] == IDS6[f]) {
															if (IDS6[f] == IDS7[g]) {
																IDS[num_IDS] = IDS1[a];
																num_IDS++;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		else if (b1 && b2 && b3 && b4 && b5 && b6) {
			for (int a = 0; a < num_IDS1; a++) {
				for (int b = 0; b < num_IDS2; b++) {
					for (int c = 0; c < num_IDS3; c++) {
						for (int d = 0; d < num_IDS4; d++) {
							for (int e = 0; e < num_IDS5; e++) {
								for (int f = 0; f < num_IDS6; f++) {
									if (IDS1[a] == IDS2[b]) {
										if (IDS2[b] == IDS3[c]) {
											if (IDS3[c] == IDS4[d]) {
												if (IDS4[d] == IDS5[e]) {
													if (IDS5[e] == IDS6[f]) {
														IDS[num_IDS] = IDS1[a];
														num_IDS++;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		else if (b1 && b2 && b3 && b4 && b5) {
			for (int a = 0; a < num_IDS1; a++) {
				for (int b = 0; b < num_IDS2; b++) {
					for (int c = 0; c < num_IDS3; c++) {
						for (int d = 0; d < num_IDS4; d++) {
							for (int e = 0; e < num_IDS5; e++) {
								if (IDS1[a] == IDS2[b]) {
									if (IDS2[b] == IDS3[c]) {
										if (IDS3[c] == IDS4[d]) {
											if (IDS4[d] == IDS5[e]) {
												IDS[num_IDS] = IDS1[a];
												num_IDS++;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		else if (b1 && b2 && b3 && b4) {
			for (int a = 0; a < num_IDS1; a++) {
				for (int b = 0; b < num_IDS2; b++) {
					for (int c = 0; c < num_IDS3; c++) {
						for (int d = 0; d < num_IDS4; d++) {
							if (IDS1[a] == IDS2[b]) {
								if (IDS2[b] == IDS3[c]) {
									if (IDS3[c] == IDS4[d]) {
										IDS[num_IDS] = IDS1[a];
										num_IDS++;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (b1 && b2 && b3) {
			for (int a = 0; a < num_IDS1; a++) {
				for (int b = 0; b < num_IDS2; b++) {
					for (int c = 0; c < num_IDS3; c++) {
						if (IDS1[a] == IDS2[b]) {
							if (IDS2[b] == IDS3[c]) {
								IDS[num_IDS] = IDS1[a];
								num_IDS++;
							}
						}
					}
				}
			}
		}
		else if (b1 && b2) {
			if (b1 && b2 && b5) {
				String^ caption = "Error: Se seleccionaron subgrupos de los Grupos 1, 2 y 5";
				String^ mensaje = "Debe elegir al menos un subgrupo del tercer grupo o deseleccionar los subgrupos del quinto grupo";
				MessageBox::Show(mensaje, caption);
				this->dataGridView1->Visible = false;
			}
			if (b1 && b2 && b4) {
				String^ caption = "Error: Se seleccionaron subgrupos de los Grupos 1, 2 y 4";
				String^ mensaje = "Debe elegir al menos un subgrupo del tercer grupo o deseleccionar los subgrupos del cuarto grupo";
				MessageBox::Show(mensaje, caption);
				this->dataGridView1->Visible = false;
			}
			for (int a = 0; a < num_IDS1; a++) {
				for (int b = 0; b < num_IDS2; b++) {
					if (IDS1[a] == IDS2[b]) {
						IDS[num_IDS] = IDS1[a];
						num_IDS++;
					}
				}
			}
		}

		else if (b1) {
			if (b3) {
				String^ caption = "Error: Se seleccionaron subgrupos de los Grupos 1 y 3";
				String^ mensaje = "Debe elegir al menos un subgrupo del segundo  grupo o deseleccionar los subgrupos del tercer grupo";
				MessageBox::Show(mensaje, caption);
				this->dataGridView2->Visible = false;
				this->button2->Visible = false;

			}
			if (b4) {
				String^ caption = "Error: Se seleccionaron subgrupos de los Grupos 1 y 4";
				String^ mensaje = "Debe elegir al menos un subgrupo del segundo y tercer grupo o deseleccionar los subgrupos del cuarto grupo";
				MessageBox::Show(mensaje, caption);
				this->dataGridView2->Visible = false;
				this->button2->Visible = false;

			}
			if (b5) {
				String^ caption = "Error: Se seleccionaron subgrupos de los Grupos 1 y 5";
				String^ mensaje = "Debe elegir al menos un subgrupo del segundo, tercer y cuarto grupo o deseleccionar los subgrupos del quinto grupo";
				MessageBox::Show(mensaje, caption);
				this->dataGridView2->Visible = false;
				this->button2->Visible = false;

			}

			for (int a = 0; a < num_IDS1; a++) {
				IDS[num_IDS] = IDS1[a];
				num_IDS++;
			}
		}
		else {
			String^ caption = "Error";
			String^ mensaje = "Debe elegir al menos un subgrupo de cada grupo inferior";
			MessageBox::Show(mensaje, caption);
			this->dataGridView2->Visible = false;
			this->button2->Visible = false;
		}

//_________________________________________________________________________________________________________________________________________________________________________
//Obtenemos el numero de lineas en el categoria
//_________________________________________________________________________________________________________________________________________________________________________
	StreamReader^ lineas_D = File::OpenText(Openfdc->FileName);
	int num_lineasC;
	while (lineas_D->ReadLine() != nullptr) { num_lineasC++; }
	lineas_D->Close();
//_________________________________________________________________________________________________________________________________________________________________________
//Obtenemos el numero de lineas en las palabras
//_________________________________________________________________________________________________________________________________________________________________________
	StreamReader^ lineas_P = File::OpenText(Openfdp->FileName);
	int num_lineasP;
	while (lineas_P->ReadLine() != nullptr) { num_lineasP++; }
	lineas_P->Close();
//_________________________________________________________________________________________________________________________________________________________________________
//Obtenemos lista de categorias
//_________________________________________________________________________________________________________________________________________________________________________
	StreamReader^ cates = File::OpenText(Openfdc->FileName);
	num_categorias = 0;
	String^ renglon_C;
	array<String^>^ extraccion;
	array<String^>^ categorias = gcnew array<String^>(15);
	renglon_C = cates->ReadLine();
	for (int a = 1; a < num_lineasC; a++) {
		renglon_C = cates->ReadLine();
		if (renglon_C->IsNullOrEmpty(renglon_C)) {}
		else {
			extraccion = renglon_C->Split(',');
			if (extraccion[0]->IsNullOrEmpty(extraccion[0])) {}
			else {
				categorias[num_categorias] = extraccion[0];
				num_categorias++;
			}
		}
	}
	cates->Close();
//_________________________________________________________________________________________________________________________________________________________________________
//Obtenemos el numero de veces que se uso una palabra por categoria
//_________________________________________________________________________________________________________________________________________________________________________
	int cataux = 0;
	String^ renglon_B;
	array<String^>^ palabras;
	StreamReader^ categs = File::OpenText(Openfdc->FileName);
	String^ renglon_Cate;
	array<String^>^ Arrcate;
	int tam_c = 0;
	categs->ReadLine();

	for (int i = 1; i <= num_categorias; i++) {								//Por cada categoria
		cataux = 0;
		renglon_Cate = categs->ReadLine();								    //leemos linea de categoria
		if (renglon_Cate->IsNullOrEmpty(renglon_Cate)) {}						//Si la linea leida no está vacia
		else {
			Arrcate = renglon_Cate->Split(',');							//Separo la linea en un arreglo
			tam_c = Arrcate->Length;
		}
		//Al codigo de creacion de la tabla semantica le metemos que trabaje solo si el id en filtrado esta en el arreglo global de ids 
		for (int s = 0; s < num_IDS; s++) {
			
				StreamReader^ busca = File::OpenText(Openfdp->FileName);
				for (int l = 0; l < num_lineasP; l++) {								//Leo todo el archivo de palabras
					renglon_B = busca->ReadLine();								    //Linea por linea
					//MessageBox::Show("l"+renglon_B);
					if (renglon_B->IsNullOrEmpty(renglon_B)) {}						//Si la linea leida no está vacia
					else {
						palabras = renglon_B->Split(',');							//Separo la linea en un arreglo
						int tam_B = palabras->Length;
						if (palabras[0] == IDS[s]) {
							for (int c = 1; c < tam_c; c++) {							//Por cada palabra en ese renglon de categoria
								if (Arrcate[c]->IsNullOrEmpty(Arrcate[c])) {}			//Si no está vacia
								else {
									for (int p = 1; p < tam_B; p++) {							//A cada palabra del arreglo
										if (palabras[p]->IsNullOrEmpty(palabras[p])) {}			//Si no está vacia
										else {
											//MessageBox::Show(" " + palabras[p] + " " + Arrcate[c]);
											if (palabras[p] == Arrcate[c]) {
												cataux++;
												//MessageBox::Show(" "+palabras[p] +" "+ Arrcate[c]+" "+cataux);
											}
										}
									}
								}
							}
						}
					}
				}
				busca->Close();
			
		}

		int n = this->dataGridView2->Rows->Add();							//añadimos un nuevo renglon a la tabla
		this->dataGridView2->Rows[n]->Cells[0]->Value = Arrcate[0];
		this->dataGridView2->Rows[n]->Cells[1]->Value = cataux;				//Imprimo los valores en  la tabla en sus respectivas celdas
		cataux = 0;
	}
	categs->Close();
}
	   catch (Exception^ e) {
		   MessageBox::Show("Error en el archivo, favor de verificar formato");
	   }
}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
//______________________________________________________________________________________________________________________
//Boton de nuevo filtrado
//______________________________________________________________________________________________________________________
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->tableLayoutPanel1->Visible = true;
	this->dataGridView1->Visible = false;
	this->dataGridView2->Visible = false;
	this->titulo->Visible = true;
	this->button2->Visible = false;
	this->button5->Visible = false;
	this->iconButton3->Visible = true;

	this->dataGridView1->Rows->Clear();
	this->dataGridView2->Rows->Clear();
}
//______________________________________________________________________________________________________________________
//Boton de exportar 
//______________________________________________________________________________________________________________________
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button2->Visible = false;
	try {
		SaveFileDialog^ redsem = gcnew SaveFileDialog();
		String^ caption = "Guardado de tabla de categorías";
		String^ strfilename = "Elija donde desea guardar la tabla de categorías";
		MessageBox::Show(strfilename, caption);
		Stream^ red;
		redsem->Filter = "Excel|*.csv";
		redsem->FilterIndex = 2;
		redsem->RestoreDirectory = true;
		redsem->Title = "Elegir destino de tabla de categorías";
		if (redsem->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if ((red = redsem->OpenFile()) != nullptr) {
				red->Close();
			}
			else
				MessageBox::Show("No se definio un nombre o lugar");
		}
		else
			MessageBox::Show("No se definio un nombre o lugar");

		StreamWriter^ reds = gcnew StreamWriter(redsem->FileName);

		int si = 0;
		reds->Write("Tabla de categorias especifica para:" + ",");
		reds->Write("\r");
		for (int i = 0; i < 100; i++) {
			if (Imprimir[i]->IsNullOrEmpty(Imprimir[i])) {}
			else {
				reds->Write(this->dataGridView1->Rows[0]->Cells[si]->Value + ",");
				si++;
			}

		}

		reds->Write("\r");
		reds->Write("\r");
		reds->Write("Categoria" + "," + "Iteraciones");
		reds->Write("\r");

		for (int e = 0; e < num_categorias; e++) {
			reds->Write(this->dataGridView2->Rows[e]->Cells[0]->Value + "," + this->dataGridView2->Rows[e]->Cells[1]->Value);
			reds->Write("\r");
		}
		reds->Close();
		MessageBox::Show("Se ha guardado exitosamente la tabla de categorías en " + redsem->FileName);
	}
	catch (Exception^ e) {
		MessageBox::Show("Error en el archivo, favor de verificar formato");
	}


}
private: System::Void checkBox1_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) { Imprimir[1] = (AVar1[0]->ToString());	}
	else { Imprimir[1] = ""; }
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox2->Checked) { Imprimir[2] = (AVar1[1]->ToString());}
	else { Imprimir[2] = ""; }
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox3->Checked) { Imprimir[3] = (AVar1[2]->ToString()); }
	else { Imprimir[3] = ""; }
}
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox4->Checked) { Imprimir[4] = (AVar1[3]->ToString()); }
	else { Imprimir[4] = ""; }
}
private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox5->Checked) { Imprimir[5] = (AVar1[4]->ToString()); }
	else { Imprimir[5] = ""; }
}
private: System::Void checkBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox6->Checked) { Imprimir[6] = (AVar1[5]->ToString()); }
	else { Imprimir[6] = ""; }
}
private: System::Void checkBox7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox7->Checked) { Imprimir[7] = (AVar1[6]->ToString()); }
	else { Imprimir[7] = ""; }
}
private: System::Void checkBox8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox8->Checked) { Imprimir[8] = (AVar1[7]->ToString()); }
	else { Imprimir[8] = ""; }
}
private: System::Void checkBox9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox9->Checked) { Imprimir[9] = (AVar1[8]->ToString()); }
	else { Imprimir[9] = ""; }
}
private: System::Void checkBox10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox10->Checked) { Imprimir[10] = (AVar1[9]->ToString()); }
	else { Imprimir[10] = ""; }
}
private: System::Void checkBox11_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox11->Checked) { Imprimir[11] = (AVar2[0]->ToString()); }
	else { Imprimir[11] = ""; }
}
private: System::Void checkBox12_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox12->Checked) { Imprimir[12] = (AVar2[1]->ToString()); }
	else { Imprimir[12] = ""; }
}
private: System::Void checkBox13_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox13->Checked) { Imprimir[13] = (AVar2[2]->ToString()); }
	else { Imprimir[13] = ""; }
}
private: System::Void checkBox14_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox14->Checked) { Imprimir[14] = (AVar2[3]->ToString()); }
	else { Imprimir[14] = ""; }
}
private: System::Void checkBox15_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox15->Checked) { Imprimir[15] = (AVar2[4]->ToString()); }
	else { Imprimir[15] = ""; }
}
private: System::Void checkBox16_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox16->Checked) { Imprimir[16] = (AVar2[5]->ToString()); }
	else { Imprimir[16] = ""; }
}
private: System::Void checkBox17_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox17->Checked) { Imprimir[17] = (AVar2[6]->ToString()); }
	else { Imprimir[17] = ""; }
}
private: System::Void checkBox18_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox18->Checked) { Imprimir[18] = (AVar2[7]->ToString()); }
	else { Imprimir[18] = ""; }
}
private: System::Void checkBox19_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox19->Checked) { Imprimir[19] = (AVar2[8]->ToString()); }
	else { Imprimir[19] = ""; }
}
private: System::Void checkBox20_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox20->Checked) { Imprimir[20] = (AVar2[9]->ToString()); }
	else { Imprimir[20] = ""; }
}
private: System::Void checkBox21_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox21->Checked) { Imprimir[21] = (AVar3[0]->ToString()); }
	else { Imprimir[21] = ""; }
}
private: System::Void checkBox22_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox22->Checked) { Imprimir[22] = (AVar3[1]->ToString()); }
	else { Imprimir[22] = ""; }
}
private: System::Void checkBox23_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox23->Checked) { Imprimir[23] = (AVar3[2]->ToString()); }
	else { Imprimir[23] = ""; }
}
private: System::Void checkBox24_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox24->Checked) { Imprimir[24] = (AVar3[3]->ToString()); }
	else { Imprimir[24] = ""; }
}
private: System::Void checkBox25_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox25->Checked) { Imprimir[25] = (AVar3[4]->ToString()); }
	else { Imprimir[25] = "";	}
}
private: System::Void checkBox26_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox26->Checked) { Imprimir[26] = (AVar3[5]->ToString()); }
	else { Imprimir[26] = ""; }
}
private: System::Void checkBox27_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox27->Checked) { Imprimir[27] = (AVar3[6]->ToString()); }
	else { Imprimir[27] = ""; }
}
private: System::Void checkBox28_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox28->Checked) { Imprimir[28] = (AVar3[7]->ToString()); }
	else { Imprimir[28] = ""; }
}
private: System::Void checkBox29_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox29->Checked) { Imprimir[29] = (AVar3[8]->ToString()); }
	else { Imprimir[29] = ""; }
}
private: System::Void checkBox30_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox30->Checked) { Imprimir[30] = (AVar3[9]->ToString()); }
	else { Imprimir[30] = ""; }
}
private: System::Void checkBox31_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox31->Checked) { Imprimir[31] = (AVar4[0]->ToString()); }
	else { Imprimir[31] = ""; }
}
private: System::Void checkBox32_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox32->Checked) { Imprimir[32] = (AVar4[1]->ToString()); }
	else { Imprimir[32] = ""; }
}
private: System::Void checkBox33_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox33->Checked) { Imprimir[33] = (AVar4[2]->ToString()); }
	else { Imprimir[33] = ""; }
}
private: System::Void checkBox34_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox34->Checked) { Imprimir[34] = (AVar4[3]->ToString()); }
	else { Imprimir[34] = ""; }
}
private: System::Void checkBox35_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox35->Checked) { Imprimir[35] = (AVar4[4]->ToString()); }
	else { Imprimir[35] = ""; }
}
private: System::Void checkBox36_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox36->Checked) { Imprimir[36] = (AVar4[5]->ToString()); }
	else { Imprimir[36] = ""; }
}
private: System::Void checkBox37_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox37->Checked) { Imprimir[37] = (AVar4[6]->ToString()); }
	else { Imprimir[37] = ""; }
}
private: System::Void checkBox38_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox38->Checked) { Imprimir[38] = (AVar4[7]->ToString()); }
	else { Imprimir[38] = ""; }
}
private: System::Void checkBox39_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox39->Checked) { Imprimir[39] = (AVar4[8]->ToString()); }
	else { Imprimir[39] = ""; }
}
private: System::Void checkBox40_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox40->Checked) { Imprimir[40] = (AVar4[9]->ToString()); }
	else { Imprimir[40] = ""; }
}
private: System::Void checkBox41_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox41->Checked) { Imprimir[41] = (AVar5[0]->ToString()); }
	else { Imprimir[41] = ""; }
}
private: System::Void checkBox42_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox42->Checked) { Imprimir[42] = (AVar5[1]->ToString()); }
	else { Imprimir[42] = ""; }
}
private: System::Void checkBox43_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox43->Checked) { Imprimir[43] = (AVar5[2]->ToString()); }
	else { Imprimir[43] = ""; }
}
private: System::Void checkBox44_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox44->Checked) { Imprimir[44] = (AVar5[3]->ToString()); }
	else { Imprimir[44] = ""; }
}
private: System::Void checkBox45_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox45->Checked) { Imprimir[45] = (AVar5[4]->ToString()); }
	else { Imprimir[45] = ""; }
}
private: System::Void checkBox46_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox46->Checked) { Imprimir[46] = (AVar5[5]->ToString()); }
	else { Imprimir[46] = ""; }
}
private: System::Void checkBox47_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox47->Checked) { Imprimir[47] = (AVar5[6]->ToString()); }
	else { Imprimir[47] = ""; }
}
private: System::Void checkBox48_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox48->Checked) { Imprimir[48] = (AVar5[7]->ToString()); }
	else { Imprimir[48] = ""; }
}
private: System::Void checkBox49_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox49->Checked) { Imprimir[49] = (AVar5[8]->ToString()); }
	else { Imprimir[49] = ""; }
}
private: System::Void checkBox50_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox50->Checked) { Imprimir[50] = (AVar5[9]->ToString()); }
	else { Imprimir[50] = ""; }
}
private: System::Void checkBox51_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox51->Checked) { Imprimir[51] = (AVar6[0]->ToString()); }
	else { Imprimir[51] = ""; }
}
private: System::Void checkBox52_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox52->Checked) { Imprimir[52] = (AVar6[1]->ToString()); }
	else { Imprimir[52] = ""; }
}
private: System::Void checkBox53_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox53->Checked) { Imprimir[53] = (AVar6[2]->ToString()); }
	else { Imprimir[53] = ""; }
}
private: System::Void checkBox54_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox54->Checked) { Imprimir[54] = (AVar6[3]->ToString()); }
	else { Imprimir[54] = ""; }
}
private: System::Void checkBox55_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox55->Checked) { Imprimir[55] = (AVar6[4]->ToString()); }
	else { Imprimir[55] = ""; }
}
private: System::Void checkBox56_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox56->Checked) { Imprimir[56] = (AVar6[5]->ToString()); }
	else { Imprimir[56] = ""; }
}
private: System::Void checkBox57_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox57->Checked) { Imprimir[57] = (AVar6[6]->ToString()); }
	else { Imprimir[57] = ""; }
}
private: System::Void checkBox58_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox58->Checked) { Imprimir[58] = (AVar6[7]->ToString()); }
	else { Imprimir[58] = ""; }
}
private: System::Void checkBox59_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox59->Checked) { Imprimir[59] = (AVar6[8]->ToString()); }
	else { Imprimir[59] = ""; }
}
private: System::Void checkBox60_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox60->Checked) { Imprimir[60] = (AVar6[9]->ToString()); }
	else { Imprimir[60] = ""; }
}
private: System::Void checkBox61_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox61->Checked) { Imprimir[61] = (AVar7[0]->ToString()); }
	else { Imprimir[61] = ""; }
}
private: System::Void checkBox62_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox62->Checked) { Imprimir[62] = (AVar7[1]->ToString()); }
	else { Imprimir[62] = ""; }
}
private: System::Void checkBox63_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox63->Checked) { Imprimir[63] = (AVar7[2]->ToString()); }
	else { Imprimir[63] = ""; }
}
private: System::Void checkBox64_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox64->Checked) { Imprimir[64] = (AVar7[3]->ToString()); }
	else { Imprimir[64] = ""; }
}
private: System::Void checkBox65_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox65->Checked) { Imprimir[65] = (AVar7[4]->ToString()); }
	else { Imprimir[65] = ""; }
}
private: System::Void checkBox66_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox66->Checked) { Imprimir[66] = (AVar7[5]->ToString()); }
	else { Imprimir[66] = ""; }
}
private: System::Void checkBox67_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox67->Checked) { Imprimir[67] = (AVar7[6]->ToString()); }
	else { Imprimir[67] = ""; }
}
private: System::Void checkBox68_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox68->Checked) { Imprimir[68] = (AVar7[7]->ToString()); }
	else { Imprimir[68] = ""; }
}
private: System::Void checkBox69_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox69->Checked) { Imprimir[69] = (AVar7[8]->ToString()); }
	else { Imprimir[69] = ""; }
}
private: System::Void checkBox70_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox70->Checked) { Imprimir[70] = (AVar7[9]->ToString()); }
	else { Imprimir[70] = ""; }
}
private: System::Void checkBox71_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox71->Checked) { Imprimir[71] = (AVar8[0]->ToString()); }
	else { Imprimir[71] = ""; }
}
private: System::Void checkBox72_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox72->Checked) { Imprimir[72] = (AVar8[1]->ToString()); }
	else { Imprimir[72] = ""; }
}
private: System::Void checkBox73_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox73->Checked) { Imprimir[73] = (AVar8[2]->ToString()); }
	else { Imprimir[73] = ""; }
}
private: System::Void checkBox74_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox74->Checked) { Imprimir[74] = (AVar8[3]->ToString()); }
	else { Imprimir[74] = ""; }
}
private: System::Void checkBox75_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox75->Checked) { Imprimir[75] = (AVar8[4]->ToString()); }
	else { Imprimir[75] = ""; }
}
private: System::Void checkBox76_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox76->Checked) { Imprimir[76] = (AVar8[5]->ToString()); }
	else { Imprimir[76] = ""; }
}
private: System::Void checkBox77_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox77->Checked) { Imprimir[77] = (AVar8[6]->ToString()); }
	else { Imprimir[77] = ""; }
}
private: System::Void checkBox78_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox78->Checked) { Imprimir[78] = (AVar8[7]->ToString()); }
	else { Imprimir[78] = ""; }
}
private: System::Void checkBox79_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox79->Checked) { Imprimir[79] = (AVar8[8]->ToString()); }
	else { Imprimir[79] = ""; }
}
private: System::Void checkBox80_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox80->Checked) { Imprimir[80] = (AVar8[9]->ToString()); }
	else { Imprimir[80] = ""; }
}
private: System::Void checkBox81_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox81->Checked) { Imprimir[81] = (AVar9[0]->ToString()); }
	else { Imprimir[81] = ""; }
}
private: System::Void checkBox82_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox82->Checked) { Imprimir[82] = (AVar9[1]->ToString()); }
	else { Imprimir[82] = ""; }
}
private: System::Void checkBox83_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox83->Checked) { Imprimir[83] = (AVar9[2]->ToString()); }
	else { Imprimir[83] = ""; }
}
private: System::Void checkBox84_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox84->Checked) { Imprimir[84] = (AVar9[3]->ToString()); }
	else { Imprimir[84] = ""; }
}
private: System::Void checkBox85_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox85->Checked) { Imprimir[85] = (AVar9[4]->ToString()); }
	else { Imprimir[85] = ""; }
}
private: System::Void checkBox86_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox86->Checked) { Imprimir[86] = (AVar9[5]->ToString()); }
	else { Imprimir[86] = ""; }
}
private: System::Void checkBox87_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox87->Checked) { Imprimir[87] = (AVar9[6]->ToString()); }
	else { Imprimir[87] = ""; }
}
private: System::Void checkBox88_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox88->Checked) { Imprimir[88] = (AVar9[7]->ToString()); }
	else { Imprimir[88] = ""; }
}
private: System::Void checkBox89_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox89->Checked) { Imprimir[89] = (AVar9[8]->ToString()); }
	else { Imprimir[89] = ""; }
}
private: System::Void checkBox90_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox90->Checked) { Imprimir[90] = (AVar9[9]->ToString()); }
	else { Imprimir[90] = ""; }
}
private: System::Void checkBox91_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox91->Checked) { Imprimir[91] = (AVar10[0]->ToString()); }
	else { Imprimir[91] = ""; }
}
private: System::Void checkBox92_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox92->Checked) { Imprimir[92] = (AVar10[1]->ToString()); }
	else { Imprimir[92] = ""; }
}
private: System::Void checkBox93_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox93->Checked) { Imprimir[93] = (AVar10[2]->ToString()); }
	else { Imprimir[93] = ""; }
}
private: System::Void checkBox94_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox94->Checked) { Imprimir[94] = (AVar10[3]->ToString()); }
	else { Imprimir[94] = ""; }
}
private: System::Void checkBox95_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox95->Checked) { Imprimir[95] = (AVar10[4]->ToString()); }
	else { Imprimir[95] = ""; }
}
private: System::Void checkBox96_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox96->Checked) { Imprimir[96] = (AVar10[5]->ToString()); }
	else { Imprimir[96] = ""; }
}
private: System::Void checkBox97_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox97->Checked) { Imprimir[97] = (AVar10[6]->ToString()); }
	else { Imprimir[97] = ""; }
}
private: System::Void checkBox98_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox98->Checked) { Imprimir[98] = (AVar10[7]->ToString()); }
	else { Imprimir[98] = ""; }
}
private: System::Void checkBox99_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox99->Checked) { Imprimir[99] = (AVar10[8]->ToString()); }
	else { Imprimir[99] = ""; }
}
private: System::Void checkBox100_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox100->Checked) { Imprimir[100] = (AVar10[9]->ToString()); }
	else { Imprimir[100] = ""; }
}
};
}
