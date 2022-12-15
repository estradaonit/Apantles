#pragma once
#include "UIApantles.h"
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

	public ref class Filte : public System::Windows::Forms::Form
	{
	public:
		OpenFileDialog^ Openfdd = gcnew OpenFileDialog();

	public:
		   OpenFileDialog^ Openfdp = gcnew OpenFileDialog();
		Filte(void)
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
		~Filte()
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
	private: FontAwesome::Sharp::IconButton^ Home;
	private: FontAwesome::Sharp::IconButton^ Diccionario;
	private: FontAwesome::Sharp::IconButton^ Palabras;
	private: FontAwesome::Sharp::IconButton^ Iniciar;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Filte::typeid));
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelTitleBar = (gcnew System::Windows::Forms::Panel());
			this->Home = (gcnew FontAwesome::Sharp::IconButton());
			this->title = (gcnew System::Windows::Forms::Label());
			this->Diccionario = (gcnew FontAwesome::Sharp::IconButton());
			this->Palabras = (gcnew FontAwesome::Sharp::IconButton());
			this->Iniciar = (gcnew FontAwesome::Sharp::IconButton());
			this->panelMenu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelTitleBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->panelMenu->Controls->Add(this->pictureBox1);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(150, 716);
			this->panelMenu->TabIndex = 1;
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
			this->panelTitleBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->panelTitleBar->Controls->Add(this->Home);
			this->panelTitleBar->Controls->Add(this->title);
			this->panelTitleBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTitleBar->Location = System::Drawing::Point(150, 0);
			this->panelTitleBar->Name = L"panelTitleBar";
			this->panelTitleBar->Size = System::Drawing::Size(1141, 76);
			this->panelTitleBar->TabIndex = 2;
			// 
			// Home
			// 
			this->Home->AutoSize = true;
			this->Home->Dock = System::Windows::Forms::DockStyle::Right;
			this->Home->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Home->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->Home->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->Home->IconChar = FontAwesome::Sharp::IconChar::Home;
			this->Home->IconColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->Home->IconSize = 50;
			this->Home->Location = System::Drawing::Point(1071, 0);
			this->Home->Margin = System::Windows::Forms::Padding(0);
			this->Home->Name = L"Home";
			this->Home->Rotation = 0;
			this->Home->Size = System::Drawing::Size(70, 76);
			this->Home->TabIndex = 0;
			this->Home->UseVisualStyleBackColor = true;
			this->Home->Click += gcnew System::EventHandler(this, &Filte::iconButton1_Click);
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
			this->title->Margin = System::Windows::Forms::Padding(0);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(1141, 76);
			this->title->TabIndex = 4;
			this->title->Text = L"Inserte los archivos de filtrado";
			this->title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->title->Click += gcnew System::EventHandler(this, &Filte::title_Click);
			// 
			// Diccionario
			// 
			this->Diccionario->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Diccionario->AutoSize = true;
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
			this->Diccionario->Location = System::Drawing::Point(429, 126);
			this->Diccionario->Margin = System::Windows::Forms::Padding(0, 20, 0, 0);
			this->Diccionario->Name = L"Diccionario";
			this->Diccionario->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Diccionario->Rotation = 0;
			this->Diccionario->Size = System::Drawing::Size(570, 128);
			this->Diccionario->TabIndex = 3;
			this->Diccionario->Text = L"Insertar Diccionario";
			this->Diccionario->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Diccionario->UseVisualStyleBackColor = true;
			this->Diccionario->Click += gcnew System::EventHandler(this, &Filte::iconButton2_Click);
			// 
			// Palabras
			// 
			this->Palabras->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Palabras->AutoSize = true;
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
			this->Palabras->Location = System::Drawing::Point(429, 271);
			this->Palabras->Margin = System::Windows::Forms::Padding(0, 20, 0, 0);
			this->Palabras->Name = L"Palabras";
			this->Palabras->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Palabras->Rotation = 0;
			this->Palabras->Size = System::Drawing::Size(536, 128);
			this->Palabras->TabIndex = 5;
			this->Palabras->Text = L"Insertar Palabras";
			this->Palabras->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Palabras->UseVisualStyleBackColor = true;
			this->Palabras->Click += gcnew System::EventHandler(this, &Filte::iconButton3_Click);
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
			this->Iniciar->Location = System::Drawing::Point(565, 410);
			this->Iniciar->Margin = System::Windows::Forms::Padding(0);
			this->Iniciar->Name = L"Iniciar";
			this->Iniciar->Rotation = 0;
			this->Iniciar->Size = System::Drawing::Size(186, 189);
			this->Iniciar->TabIndex = 6;
			this->Iniciar->Text = L"Iniciar";
			this->Iniciar->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->Iniciar->UseVisualStyleBackColor = true;
			this->Iniciar->Visible = false;
			this->Iniciar->Click += gcnew System::EventHandler(this, &Filte::iconButton6_Click);
			// 
			// Filte
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->ClientSize = System::Drawing::Size(1291, 716);
			this->Controls->Add(this->Iniciar);
			this->Controls->Add(this->Palabras);
			this->Controls->Add(this->Diccionario);
			this->Controls->Add(this->panelTitleBar);
			this->Controls->Add(this->panelMenu);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Filte";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Filtrado";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Filte::Diccionario_Load);
			this->panelMenu->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panelTitleBar->ResumeLayout(false);
			this->panelTitleBar->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//Activador de boton de inicio
