#pragma once
#include "Abrir.h"
#include "Filte.h"
#include "Red.h"
#include "Categoria.h"
#using<system.dll>
namespace Apantles {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de UIApantles
	/// </summary>
	public ref class UIApantles : public System::Windows::Forms::Form{
	public:
		UIApantles(void){
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~UIApantles(){
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelTitleBar;
	private: FontAwesome::Sharp::IconButton^ iconButton1;
	private: FontAwesome::Sharp::IconButton^ iconButton2;
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panelMenu;
	private: FontAwesome::Sharp::IconButton^ iconButton3;
	private: FontAwesome::Sharp::IconButton^ iconButton4;
	protected:
	protected:
	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void){
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UIApantles::typeid));
			this->panelTitleBar = (gcnew System::Windows::Forms::Panel());
			this->title = (gcnew System::Windows::Forms::Label());
			this->iconButton1 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton2 = (gcnew FontAwesome::Sharp::IconButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->iconButton3 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton4 = (gcnew FontAwesome::Sharp::IconButton());
			this->panelTitleBar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelMenu->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelTitleBar
			// 
			this->panelTitleBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->panelTitleBar->Controls->Add(this->title);
			this->panelTitleBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTitleBar->Location = System::Drawing::Point(150, 0);
			this->panelTitleBar->Name = L"panelTitleBar";
			this->panelTitleBar->Size = System::Drawing::Size(1094, 76);
			this->panelTitleBar->TabIndex = 1;
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
			this->title->Size = System::Drawing::Size(1094, 76);
			this->title->TabIndex = 5;
			this->title->Text = L"Appantles";
			this->title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->title->Click += gcnew System::EventHandler(this, &UIApantles::title_Click);
			// 
			// iconButton1
			// 
			this->iconButton1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->iconButton1->AutoSize = true;
			this->iconButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->iconButton1->FlatAppearance->BorderSize = 0;
			this->iconButton1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton1->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->iconButton1->IconChar = FontAwesome::Sharp::IconChar::Filter;
			this->iconButton1->IconColor = System::Drawing::Color::Gainsboro;
			this->iconButton1->IconSize = 120;
			this->iconButton1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->iconButton1->Location = System::Drawing::Point(397, 120);
			this->iconButton1->Margin = System::Windows::Forms::Padding(0, 50, 0, 0);
			this->iconButton1->Name = L"iconButton1";
			this->iconButton1->Rotation = 0;
			this->iconButton1->Size = System::Drawing::Size(200, 200);
			this->iconButton1->TabIndex = 1;
			this->iconButton1->Text = L"Filtrado";
			this->iconButton1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->iconButton1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->iconButton1->UseVisualStyleBackColor = true;
			this->iconButton1->Click += gcnew System::EventHandler(this, &UIApantles::iconButton1_Click);
			// 
			// iconButton2
			// 
			this->iconButton2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->iconButton2->AutoSize = true;
			this->iconButton2->FlatAppearance->BorderSize = 0;
			this->iconButton2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton2->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->iconButton2->IconChar = FontAwesome::Sharp::IconChar::BattleNet;
			this->iconButton2->IconColor = System::Drawing::Color::Gainsboro;
			this->iconButton2->IconSize = 120;
			this->iconButton2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->iconButton2->Location = System::Drawing::Point(660, 120);
			this->iconButton2->Margin = System::Windows::Forms::Padding(0, 50, 0, 0);
			this->iconButton2->Name = L"iconButton2";
			this->iconButton2->Rotation = 0;
			this->iconButton2->Size = System::Drawing::Size(313, 200);
			this->iconButton2->TabIndex = 2;
			this->iconButton2->Text = L"Red semántica";
			this->iconButton2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->iconButton2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->iconButton2->UseVisualStyleBackColor = true;
			this->iconButton2->Click += gcnew System::EventHandler(this, &UIApantles::iconButton2_Click);
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
			this->pictureBox1->Click += gcnew System::EventHandler(this, &UIApantles::pictureBox1_Click);
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->panelMenu->Controls->Add(this->pictureBox1);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(150, 548);
			this->panelMenu->TabIndex = 0;
			// 
			// iconButton3
			// 
			this->iconButton3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->iconButton3->AutoSize = true;
			this->iconButton3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->iconButton3->FlatAppearance->BorderSize = 0;
			this->iconButton3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton3->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->iconButton3->IconChar = FontAwesome::Sharp::IconChar::Users;
			this->iconButton3->IconColor = System::Drawing::Color::Gainsboro;
			this->iconButton3->IconSize = 120;
			this->iconButton3->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->iconButton3->Location = System::Drawing::Point(357, 326);
			this->iconButton3->Margin = System::Windows::Forms::Padding(0, 50, 0, 0);
			this->iconButton3->Name = L"iconButton3";
			this->iconButton3->Rotation = 0;
			this->iconButton3->Size = System::Drawing::Size(285, 200);
			this->iconButton3->TabIndex = 3;
			this->iconButton3->Text = L"Red acotada";
			this->iconButton3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->iconButton3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->iconButton3->UseVisualStyleBackColor = true;
			this->iconButton3->Click += gcnew System::EventHandler(this, &UIApantles::iconButton3_Click);
			// 
			// iconButton4
			// 
			this->iconButton4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->iconButton4->AutoSize = true;
			this->iconButton4->FlatAppearance->BorderSize = 0;
			this->iconButton4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton4->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->iconButton4->IconChar = FontAwesome::Sharp::IconChar::Tasks;
			this->iconButton4->IconColor = System::Drawing::Color::Gainsboro;
			this->iconButton4->IconSize = 120;
			this->iconButton4->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->iconButton4->Location = System::Drawing::Point(703, 329);
			this->iconButton4->Margin = System::Windows::Forms::Padding(0, 50, 0, 0);
			this->iconButton4->Name = L"iconButton4";
			this->iconButton4->Rotation = 0;
			this->iconButton4->Size = System::Drawing::Size(239, 200);
			this->iconButton4->TabIndex = 4;
			this->iconButton4->Text = L"Categorias";
			this->iconButton4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->iconButton4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->iconButton4->UseVisualStyleBackColor = true;
			this->iconButton4->Click += gcnew System::EventHandler(this, &UIApantles::iconButton4_Click);
			// 
			// UIApantles
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->ClientSize = System::Drawing::Size(1244, 548);
			this->Controls->Add(this->iconButton4);
			this->Controls->Add(this->iconButton3);
			this->Controls->Add(this->iconButton1);
			this->Controls->Add(this->iconButton2);
			this->Controls->Add(this->panelTitleBar);
			this->Controls->Add(this->panelMenu);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"UIApantles";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Appantles";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &UIApantles::UIApantles_Load);
			this->panelTitleBar->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panelMenu->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	//Boton de filtrado
	private: System::Void iconButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		Filte^ f = gcnew Filte();
		f->ShowDialog();
	}
	//Boton creacion de red
	private: System::Void iconButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		Abrir^ a = gcnew Abrir();
		a->ShowDialog();
	}
	//Boton filtrado por grupos
	private: System::Void iconButton3_Click(System::Object^ sender, System::EventArgs^ e) {
		Red^ g = gcnew Red();
		g->ShowDialog();
	}
	//Boton Categorias
	private: System::Void iconButton4_Click(System::Object^ sender, System::EventArgs^ e) {
		Categoria^ c = gcnew Categoria();
		c->ShowDialog();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void iconPictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Software desarrollado en 2021 por Noé Estrada");
	}
	private: System::Void UIApantles_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void title_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