//_________________________________________________________________________________________________________________________________________________________________________
	void Chequeo(){			
			if (this->Diccionario->IconColor == System::Drawing::Color::DarkMagenta &&
				this->Palabras->IconColor == System::Drawing::Color::DarkMagenta) {
				this->Iniciar->Visible = true;
			}
			return;
		}

//Boton de casa
//_________________________________________________________________________________________________________________________________________________________________________
private: System::Void iconButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->Hide();
	this->Close();
}

//Boton Diccionario
//_________________________________________________________________________________________________________________________________________________________________________
	private: System::Void iconButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		//Apertura de archivo
		try {
		Stream^ Dicc;
		Openfdd->Filter = "Excel|*.csv";
		Openfdd->Title = "Inserción de archivo diccionario";

		if (Openfdd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if ((Dicc = Openfdd->OpenFile()) != nullptr) {
				String^ caption = "Inserción de diccionario";
				String^ strfilename = "Se ha añadido el archivo de diccionario con ruta " + Openfdd->FileName;
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
		

//Boton palabras
//_________________________________________________________________________________________________________________________________________________________________________
private: System::Void iconButton3_Click(System::Object^ sender, System::EventArgs^ e) { //Apertura de archivo
	try {
		Stream^ Pal;
		Openfdp->Filter = "Excel|*.csv";
		Openfdp->Title = "Inserción de archivo palabras";

		if (Openfdp->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if ((Pal = Openfdp->OpenFile()) != nullptr) {
				String^ caption = "Inserción de palabras";
				String^ strfilename = "Se ha añadido el archivo de palabras con ruta " + Openfdp->FileName;
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

//Boton de carga
private: System::Void Diccionario_Load(System::Object^ sender, System::EventArgs^ e) {
}

//Boton de iniciar
//_________________________________________________________________________________________________________________________________________________________________________
private: System::Void iconButton6_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
	//_________________________________________________________________________________________________________________________________________________________________________
	//Le permitimos elegir donde guardar el archivo filtrado
	//_________________________________________________________________________________________________________________________________________________________________________
	Stream^ filtro;
	SaveFileDialog^ filtrado = gcnew SaveFileDialog();
	String^ caption = "Seleccion de destino";
	String^ strfilename = "Elija el nombre y el destino del archivo filtrado";
	MessageBox::Show(strfilename, caption);
	filtrado->Filter = "Excel|*.csv";
	filtrado->FilterIndex = 2;
	filtrado->RestoreDirectory = true;
	filtrado->Title = "Elegir destino de archivo filtrado";
	if (filtrado->ShowDialog() == System::Windows::Forms::DialogResult::OK){
		if ((filtro = filtrado->OpenFile()) != nullptr){
			filtro->Close();
		}
		else
			MessageBox::Show("No se definio un nombre o lugar");
	}
	else
		MessageBox::Show("No se definio un nombre o lugar");
	//_________________________________________________________________________________________________________________________________________________________________________
	//Obtenemos el numero de lineas en el diccionario
	//_________________________________________________________________________________________________________________________________________________________________________
	StreamReader^ lineas_D = File::OpenText(Openfdd->FileName);
	int num_lineasD;
	while (lineas_D->ReadLine() != nullptr) { num_lineasD++; }
	lineas_D->Close();
	//_________________________________________________________________________________________________________________________________________________________________________
	//Obtenemos el numero de lineas en las palabras
	//_________________________________________________________________________________________________________________________________________________________________________
	StreamReader^ lineas_P = File::OpenText(Openfdp->FileName);
	int num_lineasP;
	while (lineas_P->ReadLine() != nullptr) { num_lineasP++; }
	lineas_P->Close();

	//_________________________________________________________________________________________________________________________________________________________________________
	//Abrimos el archivo diccionario 
	//_________________________________________________________________________________________________________________________________________________________________________
	StreamReader^ dicc = File::OpenText(Openfdd->FileName);
	String^ renglon_D;
	array<String^>^ sino;

	//Declaramos espacio para el tratamiento de datos en el archivo palabras
	String^ renglon_P;
	array<String^>^ palarray;
	//_________________________________________________________________________________________________________________________________________________________________________
	//Abrimos el archivo de palabras 
	//_________________________________________________________________________________________________________________________________________________________________________
	StreamReader^ palab = File::OpenText(Openfdp->FileName);
	renglon_P = palab->ReadToEnd();

	palarray = renglon_P->Split(','); // guardamos renglon dividido por frases a filtrar en un arreglo
	int tam_P = palarray->Length;	  //Obtenemos cantidad de sinonimos definidos

	for (int i = 1; i < num_lineasD; i++) {
		renglon_D = dicc->ReadLine();
		sino = renglon_D->Split(','); // guardamos renglon dividido por sinonimos definidos en un arreglo
		int tam_D = sino->Length;		//Obtenemos cantidad de sinonimos definidos

		for (int a = 0; a < tam_P; a++) {
			for (int b = 1; b < tam_D; b++) {
				if (palarray[a]->IsNullOrEmpty(palarray[a])) {}
				else if(palarray[a] == sino[b]) {
					palarray[a] = sino[0];
				}
			}
		}
	}

	StreamWriter^ sw = gcnew StreamWriter("temp.csv");
	for (int a = 0; a < tam_P; a++) {
		sw->Write(palarray[a]+",");
	}
	sw->Close();
	palab->Close();	
	dicc->Close();	
	//_________________________________________________________________________________________________________________________________________________________________________
	//Obtenemos el numero de lineas en el archivo filtrado
	//_________________________________________________________________________________________________________________________________________________________________________
	StreamReader^ lineas_F = File::OpenText("temp.csv");
	int num_lineasF;
	while (lineas_F->ReadLine() != nullptr) { num_lineasF++; }
	lineas_F->Close();
	//_________________________________________________________________________________________________________________________________________________________________________
	//Abrimos el archivo filtrado para eliminar repetidos y dejar al de menor valor y borrar huecos
	//_________________________________________________________________________________________________________________________________________________________________________
		StreamReader^ filtrao = File::OpenText("temp.csv");
		StreamWriter^ sf = gcnew StreamWriter(filtrado->FileName);
		String^ renglon_F;
		array<String^>^ repetidos;
		int primero;
		int ultimo;
		for (int a = 0; a < num_lineasF; a++) {
			renglon_F = filtrao->ReadLine();
			if (renglon_F->IsNullOrEmpty(renglon_F)) {}
			else{
				repetidos = renglon_F->Split(',');
				int tam_F = repetidos->Length;

				for (int i = 1; i < tam_F; i++) {
					if (i % 2 == 0) {} //Numeros pares
					else{
						if (repetidos[i]->IsNullOrEmpty(repetidos[i])) {}
						else if (repetidos->LastIndexOf(repetidos, repetidos[i]) != repetidos->IndexOf(repetidos, repetidos[i])) { 
							//MessageBox::Show("Encontre una repetida en la linea " + a + "la palabra " + i + " " + repetidos[i]->ToString());

							Int32::TryParse(repetidos[repetidos->IndexOf(repetidos, repetidos[i])+1], primero);
							Int32::TryParse(repetidos[repetidos->LastIndexOf(repetidos, repetidos[i]) + 1], ultimo);
						
							if(primero == ultimo){
								MessageBox::Show("Error el sujeto "+repetidos[0]+" asignó más de una vez el valor "+primero+"");
							}
							else {
								//MessageBox::Show("Entendio primero como " + primero + "y ultimo como " + ultimo);
								if (primero < ultimo) {	
									repetidos[repetidos->LastIndexOf(repetidos, repetidos[i])+1] = "";
									repetidos[repetidos->LastIndexOf(repetidos, repetidos[i])] = "";												
								}
								else if (primero > ultimo) {																																								
									repetidos[repetidos->IndexOf(repetidos, repetidos[i + 1])] = repetidos[repetidos->LastIndexOf(repetidos, repetidos[i]) + 1];
									repetidos[repetidos->LastIndexOf(repetidos, repetidos[i]) + 1] = "";
									repetidos[repetidos->LastIndexOf(repetidos, repetidos[i])] = "";	
								}
								else {
									MessageBox::Show("Error, una palabra definidora repetida tiene el mismo valor");
								}
							}
						}
					}
				}	
				for (int a = 0; a < tam_F; a++) {
					if(repetidos[a]->IsNullOrEmpty(repetidos[a])){}
					else {
						sf->Write(repetidos[a] + ",");
					}
				}
				sf->Write("\r");
			}
		}		
		sf->Close();
		filtrao->Close();

		//_________________________________________________________________________________________________________________________________________________________________________
		//Mostramos mensaje de exito y salimos
		//_________________________________________________________________________________________________________________________________________________________________________
		String^ titulo = "Archivo listo";
		String^ listo = "Archivo de palabras filtrado con exito, regresando al menu principal";
		MessageBox::Show(listo, titulo);
		this->Close();

	}
	catch (Exception^ e) {
		MessageBox::Show("Error en el archivo, favor de verificar formato");
	}

}

//Boton del titulo
private: System::Void title_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
