#pragma once
#include<Windows.h>
#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include <msclr\marshal_cppstd.h>
#include<array>
//using namespace std;
static int valueCount = 220;

namespace Project10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace std;
	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			
			System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
			path->AddEllipse(0, 0, pictureBox38->Width, pictureBox38->Height);
			//Region^ rg=new Region();
			pictureBox38->Region = gcnew System::Drawing::Region(path);
			//////////////////////////////////////////////
			//
			textBox26->ReadOnly = true;




			/////////////////////////////////////////////////////////////////////////////////////////////

			

			//////////////////////////////////////////////////////////////////////////
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	
		ref class ItemData
		{
		public: System::String^ Item;
		public: System::String^ Data;
		public:
			ItemData(String^ sItem, String^ sData)
			{
				Item = gcnew String(sItem);
				Data = gcnew String(sData);
			}
		public:
			virtual System::String^ ToString() override
			{
				return Item;
			}
		};

	public: System::Windows::Forms::PictureBox^ pBox;
	public: array<PictureBox^> ^pBox1;

	private: System::Windows::Forms::ImageList^  imageList1;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::Label^  label17;

	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Panel^  panel3;
	public: System::Windows::Forms::Panel^  panel4;
	public: System::Windows::Forms::Label^  label20;
	public: System::Windows::Forms::Button^  button4;
	public: System::Windows::Forms::TextBox^  textBox11;
	public: System::Windows::Forms::Button^  button3;
	public: System::Windows::Forms::TextBox^  textBox10;
	public: System::Windows::Forms::ComboBox^  comboBox2;
	public: System::Windows::Forms::TextBox^  textBox9;
	public: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label19;
	public: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::ProgressBar^  progressBar2;
	private: System::Windows::Forms::Timer^  timer2;
public: System::Windows::Forms::Panel^  panel7;
private:

private: System::Windows::Forms::Panel^  panel9;
public: System::Windows::Forms::PictureBox^  pictureBox27;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Panel^  panel8;
private: System::Windows::Forms::TextBox^  textBox12;
private: System::Windows::Forms::PictureBox^  pictureBox26;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label33;
public: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::PictureBox^  pictureBox32;
private: System::Windows::Forms::PictureBox^  pictureBox33;
private: System::Windows::Forms::PictureBox^  pictureBox31;
private: System::Windows::Forms::PictureBox^  pictureBox30;
private: System::Windows::Forms::PictureBox^  pictureBox29;
private: System::Windows::Forms::PictureBox^  pictureBox28;
private: System::Windows::Forms::PictureBox^  pictureBox34;

private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::PictureBox^  pictureBox36;
private: System::Windows::Forms::Label^  label37;

private: System::Windows::Forms::PictureBox^  pictureBox37;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Panel^  panel12;




private: System::Windows::Forms::Panel^  panel10;
private: System::Windows::Forms::PictureBox^  pictureBox35;
private: System::Windows::Forms::PictureBox^  pictureBox41;
public: System::Windows::Forms::Label^  label45;
public: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::TextBox^  textBox13;
private: System::Windows::Forms::PictureBox^  pictureBox44;
private: System::Windows::Forms::PictureBox^  pictureBox42;
private: System::Windows::Forms::PictureBox^  pictureBox40;
private: System::Windows::Forms::PictureBox^  pictureBox43;
private: System::Windows::Forms::PictureBox^  pictureBox39;
public: System::Windows::Forms::PictureBox^  pictureBox38;
private: System::Windows::Forms::Label^  label41;
public: System::Windows::Forms::Label^  label46;
public: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label47;
public: System::Windows::Forms::PictureBox^  pictureBox45;
public: System::Windows::Forms::PictureBox^  pictureBox46;
public: System::Windows::Forms::ComboBox^  comboBox3;
public: System::Windows::Forms::TextBox^  textBox14;
public: System::Windows::Forms::TextBox^  textBox15;
public: System::Windows::Forms::Panel^  panel11;
public: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::Button^  button9;
public: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::Button^  button10;
public: System::Windows::Forms::PictureBox^  pictureBox47;
public: System::Windows::Forms::ProgressBar^  progressBar3;
public: System::Windows::Forms::Timer^  timer3;
public: System::Windows::Forms::Label^  label53;
public: System::Windows::Forms::Label^  label51;
public: System::Windows::Forms::Label^  label52;






private: System::Windows::Forms::Label^  label60;
public: System::Windows::Forms::Label^  label64;
public: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::Label^  label62;
public: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::Label^  label54;
public: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::PictureBox^  pictureBox48;
private: System::Windows::Forms::PictureBox^  pictureBox51;
private: System::Windows::Forms::PictureBox^  pictureBox50;
private: System::Windows::Forms::PictureBox^  pictureBox49;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::Label^  label65;
public: System::Windows::Forms::PictureBox^  pictureBox52;
private: System::Windows::Forms::Label^  label67;
public: System::Windows::Forms::PictureBox^  pictureBox54;
private: System::Windows::Forms::PictureBox^  pictureBox55;
public: System::Windows::Forms::TextBox^  textBox16;
private: System::Windows::Forms::PictureBox^  pictureBox53;
private: System::Windows::Forms::Label^  label66;
public: System::Windows::Forms::ComboBox^  comboBox4;
private:
public: System::Windows::Forms::Button^  button12;
public: System::Windows::Forms::Button^  button11;



private: System::Windows::Forms::PictureBox^  pictureBox59;
private: System::Windows::Forms::PictureBox^  pictureBox58;
private: System::Windows::Forms::Label^  label69;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::PictureBox^  pictureBox57;
private: System::Windows::Forms::PictureBox^  pictureBox56;
private: System::Windows::Forms::TextBox^  textBox18;
private: System::Windows::Forms::TextBox^  textBox17;
public: System::Windows::Forms::PictureBox^  pictureBox60;
private: System::Windows::Forms::ToolTip^  toolTip1;
private: System::Windows::Forms::PictureBox^  pictureBox61;
public: System::Windows::Forms::OpenFileDialog^  openFileDialog2;


public:
private: System::Windows::Forms::PictureBox^  pictureBox62;
private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::ComboBox^  comboBox5;
private: System::Windows::Forms::Label^  label71;
private: System::Windows::Forms::Label^  label72;
public: System::Windows::Forms::Panel^  panel13;
public: System::Windows::Forms::Label^  label73;
private: System::Windows::Forms::PictureBox^  pictureBox63;
public: System::Windows::Forms::ComboBox^  comboBox6;
private: System::Windows::Forms::PictureBox^  pictureBox65;
public:
private: System::Windows::Forms::PictureBox^  pictureBox64;
private: System::Windows::Forms::OpenFileDialog^  openFileDialog3;
private: System::Windows::Forms::ComboBox^  comboBox7;
public: System::Windows::Forms::Panel^  panel14;
private: System::Windows::Forms::Label^  label75;
public:
private: System::Windows::Forms::Label^  label74;
public: System::Windows::Forms::Panel^  panel15;
private:
public: System::Windows::Forms::SplitContainer^  splitContainer1;
private: System::Windows::Forms::Splitter^  splitter1;
public:
public: System::Windows::Forms::Button^  button13;
private:
public: System::Windows::Forms::TextBox^  textBox22;
public: System::Windows::Forms::TextBox^  textBox21;
public: System::Windows::Forms::TextBox^  textBox20;
public: System::Windows::Forms::TextBox^  textBox19;
private: System::Windows::Forms::Label^  label81;
public:
private: System::Windows::Forms::Label^  label80;
private: System::Windows::Forms::Label^  label79;
private: System::Windows::Forms::Label^  label78;
private: System::Windows::Forms::Label^  label77;
private: System::Windows::Forms::Label^  label76;
private: System::Windows::Forms::PictureBox^  pictureBox66;
public: System::Windows::Forms::WebBrowser^  webBrowser1;
private:
private: System::Windows::Forms::TextBox^  textBox23;
public: System::Windows::Forms::Label^  label82;
public: System::Windows::Forms::Label^  label84;

public:
private: System::Windows::Forms::Label^  label83;
public: System::Windows::Forms::PictureBox^  pictureBox68;
public: System::Windows::Forms::PictureBox^  pictureBox67;

private: System::Windows::Forms::PictureBox^  pictureBox69;
private: System::Windows::Forms::Label^  label85;
public: System::Windows::Forms::OpenFileDialog^  openFileDialog4;
private: System::Windows::Forms::Button^  button17;
public:
private: System::Windows::Forms::Button^  button16;
private: System::Windows::Forms::Button^  button15;
private: System::Windows::Forms::Button^  button14;
public: System::Windows::Forms::Panel^  panel16;
public: System::Windows::Forms::Button^  button18;
private:

public:
public: System::Windows::Forms::TextBox^  textBox25;
private:
public: System::Windows::Forms::TextBox^  textBox24;
private: System::Windows::Forms::Label^  label87;
public:
private: System::Windows::Forms::Label^  label93;
private: System::Windows::Forms::Label^  label92;
private: System::Windows::Forms::Label^  label89;
private: System::Windows::Forms::PictureBox^  pictureBox70;
private: System::Windows::Forms::Label^  label91;
private: System::Windows::Forms::Label^  label90;
private: System::Windows::Forms::Label^  label88;
private: System::Windows::Forms::Label^  label86;
public: System::Windows::Forms::TextBox^  textBox26;
public: System::Windows::Forms::PictureBox^  pictureBox71;
public: System::Windows::Forms::PictureBox^  pictureBox72;
private: System::Windows::Forms::Button^  button19;
private: System::Windows::Forms::Panel^  panel17;
private: System::Windows::Forms::Label^  label94;
private: System::Windows::Forms::Label^  label95;
private: System::Windows::Forms::Panel^  panel18;
public: System::Windows::Forms::Button^  button20;
private: System::Windows::Forms::Label^  label102;
private: System::Windows::Forms::Label^  label101;
private: System::Windows::Forms::Label^  label100;
private: System::Windows::Forms::Label^  label103;
private: System::Windows::Forms::Label^  label99;
private: System::Windows::Forms::Label^  label98;
private: System::Windows::Forms::Label^  label97;
private: System::Windows::Forms::PictureBox^  pictureBox73;
private: System::Windows::Forms::Label^  label96;
public:
private:



private:

private:


public:






private:

public:















private:

public:
private:


private:
private:
private:
public:
private:

public:

public:


	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->pictureBox66 = (gcnew System::Windows::Forms::PictureBox());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->pictureBox73 = (gcnew System::Windows::Forms::PictureBox());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->pictureBox69 = (gcnew System::Windows::Forms::PictureBox());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->pictureBox68 = (gcnew System::Windows::Forms::PictureBox());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->pictureBox67 = (gcnew System::Windows::Forms::PictureBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->pictureBox72 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox71 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->pictureBox70 = (gcnew System::Windows::Forms::PictureBox());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->progressBar3 = (gcnew System::Windows::Forms::ProgressBar());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox65 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox64 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox59 = (gcnew System::Windows::Forms::PictureBox());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog3 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog4 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel18->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox73))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->BeginInit();
			this->panel17->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->BeginInit();
			this->panel12->SuspendLayout();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			this->panel13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->BeginInit();
			this->SuspendLayout();
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(27, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(936, 462);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::No;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(442, 45);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 95);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label2->Location = System::Drawing::Point(305, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(200, 37);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Welcome to";
			this->label2->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label1->Location = System::Drawing::Point(502, 142);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 67);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Linkify";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->textBox1->Location = System::Drawing::Point(284, 293);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(410, 34);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged);
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox1_KeyDown);
			this->textBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox1_KeyUp);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Snap ITC", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->textBox2->Location = System::Drawing::Point(284, 337);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(410, 34);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox2_TextChanged);
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox2_KeyDown);
			this->textBox2->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox2_KeyUp);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Script", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->button1->Location = System::Drawing::Point(487, 377);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 39);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe Script", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->button2->Location = System::Drawing::Point(595, 377);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 39);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Login";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(323, 427);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(56, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(395, 427);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(56, 50);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(926, 452);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(30, 26);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 10;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MainForm::pictureBox5_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label58);
			this->panel1->Controls->Add(this->label57);
			this->panel1->Controls->Add(this->label56);
			this->panel1->Controls->Add(this->label55);
			this->panel1->Controls->Add(this->checkBox2);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->pictureBox20);
			this->panel1->Controls->Add(this->progressBar1);
			this->panel1->Controls->Add(this->pictureBox12);
			this->panel1->Controls->Add(this->pictureBox11);
			this->panel1->Controls->Add(this->pictureBox10);
			this->panel1->Controls->Add(this->pictureBox9);
			this->panel1->Controls->Add(this->pictureBox22);
			this->panel1->Controls->Add(this->pictureBox21);
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(27, 508);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(936, 260);
			this->panel1->TabIndex = 11;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::splitContainer1_Panel1_Paint);
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label58->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label58->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(121)));
			this->label58->Location = System::Drawing::Point(116, 223);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(50, 21);
			this->label58->TabIndex = 22;
			this->label58->Text = L"* * * *";
			this->label58->Click += gcnew System::EventHandler(this, &MainForm::label58_Click);
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->ForeColor = System::Drawing::Color::Red;
			this->label57->Location = System::Drawing::Point(324, 244);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(38, 13);
			this->label57->TabIndex = 21;
			this->label57->Text = L"Strong";
			this->label57->Visible = false;
			this->label57->Click += gcnew System::EventHandler(this, &MainForm::label57_Click);
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->ForeColor = System::Drawing::Color::Green;
			this->label56->Location = System::Drawing::Point(315, 244);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(47, 13);
			this->label56->TabIndex = 20;
			this->label56->Text = L"Average";
			this->label56->Visible = false;
			this->label56->Click += gcnew System::EventHandler(this, &MainForm::label56_Click);
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->ForeColor = System::Drawing::Color::Blue;
			this->label55->Location = System::Drawing::Point(331, 245);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(36, 13);
			this->label55->TabIndex = 19;
			this->label55->Text = L"Weak";
			this->label55->Visible = false;
			this->label55->Click += gcnew System::EventHandler(this, &MainForm::label55_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(624, 168);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(60, 17);
			this->checkBox2->TabIndex = 18;
			this->checkBox2->Text = L"Female";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(624, 152);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(49, 17);
			this->checkBox1->TabIndex = 17;
			this->checkBox1->Text = L"Male";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox1_CheckedChanged);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Segoe Script", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBox7->Location = System::Drawing::Point(445, 230);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(140, 20);
			this->textBox7->TabIndex = 16;
			this->textBox7->Text = L"Answer ...";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox7_TextChanged);
			this->textBox7->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox7_KeyDown);
			this->textBox7->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox7_KeyUp);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(444, 189);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(99, 13);
			this->label18->TabIndex = 15;
			this->label18->Text = L"Security Question \?";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe Script", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Your Best Czn\?", L"Your Hero\?", L"Nickname\?" });
			this->comboBox1->Location = System::Drawing::Point(444, 205);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(159, 25);
			this->comboBox1->TabIndex = 14;
			this->comboBox1->Text = L"---";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBox1_SelectedIndexChanged);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe Script", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBox6->Location = System::Drawing::Point(444, 150);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(159, 29);
			this->textBox6->TabIndex = 13;
			this->textBox6->Text = L"dd/mm/yyyy";
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox6_TextChanged);
			this->textBox6->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox6_KeyDown);
			this->textBox6->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox6_KeyUp);
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(889, 7);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(40, 40);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox20->TabIndex = 12;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Click += gcnew System::EventHandler(this, &MainForm::pictureBox20_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(720, 234);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(213, 23);
			this->progressBar1->TabIndex = 11;
			this->progressBar1->Visible = false;
			this->progressBar1->Click += gcnew System::EventHandler(this, &MainForm::progressBar1_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(786, 168);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(94, 89);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 10;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Visible = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &MainForm::pictureBox12_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(624, 205);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(55, 52);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 9;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &MainForm::pictureBox11_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(68, 219);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(35, 30);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 8;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(68, 184);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(35, 30);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 8;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox22
			// 
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(403, 200);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(35, 30);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox22->TabIndex = 8;
			this->pictureBox22->TabStop = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(403, 150);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(35, 30);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox21->TabIndex = 8;
			this->pictureBox21->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(68, 150);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(35, 30);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 8;
			this->pictureBox8->TabStop = false;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBox5->Location = System::Drawing::Point(109, 220);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->PasswordChar = '*';
			this->textBox5->Size = System::Drawing::Size(253, 24);
			this->textBox5->TabIndex = 7;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox5_TextChanged);
			this->textBox5->Enter += gcnew System::EventHandler(this, &MainForm::textBox5_TextChanged);
			this->textBox5->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox5_KeyDown);
			this->textBox5->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox5_KeyUp);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBox4->Location = System::Drawing::Point(109, 185);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(253, 29);
			this->textBox4->TabIndex = 6;
			this->textBox4->Text = L"UserID";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox4_TextChanged);
			this->textBox4->Enter += gcnew System::EventHandler(this, &MainForm::textBox4_TextChanged);
			this->textBox4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox4_KeyDown);
			this->textBox4->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox4_KeyUp);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBox3->Location = System::Drawing::Point(110, 150);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(252, 29);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"User Name ...";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox3_TextChanged);
			this->textBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox3_KeyDown);
			this->textBox3->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox3_KeyUp);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label5->Location = System::Drawing::Point(65, 118);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(571, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"_________________________________________________________________________________"
				L"_____________";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(140, 66);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(55, 50);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 3;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(68, 66);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(55, 50);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 2;
			this->pictureBox6->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label6->Location = System::Drawing::Point(64, 133);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(173, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Or sign-up using your email address";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label4->Location = System::Drawing::Point(64, 45);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(218, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Choose one of the following sign-up methods";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label3->Location = System::Drawing::Point(62, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(151, 30);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Join Today";
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// timer1
			// 
			this->timer1->Interval = 50;
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox19);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->pictureBox17);
			this->panel2->Controls->Add(this->pictureBox16);
			this->panel2->Controls->Add(this->pictureBox15);
			this->panel2->Controls->Add(this->pictureBox14);
			this->panel2->Controls->Add(this->pictureBox13);
			this->panel2->Location = System::Drawing::Point(-211, 25);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(211, 462);
			this->panel2->TabIndex = 12;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::splitContainer1_Panel2_Paint);
			// 
			// pictureBox19
			// 
			this->pictureBox19->Cursor = System::Windows::Forms::Cursors::PanEast;
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(182, 3);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(26, 28);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox19->TabIndex = 14;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Click += gcnew System::EventHandler(this, &MainForm::pictureBox19_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(70, 339);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(71, 25);
			this->label16->TabIndex = 13;
			this->label16->Text = L"Setting";
			this->label16->Click += gcnew System::EventHandler(this, &MainForm::label16_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label15->Location = System::Drawing::Point(58, 339);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(121, 30);
			this->label15->TabIndex = 13;
			this->label15->Text = L"____________";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(70, 277);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(91, 25);
			this->label14->TabIndex = 13;
			this->label14->Text = L"Follow us";
			this->label14->Click += gcnew System::EventHandler(this, &MainForm::label14_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label13->Location = System::Drawing::Point(58, 277);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(121, 30);
			this->label13->TabIndex = 13;
			this->label13->Text = L"____________";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(70, 211);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(87, 25);
			this->label12->TabIndex = 13;
			this->label12->Text = L"About us";
			this->label12->Click += gcnew System::EventHandler(this, &MainForm::label12_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label11->Location = System::Drawing::Point(58, 211);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(121, 30);
			this->label11->TabIndex = 13;
			this->label11->Text = L"____________";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(70, 147);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(62, 25);
			this->label10->TabIndex = 13;
			this->label10->Text = L"Home";
			this->label10->Click += gcnew System::EventHandler(this, &MainForm::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label9->Location = System::Drawing::Point(58, 147);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(121, 30);
			this->label9->TabIndex = 13;
			this->label9->Text = L"____________";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(70, 85);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(70, 25);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Sign in";
			this->label7->Click += gcnew System::EventHandler(this, &MainForm::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label8->Location = System::Drawing::Point(64, 85);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(121, 30);
			this->label8->TabIndex = 13;
			this->label8->Text = L"____________";
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(3, 321);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(55, 50);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox17->TabIndex = 13;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(3, 257);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(55, 50);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox16->TabIndex = 13;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(3, 193);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(55, 50);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 13;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(3, 65);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(55, 50);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 13;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(3, 129);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(55, 50);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 13;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->pictureBox18->Cursor = System::Windows::Forms::Cursors::PanWest;
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(3, 6);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(30, 32);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox18->TabIndex = 13;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Click += gcnew System::EventHandler(this, &MainForm::pictureBox18_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label17->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label17->Location = System::Drawing::Point(282, 375);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(112, 18);
			this->label17->TabIndex = 14;
			this->label17->Text = L"Forget password";
			this->label17->Click += gcnew System::EventHandler(this, &MainForm::label17_Click);
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(962, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(25, 507);
			this->panel3->TabIndex = 15;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->panel4->Controls->Add(this->button6);
			this->panel4->Controls->Add(this->pictureBox23);
			this->panel4->Controls->Add(this->pictureBox24);
			this->panel4->Controls->Add(this->button5);
			this->panel4->Controls->Add(this->label20);
			this->panel4->Controls->Add(this->button4);
			this->panel4->Controls->Add(this->textBox11);
			this->panel4->Controls->Add(this->button3);
			this->panel4->Controls->Add(this->textBox10);
			this->panel4->Controls->Add(this->comboBox2);
			this->panel4->Controls->Add(this->textBox9);
			this->panel4->Controls->Add(this->textBox8);
			this->panel4->Controls->Add(this->label19);
			this->panel4->Location = System::Drawing::Point(962, 25);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(263, 462);
			this->panel4->TabIndex = 0;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel4_Paint);
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->button6->Location = System::Drawing::Point(22, 272);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(95, 32);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Cancel";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(218, 101);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(40, 36);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox23->TabIndex = 10;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Visible = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &MainForm::pictureBox23_Click);
			// 
			// pictureBox24
			// 
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(218, 101);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(40, 36);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox24->TabIndex = 11;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Visible = false;
			this->pictureBox24->Click += gcnew System::EventHandler(this, &MainForm::pictureBox24_Click);
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->button5->Location = System::Drawing::Point(22, 388);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(95, 32);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Cancel";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label20->Location = System::Drawing::Point(6, 332);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(117, 15);
			this->label20->TabIndex = 8;
			this->label20->Text = L"Write new password";
			this->label20->Visible = false;
			this->label20->Click += gcnew System::EventHandler(this, &MainForm::label20_Click);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->button4->Location = System::Drawing::Point(123, 388);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(95, 32);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Confirm";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->textBox11->Location = System::Drawing::Point(9, 348);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->PasswordChar = '*';
			this->textBox11->Size = System::Drawing::Size(209, 34);
			this->textBox11->TabIndex = 6;
			this->textBox11->Text = L"Password";
			this->textBox11->Visible = false;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox11_TextChanged);
			this->textBox11->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox11_KeyDown);
			this->textBox11->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox11_KeyUp);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->button3->Location = System::Drawing::Point(123, 272);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(95, 32);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Done";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->textBox10->Location = System::Drawing::Point(9, 222);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(193, 34);
			this->textBox10->TabIndex = 4;
			this->textBox10->Text = L"Answer ...";
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox10_TextChanged);
			this->textBox10->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox10_KeyDown);
			this->textBox10->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox10_KeyUp);
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->comboBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Your Best Czn\?", L"Your Hero\?", L"Nickname\?" });
			this->comboBox2->Location = System::Drawing::Point(9, 193);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(209, 26);
			this->comboBox2->TabIndex = 3;
			this->comboBox2->Text = L"Security Question\?";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBox2_SelectedIndexChanged);
			this->comboBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::comboBox2_KeyDown);
			this->comboBox2->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::comboBox2_KeyUp);
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->textBox9->Location = System::Drawing::Point(9, 147);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(209, 34);
			this->textBox9->TabIndex = 2;
			this->textBox9->Text = L"dd/mm/yyyy";
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox9_TextChanged);
			this->textBox9->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox9_KeyDown);
			this->textBox9->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox9_KeyUp);
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->textBox8->Location = System::Drawing::Point(9, 102);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(209, 34);
			this->textBox8->TabIndex = 1;
			this->textBox8->Text = L"UserID";
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox8_TextChanged);
			this->textBox8->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox8_KeyDown);
			this->textBox8->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox8_KeyUp);
			this->textBox8->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MainForm::textBox8_Validating);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Ravie", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label19->Location = System::Drawing::Point(4, 41);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(255, 30);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Forget Password";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->panel5->Controls->Add(this->pictureBox25);
			this->panel5->Controls->Add(this->pictureBox18);
			this->panel5->Location = System::Drawing::Point(27, 25);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(936, 43);
			this->panel5->TabIndex = 16;
			// 
			// pictureBox25
			// 
			this->pictureBox25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(899, 6);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(33, 32);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox25->TabIndex = 17;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Click += gcnew System::EventHandler(this, &MainForm::pictureBox25_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->panel6->Controls->Add(this->label21);
			this->panel6->Controls->Add(this->progressBar2);
			this->panel6->Location = System::Drawing::Point(188, 154);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(612, 260);
			this->panel6->TabIndex = 17;
			this->panel6->Visible = false;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel6_Paint);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(221, 112);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(179, 26);
			this->label21->TabIndex = 1;
			this->label21->Text = L"Successful Login !!!";
			this->label21->Visible = false;
			this->label21->Click += gcnew System::EventHandler(this, &MainForm::label21_Click);
			// 
			// progressBar2
			// 
			this->progressBar2->ForeColor = System::Drawing::Color::Gray;
			this->progressBar2->Location = System::Drawing::Point(125, 65);
			this->progressBar2->Maximum = 300;
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(377, 33);
			this->progressBar2->TabIndex = 0;
			this->progressBar2->Visible = false;
			this->progressBar2->Click += gcnew System::EventHandler(this, &MainForm::progressBar2_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->panel7->Controls->Add(this->panel16);
			this->panel7->Controls->Add(this->panel17);
			this->panel7->Controls->Add(this->panel14);
			this->panel7->Controls->Add(this->panel9);
			this->panel7->Controls->Add(this->comboBox5);
			this->panel7->Controls->Add(this->label71);
			this->panel7->Controls->Add(this->pictureBox62);
			this->panel7->Controls->Add(this->label70);
			this->panel7->Controls->Add(this->panel12);
			this->panel7->Controls->Add(this->panel10);
			this->panel7->Controls->Add(this->panel8);
			this->panel7->Controls->Add(this->panel13);
			this->panel7->Controls->Add(this->label72);
			this->panel7->Controls->Add(this->comboBox7);
			this->panel7->Controls->Add(this->pictureBox65);
			this->panel7->Controls->Add(this->pictureBox64);
			this->panel7->Controls->Add(this->textBox17);
			this->panel7->Controls->Add(this->pictureBox58);
			this->panel7->Controls->Add(this->label68);
			this->panel7->Controls->Add(this->textBox18);
			this->panel7->Controls->Add(this->pictureBox59);
			this->panel7->Controls->Add(this->label69);
			this->panel7->Controls->Add(this->pictureBox57);
			this->panel7->Controls->Add(this->pictureBox56);
			this->panel7->Location = System::Drawing::Point(0, 0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(987, 507);
			this->panel7->TabIndex = 18;
			this->panel7->Visible = false;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel7_Paint);
			// 
			// panel16
			// 
			this->panel16->Controls->Add(this->panel15);
			this->panel16->Controls->Add(this->button19);
			this->panel16->Controls->Add(this->pictureBox72);
			this->panel16->Controls->Add(this->pictureBox71);
			this->panel16->Controls->Add(this->textBox26);
			this->panel16->Controls->Add(this->button18);
			this->panel16->Controls->Add(this->textBox25);
			this->panel16->Controls->Add(this->textBox24);
			this->panel16->Controls->Add(this->label87);
			this->panel16->Controls->Add(this->label93);
			this->panel16->Controls->Add(this->label92);
			this->panel16->Controls->Add(this->label89);
			this->panel16->Controls->Add(this->pictureBox70);
			this->panel16->Controls->Add(this->label91);
			this->panel16->Controls->Add(this->label90);
			this->panel16->Controls->Add(this->label88);
			this->panel16->Controls->Add(this->label86);
			this->panel16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel16->Location = System::Drawing::Point(199, 38);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(664, 469);
			this->panel16->TabIndex = 30;
			this->panel16->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel16_Paint);
			// 
			// panel15
			// 
			this->panel15->AutoScroll = true;
			this->panel15->Controls->Add(this->panel18);
			this->panel15->Controls->Add(this->button15);
			this->panel15->Controls->Add(this->button14);
			this->panel15->Controls->Add(this->pictureBox69);
			this->panel15->Controls->Add(this->label85);
			this->panel15->Controls->Add(this->label84);
			this->panel15->Controls->Add(this->pictureBox68);
			this->panel15->Controls->Add(this->label83);
			this->panel15->Controls->Add(this->pictureBox67);
			this->panel15->Controls->Add(this->button16);
			this->panel15->Controls->Add(this->button17);
			this->panel15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel15->Location = System::Drawing::Point(0, 0);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(664, 469);
			this->panel15->TabIndex = 30;
			this->panel15->Visible = false;
			// 
			// panel18
			// 
			this->panel18->Controls->Add(this->splitContainer1);
			this->panel18->Controls->Add(this->button20);
			this->panel18->Controls->Add(this->label102);
			this->panel18->Controls->Add(this->label101);
			this->panel18->Controls->Add(this->label100);
			this->panel18->Controls->Add(this->label103);
			this->panel18->Controls->Add(this->label99);
			this->panel18->Controls->Add(this->label98);
			this->panel18->Controls->Add(this->label97);
			this->panel18->Controls->Add(this->pictureBox73);
			this->panel18->Controls->Add(this->label96);
			this->panel18->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel18->Location = System::Drawing::Point(0, 0);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(664, 469);
			this->panel18->TabIndex = 10;
			this->panel18->Visible = false;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->splitter1);
			this->splitContainer1->Panel1->Controls->Add(this->button13);
			this->splitContainer1->Panel1->Controls->Add(this->textBox22);
			this->splitContainer1->Panel1->Controls->Add(this->textBox21);
			this->splitContainer1->Panel1->Controls->Add(this->textBox20);
			this->splitContainer1->Panel1->Controls->Add(this->textBox19);
			this->splitContainer1->Panel1->Controls->Add(this->label81);
			this->splitContainer1->Panel1->Controls->Add(this->label80);
			this->splitContainer1->Panel1->Controls->Add(this->label79);
			this->splitContainer1->Panel1->Controls->Add(this->label78);
			this->splitContainer1->Panel1->Controls->Add(this->label77);
			this->splitContainer1->Panel1->Controls->Add(this->label76);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox66);
			this->splitContainer1->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::splitContainer1_Panel1_Paint);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->webBrowser1);
			this->splitContainer1->Panel2->Controls->Add(this->textBox23);
			this->splitContainer1->Panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::splitContainer1_Panel2_Paint);
			this->splitContainer1->Size = System::Drawing::Size(664, 469);
			this->splitContainer1->SplitterDistance = 177;
			this->splitContainer1->TabIndex = 9;
			this->splitContainer1->Visible = false;
			// 
			// splitter1
			// 
			this->splitter1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->splitter1->Dock = System::Windows::Forms::DockStyle::Right;
			this->splitter1->Location = System::Drawing::Point(175, 0);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(2, 469);
			this->splitter1->TabIndex = 9;
			this->splitter1->TabStop = false;
			this->toolTip1->SetToolTip(this->splitter1, L"Split Screen");
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Orange;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->button13->Location = System::Drawing::Point(83, 359);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(80, 29);
			this->button13->TabIndex = 8;
			this->button13->Text = L"Search";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MainForm::button13_Click);
			// 
			// textBox22
			// 
			this->textBox22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->textBox22->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->textBox22->Location = System::Drawing::Point(15, 320);
			this->textBox22->Multiline = true;
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(148, 28);
			this->textBox22->TabIndex = 7;
			this->textBox22->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox22_TextChanged);
			// 
			// textBox21
			// 
			this->textBox21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->textBox21->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->textBox21->Location = System::Drawing::Point(14, 253);
			this->textBox21->Multiline = true;
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(149, 28);
			this->textBox21->TabIndex = 6;
			this->textBox21->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox21_TextChanged);
			// 
			// textBox20
			// 
			this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->textBox20->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->textBox20->Location = System::Drawing::Point(15, 187);
			this->textBox20->Multiline = true;
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(148, 28);
			this->textBox20->TabIndex = 5;
			this->textBox20->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox20_TextChanged);
			// 
			// textBox19
			// 
			this->textBox19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->textBox19->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->textBox19->Location = System::Drawing::Point(15, 123);
			this->textBox19->Multiline = true;
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(148, 28);
			this->textBox19->TabIndex = 4;
			this->textBox19->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox19_TextChanged);
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label81->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label81->Location = System::Drawing::Point(13, 295);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(79, 26);
			this->label81->TabIndex = 3;
			this->label81->Text = L"Zip Code";
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label80->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label80->Location = System::Drawing::Point(13, 229);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(53, 26);
			this->label80->TabIndex = 3;
			this->label80->Text = L"State";
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label79->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label79->Location = System::Drawing::Point(13, 161);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(42, 26);
			this->label79->TabIndex = 3;
			this->label79->Text = L"City";
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label78->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label78->Location = System::Drawing::Point(9, 99);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(60, 26);
			this->label78->TabIndex = 3;
			this->label78->Text = L"Street";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label77->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label77->Location = System::Drawing::Point(55, 16);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(80, 30);
			this->label77->TabIndex = 2;
			this->label77->Text = L"G-Map";
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label76->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label76->Location = System::Drawing::Point(57, 42);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(119, 20);
			this->label76->TabIndex = 1;
			this->label76->Text = L"Location Search";
			// 
			// pictureBox66
			// 
			this->pictureBox66->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox66.Image")));
			this->pictureBox66->Location = System::Drawing::Point(9, 20);
			this->pictureBox66->Name = L"pictureBox66";
			this->pictureBox66->Size = System::Drawing::Size(45, 42);
			this->pictureBox66->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox66->TabIndex = 0;
			this->pictureBox66->TabStop = false;
			// 
			// webBrowser1
			// 
			this->webBrowser1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->webBrowser1->Location = System::Drawing::Point(0, 20);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(483, 449);
			this->webBrowser1->TabIndex = 0;
			this->webBrowser1->DocumentCompleted += gcnew System::Windows::Forms::WebBrowserDocumentCompletedEventHandler(this, &MainForm::webBrowser1_DocumentCompleted);
			this->webBrowser1->Navigated += gcnew System::Windows::Forms::WebBrowserNavigatedEventHandler(this, &MainForm::webBrowser1_Navigated);
			// 
			// textBox23
			// 
			this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)));
			this->textBox23->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox23->Dock = System::Windows::Forms::DockStyle::Top;
			this->textBox23->ForeColor = System::Drawing::Color::White;
			this->textBox23->Location = System::Drawing::Point(0, 0);
			this->textBox23->Multiline = true;
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(483, 20);
			this->textBox23->TabIndex = 1;
			this->textBox23->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox23_TextChanged);
			this->textBox23->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox23_KeyDown);
			// 
			// button20
			// 
			this->button20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button20->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button20->FlatAppearance->MouseOverBackColor = System::Drawing::Color::OrangeRed;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->button20->Location = System::Drawing::Point(180, 202);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 23);
			this->button20->TabIndex = 6;
			this->button20->Text = L"Confirm";
			this->toolTip1->SetToolTip(this->button20, L"Deactivate ID");
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MainForm::button20_Click);
			// 
			// label102
			// 
			this->label102->AutoSize = true;
			this->label102->Location = System::Drawing::Point(179, 173);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(47, 13);
			this->label102->TabIndex = 5;
			this->label102->Text = L"label102";
			this->toolTip1->SetToolTip(this->label102, L"Link");
			this->label102->Click += gcnew System::EventHandler(this, &MainForm::label102_Click);
			// 
			// label101
			// 
			this->label101->AutoSize = true;
			this->label101->Location = System::Drawing::Point(179, 136);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(47, 13);
			this->label101->TabIndex = 4;
			this->label101->Text = L"label101";
			this->toolTip1->SetToolTip(this->label101, L"ID");
			this->label101->Click += gcnew System::EventHandler(this, &MainForm::label101_Click);
			// 
			// label100
			// 
			this->label100->AutoSize = true;
			this->label100->Location = System::Drawing::Point(179, 100);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(47, 13);
			this->label100->TabIndex = 3;
			this->label100->Text = L"label100";
			this->toolTip1->SetToolTip(this->label100, L"Name");
			this->label100->Click += gcnew System::EventHandler(this, &MainForm::label100_Click);
			// 
			// label103
			// 
			this->label103->AutoSize = true;
			this->label103->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label103->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label103->Location = System::Drawing::Point(63, 203);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(72, 17);
			this->label103->TabIndex = 2;
			this->label103->Text = L"Deactivate ";
			// 
			// label99
			// 
			this->label99->AutoSize = true;
			this->label99->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label99->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label99->Location = System::Drawing::Point(63, 169);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(30, 17);
			this->label99->TabIndex = 2;
			this->label99->Text = L"Link";
			// 
			// label98
			// 
			this->label98->AutoSize = true;
			this->label98->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label98->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label98->Location = System::Drawing::Point(63, 133);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(47, 17);
			this->label98->TabIndex = 2;
			this->label98->Text = L"UserID";
			// 
			// label97
			// 
			this->label97->AutoSize = true;
			this->label97->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label97->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label97->Location = System::Drawing::Point(63, 97);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(43, 17);
			this->label97->TabIndex = 2;
			this->label97->Text = L"Name";
			// 
			// pictureBox73
			// 
			this->pictureBox73->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox73.Image")));
			this->pictureBox73->Location = System::Drawing::Point(21, 18);
			this->pictureBox73->Name = L"pictureBox73";
			this->pictureBox73->Size = System::Drawing::Size(44, 43);
			this->pictureBox73->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox73->TabIndex = 1;
			this->pictureBox73->TabStop = false;
			// 
			// label96
			// 
			this->label96->AutoSize = true;
			this->label96->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label96->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label96->Location = System::Drawing::Point(68, 24);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(84, 33);
			this->label96->TabIndex = 0;
			this->label96->Text = L"Setting";
			// 
			// button15
			// 
			this->button15->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->button15->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)), static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->button15->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->button15->Location = System::Drawing::Point(322, 207);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 23);
			this->button15->TabIndex = 7;
			this->button15->Text = L"Friends";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MainForm::button15_Click);
			// 
			// button14
			// 
			this->button14->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)), static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->button14->Location = System::Drawing::Point(217, 207);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 6;
			this->button14->Text = L"Timeline";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MainForm::button14_Click);
			// 
			// pictureBox69
			// 
			this->pictureBox69->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox69.Image")));
			this->pictureBox69->Location = System::Drawing::Point(393, 266);
			this->pictureBox69->Name = L"pictureBox69";
			this->pictureBox69->Size = System::Drawing::Size(2, 177);
			this->pictureBox69->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox69->TabIndex = 5;
			this->pictureBox69->TabStop = false;
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label85->Location = System::Drawing::Point(-3, 255);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(403, 13);
			this->label85->TabIndex = 4;
			this->label85->Text = L"__________________________________________________________________";
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->BackColor = System::Drawing::Color::Transparent;
			this->label84->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label84->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label84->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label84->Location = System::Drawing::Point(519, 160);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(121, 28);
			this->label84->TabIndex = 3;
			this->label84->Text = L"Change Cover";
			this->toolTip1->SetToolTip(this->label84, L"CoverPic");
			this->label84->Click += gcnew System::EventHandler(this, &MainForm::label84_Click);
			// 
			// pictureBox68
			// 
			this->pictureBox68->Location = System::Drawing::Point(47, 113);
			this->pictureBox68->Name = L"pictureBox68";
			this->pictureBox68->Size = System::Drawing::Size(110, 115);
			this->pictureBox68->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox68->TabIndex = 1;
			this->pictureBox68->TabStop = false;
			this->pictureBox68->Click += gcnew System::EventHandler(this, &MainForm::pictureBox68_Click);
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->BackColor = System::Drawing::Color::Transparent;
			this->label83->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label83->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label83->Location = System::Drawing::Point(167, 160);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(62, 25);
			this->label83->TabIndex = 2;
			this->label83->Text = L"Name";
			this->label83->Click += gcnew System::EventHandler(this, &MainForm::label83_Click);
			// 
			// pictureBox67
			// 
			this->pictureBox67->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox67->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox67->Location = System::Drawing::Point(0, 1);
			this->pictureBox67->Name = L"pictureBox67";
			this->pictureBox67->Size = System::Drawing::Size(664, 196);
			this->pictureBox67->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox67->TabIndex = 0;
			this->pictureBox67->TabStop = false;
			this->pictureBox67->Click += gcnew System::EventHandler(this, &MainForm::pictureBox67_Click);
			this->pictureBox67->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox67_MouseDown);
			this->pictureBox67->MouseEnter += gcnew System::EventHandler(this, &MainForm::pictureBox67_MouseEnter);
			this->pictureBox67->MouseLeave += gcnew System::EventHandler(this, &MainForm::pictureBox67_MouseLeave);
			this->pictureBox67->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox67_MouseUp);
			// 
			// button16
			// 
			this->button16->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->button16->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)), static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->button16->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->button16->Location = System::Drawing::Point(426, 207);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 23);
			this->button16->TabIndex = 8;
			this->button16->Text = L"Stories";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MainForm::button16_Click);
			// 
			// button17
			// 
			this->button17->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->button17->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)), static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->button17->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->button17->Location = System::Drawing::Point(536, 207);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 23);
			this->button17->TabIndex = 9;
			this->button17->Text = L"Photos";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MainForm::button17_Click);
			// 
			// button19
			// 
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(139, 348);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(123, 23);
			this->button19->TabIndex = 9;
			this->button19->Text = L"Sent Other Message";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MainForm::button19_Click);
			// 
			// pictureBox72
			// 
			this->pictureBox72->BackColor = System::Drawing::SystemColors::Info;
			this->pictureBox72->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox72.Image")));
			this->pictureBox72->Location = System::Drawing::Point(211, 147);
			this->pictureBox72->Name = L"pictureBox72";
			this->pictureBox72->Size = System::Drawing::Size(17, 20);
			this->pictureBox72->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox72->TabIndex = 8;
			this->pictureBox72->TabStop = false;
			this->pictureBox72->Visible = false;
			this->pictureBox72->Click += gcnew System::EventHandler(this, &MainForm::pictureBox72_Click);
			// 
			// pictureBox71
			// 
			this->pictureBox71->BackColor = System::Drawing::SystemColors::Info;
			this->pictureBox71->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox71.Image")));
			this->pictureBox71->Location = System::Drawing::Point(211, 147);
			this->pictureBox71->Name = L"pictureBox71";
			this->pictureBox71->Size = System::Drawing::Size(18, 19);
			this->pictureBox71->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox71->TabIndex = 7;
			this->pictureBox71->TabStop = false;
			this->pictureBox71->Visible = false;
			this->pictureBox71->Click += gcnew System::EventHandler(this, &MainForm::pictureBox71_Click);
			// 
			// textBox26
			// 
			this->textBox26->BackColor = System::Drawing::SystemColors::Info;
			this->textBox26->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox26->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->textBox26->Location = System::Drawing::Point(396, 120);
			this->textBox26->Multiline = true;
			this->textBox26->Name = L"textBox26";
			this->textBox26->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox26->Size = System::Drawing::Size(252, 329);
			this->textBox26->TabIndex = 6;
			this->textBox26->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox26_TextChanged);
			// 
			// button18
			// 
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(268, 348);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 23);
			this->button18->TabIndex = 5;
			this->button18->Text = L"Send";
			this->toolTip1->SetToolTip(this->button18, L"Send");
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MainForm::button18_Click);
			// 
			// textBox25
			// 
			this->textBox25->BackColor = System::Drawing::SystemColors::Info;
			this->textBox25->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox25->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox25->Location = System::Drawing::Point(57, 208);
			this->textBox25->Multiline = true;
			this->textBox25->Name = L"textBox25";
			this->textBox25->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox25->Size = System::Drawing::Size(286, 130);
			this->textBox25->TabIndex = 4;
			this->toolTip1->SetToolTip(this->textBox25, L"Write message");
			this->textBox25->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox25_TextChanged);
			// 
			// textBox24
			// 
			this->textBox24->BackColor = System::Drawing::SystemColors::Info;
			this->textBox24->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox24->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox24->Location = System::Drawing::Point(57, 147);
			this->textBox24->Multiline = true;
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(172, 20);
			this->textBox24->TabIndex = 3;
			this->toolTip1->SetToolTip(this->textBox24, L"Sent to\?");
			this->textBox24->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox24_TextChanged);
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label87->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label87->Location = System::Drawing::Point(392, 72);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(69, 23);
			this->label87->TabIndex = 1;
			this->label87->Text = L"Messages";
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label93->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label93->Location = System::Drawing::Point(26, 186);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(61, 15);
			this->label93->TabIndex = 1;
			this->label93->Text = L"Write here";
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label92->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label92->Location = System::Drawing::Point(25, 149);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(20, 15);
			this->label92->TabIndex = 1;
			this->label92->Text = L"To";
			// 
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label89->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label89->Location = System::Drawing::Point(25, 72);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(105, 23);
			this->label89->TabIndex = 1;
			this->label89->Text = L"Write Message";
			// 
			// pictureBox70
			// 
			this->pictureBox70->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox70.Image")));
			this->pictureBox70->Location = System::Drawing::Point(377, 1);
			this->pictureBox70->Name = L"pictureBox70";
			this->pictureBox70->Size = System::Drawing::Size(4, 467);
			this->pictureBox70->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox70->TabIndex = 2;
			this->pictureBox70->TabStop = false;
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label91->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->label91->Location = System::Drawing::Point(387, 80);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(90, 23);
			this->label91->TabIndex = 1;
			this->label91->Text = L"________________";
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label90->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->label90->Location = System::Drawing::Point(23, 79);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(115, 23);
			this->label90->TabIndex = 1;
			this->label90->Text = L"_____________________";
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label88->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label88->Location = System::Drawing::Point(25, 74);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(69, 23);
			this->label88->TabIndex = 1;
			this->label88->Text = L"Messages";
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label86->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label86->Location = System::Drawing::Point(23, 15);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(134, 33);
			this->label86->TabIndex = 0;
			this->label86->Text = L"Message Box";
			// 
			// panel17
			// 
			this->panel17->AutoScroll = true;
			this->panel17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->panel17->Controls->Add(this->label95);
			this->panel17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->panel17->Location = System::Drawing::Point(199, 38);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(267, 233);
			this->panel17->TabIndex = 26;
			this->panel17->Visible = false;
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label95->Location = System::Drawing::Point(81, 28);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(109, 23);
			this->label95->TabIndex = 0;
			this->label95->Text = L"No User Found";
			this->label95->Visible = false;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel14->Controls->Add(this->panel11);
			this->panel14->Location = System::Drawing::Point(236, 154);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(603, 252);
			this->panel14->TabIndex = 29;
			this->panel14->Visible = false;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->panel11->Controls->Add(this->progressBar3);
			this->panel11->Controls->Add(this->button10);
			this->panel11->Controls->Add(this->pictureBox47);
			this->panel11->Controls->Add(this->button9);
			this->panel11->Controls->Add(this->button8);
			this->panel11->Controls->Add(this->button7);
			this->panel11->Controls->Add(this->label50);
			this->panel11->ForeColor = System::Drawing::Color::Coral;
			this->panel11->Location = System::Drawing::Point(28, 33);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(547, 187);
			this->panel11->TabIndex = 8;
			this->panel11->Visible = false;
			this->panel11->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel11_Paint);
			// 
			// progressBar3
			// 
			this->progressBar3->Location = System::Drawing::Point(376, 135);
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Size = System::Drawing::Size(144, 4);
			this->progressBar3->TabIndex = 6;
			this->progressBar3->Visible = false;
			this->progressBar3->Click += gcnew System::EventHandler(this, &MainForm::progressBar3_Click);
			// 
			// button10
			// 
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Snow;
			this->button10->Location = System::Drawing::Point(170, 66);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(136, 62);
			this->button10->TabIndex = 5;
			this->button10->Text = L"From WEB";
			this->toolTip1->SetToolTip(this->button10, L"Upload from Web");
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Visible = false;
			this->button10->Click += gcnew System::EventHandler(this, &MainForm::button10_Click);
			// 
			// pictureBox47
			// 
			this->pictureBox47->Location = System::Drawing::Point(376, 19);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(144, 116);
			this->pictureBox47->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox47->TabIndex = 4;
			this->pictureBox47->TabStop = false;
			this->pictureBox47->Visible = false;
			this->pictureBox47->Click += gcnew System::EventHandler(this, &MainForm::pictureBox47_Click);
			// 
			// button9
			// 
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->ForeColor = System::Drawing::Color::Snow;
			this->button9->Location = System::Drawing::Point(371, 153);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 3;
			this->button9->Text = L"Cancel";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &MainForm::button9_Click);
			// 
			// button8
			// 
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->ForeColor = System::Drawing::Color::Snow;
			this->button8->Location = System::Drawing::Point(455, 153);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 2;
			this->button8->Text = L"Confirm";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::button8_Click);
			// 
			// button7
			// 
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::LightGoldenrodYellow;
			this->button7->FlatAppearance->BorderSize = 10;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Snow;
			this->button7->Location = System::Drawing::Point(14, 67);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(135, 61);
			this->button7->TabIndex = 1;
			this->button7->Text = L"From PC";
			this->toolTip1->SetToolTip(this->button7, L"Upload from PC");
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->ForeColor = System::Drawing::Color::Snow;
			this->label50->Location = System::Drawing::Point(3, 8);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(161, 36);
			this->label50->TabIndex = 0;
			this->label50->Text = L"Upload Image";
			this->label50->Visible = false;
			this->label50->Click += gcnew System::EventHandler(this, &MainForm::label50_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->panel9->Controls->Add(this->label36);
			this->panel9->Controls->Add(this->pictureBox34);
			this->panel9->Controls->Add(this->label29);
			this->panel9->Controls->Add(this->pictureBox32);
			this->panel9->Controls->Add(this->pictureBox33);
			this->panel9->Controls->Add(this->pictureBox31);
			this->panel9->Controls->Add(this->pictureBox30);
			this->panel9->Controls->Add(this->pictureBox36);
			this->panel9->Controls->Add(this->pictureBox29);
			this->panel9->Controls->Add(this->pictureBox28);
			this->panel9->Controls->Add(this->label35);
			this->panel9->Controls->Add(this->label28);
			this->panel9->Controls->Add(this->label34);
			this->panel9->Controls->Add(this->label27);
			this->panel9->Controls->Add(this->label33);
			this->panel9->Controls->Add(this->label26);
			this->panel9->Controls->Add(this->label25);
			this->panel9->Controls->Add(this->label32);
			this->panel9->Controls->Add(this->label37);
			this->panel9->Controls->Add(this->label31);
			this->panel9->Controls->Add(this->label24);
			this->panel9->Controls->Add(this->label30);
			this->panel9->Controls->Add(this->pictureBox27);
			this->panel9->Controls->Add(this->label23);
			this->panel9->Controls->Add(this->label22);
			this->panel9->Location = System::Drawing::Point(-200, 38);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(200, 469);
			this->panel9->TabIndex = 1;
			this->panel9->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel9_Paint);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label36->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label36->Location = System::Drawing::Point(74, 180);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(52, 23);
			this->label36->TabIndex = 3;
			this->label36->Text = L"Status";
			this->label36->Click += gcnew System::EventHandler(this, &MainForm::label36_Click);
			// 
			// pictureBox34
			// 
			this->pictureBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->pictureBox34->Cursor = System::Windows::Forms::Cursors::PanWest;
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(163, 2);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(33, 30);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox34->TabIndex = 2;
			this->pictureBox34->TabStop = false;
			this->pictureBox34->Click += gcnew System::EventHandler(this, &MainForm::pictureBox34_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label29->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label29->Location = System::Drawing::Point(74, 391);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(53, 23);
			this->label29->TabIndex = 6;
			this->label29->Text = L"Logout";
			this->label29->Click += gcnew System::EventHandler(this, &MainForm::label29_Click);
			// 
			// pictureBox32
			// 
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(27, 303);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(33, 31);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox32->TabIndex = 1;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(27, 384);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(33, 31);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox33->TabIndex = 1;
			this->pictureBox33->TabStop = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(27, 344);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(33, 31);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox31->TabIndex = 1;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(27, 259);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(33, 31);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox30->TabIndex = 1;
			this->pictureBox30->TabStop = false;
			// 
			// pictureBox36
			// 
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(27, 171);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(33, 31);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox36->TabIndex = 1;
			this->pictureBox36->TabStop = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(27, 215);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(33, 31);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox29->TabIndex = 1;
			this->pictureBox29->TabStop = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(27, 128);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(33, 31);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox28->TabIndex = 1;
			this->pictureBox28->TabStop = false;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label35->Location = System::Drawing::Point(24, 408);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(139, 13);
			this->label35->TabIndex = 10;
			this->label35->Text = L"______________________";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label28->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label28->Location = System::Drawing::Point(74, 349);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(38, 23);
			this->label28->TabIndex = 5;
			this->label28->Text = L"Map";
			this->label28->Click += gcnew System::EventHandler(this, &MainForm::label28_Click);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label34->Location = System::Drawing::Point(24, 365);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(139, 13);
			this->label34->TabIndex = 9;
			this->label34->Text = L"______________________";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label27->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label27->Location = System::Drawing::Point(74, 308);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(57, 23);
			this->label27->TabIndex = 4;
			this->label27->Text = L"Setting";
			this->label27->Click += gcnew System::EventHandler(this, &MainForm::label27_Click);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label33->Location = System::Drawing::Point(24, 324);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(139, 13);
			this->label33->TabIndex = 8;
			this->label33->Text = L"______________________";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label26->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label26->Location = System::Drawing::Point(74, 266);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(69, 23);
			this->label26->TabIndex = 3;
			this->label26->Text = L"Messages";
			this->label26->Click += gcnew System::EventHandler(this, &MainForm::label26_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label25->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label25->Location = System::Drawing::Point(74, 223);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(67, 23);
			this->label25->TabIndex = 2;
			this->label25->Text = L"Timeline";
			this->label25->Click += gcnew System::EventHandler(this, &MainForm::label25_Click);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label32->Location = System::Drawing::Point(24, 282);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(139, 13);
			this->label32->TabIndex = 7;
			this->label32->Text = L"______________________";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label37->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label37->Location = System::Drawing::Point(24, 193);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(139, 13);
			this->label37->TabIndex = 7;
			this->label37->Text = L"______________________";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label31->Location = System::Drawing::Point(24, 236);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(139, 13);
			this->label31->TabIndex = 7;
			this->label31->Text = L"______________________";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label24->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label24->Location = System::Drawing::Point(74, 137);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(47, 23);
			this->label24->TabIndex = 2;
			this->label24->Text = L"Home";
			this->label24->Click += gcnew System::EventHandler(this, &MainForm::label24_Click);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label30->Location = System::Drawing::Point(24, 151);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(139, 13);
			this->label30->TabIndex = 2;
			this->label30->Text = L"______________________";
			// 
			// pictureBox27
			// 
			this->pictureBox27->Location = System::Drawing::Point(14, 20);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(57, 50);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox27->TabIndex = 2;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Click += gcnew System::EventHandler(this, &MainForm::pictureBox27_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe Script", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label23->Location = System::Drawing::Point(79, 18);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(69, 20);
			this->label23->TabIndex = 2;
			this->label23->Text = L"Welcome";
			this->label23->Click += gcnew System::EventHandler(this, &MainForm::label22_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe Script", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label22->Location = System::Drawing::Point(78, 35);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(93, 25);
			this->label22->TabIndex = 2;
			this->label22->Text = L"Username";
			this->label22->Click += gcnew System::EventHandler(this, &MainForm::label22_Click);
			// 
			// comboBox5
			// 
			this->comboBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->comboBox5->Cursor = System::Windows::Forms::Cursors::PanSouth;
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"US English", L"Urdu PR", L"Urdu IN", L"عربى",
					L"中文", L"Ελληνικά", L"한국어"
			});
			this->comboBox5->Location = System::Drawing::Point(319, 482);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(121, 21);
			this->comboBox5->TabIndex = 2;
			this->comboBox5->Visible = false;
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBox5_SelectedIndexChanged);
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Location = System::Drawing::Point(319, 485);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(88, 13);
			this->label71->TabIndex = 3;
			this->label71->Text = L"Select Language";
			this->label71->Visible = false;
			this->label71->Click += gcnew System::EventHandler(this, &MainForm::label71_Click);
			// 
			// pictureBox62
			// 
			this->pictureBox62->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox62->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox62.Image")));
			this->pictureBox62->Location = System::Drawing::Point(301, 485);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(12, 13);
			this->pictureBox62->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox62->TabIndex = 1;
			this->pictureBox62->TabStop = false;
			this->pictureBox62->Click += gcnew System::EventHandler(this, &MainForm::pictureBox62_Click);
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label70->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label70->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label70->Location = System::Drawing::Point(236, 481);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(65, 17);
			this->label70->TabIndex = 0;
			this->label70->Text = L"Language";
			this->label70->Click += gcnew System::EventHandler(this, &MainForm::label70_Click);
			// 
			// panel12
			// 
			this->panel12->AutoScroll = true;
			this->panel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->panel12->Controls->Add(this->label59);
			this->panel12->Controls->Add(this->label65);
			this->panel12->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel12->Location = System::Drawing::Point(863, 38);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(124, 469);
			this->panel12->TabIndex = 6;
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label59->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label59->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label59->Location = System::Drawing::Point(17, 7);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(83, 28);
			this->label59->TabIndex = 9;
			this->label59->Text = L"Contacts";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label65->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label65->ForeColor = System::Drawing::Color::DarkKhaki;
			this->label65->Location = System::Drawing::Point(4, 15);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(117, 28);
			this->label65->TabIndex = 9;
			this->label65->Text = L"_______________";
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->panel10->Controls->Add(this->label82);
			this->panel10->Controls->Add(this->textBox13);
			this->panel10->Controls->Add(this->label75);
			this->panel10->Controls->Add(this->label64);
			this->panel10->Controls->Add(this->label74);
			this->panel10->Controls->Add(this->label61);
			this->panel10->Controls->Add(this->label62);
			this->panel10->Controls->Add(this->label63);
			this->panel10->Controls->Add(this->label53);
			this->panel10->Controls->Add(this->label54);
			this->panel10->Controls->Add(this->label51);
			this->panel10->Controls->Add(this->label52);
			this->panel10->Controls->Add(this->textBox15);
			this->panel10->Controls->Add(this->comboBox3);
			this->panel10->Controls->Add(this->label60);
			this->panel10->Controls->Add(this->textBox14);
			this->panel10->Controls->Add(this->pictureBox46);
			this->panel10->Controls->Add(this->pictureBox45);
			this->panel10->Controls->Add(this->pictureBox41);
			this->panel10->Controls->Add(this->label45);
			this->panel10->Controls->Add(this->label43);
			this->panel10->Controls->Add(this->pictureBox44);
			this->panel10->Controls->Add(this->pictureBox42);
			this->panel10->Controls->Add(this->pictureBox40);
			this->panel10->Controls->Add(this->pictureBox43);
			this->panel10->Controls->Add(this->pictureBox39);
			this->panel10->Controls->Add(this->pictureBox38);
			this->panel10->Controls->Add(this->label41);
			this->panel10->Controls->Add(this->label46);
			this->panel10->Controls->Add(this->label44);
			this->panel10->Controls->Add(this->label49);
			this->panel10->Controls->Add(this->label48);
			this->panel10->Controls->Add(this->label42);
			this->panel10->Controls->Add(this->label47);
			this->panel10->Controls->Add(this->pictureBox35);
			this->panel10->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel10->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->panel10->Location = System::Drawing::Point(0, 38);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(199, 469);
			this->panel10->TabIndex = 3;
			this->panel10->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel10_Paint);
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->BackColor = System::Drawing::Color::Transparent;
			this->label82->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label82->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label82->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label82->Location = System::Drawing::Point(12, 125);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(64, 15);
			this->label82->TabIndex = 0;
			this->label82->Text = L"Upload Pic";
			this->label82->Visible = false;
			this->label82->Click += gcnew System::EventHandler(this, &MainForm::label82_Click);
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->textBox13->Location = System::Drawing::Point(49, 186);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox13->Size = System::Drawing::Size(138, 20);
			this->textBox13->TabIndex = 9;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox13_TextChanged);
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label75->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label75->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label75->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label75->Location = System::Drawing::Point(113, 203);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(44, 16);
			this->label75->TabIndex = 29;
			this->label75->Text = L"Confirm";
			this->label75->Visible = false;
			this->label75->Click += gcnew System::EventHandler(this, &MainForm::label75_Click);
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label64->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label64->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label64->Location = System::Drawing::Point(152, 386);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(44, 16);
			this->label64->TabIndex = 15;
			this->label64->Text = L"Confirm";
			this->label64->Visible = false;
			this->label64->Click += gcnew System::EventHandler(this, &MainForm::label64_Click);
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label74->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label74->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label74->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label74->Location = System::Drawing::Point(161, 203);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(26, 16);
			this->label74->TabIndex = 28;
			this->label74->Text = L"Edit";
			this->label74->Click += gcnew System::EventHandler(this, &MainForm::label74_Click);
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label61->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label61->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label61->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label61->Location = System::Drawing::Point(152, 246);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(44, 16);
			this->label61->TabIndex = 11;
			this->label61->Text = L"Confirm";
			this->label61->Visible = false;
			this->label61->Click += gcnew System::EventHandler(this, &MainForm::label61_Click);
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label62->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label62->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label62->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label62->Location = System::Drawing::Point(113, 386);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(37, 16);
			this->label62->TabIndex = 12;
			this->label62->Text = L"Cancel";
			this->label62->Visible = false;
			this->label62->Click += gcnew System::EventHandler(this, &MainForm::label62_Click);
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label63->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label63->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label63->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label63->Location = System::Drawing::Point(152, 337);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(44, 16);
			this->label63->TabIndex = 14;
			this->label63->Text = L"Confirm";
			this->label63->Visible = false;
			this->label63->Click += gcnew System::EventHandler(this, &MainForm::label63_Click);
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label53->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label53->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label53->Location = System::Drawing::Point(161, 386);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(26, 16);
			this->label53->TabIndex = 11;
			this->label53->Text = L"Edit";
			this->label53->Visible = false;
			this->label53->Click += gcnew System::EventHandler(this, &MainForm::label53_Click);
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label54->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label54->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label54->Location = System::Drawing::Point(113, 337);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(37, 16);
			this->label54->TabIndex = 13;
			this->label54->Text = L"Cancel";
			this->label54->Visible = false;
			this->label54->Click += gcnew System::EventHandler(this, &MainForm::label54_Click);
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label51->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label51->Location = System::Drawing::Point(159, 246);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(26, 16);
			this->label51->TabIndex = 9;
			this->label51->Text = L"Edit";
			this->label51->Visible = false;
			this->label51->Click += gcnew System::EventHandler(this, &MainForm::label51_Click);
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label52->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label52->Location = System::Drawing::Point(158, 337);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(26, 16);
			this->label52->TabIndex = 10;
			this->label52->Text = L"Edit";
			this->label52->Visible = false;
			this->label52->Click += gcnew System::EventHandler(this, &MainForm::label52_Click);
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->textBox15->Location = System::Drawing::Point(49, 226);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(138, 20);
			this->textBox15->TabIndex = 8;
			this->textBox15->Visible = false;
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox15_TextChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->comboBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(17) {
				L"Lahore", L"Islamabad", L"Karachi", L"Multan",
					L"Faisalabad", L"Peshawar", L"Kohat", L"Rawalpindi", L"Sheikhpura", L"Wah", L"Gojra", L"Sialkot", L"Kasoor", L"Toba Tek Singh",
					L"Quetta", L"Azad Kashmir", L"Muree"
			});
			this->comboBox3->Location = System::Drawing::Point(49, 356);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(138, 29);
			this->comboBox3->TabIndex = 8;
			this->comboBox3->Visible = false;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBox3_SelectedIndexChanged);
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label60->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label60->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label60->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label60->Location = System::Drawing::Point(113, 246);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(37, 16);
			this->label60->TabIndex = 9;
			this->label60->Text = L"Cancel";
			this->label60->Visible = false;
			this->label60->Click += gcnew System::EventHandler(this, &MainForm::label60_Click);
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->textBox14->Location = System::Drawing::Point(49, 317);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(138, 20);
			this->textBox14->TabIndex = 8;
			this->textBox14->Visible = false;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox14_TextChanged);
			// 
			// pictureBox46
			// 
			this->pictureBox46->AccessibleName = L"Cancel";
			this->pictureBox46->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox46.Image")));
			this->pictureBox46->Location = System::Drawing::Point(83, 411);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(51, 50);
			this->pictureBox46->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox46->TabIndex = 8;
			this->pictureBox46->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox46, L"Cancel");
			this->pictureBox46->Visible = false;
			this->pictureBox46->Click += gcnew System::EventHandler(this, &MainForm::pictureBox46_Click);
			// 
			// pictureBox45
			// 
			this->pictureBox45->AccessibleName = L"Done";
			this->pictureBox45->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox45.Image")));
			this->pictureBox45->Location = System::Drawing::Point(137, 411);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(51, 50);
			this->pictureBox45->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox45->TabIndex = 8;
			this->pictureBox45->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox45, L"Done");
			this->pictureBox45->Visible = false;
			this->pictureBox45->Click += gcnew System::EventHandler(this, &MainForm::pictureBox45_Click);
			// 
			// pictureBox41
			// 
			this->pictureBox41->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.Image")));
			this->pictureBox41->Location = System::Drawing::Point(136, 411);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(53, 50);
			this->pictureBox41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox41->TabIndex = 8;
			this->pictureBox41->TabStop = false;
			this->pictureBox41->Click += gcnew System::EventHandler(this, &MainForm::pictureBox41_Click);
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label45->Location = System::Drawing::Point(45, 362);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(80, 23);
			this->label45->TabIndex = 9;
			this->label45->Text = L"Hometown";
			this->label45->Click += gcnew System::EventHandler(this, &MainForm::label45_Click);
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label43->Location = System::Drawing::Point(45, 315);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(60, 23);
			this->label43->TabIndex = 9;
			this->label43->Text = L"Phone#";
			this->label43->Click += gcnew System::EventHandler(this, &MainForm::label43_Click);
			// 
			// pictureBox44
			// 
			this->pictureBox44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox44.Image")));
			this->pictureBox44->Location = System::Drawing::Point(12, 355);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(27, 30);
			this->pictureBox44->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox44->TabIndex = 8;
			this->pictureBox44->TabStop = false;
			// 
			// pictureBox42
			// 
			this->pictureBox42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.Image")));
			this->pictureBox42->Location = System::Drawing::Point(12, 308);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(27, 30);
			this->pictureBox42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox42->TabIndex = 8;
			this->pictureBox42->TabStop = false;
			// 
			// pictureBox40
			// 
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(12, 261);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(27, 30);
			this->pictureBox40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox40->TabIndex = 8;
			this->pictureBox40->TabStop = false;
			// 
			// pictureBox43
			// 
			this->pictureBox43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox43.Image")));
			this->pictureBox43->Location = System::Drawing::Point(12, 157);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(30, 30);
			this->pictureBox43->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox43->TabIndex = 8;
			this->pictureBox43->TabStop = false;
			// 
			// pictureBox39
			// 
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(12, 219);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(27, 30);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox39->TabIndex = 8;
			this->pictureBox39->TabStop = false;
			// 
			// pictureBox38
			// 
			this->pictureBox38->AccessibleName = L"Upload Profile Pic";
			this->pictureBox38->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox38->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(12, 82);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(63, 58);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox38->TabIndex = 8;
			this->pictureBox38->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox38, L"Upload Profile Pic");
			this->pictureBox38->Click += gcnew System::EventHandler(this, &MainForm::pictureBox38_Click);
			this->pictureBox38->MouseEnter += gcnew System::EventHandler(this, &MainForm::pictureBox38_MouseEnter);
			this->pictureBox38->MouseLeave += gcnew System::EventHandler(this, &MainForm::pictureBox38_MouseLeave);
			this->pictureBox38->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox38_MouseUp);
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label41->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label41->Location = System::Drawing::Point(28, 29);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(73, 33);
			this->label41->TabIndex = 8;
			this->label41->Text = L"About";
			// 
			// label46
			// 
			this->label46->AccessibleName = L"UserID";
			this->label46->AutoSize = true;
			this->label46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label46->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label46->Location = System::Drawing::Point(45, 268);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(24, 23);
			this->label46->TabIndex = 8;
			this->label46->Text = L"ID";
			this->label46->Click += gcnew System::EventHandler(this, &MainForm::label46_Click);
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label44->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label44->Location = System::Drawing::Point(45, 226);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(40, 23);
			this->label44->TabIndex = 8;
			this->label44->Text = L"DOB";
			this->label44->Click += gcnew System::EventHandler(this, &MainForm::label44_Click);
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label49->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label49->Location = System::Drawing::Point(45, 164);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(43, 23);
			this->label49->TabIndex = 8;
			this->label49->Text = L"Intro";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label48->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->ForeColor = System::Drawing::Color::DimGray;
			this->label48->Location = System::Drawing::Point(81, 89);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(48, 21);
			this->label48->TabIndex = 8;
			this->label48->Text = L"Hello !";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label42->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label42->Location = System::Drawing::Point(80, 110);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(58, 28);
			this->label42->TabIndex = 8;
			this->label42->Text = L"Name";
			this->label42->Click += gcnew System::EventHandler(this, &MainForm::label42_Click);
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->label47->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label47->Location = System::Drawing::Point(22, 42);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(131, 28);
			this->label47->TabIndex = 8;
			this->label47->Text = L"_________________";
			// 
			// pictureBox35
			// 
			this->pictureBox35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->pictureBox35->Cursor = System::Windows::Forms::Cursors::PanEast;
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(4, 4);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(24, 26);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox35->TabIndex = 2;
			this->pictureBox35->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox35, L"Drag Open menu");
			this->pictureBox35->Click += gcnew System::EventHandler(this, &MainForm::pictureBox35_Click);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->panel8->Controls->Add(this->label94);
			this->panel8->Controls->Add(this->pictureBox61);
			this->panel8->Controls->Add(this->pictureBox52);
			this->panel8->Controls->Add(this->pictureBox51);
			this->panel8->Controls->Add(this->pictureBox50);
			this->panel8->Controls->Add(this->pictureBox49);
			this->panel8->Controls->Add(this->pictureBox48);
			this->panel8->Controls->Add(this->label38);
			this->panel8->Controls->Add(this->pictureBox37);
			this->panel8->Controls->Add(this->textBox12);
			this->panel8->Controls->Add(this->pictureBox26);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel8->Location = System::Drawing::Point(0, 0);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(987, 38);
			this->panel8->TabIndex = 0;
			// 
			// label94
			// 
			this->label94->AutoSize = true;
			this->label94->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label94->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label94->Location = System::Drawing::Point(39, 6);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(91, 29);
			this->label94->TabIndex = 26;
			this->label94->Text = L"Linkify";
			// 
			// pictureBox61
			// 
			this->pictureBox61->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox61->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox61.Image")));
			this->pictureBox61->Location = System::Drawing::Point(652, 0);
			this->pictureBox61->Name = L"pictureBox61";
			this->pictureBox61->Size = System::Drawing::Size(34, 34);
			this->pictureBox61->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox61->TabIndex = 25;
			this->pictureBox61->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox61, L"Notifications");
			this->pictureBox61->Click += gcnew System::EventHandler(this, &MainForm::pictureBox61_Click);
			// 
			// pictureBox52
			// 
			this->pictureBox52->AccessibleDescription = L"";
			this->pictureBox52->AccessibleName = L"ChatBox";
			this->pictureBox52->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox52->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox52.Image")));
			this->pictureBox52->Location = System::Drawing::Point(704, 1);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(35, 33);
			this->pictureBox52->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox52->TabIndex = 9;
			this->pictureBox52->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox52, L"ChatBox");
			this->pictureBox52->Click += gcnew System::EventHandler(this, &MainForm::pictureBox52_Click);
			// 
			// pictureBox51
			// 
			this->pictureBox51->AccessibleName = L"LogOut";
			this->pictureBox51->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox51->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox51.Image")));
			this->pictureBox51->Location = System::Drawing::Point(922, 1);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(33, 34);
			this->pictureBox51->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox51->TabIndex = 9;
			this->pictureBox51->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox51, L"LogOut");
			this->pictureBox51->Click += gcnew System::EventHandler(this, &MainForm::pictureBox51_Click);
			// 
			// pictureBox50
			// 
			this->pictureBox50->AccessibleName = L"News Feed";
			this->pictureBox50->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox50->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox50.Image")));
			this->pictureBox50->Location = System::Drawing::Point(756, 1);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(44, 34);
			this->pictureBox50->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox50->TabIndex = 9;
			this->pictureBox50->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox50, L"NewsFeed");
			this->pictureBox50->Click += gcnew System::EventHandler(this, &MainForm::pictureBox50_Click);
			// 
			// pictureBox49
			// 
			this->pictureBox49->AccessibleName = L"Friends";
			this->pictureBox49->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox49->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox49.Image")));
			this->pictureBox49->Location = System::Drawing::Point(869, 0);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(35, 36);
			this->pictureBox49->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox49->TabIndex = 9;
			this->pictureBox49->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox49, L"Friends");
			this->pictureBox49->Click += gcnew System::EventHandler(this, &MainForm::pictureBox49_Click);
			// 
			// pictureBox48
			// 
			this->pictureBox48->AccessibleName = L"Requests";
			this->pictureBox48->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox48.Image")));
			this->pictureBox48->Location = System::Drawing::Point(817, 2);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(35, 34);
			this->pictureBox48->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox48->TabIndex = 9;
			this->pictureBox48->TabStop = false;
			this->pictureBox48->Tag = L"";
			this->toolTip1->SetToolTip(this->pictureBox48, L"Requests");
			this->pictureBox48->Click += gcnew System::EventHandler(this, &MainForm::pictureBox48_Click);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label38->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label38->Location = System::Drawing::Point(202, 8);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(55, 23);
			this->label38->TabIndex = 4;
			this->label38->Text = L"Search";
			this->label38->Click += gcnew System::EventHandler(this, &MainForm::label38_Click);
			// 
			// pictureBox37
			// 
			this->pictureBox37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(439, 6);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(27, 26);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox37->TabIndex = 4;
			this->pictureBox37->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox37, L"Search Linkifians");
			this->pictureBox37->Click += gcnew System::EventHandler(this, &MainForm::pictureBox37_Click);
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->textBox12->Location = System::Drawing::Point(199, 6);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(266, 26);
			this->textBox12->TabIndex = 1;
			this->toolTip1->SetToolTip(this->textBox12, L"Type to Search People");
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox12_TextChanged);
			this->textBox12->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox12_KeyDown);
			this->textBox12->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox12_KeyUp);
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(5, 1);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(33, 35);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox26->TabIndex = 1;
			this->pictureBox26->TabStop = false;
			// 
			// panel13
			// 
			this->panel13->AutoScroll = true;
			this->panel13->Controls->Add(this->comboBox6);
			this->panel13->Controls->Add(this->label73);
			this->panel13->Controls->Add(this->pictureBox63);
			this->panel13->Controls->Add(this->pictureBox60);
			this->panel13->Controls->Add(this->label67);
			this->panel13->Controls->Add(this->textBox16);
			this->panel13->Controls->Add(this->pictureBox54);
			this->panel13->Controls->Add(this->label66);
			this->panel13->Controls->Add(this->pictureBox53);
			this->panel13->Controls->Add(this->comboBox4);
			this->panel13->Controls->Add(this->pictureBox55);
			this->panel13->Controls->Add(this->button12);
			this->panel13->Controls->Add(this->button11);
			this->panel13->Location = System::Drawing::Point(236, 67);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(383, 411);
			this->panel13->TabIndex = 25;
			// 
			// comboBox6
			// 
			this->comboBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->comboBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(17) {
				L"Lahore", L"Islamabad", L"Karachi", L"Multan",
					L"Faisalabad", L"Peshawar", L"Kohat", L"Rawalpindi", L"Sheikhpura", L"Wah", L"Gojra", L"Sialkot", L"Kasoor", L"Toba Tek Singh",
					L"Quetta", L"Azad Kashmir", L"Muree"
			});
			this->comboBox6->Location = System::Drawing::Point(235, 169);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(121, 23);
			this->comboBox6->TabIndex = 27;
			this->comboBox6->Visible = false;
			this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBox6_SelectedIndexChanged);
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label73->Location = System::Drawing::Point(29, 173);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(44, 13);
			this->label73->TabIndex = 25;
			this->label73->Text = L"location";
			this->label73->Visible = false;
			this->label73->Click += gcnew System::EventHandler(this, &MainForm::label73_Click);
			// 
			// pictureBox63
			// 
			this->pictureBox63->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox63.Image")));
			this->pictureBox63->Location = System::Drawing::Point(24, 169);
			this->pictureBox63->Name = L"pictureBox63";
			this->pictureBox63->Size = System::Drawing::Size(333, 23);
			this->pictureBox63->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox63->TabIndex = 26;
			this->pictureBox63->TabStop = false;
			// 
			// pictureBox60
			// 
			this->pictureBox60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->pictureBox60->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox60->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox60.Image")));
			this->pictureBox60->Location = System::Drawing::Point(332, 142);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(21, 25);
			this->pictureBox60->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox60->TabIndex = 24;
			this->pictureBox60->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox60, L"Location");
			this->pictureBox60->Click += gcnew System::EventHandler(this, &MainForm::pictureBox60_Click);
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label67->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label67->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label67->Location = System::Drawing::Point(76, 39);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(135, 17);
			this->label67->TabIndex = 14;
			this->label67->Text = L"What\'s on your mind\?";
			this->label67->Click += gcnew System::EventHandler(this, &MainForm::label67_Click);
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->textBox16->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->textBox16->Location = System::Drawing::Point(63, 31);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(293, 140);
			this->textBox16->TabIndex = 12;
			this->toolTip1->SetToolTip(this->textBox16, L"Write Something to Post");
			this->textBox16->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox16_TextChanged_1);
			this->textBox16->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox16_KeyDown);
			this->textBox16->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox16_KeyUp);
			// 
			// pictureBox54
			// 
			this->pictureBox54->Location = System::Drawing::Point(29, 33);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(30, 29);
			this->pictureBox54->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox54->TabIndex = 11;
			this->pictureBox54->TabStop = false;
			this->pictureBox54->Click += gcnew System::EventHandler(this, &MainForm::pictureBox54_Click);
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label66->Location = System::Drawing::Point(51, 13);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(69, 17);
			this->label66->TabIndex = 10;
			this->label66->Text = L"Make Post";
			// 
			// pictureBox53
			// 
			this->pictureBox53->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox53.Image")));
			this->pictureBox53->Location = System::Drawing::Point(34, 11);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(19, 17);
			this->pictureBox53->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox53->TabIndex = 9;
			this->pictureBox53->TabStop = false;
			// 
			// comboBox4
			// 
			this->comboBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->comboBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->ForeColor = System::Drawing::SystemColors::Info;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Public", L"Friends", L"Only me" });
			this->comboBox4->Location = System::Drawing::Point(173, 192);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(109, 23);
			this->comboBox4->TabIndex = 17;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBox4_SelectedIndexChanged);
			// 
			// pictureBox55
			// 
			this->pictureBox55->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox55.Image")));
			this->pictureBox55->Location = System::Drawing::Point(24, 31);
			this->pictureBox55->Name = L"pictureBox55";
			this->pictureBox55->Size = System::Drawing::Size(39, 140);
			this->pictureBox55->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox55->TabIndex = 13;
			this->pictureBox55->TabStop = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button12->Location = System::Drawing::Point(282, 192);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 16;
			this->button12->Text = L"Post";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MainForm::button12_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button11->Location = System::Drawing::Point(102, 192);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 15;
			this->button11->Text = L"Photo";
			this->toolTip1->SetToolTip(this->button11, L"Photo Post");
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MainForm::button11_Click);
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label72->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label72->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label72->Location = System::Drawing::Point(571, 481);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(48, 17);
			this->label72->TabIndex = 0;
			this->label72->Text = L"Privacy";
			this->label72->Click += gcnew System::EventHandler(this, &MainForm::label70_Click);
			// 
			// comboBox7
			// 
			this->comboBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->comboBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox7->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(646, 136);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(145, 21);
			this->comboBox7->TabIndex = 28;
			this->comboBox7->Visible = false;
			this->comboBox7->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBox7_SelectedIndexChanged);
			// 
			// pictureBox65
			// 
			this->pictureBox65->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->pictureBox65->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox65->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox65.Image")));
			this->pictureBox65->Location = System::Drawing::Point(791, 459);
			this->pictureBox65->Name = L"pictureBox65";
			this->pictureBox65->Size = System::Drawing::Size(18, 17);
			this->pictureBox65->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox65->TabIndex = 27;
			this->pictureBox65->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox65, L"Confirm Saved");
			this->pictureBox65->Visible = false;
			this->pictureBox65->Click += gcnew System::EventHandler(this, &MainForm::pictureBox65_Click);
			// 
			// pictureBox64
			// 
			this->pictureBox64->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->pictureBox64->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox64->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox64.Image")));
			this->pictureBox64->Location = System::Drawing::Point(790, 241);
			this->pictureBox64->Name = L"pictureBox64";
			this->pictureBox64->Size = System::Drawing::Size(18, 18);
			this->pictureBox64->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox64->TabIndex = 26;
			this->pictureBox64->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox64, L"Confirm Saved");
			this->pictureBox64->Visible = false;
			this->pictureBox64->Click += gcnew System::EventHandler(this, &MainForm::pictureBox64_Click);
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->textBox17->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox17->Location = System::Drawing::Point(647, 158);
			this->textBox17->Multiline = true;
			this->textBox17->Name = L"textBox17";
			this->textBox17->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox17->Size = System::Drawing::Size(143, 100);
			this->textBox17->TabIndex = 22;
			this->textBox17->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox17_TextChanged);
			// 
			// pictureBox58
			// 
			this->pictureBox58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->pictureBox58->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox58->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox58.Image")));
			this->pictureBox58->Location = System::Drawing::Point(789, 106);
			this->pictureBox58->Name = L"pictureBox58";
			this->pictureBox58->Size = System::Drawing::Size(16, 15);
			this->pictureBox58->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox58->TabIndex = 20;
			this->pictureBox58->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox58, L"Edit Stories");
			this->pictureBox58->Click += gcnew System::EventHandler(this, &MainForm::pictureBox58_Click);
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label68->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label68->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label68->Location = System::Drawing::Point(656, 104);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(57, 20);
			this->label68->TabIndex = 19;
			this->label68->Text = L"Stories";
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->textBox18->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox18->Location = System::Drawing::Point(647, 314);
			this->textBox18->Multiline = true;
			this->textBox18->Name = L"textBox18";
			this->textBox18->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox18->Size = System::Drawing::Size(141, 163);
			this->textBox18->TabIndex = 23;
			this->textBox18->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox18_TextChanged);
			// 
			// pictureBox59
			// 
			this->pictureBox59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->pictureBox59->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox59->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox59.Image")));
			this->pictureBox59->Location = System::Drawing::Point(788, 294);
			this->pictureBox59->Name = L"pictureBox59";
			this->pictureBox59->Size = System::Drawing::Size(16, 16);
			this->pictureBox59->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox59->TabIndex = 21;
			this->pictureBox59->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox59, L"Edit Games");
			this->pictureBox59->Click += gcnew System::EventHandler(this, &MainForm::pictureBox59_Click);
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->label69->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label69->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label69->Location = System::Drawing::Point(656, 292);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(113, 20);
			this->label69->TabIndex = 19;
			this->label69->Text = L"Today\'s Games";
			// 
			// pictureBox57
			// 
			this->pictureBox57->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox57.Image")));
			this->pictureBox57->Location = System::Drawing::Point(645, 284);
			this->pictureBox57->Name = L"pictureBox57";
			this->pictureBox57->Size = System::Drawing::Size(164, 194);
			this->pictureBox57->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox57->TabIndex = 18;
			this->pictureBox57->TabStop = false;
			// 
			// pictureBox56
			// 
			this->pictureBox56->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox56.Image")));
			this->pictureBox56->Location = System::Drawing::Point(645, 97);
			this->pictureBox56->Name = L"pictureBox56";
			this->pictureBox56->Size = System::Drawing::Size(164, 163);
			this->pictureBox56->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox56->TabIndex = 18;
			this->pictureBox56->TabStop = false;
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &MainForm::timer2_Tick);
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label39->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label39->Location = System::Drawing::Point(299, 299);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(63, 26);
			this->label39->TabIndex = 18;
			this->label39->Text = L"UserID";
			this->label39->Click += gcnew System::EventHandler(this, &MainForm::label39_Click);
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->label40->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label40->Location = System::Drawing::Point(299, 342);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(90, 26);
			this->label40->TabIndex = 19;
			this->label40->Text = L"* * * * * *";
			this->label40->Click += gcnew System::EventHandler(this, &MainForm::label40_Click);
			// 
			// timer3
			// 
			this->timer3->Tick += gcnew System::EventHandler(this, &MainForm::timer3_Tick);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MainForm::openFileDialog1_FileOk);
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			this->openFileDialog2->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MainForm::openFileDialog2_FileOk);
			// 
			// openFileDialog3
			// 
			this->openFileDialog3->FileName = L"openFileDialog3";
			this->openFileDialog3->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MainForm::openFileDialog3_FileOk);
			// 
			// openFileDialog4
			// 
			this->openFileDialog4->FileName = L"openFileDialog4";
			this->openFileDialog4->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MainForm::openFileDialog4_FileOk);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(987, 507);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Linkify";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox73))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->EndInit();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->EndInit();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Diagnostics::Process::Start("https://www.facebook.com/imhomee/");
	}
	public: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		//login name
		if (textBox1->Enabled == true) {
			label39->Hide();
		}
		else {
			label39->Show();
		}
	}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		//login password
		if (textBox2->Enabled == true) {
			label40->Hide();
		}
		else {
			label40->Show();
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//register account button
		if (panel4->Location != Point(962, 25)&& (panel4->Location == Point(699, 25))) {
			panel4->Location = Point(699, 25);
			while (panel4->Location.X != 962) {
				panel4->Location = Point(panel4->Location.X + 1, 25);
				//System::Threading::Thread::Sleep(1);
				Sleep(0.5);
			}
		}
		if (panel2->Location == Point(26, 25)&& panel2->Location != Point(-211, 25)) {
			panel2->Location = Point(26, 25);
			while (panel2->Location.X != -211) {
				panel2->Location = Point(panel2->Location.X - 1, 25);
				//System::Threading::Thread::Sleep(1);
				Sleep(1);
			}
		}
		Refresh();
		label55->Hide();
		label56->Hide();
		label57->Hide();
		textBox3->Text = "User Name ...";
		textBox4->Text = "UserID";
		textBox5->Text = "";
		label58->Show();
		textBox6->Text = "dd/mm/yyyy";
		textBox7->Text = "Answer ...";
		comboBox1->Text = "---";
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		pictureBox12->Hide();
		progressBar1->Value = 0;
		panel1->Location = Point(27, 508);
		while (panel1->Location.Y != 227) {
			panel1->Location = Point(27, panel1->Location.Y - 1);
			System::Threading::Thread::Sleep(0.5);
		}
		label55->Hide(); label56->Hide(); label57->Hide();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//login button
		
		//string emailSave;
		//textBox13->Enabled = false;   //intro
		
		panel16->Hide();
		panel15->Hide();
		label84->Hide();
		splitContainer1->Hide();

		String^ a = textBox1->Text;
		std::string b = msclr::interop::marshal_as<std::string>(a);
		String^ x = textBox2->Text;
		std::string y = msclr::interop::marshal_as<std::string>(x);
		std::ifstream out;
		out.open("register.txt");
		String^ str1; String^ str2; String^ str3; String^ str75;
		std::string name;
		std::string email, tempEmail = "http:\/\/linkify.com\/";
		std::string pass, u, br, dob;
		bool check1 = false, check2 = false;
		//int fc = 0, fc2 = 0;
		out >> name;
		out >> email;
		out >> pass;
		out >> br;
		out >> dob;
		//getline(out, pass, '%');
		getline(out, u);
		while (!out.eof())
		{
			if (email == b&&pass==y)
			{
				panel6->Show();
				this->timer2->Start();  
				progressBar2->Show();
				str1 = gcnew String(name.c_str());
				str2 = gcnew String(email.c_str());
				//str3 = gcnew String(dob.c_str());
				label22->Text = str1;
				label42->Text = str1;
				label100->Text = str1;
				//label44->Text = str3;
				label46->Text = str2;



				label101->Text = str2;
				tempEmail = tempEmail + email;
				str75 = gcnew String(tempEmail.c_str());
				label102->Text = str75;



				str3 = gcnew String(dob.c_str());
				label44->Text = str3;
				textBox14->Text = "";
				textBox15->Text = "";
				comboBox3->Text = "---";
				pictureBox45->Hide();
				pictureBox46->Hide();
				pictureBox41->Show();
				
				////////////////////////////////////////////////////////////
				label83->Parent = pictureBox67;
				//label83->BackColor = gcnew System::Drawing::Color->Transparent;
				label83->Text = str1;
				label84->Parent = pictureBox67;

				int axis = 280;
			    int Temp = 0;
				//String^ c = username->Text;
				//std::string d = msclr::interop::marshal_as<string>(c);
				std::ifstream READ, VAR;
				READ.open("FriendsStatus.txt");
				VAR.open("profilePic.txt");
				std::string X1;
				std::string X2;
				std::string X3;    // spost the status in the textbox
				std::string AA1;
				std::string BB1;
				String ^str3;
				String ^str4;
				String ^str5;
				READ >> X1;
				getline(READ, X2, ';');
				getline(READ, X3);
				VAR >> AA1;
				getline(VAR, BB1);
				while (!READ.eof())
				{
					valueCount += 340;
					str3 = gcnew String(X2.c_str());
					String ^str2 = gcnew String(X1.c_str());
					str5 = gcnew String(X3.c_str());

					//newsfeed


					while (!VAR.eof())
					{
						if (X1 == AA1)
						{
							str4 = gcnew String(BB1.c_str());
						}

						VAR >> AA1;
						getline(VAR, BB1);

					}
					VAR.close();

					array<PictureBox^> ^ pBox1 = gcnew array<PictureBox^>(100);
					pBox1[Temp] = gcnew PictureBox();
					pBox1[Temp]->Size = System::Drawing::Size(50, 50);
					pBox1[Temp]->Visible = true;
					pBox1[Temp]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
					pBox1[Temp]->ImageLocation = str4;
				    panel13->Controls->Add(pBox1[Temp]);
					//panel16->Controls->Add(pBox1[Temp]);

					array<Label^> ^lb = gcnew array<Label^>(100);
					lb[Temp] = gcnew Label();
					lb[Temp]->Visible = true;
					lb[Temp]->Text = str2;
					panel13->Controls->Add(lb[Temp]);
					//panel16->Controls->Add(lb[Temp]);

					array<TextBox^> ^status = gcnew array<TextBox^>(100);
					status[Temp] = gcnew TextBox();
					status[Temp]->Visible = true;
					status[Temp]->Multiline = true;
					status[Temp]->Size = System::Drawing::Size(239, 47);
					status[Temp]->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
					status[Temp]->Text = str3;
					status[Temp]->Enabled = false;
					panel13->Controls->Add(status[Temp]);
				//	panel16->Controls->Add(status[Temp]);

					array<PictureBox^> ^pBox = gcnew array<PictureBox^>(100);
					pBox[Temp] = gcnew PictureBox();
					pBox[Temp]->Size = System::Drawing::Size(150, 150);
					pBox[Temp]->Visible = true;                                                     //////////////////////////////////////
					pBox[Temp]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
					pBox[Temp]->ImageLocation = str5;



					array<CheckBox^> ^check = gcnew array<CheckBox^>(100);
					check[Temp] = gcnew CheckBox();
					check[Temp]->Visible = true;
					check[Temp]->Text = "Like";
					panel13->Controls->Add(check[Temp]);
				//	panel16->Controls->Add(check[Temp]);

					array<Label^> ^like = gcnew array<Label^>(100);
					like[Temp] = gcnew Label();
					like[Temp]->Visible = true;
					like[Temp]->Text = "0 Likes";
					panel13->Controls->Add(like[Temp]);
				//	panel16->Controls->Add(like[Temp]);


					array<Label^> ^noComment = gcnew array<Label^>(100);
					noComment[Temp] = gcnew Label();
					noComment[Temp]->Visible = true;
					noComment[Temp]->Text = "	0 Comments";
					panel13->Controls->Add(noComment[Temp]);
					//panel16->Controls->Add(noComment[Temp]);


					array<Label^> ^comment = gcnew array<Label^>(100);
					comment[Temp] = gcnew Label();
					comment[Temp]->Visible = true;
					comment[Temp]->Text = "Comments";
					panel13->Controls->Add(comment[Temp]);
				//	panel16->Controls->Add(comment[Temp]);


					array<TextBox^> ^txtcomment = gcnew array<TextBox^>(100);
					txtcomment[Temp] = gcnew TextBox();
					txtcomment[Temp]->Visible = true;
					txtcomment[Temp]->Multiline = true;
					txtcomment[Temp]->Size = System::Drawing::Size(239, 47);
					txtcomment[Temp]->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
					panel13->Controls->Add(txtcomment[Temp]);
					//panel16->Controls->Add(txtcomment[Temp]);


					array<TextBox^> ^ucomment = gcnew array<TextBox^>(100);
					ucomment[Temp] = gcnew TextBox();
					ucomment[Temp]->Visible = true;
					ucomment[Temp]->Multiline = true;
					ucomment[Temp]->Size = System::Drawing::Size(239, 21);
					ucomment[Temp]->ScrollBars = System::Windows::Forms::ScrollBars::Both;
					panel13->Controls->Add(ucomment[Temp]);
				//	panel16->Controls->Add(ucomment[Temp]);


					array<Button^> ^button = gcnew array<Button^>(100);
					button[Temp] = gcnew Button();
					button[Temp]->Size = System::Drawing::Size(88, 23);
					button[Temp]->Visible = true;
					button[Temp]->Text = "Comment";
					panel13->Controls->Add(button[Temp]);
				//	panel16->Controls->Add(button[Temp]);


					if (X3 == "openFileDialog2")
					{

						pBox1[Temp]->Location = Point(3, axis);
						lb[Temp]->Location = Point(61, axis + 10);
						status[Temp]->Location = Point(3, axis + 70);
						check[Temp]->Location = Point(3, axis + 140);
						like[Temp]->Location = Point(3, axis + 120);
						noComment[Temp]->Location = Point(120, axis + 120);
						comment[Temp]->Location = Point(120, axis + 140);
						txtcomment[Temp]->Location = Point(3, axis + 170);
						ucomment[Temp]->Location = Point(3, axis + 220);
						button[Temp]->Location = Point(3, axis + 240);
						axis = axis + 340;
					}
					else
					{

						pBox1[Temp]->Location = Point(3, axis);
						lb[Temp]->Location = Point(61, axis + 10);
						status[Temp]->Location = Point(3, axis + 70);
						pBox[Temp]->Location = Point(3, axis + 140);
						panel13->Controls->Add(pBox[Temp]);
					//	panel16->Controls->Add(pBox[Temp]);

						check[Temp]->Location = Point(3, axis + 320);
						like[Temp]->Location = Point(3, axis + 300);
						noComment[Temp]->Location = Point(120, axis + 300);
						comment[Temp]->Location = Point(120, axis + 320);
						txtcomment[Temp]->Location = Point(3, axis + 350);
						ucomment[Temp]->Location = Point(3, axis + 400);
						button[Temp]->Location = Point(3, axis + 420);
						axis = axis + 520;
					}


					READ >> X1;
					getline(READ, X2, ';');
					getline(READ, X3);
					++Temp;
					VAR.open("profilePic.txt");
					
				}

				//////////////////////////////////////////////////////

			/*	String^ STR5 = label46->Text;
				std::string ussser = msclr::interop::marshal_as<std::string>(STR5);*/
				
				String^ STR6;
				int FIRSTcheck = 0, SECONDcheck = 0;
				std::ofstream INPUT;
				std::ifstream OUTput;

				INPUT.open("intro.txt", std::ios::app);
				OUTput.open("intro.txt");

				std::string iddd1, introduc;
				
				while (!OUTput.eof())
				{
					OUTput >> iddd1;
					//OUTput >> introduc;
					getline(OUTput, introduc, '&');
					if (b == iddd1)
					{
						STR6 = gcnew String(introduc.c_str());
						textBox13->Text = STR6;
						FIRSTcheck = 0;
						SECONDcheck = 0;
						break;
					}
					else {
						SECONDcheck = 1;
						FIRSTcheck = 1;
					}
					OUTput >> iddd1;
					//	OUTput >> introduc;
					getline(OUTput, introduc, '&');
				}

				if (FIRSTcheck == 1 && SECONDcheck == 1) {
					INPUT << b;
					INPUT << " ";
					INPUT << "Write Something";
					INPUT << " &\n";
					introduc = "Write Something";
					STR6 = gcnew String(introduc.c_str());
					textBox13->Text = STR6;
					INPUT.close();
					OUTput.close();
				}


				//////////////////////////////////////////////////////////////

				////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				
				//Conatcts show message
				int AAXiS = 15;
				
				int tMp = 0;
				String^ c = textBox1->Text;
				std::string ussr = msclr::interop::marshal_as<std::string>(c);
				std::ifstream parhLe, picParhLe;
				parhLe.open("messages.txt");
				picParhLe.open("profilePic.txt");
				std::string K1;
				std::string K2;
				std::string K3;
				std::string L1;
				std::string L2;
				String ^str100;
				String ^str101;

				parhLe >> K1;
				parhLe >> K2;
				getline(parhLe, K3);
				picParhLe >> L1;
				getline(picParhLe, L2);

				while (!parhLe.eof())
				{


					if (ussr == K1) {
						//valueCount += 48;
						str100 = gcnew String(K2.c_str());
						if (tMp != 0) {
							tMp++;

						}
						
						AAXiS = AAXiS + 42;
					}
					else {
						K1 = "";
						K2 = "";
					}
					while (!picParhLe.eof())
					{
						if (K2 == L1)
						{
							str101 = gcnew String(L2.c_str());
						}

						picParhLe >> L1;
						getline(picParhLe, L2);

					}
					picParhLe.close();

					array<PictureBox^> ^ pBox1 = gcnew array<PictureBox^>(100);
					pBox1[tMp] = gcnew PictureBox();
					pBox1[tMp]->Size = System::Drawing::Size(25, 25);
					pBox1[tMp]->Visible = true;
					pBox1[tMp]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
					pBox1[tMp]->ImageLocation = str101;
					panel12->Controls->Add(pBox1[tMp]);

					array<Label^> ^lb = gcnew array<Label^>(100);
					lb[tMp] = gcnew Label();
					lb[tMp]->Visible = true;
					lb[tMp]->Text = str100;
					panel12->Controls->Add(lb[tMp]);
					pBox1[tMp]->Location = Point(9, AAXiS);
					lb[tMp]->Location = Point(40, AAXiS + 10);

					

					parhLe >> K1;
					parhLe >> K2;
					getline(parhLe, K3);

					picParhLe.open("profilePic.txt");


				}
				parhLe.close();



				////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

				progressBar2->Value = 0;
				check1 = false;
				check2 = true;
				//fc = 0; fc2 = 1;
				break;
			}
			else {
				check1 = true;
				check2 = false;
			}
			//if (check == false) { break; }
			out >> name;
			out >> email;
			//getline(out, email, '$');
			//getline(out, pass, '%');
			out >> pass;
			out >> br;
			out >> dob;
			getline(out, u);

		}
		if (check1 == true && check2==false) {
			MessageBox::Show("Login Failed !!!");
		}
		if (check1 == false && check2 == true) {
			String^ str5;

			String^ str6;
			int firstCheck=0, secondCheck = 0;
			std::ofstream in;
			std::ifstream output;
			
			in.open("about.txt", std::ios::app);
			output.open("about.txt");
			
			std::string x1, x2, x3, x4, x5, x6;
			
			while (!output.eof())
			{
				output >> x1;
				output >> x2;
				output >> x3;
				output >> x4;
				output >> x5;
				getline(output, x6, '.');
				if (b == x2)
				{
					str6 = gcnew String(x5.c_str());
					str5 = gcnew String(x3.c_str());
					label43->Text = str5;
					label45->Text = str6;
					firstCheck = 0;
					secondCheck = 0;
					break;
				}
				else {
					secondCheck = 1;
					firstCheck = 1;
				}
				output >> x1;
				output >> x2;
				output >> x3;
				output >> x4;
				output >> x5;

				getline(output, x6, '.');
			}

			if (firstCheck == 1 && secondCheck == 1) {
				in << name;
				in << " ";
				in << email;
				in << " ";
				in << "Phone#";
				in << " ";
				in << dob;
				in << " ";
				in << "Hometown";
				in << " .\n";
				in.close();
				output.close();
			}

			/////////////////////////////////////////////////////////////
			//login image
			
			std::string picAdd = "C:\\Users\\eizel\\Pictures\\Project Pics\\tempProfile.png";
			////////////////////////////////////////////////////

			int checker1 = 0, checker2 = 0;
			std::ofstream INput;
			std::ifstream OUput;

			INput.open("profilePic.txt", std::ios::app);
			OUput.open("profilePic.txt");

			std::string y1, y2;
			OUput >> y1;
			getline(OUput, y2);
			while (!OUput.eof())
			{
				
				if (email == y1)
				{
					checker1 = 0;
					checker2 = 0;
					String^ str10;
					str10 = gcnew String(y2.c_str());
					pictureBox38->Show();
					pictureBox38->ImageLocation = str10;
					pictureBox27->ImageLocation = str10;
					pictureBox54->ImageLocation = str10;
					pictureBox68->ImageLocation = str10;
					break;
				}
				else {
					checker2 = 1;
					checker1 = 1;
				}
				OUput >> y1;
				getline(OUput, y2);
			}

			if (checker1 == 1 && checker2 == 1) {
				INput << email;
				INput << " ";
				INput << picAdd;
				INput << "\n";
				INput.close();
				OUput.close();
				String^ str10;
				str10 = gcnew String(picAdd.c_str());
				pictureBox38->Show();
				pictureBox38->ImageLocation = str10;
				
			}
			





			///////////////////////////////////////////////////////////////////////////////////////////////////////////


			std::string defaultCover = "C:\\Users\\eizel\\Pictures\\Project Pics\\welcome.jpg";
			int checkKar1 = 0, checkKar2 = 0;
			std::ofstream inPUTT;
			std::ifstream ouTPUTT;

			inPUTT.open("coverPic.txt", std::ios::app);
			ouTPUTT.open("coverPic.txt");

			std::string YYY1, YYY2;
			
			while (!ouTPUTT.eof())
			{
				ouTPUTT >> YYY1;
				getline(ouTPUTT, YYY2);
				if (email == YYY1)
				{
					checkKar1 = 0;
					checkKar2 = 0;
					String^ str10;
					str10 = gcnew String(YYY2.c_str());
					pictureBox67->ImageLocation = str10;
					break;
				}
				else {
					checkKar2 = 1;
					checkKar1 = 1;
				}
				/*ouTPUTT >> YYY1;
				getline(ouTPUTT, YYY2);*/
			}

			if (checkKar1 == 1 && checkKar2 == 1) {
				inPUTT << email;
				inPUTT << " ";
				inPUTT << defaultCover;
				inPUTT << "\n";
				inPUTT.close();
				ouTPUTT.close();
				String^ str10;
				str10 = gcnew String(defaultCover.c_str());
				pictureBox67->ImageLocation = str10;

			}

			


			/////////////////////////////////////////////////////////////////////////////////////////////////

			int AXIS = 280;
			int TEMP = 0;
			//String^ c = username->Text;
			//std::string d = msclr::interop::marshal_as<string>(c);
			std::ifstream READ, VAR;
			READ.open("FriendsStatus.txt");
			VAR.open("profilePic.txt");
			std::string X1;
			std::string X2;
			std::string X3;    // spost the status in the textbox
			std::string AA1;
			std::string BB1;
			String ^str3;
			String ^str4;
			String ^str50;
			//bool chal1 = false, chal2 = false;
			while (!READ.eof())
			{
				READ >> X1;
				getline(READ, X2, ';');
				getline(READ, X3);
				VAR >> AA1;
				getline(VAR, BB1);
				if (X1 == b) {
					valueCount += 340;
					str3 = gcnew String(X2.c_str());
					String ^str2 = gcnew String(X1.c_str());
					str50 = gcnew String(X3.c_str());

					//newsfeed


					while (!VAR.eof())
					{
						if (X1 == AA1)
						{
							str4 = gcnew String(BB1.c_str());
						}

						VAR >> AA1;
						getline(VAR, BB1);

					}
					VAR.close();

					array<PictureBox^> ^ pBox1 = gcnew array<PictureBox^>(100);
					pBox1[TEMP] = gcnew PictureBox();
					pBox1[TEMP]->Size = System::Drawing::Size(50, 50);
					pBox1[TEMP]->Visible = true;
					pBox1[TEMP]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
					pBox1[TEMP]->ImageLocation = str4;
					//panel13->Controls->Add(pBox1[TEMP]);
					panel15->Controls->Add(pBox1[TEMP]);

					array<Label^> ^lb = gcnew array<Label^>(100);
					lb[TEMP] = gcnew Label();
					lb[TEMP]->Visible = true;
					lb[TEMP]->Text = str2;
					//panel13->Controls->Add(lb[TEMP]);
					panel15->Controls->Add(lb[TEMP]);

					array<TextBox^> ^status = gcnew array<TextBox^>(100);
					status[TEMP] = gcnew TextBox();
					status[TEMP]->Visible = true;
					status[TEMP]->Multiline = true;
					status[TEMP]->Size = System::Drawing::Size(239, 47);
					status[TEMP]->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
					status[TEMP]->Text = str3;
					status[TEMP]->Enabled = false;
					//panel13->Controls->Add(status[TEMP]);
					panel15->Controls->Add(status[TEMP]);

					array<PictureBox^> ^pBox = gcnew array<PictureBox^>(100);
					pBox[TEMP] = gcnew PictureBox();
					pBox[TEMP]->Size = System::Drawing::Size(150, 150);
					pBox[TEMP]->Visible = true;                                                     //////////////////////////////////////
					pBox[TEMP]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
					pBox[TEMP]->ImageLocation = str50;



					array<CheckBox^> ^check = gcnew array<CheckBox^>(100);
					check[TEMP] = gcnew CheckBox();
					check[TEMP]->Visible = true;
					check[TEMP]->Text = "Like";
					//panel13->Controls->Add(check[TEMP]);
					panel15->Controls->Add(check[TEMP]);

					array<Label^> ^like = gcnew array<Label^>(100);
					like[TEMP] = gcnew Label();
					like[TEMP]->Visible = true;
					like[TEMP]->Text = "0 Likes";
					//panel13->Controls->Add(like[TEMP]);
					panel15->Controls->Add(like[TEMP]);


					array<Label^> ^noComment = gcnew array<Label^>(100);
					noComment[TEMP] = gcnew Label();
					noComment[TEMP]->Visible = true;
					noComment[TEMP]->Text = "	0 Comments";
					//panel13->Controls->Add(noComment[TEMP]);
					panel15->Controls->Add(noComment[TEMP]);


					array<Label^> ^comment = gcnew array<Label^>(100);
					comment[TEMP] = gcnew Label();
					comment[TEMP]->Visible = true;
					comment[TEMP]->Text = "Comments";
					//panel13->Controls->Add(comment[TEMP]);
					panel15->Controls->Add(comment[TEMP]);


					array<TextBox^> ^txtcomment = gcnew array<TextBox^>(100);
					txtcomment[TEMP] = gcnew TextBox();
					txtcomment[TEMP]->Visible = true;
					txtcomment[TEMP]->Multiline = true;
					txtcomment[TEMP]->Size = System::Drawing::Size(239, 47);
					txtcomment[TEMP]->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
					//panel13->Controls->Add(txtcomment[TEMP]);
					panel15->Controls->Add(txtcomment[TEMP]);


					array<TextBox^> ^ucomment = gcnew array<TextBox^>(100);
					ucomment[TEMP] = gcnew TextBox();
					ucomment[TEMP]->Visible = true;
					ucomment[TEMP]->Multiline = true;
					ucomment[TEMP]->Size = System::Drawing::Size(239, 21);
					ucomment[TEMP]->ScrollBars = System::Windows::Forms::ScrollBars::Both;
					//panel13->Controls->Add(ucomment[TEMP]);
					panel15->Controls->Add(ucomment[TEMP]);


					array<Button^> ^button = gcnew array<Button^>(100);
					button[TEMP] = gcnew Button();
					button[TEMP]->Size = System::Drawing::Size(88, 23);
					button[TEMP]->Visible = true;
					button[TEMP]->Text = "Comment";
					//	panel13->Controls->Add(button[TEMP]);
					panel15->Controls->Add(button[TEMP]);


					if (X3 == "openFileDialog2")
					{

						pBox1[TEMP]->Location = Point(20, AXIS);
						lb[TEMP]->Location = Point(77, AXIS + 10);
						status[TEMP]->Location = Point(20, AXIS + 70);
						check[TEMP]->Location = Point(20, AXIS + 140);
						like[TEMP]->Location = Point(20, AXIS + 120);
						noComment[TEMP]->Location = Point(136, AXIS + 120);
						comment[TEMP]->Location = Point(136, AXIS + 140);
						txtcomment[TEMP]->Location = Point(20, AXIS + 170);
						ucomment[TEMP]->Location = Point(20, AXIS + 220);
						button[TEMP]->Location = Point(20, AXIS + 240);
						AXIS = AXIS + 340;
					}
					else
					{

						pBox1[TEMP]->Location = Point(20, AXIS);
						lb[TEMP]->Location = Point(77, AXIS + 10);
						status[TEMP]->Location = Point(20, AXIS + 70);
						pBox[TEMP]->Location = Point(20, AXIS + 140);
						//panel13->Controls->Add(pBox[TEMP]);
						panel15->Controls->Add(pBox[TEMP]);

						check[TEMP]->Location = Point(20, AXIS + 320);
						like[TEMP]->Location = Point(20, AXIS + 300);
						noComment[TEMP]->Location = Point(136, AXIS + 300);
						comment[TEMP]->Location = Point(136, AXIS + 320);
						txtcomment[TEMP]->Location = Point(20, AXIS + 350);
						ucomment[TEMP]->Location = Point(20, AXIS + 400);
						button[TEMP]->Location = Point(20, AXIS + 420);
						AXIS = AXIS + 520;
					}


					READ >> X1;
					getline(READ, X2, ';');
					getline(READ, X3);
					++TEMP;
					VAR.open("profilePic.txt");
					//chal1 = false; chal2 = true;
				}
				else {
					continue;
				}
			}
			/*if (chal1 == true && chal2 == false) {
				std::ofstream inPut;
				inPut.open("FriendsStatus.txt",std::ios::app);
				inPut << b << " " << ";\n";
				inPut.close();
			}*/
			////////////////////////////////////////////////////////////////////////////////////////////////
		}
		textBox17->Enabled = false;
		comboBox7->Show();
		comboBox7->Text = "Stories...";
		std::ifstream myfile;
		std::string strline;
		myfile.open("C:\\Users\\eizel\\Documents\\Visual Studio 2015\\Projects\\Project10\\Project10\\stories.txt", std::ifstream::in); //Reading txt file
		if (myfile.is_open())
		{
			//MessageBox::Show("File is open"); //checking if txt file loaded
		}
		else
		{
			MessageBox::Show("File is not open"); //loading failed
		}
		//strings to use as values for items in txt
		String^ itemname;
		String^ sItem, ^sData;
		// read lines from text file
		for (std::string sline; std::getline(myfile, sline); )
		{
			itemname = gcnew String(sline.c_str());
			int nIndex = itemname->IndexOf(' ');
			if (nIndex > 0)
			{
				sItem = itemname->Substring(0, nIndex);
				sData = itemname->Substring(nIndex + 1);
				comboBox7->Items->Add(gcnew ItemData(itemname->Substring(0, nIndex),
					itemname->Substring(nIndex + 1)));
			}
			else
			{
				sItem = itemname;
				sData = "";
				comboBox7->Items->Add(gcnew ItemData(itemname, ""));
			}
		}
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


		

		////////////////////////////////////////////////////////////////////////////////////////////////////////////
	}
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		//register panel
	}
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		//username in register 

	}
	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		//email address in register
		String^ a = textBox4->Text;
		std::string b = msclr::interop::marshal_as<std::string>(a);
		std::ifstream out;
		out.open("register.txt");
		std::string name;
		std::string email;
		std::string pass, u;
		out >> name;
		out >> email;
		getline(out, pass, '%');
		getline(out, u);
		while (!out.eof())
		{

			if (b == email)
			{
				MessageBox::Show("Username already exist");
				textBox4->Text = "";

			}
			out >> name;
			out >> email;
			getline(out, pass, '%');
			getline(out, u);
		}
	}

private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//password in register
	if (textBox5->Enabled == true) {
		label58->Hide();
	}
	else {
		label58->Show();
	}
	String^ str;
	str = textBox5->Text;
	std::string b = msclr::interop::marshal_as<std::string>(str);
	int len = b.length();
	
    if (len >=1&&len<6) {
		label55->Show();
		label56->Hide();
		label57->Hide();
	}
	else if (len >= 6 && len < 8) {
		label56->Show();
		label55->Hide();
		label57->Hide();
	}
	else if (len >= 8) {
		label57->Show();
		label55->Hide();
		label56->Hide();
	}

}
private: System::Void pictureBox11_Click(System::Object^  sender, System::EventArgs^  e) {
	//signup button in register
	label58->Show();
	if (textBox3->Text == "" || textBox4->Text == "" || 
		textBox5->Text == "" || textBox3->Text == "User Name ..." 
		|| textBox4->Text == "UserID" || textBox5->Text == "Pass"||
		textBox6->Text == "dd/mm/yyyy"||textBox6->Text == ""|| textBox7->Text == ""|| 
		textBox7->Text == "Answer ..." && (checkBox1->Checked == false|| checkBox2->Checked == false))
	{
		MessageBox::Show("Fill username, email and password !!!");
	}
	else if (checkBox1->Checked == true && checkBox2->Checked == true) {
		MessageBox::Show("Linkify don't allow to select both Gender, Select ONE option !!!");
	}
	else {
		
		///////////////////////////////////////////
		std::ofstream in;
		in.open("register.txt", std::ios::app);
		String^ a = textBox3->Text;
		std::string b = msclr::interop::marshal_as<std::string>(a);
		in << b;
		in << " ";
		a = textBox4->Text;
		b = msclr::interop::marshal_as<std::string>(a);
		in << b;
		in << " ";
		a = textBox5->Text;
		b = msclr::interop::marshal_as<std::string>(a);
		in << b;
		in << " % ";
		a = textBox6->Text;
		b = msclr::interop::marshal_as<std::string>(a);
		in << b;
		in << " ";
		a = comboBox1->SelectedItem->ToString();
		b = msclr::interop::marshal_as<std::string>(a);
		in << b;
		in << " ";
		a = textBox7->Text;
		b = msclr::interop::marshal_as<std::string>(a);
		in << b;
		in << " .\n";
		in.close();
		this->timer1->Start();
		progressBar1->Show();
		//delete this;
		////////////////////////////////////////////
		
	}
}
private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
	//prograsss bar at register
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	//timer for register prograss bar
	//this->progressBar1->Increment(1); 
	progressBar1->Maximum = 300;
	progressBar1->PerformStep();
	if (progressBar1->Value == 300) {
		pictureBox12->Show();
		progressBar1->Hide();
		timer1->Enabled = false;
		Refresh();
		//panel1->Hide();
		panel1->Location = Point(27, 227);
		Sleep(500);
		while (panel1->Location.Y != 508) {
			panel1->Location = Point(27, panel1->Location.Y + 1);
		}
		label55->Hide();
		label56->Hide();
		label57->Hide();
	}
	
}
private: System::Void pictureBox12_Click(System::Object^  sender, System::EventArgs^  e) {
	//yes when register bar complete
}
private: System::Void textBox3_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	
	if (textBox3->Text->Equals(NULL) == true || textBox3->Text->Equals("") == true)
	{
		textBox3->Text = "User Name ...";
	}
}
private: System::Void textBox3_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (textBox3->Text->Equals("User Name ...") == true)
	{
		textBox3->Text = "";
	}
}
private: System::Void textBox4_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (textBox4->Text->Equals("UserID") == true)
	{
		textBox4->Text = "";
	}
}
private: System::Void textBox4_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (textBox4->Text->Equals(NULL) == true || textBox4->Text->Equals("") == true)
	{
		textBox4->Text = "UserID";
	}
}
private: System::Void textBox5_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (textBox5->Text->Equals("") == true)
	{
		textBox5->Text = "";
		label58->Hide();
		label55->Hide(); label56->Hide(); label57->Hide();
	}
}
private: System::Void textBox5_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (textBox5->Text->Equals(NULL) == true || textBox5->Text->Equals("") == true)
	{
		textBox5->Text = "";
		label58->Show();
		label55->Hide(); label56->Hide(); label57->Hide();
	}
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
	//sign in side bar menu
	panel2->Location = Point(26, 25);
	while (panel2->Location.X != -211) {
		panel2->Location = Point(panel2->Location.X - 1, 25);
		//System::Threading::Thread::Sleep(1);
		Sleep(0.5);
	}
	textBox1->Text = "Sign in here";
}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
	//home in side bar menu
	
}
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
	//about us side bar menu
}
private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
	//follow us in side bar menu
}
private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
	//setting side bar menu
}
private: System::Void pictureBox18_Click(System::Object^  sender, System::EventArgs^  e) {
	//side menu start
	Refresh();
	panel2->Location = Point(-211, 25);
	while (panel2->Location.X != 26) {
		panel2->Location = Point(panel2->Location.X + 1, 25);
		//System::Threading::Thread::Sleep(1);
		Sleep(0.5);
	}
}
private: System::Void pictureBox19_Click(System::Object^  sender, System::EventArgs^  e) {
	//side menu close
	Refresh();
	panel2->Location = Point(26,25);
	while (panel2->Location.X != -211) {
		panel2->Location = Point(panel2->Location.X - 1, 25);
		//System::Threading::Thread::Sleep(1);
		Sleep(0.5);
	}
}
public: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (textBox1->Text->Equals(' ') == true|| textBox1->Text->Equals("Sign in here") == true|| textBox1->Text->Equals(" ") == true)
	{
		textBox1->Text = "";
		label39->Hide();
	}
}
public: System::Void textBox1_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (textBox1->Text->Equals(NULL) == true || textBox1->Text->Equals("") == true|| textBox1->Text->Equals("Sign in here") == true)
	{
		//textBox1->Text = "UserID ...";
		label39->Show();
	}
}
private: System::Void textBox2_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (textBox2->Text->Equals(" ") == true|| textBox2->Text->Equals(' ') == true)
	{
		textBox2->Text = "";
		label40->Hide();
	}

}
private: System::Void textBox2_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (textBox2->Text->Equals(NULL) == true || textBox2->Text->Equals("") == true)
	{
		//textBox2->Text = "Password";
		label40->Show();
	}
}
private: System::Void pictureBox20_Click(System::Object^  sender, System::EventArgs^  e) {
	//cancel register 
	panel1->Location = Point(27, 227);
	while (panel1->Location.Y != 508) {
		panel1->Location = Point(27, panel1->Location.Y + 1);
	}
}
private: System::Void label17_Click(System::Object^  sender, System::EventArgs^  e) {
	//forget password
	textBox8->Text = "UserID";
	textBox9->Text = "dd/mm/yyyy";
	textBox10->Text = "Answer ...";
	textBox11->Text = "Password";
	comboBox2->Text = "Security Question?";
	pictureBox23->Hide();
	pictureBox24->Hide();
	button4->Hide();
	label20->Hide();
	button5->Hide();
	textBox11->Hide();
	textBox8->Enabled = true;
	errorProvider1->SetError(textBox8, "");
	Refresh();
	panel4->Location = Point(962, 25);
	while (panel4->Location.X != 699) {
		panel4->Location = Point(panel4->Location.X - 1, 25);
		//System::Threading::Thread::Sleep(1);
		Sleep(0.5);
	}
}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//date of birth in register
	String^ str = textBox5->Text;
	std::string b = msclr::interop::marshal_as<std::string>(str);
	int len = b.length();
	if (len>=1 && len<6) {
		MessageBox::Show("Password must be 6 digits");
		textBox5->Text = ""; label58->Show();
	}
}
private: System::Void textBox6_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (textBox6->Text->Equals("dd/mm/yyyy") == true)
	{
		textBox6->Text = "";
	}
}
private: System::Void textBox6_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (textBox6->Text->Equals(NULL) == true || textBox6->Text->Equals("") == true)
	{
		textBox6->Text = "dd/mm/yyyy";
	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	//security question in register
}
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//security question answer in register
}
private: System::Void textBox7_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (textBox7->Text->Equals("Answer ...") == true)
	{
		textBox7->Text = "";
	}
}
private: System::Void textBox7_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (textBox7->Text->Equals(NULL) == true || textBox7->Text->Equals("") == true)
	{
		textBox7->Text = "Answer ...";
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	//check for male in register
}
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	//check for female
}
public: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//email in forget
	String^ a = textBox8->Text;
	std::string b = msclr::interop::marshal_as<std::string>(a);
	std::ifstream out;
	out.open("register.txt");
	std::string name;
	std::string email;
	std::string pass, u;
	out >> name;
	out >> email;
	getline(out, pass, '%');
	getline(out, u);
	while (!out.eof())
	{
		if (email == b)
		{
			pictureBox24->Hide();
			pictureBox23->Show();
			textBox8->Enabled = false;
		}
		//else {
		////	//Refresh();
		//	pictureBox23->Hide();
		////	MessageBox::Show("Email not found!!!");
		////	//textBox8->Text = "";
		//	pictureBox24->Show();
		//	break;
		////	
		//}
		out >> name;
		out >> email;
		//getline(out, email, '$');
		getline(out, pass, '%');
		getline(out, u);
		
	}
}
public: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//date of birth in forget
}
public: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	//combo box for secirity question in forget
}
public: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//answer for forget 
}
public: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e);
	//done button in forget
public: System::Void label20_Click(System::Object^  sender, System::EventArgs^  e) {
	//write something show in forget
}
public: System::Void textBox11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//passsowrd new in forget
}
public: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e);
	//confirm for passowrd in forget
public: System::Void textBox8_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (textBox8->Text->Equals("UserID") == true)
	{
		textBox8->Text = "";
	}
}
public: System::Void textBox8_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (textBox8->Text->Equals(NULL) == true || textBox8->Text->Equals("") == true)
	{
		textBox8->Text = "UserID";
	}
}
public: System::Void textBox9_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (textBox9->Text->Equals("dd/mm/yyyy") == true)
	{
		textBox9->Text = "";
	}
}
public: System::Void textBox9_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (textBox9->Text->Equals(NULL) == true || textBox9->Text->Equals("") == true)
	{
		textBox9->Text = "dd/mm/yyyy";
	}
}
public: System::Void textBox10_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (textBox10->Text->Equals("Answer ...") == true)
	{
		textBox10->Text = "";
	}
}
public: System::Void textBox10_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (textBox10->Text->Equals(NULL) == true || textBox10->Text->Equals("") == true)
	{
		textBox10->Text = "Answer ...";
	}
}
public: System::Void comboBox2_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (comboBox2->Text->Equals("Security Question?") == true)
	{
		comboBox2->Text = "";
	}
}
public: System::Void comboBox2_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (comboBox2->Text->Equals(NULL) == true || comboBox2->Text->Equals("") == true)
	{
		comboBox2->Text = "Security Question?";
	}
}
public: System::Void textBox11_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (textBox11->Text->Equals("Password") == true)
	{
		textBox11->Text = "";
	}
}
public: System::Void textBox11_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (textBox11->Text->Equals(NULL) == true || textBox11->Text->Equals("") == true)
	{
		textBox11->Text = "Password";
	}
}
public: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	//cancel button in forget
	Refresh();
	panel4->Location = Point(699, 25);
	while (panel4->Location.X != 962) {
		panel4->Location = Point(panel4->Location.X + 1, 25);
		//System::Threading::Thread::Sleep(1);
		Sleep(0.5);
	}
}
public: System::Void panel4_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	//forget panel
}
private: System::Void pictureBox24_Click(System::Object^  sender, System::EventArgs^  e) {
	//wrong
}
private: System::Void pictureBox23_Click(System::Object^  sender, System::EventArgs^  e) {
	//correct
}
private: System::Void textBox8_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	//email in forget validating

	String^ a = textBox8->Text;
	std::string b = msclr::interop::marshal_as<std::string>(a);
	std::ifstream out;
	out.open("register.txt");
	std::string name;
	std::string email;
	std::string pass;
	std::string u;
	bool check1 = false, check2 = false;
	out >> name;
	out >> email;
	getline(out, pass, '%');
	getline(out, u);
	String ^str1 = gcnew String(email.c_str());
	while (!out.eof())
	{
		if (email == b)
		{
			pictureBox24->Hide();
			pictureBox23->Show();
			//errorProvider1->SetError(textBox8,"\0");
			check1 = true;
			check2 = false;
			textBox8->Enabled = false;
			break;
		}
		if (str1 != textBox8->Text)
		{
			//errorProvider1->SetError(textBox8, "Wrong");
			check1 = false; check2 = true;
		}
		
		out >> name;
		out >> email;
		getline(out, pass, '%');
		getline(out, u);

	}
	if (check1 == false && check2 == true) {
		errorProvider1->SetError(textBox8, "Wrong");
	}
	

	
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	//cancel button in forget
	panel4->Location = Point(699, 25);
	while (panel4->Location.X != 962) {
		panel4->Location = Point(panel4->Location.X + 1, 25);
		//System::Threading::Thread::Sleep(1);
		Sleep(0.5);
	}
}
private: System::Void pictureBox25_Click(System::Object^  sender, System::EventArgs^  e) {
	//app close
	exit(1);
}

private: System::Void panel6_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	//after login panel
}
private: System::Void progressBar2_Click(System::Object^  sender, System::EventArgs^  e) {
	//login bar
}
private: System::Void label21_Click(System::Object^  sender, System::EventArgs^  e) {
	//show msg when login successful
}
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
	//timer for login bar
	progressBar2->Maximum = 300;
	progressBar2->PerformStep();
	if (progressBar2->Value == 300) {
		label21->Show();
		timer2->Enabled = false;
		Refresh();
		Sleep(3000);
		panel6->Hide();
		label21->Hide();
		progressBar2->Hide();
		panel7->Show();
	}
	
}
private: System::Void panel7_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	//login after new page
}
private: System::Void pictureBox27_Click(System::Object^  sender, System::EventArgs^  e) {
	//sign in  side bar menu
}
private: System::Void label22_Click(System::Object^  sender, System::EventArgs^  e) {
	//show name when sign in ... sidebar
}
private: System::Void textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//search bar
	if (textBox12->Enabled == true) {
		label38->Hide();
	}
	else {
		label38->Show();
	}
	
	panel17->Show();
	splitContainer1->Hide();
	panel15->Hide();
	panel16->Hide();
	panel7->Show();
	int AAXiS = 15;

	int tMp = 0;
	String^ c = textBox12->Text;
	std::string ussr = msclr::interop::marshal_as<std::string>(c);
	std::ifstream parhLe, picParhLe;
	parhLe.open("register.txt");
	picParhLe.open("profilePic.txt");
	std::string K1;
	std::string K2;
	std::string K3;
	std::string L1;
	std::string L2;
	String ^str100;
	String ^str101;
	String ^str102;
	//bool check1 = false, check2 = false;
	parhLe >> K1;
	parhLe >> K2;
	getline(parhLe, K3);
	picParhLe >> L1;
	getline(picParhLe, L2);

	while (!parhLe.eof())
	{


		if (ussr == K1) {
			label95->Hide();
			//valueCount += 48;
			str100 = gcnew String(K1.c_str());
			str102 = gcnew String(K2.c_str());
			if (tMp != 0) {
				tMp++;

			}
		//	check1 = true;
			AAXiS = AAXiS + 25;
		}
		else {
			K1 = "";
		    K2 = "";
			//check2 = true;
			//label95->Show();
		}
		while (!picParhLe.eof())
		{
			if (K2 == L1)
			{
				str101 = gcnew String(L2.c_str());
			}

			picParhLe >> L1;
			getline(picParhLe, L2);

		}
		picParhLe.close();

		array<PictureBox^> ^ pBox1 = gcnew array<PictureBox^>(100);
		pBox1[tMp] = gcnew PictureBox();
		pBox1[tMp]->Size = System::Drawing::Size(20, 20);
		pBox1[tMp]->Visible = true;
		pBox1[tMp]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		pBox1[tMp]->ImageLocation = str101;
		panel17->Controls->Add(pBox1[tMp]);

		array<Label^> ^lb = gcnew array<Label^>(100);
		lb[tMp] = gcnew Label();
		lb[tMp]->Visible = true;
		lb[tMp]->Font = gcnew System::Drawing::Font(lb[tMp]->Font->Name, 10, lb[tMp]->Font->Style, lb[tMp]->Font->Unit);
		lb[tMp]->Text = str100;
		panel17->Controls->Add(lb[tMp]);

		

		array<Label^> ^lb2 = gcnew array<Label^>(100);
		lb2[tMp] = gcnew Label();
		lb2[tMp]->Visible = true;
		//lb2[tMp]->Text = " (";
		//lb2[tMp]->Font = gcnew Font(lb2[tMp]->Font, FontStyle->Bold);

		lb2[tMp]->Font = gcnew System::Drawing::Font(lb2[tMp]->Font->Name, 10, lb2[tMp]->Font->Style, lb2[tMp]->Font->Unit);
		//lb2[tMp]->Font = gcnew System::Drawing::Font(lb2[tMp]->Font, FontStyle->Bold);
		lb2[tMp]->Text = str102;
		//lb2[tMp]->Text = ")";
		panel17->Controls->Add(lb2[tMp]);
		

		pBox1[tMp]->Location = Point(20, AAXiS);
		lb[tMp]->Location = Point(60, AAXiS + 3);
		lb2[tMp]->Location = Point(180, AAXiS + 3);
		

		parhLe >> K1;
		parhLe >> K2;
		getline(parhLe, K3);

		picParhLe.open("profilePic.txt");


	}
	//parhLe.close();
	/*if (check1 == false && check2 == true) {
		array<Label^> ^lb = gcnew array<Label^>(100);
		lb[tMp] = gcnew Label();
		lb[tMp]->Visible = true;
		lb[tMp]->Font = gcnew System::Drawing::Font(lb[tMp]->Font->Name, 10, lb[tMp]->Font->Style, lb[tMp]->Font->Unit);
		lb[tMp]->Text = "No User Found";
		panel17->Controls->Add(lb[tMp]);
		lb[tMp]->Location = Point(60, AAXiS + 3);
	}*/
}

private: System::Void label24_Click(System::Object^  sender, System::EventArgs^  e) {
	//home in side bar sign in
	splitContainer1->Hide();
	panel15->Hide();
	panel16->Hide();
	panel7->Show();
}
private: System::Void label25_Click(System::Object^  sender, System::EventArgs^  e) {
	//timeline
	
	////panel15->Location = new Point(0, 0);
	//panel15->Location = Point(199,38);
	//panel15->Size = System::Drawing::Size(861, 467);
	//panel15->Size = Size(664, 469);
	splitContainer1->Hide();
	panel16->Show();
	panel14->Hide();
	//panel7->Hide();
	panel15->Show();
	panel18->Hide();
}
public: System::Void label26_Click(System::Object^  sender, System::EventArgs^  e);
	//message

private: System::Void label27_Click(System::Object^  sender, System::EventArgs^  e) {
	//setting
	panel18->Show();
	panel15->Show();
	panel16->Show();
	splitContainer1->Hide();
}
private: System::Void label28_Click(System::Object^  sender, System::EventArgs^  e) {
	//map
	panel16->Show();
	panel18->Show();
	textBox19->Text = "";
	textBox20->Text = "";
	textBox21->Text = "";
	textBox22->Text = "";
	panel15->Show();
	//panel7->Hide();
	splitContainer1->Show();

	//panel14->Hide();
}
private: System::Void label29_Click(System::Object^  sender, System::EventArgs^  e) {
	//logout

	Hide();
	panel7->Controls->Clear();
	MainForm^ cm = gcnew MainForm();
	cm->ShowDialog();
	//Dispose();
	Refresh();
	panel9->Location = Point(0, 38);
	while (panel9->Location.X != -200) {
		panel9->Location = Point(panel9->Location.X - 1, 38);
		//System::Threading::Thread::Sleep(1);
		Sleep(0.5);
	}
	panel7->Hide();
	textBox1->Text = "";
	textBox2->Text = "";
	label39->Show();
	label40->Show();
	panel15->Hide();
	splitContainer1->Hide();
	panel16->Hide();
	textBox24->Text = "";
	textBox25->Text = "";
	textBox26->Text = "";
	splitContainer1->Hide();
	panel15->Hide();
	panel14->Hide();
}
private: System::Void pictureBox34_Click(System::Object^  sender, System::EventArgs^  e) {
	//sidebar close
	Refresh();
	panel9->Location = Point(0, 38);
	while (panel9->Location.X != -200) {
		panel9->Location = Point(panel9->Location.X - 1, 38);
		//System::Threading::Thread::Sleep(1);
		Sleep(0.5);
	}
}
private: System::Void pictureBox35_Click(System::Object^  sender, System::EventArgs^  e) {
	//sidebar open
	panel9->Location = Point(-200, 38);
	while (panel9->Location.X != 0) {
		panel9->Location = Point(panel9->Location.X + 1, 38);
		//System::Threading::Thread::Sleep(1);
		Sleep(0.5);
	}
}
private: System::Void panel9_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	//sidebar panel after sign in
}
private: System::Void label36_Click(System::Object^  sender, System::EventArgs^  e) {
	//status in sidebar 
}
private: System::Void pictureBox37_Click(System::Object^  sender, System::EventArgs^  e) {
	// search the person 
	label38->Hide();
	splitContainer1->Hide();
	panel16->Hide();
	panel15->Hide();
	splitContainer1->Hide();
	panel14->Hide();
	panel7->Show();
	//panel17->Show();
	MessageBox::Show("Function coming soon");
	/////////////////////////////////////////////////////////////////


	////////////////////////////////////////////////////////////////////////////
}
private: System::Void label38_Click(System::Object^  sender, System::EventArgs^  e) {
	//search hint 
}
private: System::Void textBox12_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	//char ch=
	if (textBox12->Text->Equals('\0') == true||textBox12->Text->Equals(" ")==true)
	{
		label38->Hide();
	}
}
private: System::Void textBox12_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (textBox12->Text->Equals(NULL) == true || textBox12->Text->Equals("") == true)
	{
		label38->Show();
		panel17->Hide();
		panel17->Controls->Clear();
	}
}
private: System::Void label39_Click(System::Object^  sender, System::EventArgs^  e) {
	//userid in login hint
}
private: System::Void label40_Click(System::Object^  sender, System::EventArgs^  e) {
	//password hint in login 
}
private: System::Void splitter2_SplitterMoved(System::Object^  sender, System::Windows::Forms::SplitterEventArgs^  e) {
	//split after login
}
private: System::Void label42_Click(System::Object^  sender, System::EventArgs^  e) {
	//name in about
}
public: System::Void pictureBox38_Click(System::Object^  sender, System::EventArgs^  e) {
	//insert profile pic
	panel16->Hide();
	System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
	path->AddEllipse(0, 0, pictureBox38->Width, pictureBox38->Height);
	//Region^ rg=new Region();
	pictureBox38->Region = gcnew System::Drawing::Region(path);
	panel14->Show();
	panel11->Show();
	button7->Show();
	button8->Show();
	button9->Show();
	button10->Show();
	pictureBox47->Hide();
	label50->Show();


}
private: System::Void textBox13_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//intro in about
	
}
public: System::Void label44_Click(System::Object^  sender, System::EventArgs^  e) {
	//dob in about
}
public: System::Void label46_Click(System::Object^  sender, System::EventArgs^  e) {
	//id in about
}
public: System::Void label43_Click(System::Object^  sender, System::EventArgs^  e) {
	//phone# in about
}
public: System::Void label45_Click(System::Object^  sender, System::EventArgs^  e) {
	//hometown in about
}
private: System::Void pictureBox41_Click(System::Object^  sender, System::EventArgs^  e) {
	//edit info in about
	/*textBox15->Show();
	textBox14->Show();
	comboBox3->Show();*/
	label51->Show();
	label52->Show();
	label53->Show();
	label60->Hide();
	label54->Hide();
	label62->Hide();
	pictureBox45->Show();
	pictureBox46->Show();
}
public: System::Void pictureBox45_Click(System::Object^  sender, System::EventArgs^  e);
	//confirm to edit info 
public: System::Void pictureBox46_Click(System::Object^  sender, System::EventArgs^  e) {
	//cancel info edit
	textBox14->Hide();
	textBox15->Hide();
	comboBox3->Hide();
	textBox14->Text = "";
	textBox15->Text = "";
	comboBox3->Text = "---";
	pictureBox45->Hide();
	pictureBox46->Hide();
	label51->Hide();
	label52->Hide();
	label53->Hide();
	label54->Hide();
	label60->Hide();
	label61->Hide();
	label62->Hide();
	label63->Hide();
	label64->Hide();
}
public: System::Void textBox14_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//edit phone# in about
}
public: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	//edit hometown in about
}
public: System::Void textBox15_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//dob edit in about
}
private: System::Void panel11_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

	//for upload image
}
public: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e);
	//button for upload in panel11
	
	

private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	//from web upload pic
}
public: System::Void pictureBox47_Click(System::Object^  sender, System::EventArgs^  e) {
	//image show in panel11 while uplading
}
public: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e);
	//confirm upload profile pic
	

private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	//cancel uplaod profile pic
	panel11->Hide();
	button7->Hide();
	button8->Hide();
	button9->Hide();
	button10->Hide();
	pictureBox47->Hide();
	progressBar3->Hide();
	label50->Hide();
	panel14->Hide();
	panel7->Show();
	splitContainer1->Hide();
	panel15->Hide();
	panel16->Hide();
}
public: System::Void progressBar3_Click(System::Object^  sender, System::EventArgs^  e) {
	//progress bar for upload pic
}
public: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
	//timer for upload pic profile in panel11
	progressBar3->Maximum = 300;
	progressBar3->PerformStep();
	if (progressBar3->Value == 300) {

		timer3->Enabled = false;
		Refresh();
	    Sleep(1000);
		pictureBox47->Show();
		progressBar3->Value = 0;
		progressBar3->Hide();
		

	}
		//////////////////////////////////
	
}
private: System::Void label50_Click(System::Object^  sender, System::EventArgs^  e) {
}
public: System::Void label51_Click(System::Object^  sender, System::EventArgs^  e) {
	//edit click to dob
	label60->Show();
	label61->Show();
	label51->Hide();
	textBox15->Show();
}
	
public: System::Void label52_Click(System::Object^  sender, System::EventArgs^  e) {
	//edit phone 
	label54->Show();
	label63->Show();
	label52->Hide();
	textBox14->Show();
}
	
public: System::Void label53_Click(System::Object^  sender, System::EventArgs^  e) {
	//edit address
	label62->Show();
	label64->Show();
	label53->Hide();
	comboBox3->Show();
}
	

 	
private: System::Void label60_Click(System::Object^  sender, System::EventArgs^  e) {
	//cancel dob
	label60->Hide();
	label61->Hide();
	label51->Show();
	textBox15->Hide();
}
private: System::Void label54_Click(System::Object^  sender, System::EventArgs^  e) {
	//cancel phone
	textBox14->Hide();
	// textBox14->Text = "";
	label63->Hide();
	label52->Show();
	label54->Hide();
}
private: System::Void label62_Click(System::Object^  sender, System::EventArgs^  e) {
	//cancel address
	comboBox3->Hide();
	//comboBox3->Text = "---";
	label64->Hide();
	label53->Show();
	label62->Hide();
}
public: System::Void label61_Click(System::Object^  sender, System::EventArgs^  e);
	//confirm dob

public: System::Void label63_Click(System::Object^  sender, System::EventArgs^  e);
	//confirm phone
private: System::Void panel10_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
public: System::Void label64_Click(System::Object^  sender, System::EventArgs^  e);
	//confirm address
public: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
private: System::Void textBox16_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label55_Click(System::Object^  sender, System::EventArgs^  e) {
	//weak password show in  register
}
private: System::Void label56_Click(System::Object^  sender, System::EventArgs^  e) {
	//average password show in  register
}
private: System::Void label57_Click(System::Object^  sender, System::EventArgs^  e) {
	//strong password show in  register
}
private: System::Void label58_Click(System::Object^  sender, System::EventArgs^  e) {
	//password hint in register account
}
		 //////////////////////////////////////////////////////////////////////////////////////////////////////
private: System::Void pictureBox50_Click(System::Object^  sender, System::EventArgs^  e) {
	//news feed button
	panel7->Show();
	
	splitContainer1->Hide();
	panel16->Hide();
	panel15->Hide();
	panel18->Hide();
}
private: System::Void pictureBox48_Click(System::Object^  sender, System::EventArgs^  e) {
	//requests 
	//panel16->Hide();
	MessageBox::Show("Sunction Coming Soon");

}
private: System::Void pictureBox49_Click(System::Object^  sender, System::EventArgs^  e) {
	//friends
	//panel16->Hide();
	MessageBox::Show("Sunction Coming Soon");
}
private: System::Void pictureBox51_Click(System::Object^  sender, System::EventArgs^  e) {
	//logout

	Hide();
	panel7->Controls->Clear();
	MainForm^ cm = gcnew MainForm();
	cm->ShowDialog();
	panel7->Hide();
	textBox1->Text = "";
	textBox2->Text = "";
	label39->Show();
	label40->Show();
	panel16->Hide();
	textBox24->Text = "";
	textBox25->Text = "";
	textBox26->Text = "";
	panel15->Hide();
	splitContainer1->Hide();
	panel14->Hide();
	panel7->Refresh();

}
public: System::Void pictureBox52_Click(System::Object^  sender, System::EventArgs^  e);
	//chat and message box
private: System::Void pictureBox54_Click(System::Object^  sender, System::EventArgs^  e) {
	//pic on write post
}
private: System::Void label67_Click(System::Object^  sender, System::EventArgs^  e) {
	//hint for write post in newsfeed
}
public: System::Void textBox16_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
	//write post newsfeed
}
public: System::Void textBox16_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (textBox16->Text->Equals("") == true)
	{
		textBox16->Text = "";
		label67->Hide();
		
	}
}
public: System::Void textBox16_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (textBox16->Text->Equals(NULL) == true || textBox16->Text->Equals("") == true)
	{
		textBox16->Text = "";
		label67->Show();
	}
}
		 ///////////////////////////////////////////////////////////////////////////////////////////////////////
private: System::Void pictureBox58_Click(System::Object^  sender, System::EventArgs^  e) {
	//stories edit 
	//text17
	textBox17->Enabled = true;
	textBox17->Text = "";
	pictureBox64->Show();
	
}
private: System::Void textBox17_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//stories textBox
}
private: System::Void pictureBox59_Click(System::Object^  sender, System::EventArgs^  e) {
	//games edit
	//text18
	pictureBox65->Show();
}
private: System::Void textBox18_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//games textBox
}
public: System::Void pictureBox60_Click(System::Object^  sender, System::EventArgs^  e);
	//location write on post
	

private: System::Void pictureBox61_Click(System::Object^  sender, System::EventArgs^  e) {
	//notification
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	//image upload in post
	openFileDialog2->ShowDialog();
	pBox = gcnew PictureBox();
	pBox->Parent = this;
	pBox->Location = Point(10, 50);
	pBox->Size = System::Drawing::Size(100, 100);
	pBox->Visible = true;
	textBox16->Controls->Add(pBox);
	pBox->ImageLocation = openFileDialog2->FileName;
	pBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
}
public: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e);
	//finally post

public: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	//combo for public private post
}
private: System::Void openFileDialog2_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	//for post image upload
}
private: System::Void label70_Click(System::Object^  sender, System::EventArgs^  e) {
	//language show
	comboBox5->Text = "US English";
	comboBox5->Show();
	label71->Hide();
}
private: System::Void pictureBox62_Click(System::Object^  sender, System::EventArgs^  e) {
	//language show
	comboBox5->Text = "US English";
	comboBox5->Show();
	label71->Hide();
}
private: System::Void comboBox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	//language show
	if (comboBox5->Text == "US English") {
		comboBox5->Hide();
		label71->Show();
		label71->Text = "US English";

	}
	else if (comboBox5->Text == "Urdu PK") {
		comboBox5->Hide();
		label71->Show();
		label71->Text = "Urdu PK";
	}
	else if (comboBox5->Text == "Urdu IN") {
		comboBox5->Hide();
		label71->Show();
		label71->Text = "Urdu IN";
	}
	else if (comboBox5->Text == "عربى") {
		comboBox5->Hide();
		label71->Show();
		label71->Text = "عربى";
	}
	else if (comboBox5->Text == "中文") {
		comboBox5->Hide();
		label71->Show();
		label71->Text = "中文";
	}
	else if (comboBox5->Text == "Ελληνικά") {
		comboBox5->Hide();
		label71->Show();
		label71->Text = "Ελληνικά";
	}
	else if (comboBox5->Text == "한국어") {
		comboBox5->Hide();
		label71->Show();
		label71->Text = "한국어";
	}

}
private: System::Void label71_Click(System::Object^  sender, System::EventArgs^  e) {
	//select langauge show
	
}
public: System::Void label73_Click(System::Object^  sender, System::EventArgs^  e) {
	//location type
}
public: System::Void comboBox6_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	//location find
}
private: System::Void pictureBox64_Click(System::Object^  sender, System::EventArgs^  e) {
	//stories confirm save
	//text 17

	String^ str;
	//String^ str4;
	std::string a;
	str = textBox17->Text;
	a = msclr::interop::marshal_as<std::string>(str);
	std::ofstream out;
	out.open("stories.txt", std::ios::app);
	String^ str2 = label46->Text;
	std::string b = msclr::interop::marshal_as<std::string>(str2);
	out << b << " " << a << " ;\n";
	out.close();

	std::string s;
	int sTotal = 0;

	std::ifstream inn;
	inn.open("stories.txt");

	while (!inn.eof()) {
		getline(inn, s);
		sTotal++;
	}
	inn.close();
	std::string *sto;
	sto= new std::string[sTotal];
	//finalSto = new std::string[sTotal];
	//String^ str3;
	textBox17->Enabled = false;
	std::ifstream in;
	std::string d;
	std::string f, g;
	in.open("stories.txt");
	in >> d;
	getline(in, f, ';');
	for (int i = 0; i < sTotal;i++) {
		/*g = d + " " + f;
		sto[i] = g;*/
		in >> d;
		getline(in, f, ';');
	}
	
	///////////////////////////////////////////////////////////////////////////////

	std::ifstream myfile;
	std::string strline;
	myfile.open("C:\\Users\\eizel\\Documents\\Visual Studio 2015\\Projects\\Project10\\Project10\\stories.txt", std::ifstream::in); //Reading txt file
	if (myfile.is_open())
	{
		//MessageBox::Show("File is open"); //checking if txt file loaded
	}
	else
	{
		MessageBox::Show("File is not open"); //loading failed
	}
	//strings to use as values for items in txt
	String^ itemname;
	String^ sItem, ^sData;
	// read lines from text file
	for (std::string sline; std::getline(myfile, sline); )
	{
		itemname = gcnew String(sline.c_str());
		int nIndex = itemname->IndexOf(' ');
		if (nIndex > 0)
		{
			sItem = itemname->Substring(0, nIndex);
			sData = itemname->Substring(nIndex + 1);
			comboBox7->Items->Add(gcnew ItemData(itemname->Substring(0, nIndex),
				itemname->Substring(nIndex + 1)));
		}
		else
		{
			sItem = itemname;
			sData = "";
			comboBox7->Items->Add(gcnew ItemData(itemname, ""));
		}
	}

	/////////////////////////////////////////////////////////////////////////////////////
	//std::string en = "\n";
	//for (int i = 0; i < sTotal; i++)
	//{
	//	str3 = gcnew String(sto[i].c_str());
	//	textBox17->Text = str3;
	//	//str3 = gcnew String(en.c_str());
	//	//textBox17->Text = str3;
	//}
	//in.close();
	comboBox7->Show();
	comboBox7->Text = "Stories...";
	MessageBox::Show("Your Story Saved Successful");
}
private: System::Void pictureBox65_Click(System::Object^  sender, System::EventArgs^  e) {
	//games confirm save
	//text18
}
private: System::Void openFileDialog3_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	//open stories
}
private: System::Void comboBox7_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	ItemData^ data = (ItemData^)comboBox7->SelectedItem;
	String^ str = comboBox7->SelectedItem->ToString();
	std::string b= msclr::interop::marshal_as<std::string>(str);
	String^ str2 = label46->Text;
	std::string c = msclr::interop::marshal_as<std::string>(str);	
	if (b == c) {
		textBox17->Text = data->Data;
		textBox17->Enabled = true;
		pictureBox64->Show();
	}
	else {
		textBox17->Text = data->Data;
		textBox17->Enabled = false;
	}
}
private: System::Void label75_Click(System::Object^  sender, System::EventArgs^  e) {
	//confirm intro
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	std::string s;
	int sTotal = 0;

	std::ifstream inn;
	inn.open("intro.txt");

	while (!inn.eof()) {
		getline(inn, s);
		sTotal++;
	}
	inn.close();
	///////////////////////////////////////////////////
	String^ str1;
	String^ str2; 
	int lines = sTotal;
	std::ifstream read;
	std::ofstream in;
	read.open("intro.txt");
	in.open("temp3.txt");
	String^ us = label46->Text;
	std::string user = msclr::interop::marshal_as<std::string>(us);
	std::string *idd, *intr;
	idd = new std::string[lines];
	intr = new std::string[lines];
	std::string end, inntro;
	for (int i = 0; i < lines; i++)
	{
		if (i == lines - 1) {
			in << idd[lines - 1];
			in << " ";

			in << intr[lines-1];

			in << " &\n";
			read.close();
			in.close();
			remove("intro.txt");
			rename("temp3.txt", "intro.txt");
			MessageBox::Show("Saved Successful");

			str2 = gcnew String(intr[lines-1].c_str());
			textBox13->Text = str2;
			//textBox13-> Enabled = false;
			label75->Hide();
		}
		read >> idd[i];
		//read >> intr[i];
		getline(read, intr[i], '&');
		if (idd[i] == user) {
		
			str1 = textBox13->Text;
			std::string introduc = msclr::interop::marshal_as<std::string>(str1);
			idd[lines - 1] = idd[i];
			intr[lines-1] = introduc;
		}
		else {
			in << idd[i];
			in << " ";
			in << intr[i];
			in << " &\n";

		}

	}

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//textBox13->Enabled = false;
}
private: System::Void label74_Click(System::Object^  sender, System::EventArgs^  e) {
	//edit intro
	label75->Show();
	textBox13->Enabled = true;
}
private: System::Void textBox19_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//search location street
}
private: System::Void textBox20_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//city
}
private: System::Void textBox21_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//state
}
private: System::Void textBox22_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//zipcode
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e);
	//search button
	
	

private: System::Void webBrowser1_DocumentCompleted(System::Object^  sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^  e) {
	//web page
}
private: System::Void splitContainer1_Panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void splitContainer1_Panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}

private: System::Void webBrowser1_Navigated(System::Object^  /*sender*/, System::Windows::Forms::WebBrowserNavigatedEventArgs^  e) {
	this->textBox23->Text = this->webBrowser1->Url->ToString();
}
private: System::Void textBox23_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//url address
}
private: System::Void textBox23_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == System::Windows::Forms::Keys::Enter && !this->textBox23->Text->Equals(""))
	{
		this->webBrowser1->Navigate(this->textBox23->Text);
	}
}
private: System::Void pictureBox38_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	label82->Show();
	//label82->BackColor = gcnew Color->Transparent;
}
private: System::Void pictureBox38_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
	label82->Show();
	//label82->BackColor = gcnew Color->Transparent;
}
private: System::Void pictureBox38_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	label82->Hide();
}
public: System::Void label82_Click(System::Object^  sender, System::EventArgs^  e);
	//upload pic msg show in profile pic
private: System::Void label84_Click(System::Object^  sender, System::EventArgs^  e) {
	//change cover label show
	
}

public: System::Void pictureBox67_Click(System::Object^  sender, System::EventArgs^  e);
	//cover photo

public: System::Void pictureBox68_Click(System::Object^  sender, System::EventArgs^  e) {
	//profile pic
	
}
private: System::Void label83_Click(System::Object^  sender, System::EventArgs^  e) {
	//label of name in timeline
}
private: System::Void pictureBox67_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	label84->Hide();
}

private: System::Void pictureBox67_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	label84->Show();
}
private: System::Void pictureBox67_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	label84->Hide();
}
private: System::Void pictureBox67_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
	label84->Show();
}
public: System::Void openFileDialog4_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
private: System::Void panel16_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	//message panel
}
private: System::Void textBox26_TextChanged(System::Object^  sender, System::EventArgs^  e) {
       //received msgs
}
private: System::Void textBox24_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//sent to?
	String^ a = textBox24->Text;
	std::string b = msclr::interop::marshal_as<std::string>(a);
	std::ifstream out;
	out.open("register.txt");
	std::string name;
	std::string email;
	std::string pass, u;
	//int ab1 = 0, ab2 = 0;
	out >> name;
	out >> email;
	getline(out, pass, '%');
	getline(out, u);
	while (!out.eof())
	{

		if (b == email)
		{
			
			pictureBox71->Show();
			pictureBox72->Hide();
			textBox24->Enabled = false;
		}
		
		out >> name;
		out >> email;
		getline(out, pass, '%');
		getline(out, u);
	}
	
}
private: System::Void textBox25_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//msg write here
	
}
public: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e);
	//sent msg

private: System::Void pictureBox71_Click(System::Object^  sender, System::EventArgs^  e) {
	//if it is true to check id of msg
}
private: System::Void pictureBox72_Click(System::Object^  sender, System::EventArgs^  e) {
	//wrong input of id
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	//sent other msg
	pictureBox71->Hide();
	textBox24->Enabled = true;
	textBox24->Text = "";
	textBox25->Text = "";
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	//NewsFeed in timeline
	panel7->Show();

	//panel15->Location = Point(199, 38);

	splitContainer1->Hide();
	panel16->Hide();
	panel15->Hide();
	panel14->Hide();

}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	//friends in timeline
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	//stories in timeline
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	//photos in timeline
	
}
		 //////////////////////////////////////////////////////////////////////////////////////////////// deactiavte setting panel 18
private: System::Void label100_Click(System::Object^  sender, System::EventArgs^  e) {
	//name in setting for panel 18
}
private: System::Void label101_Click(System::Object^  sender, System::EventArgs^  e) {
	//userid
}
private: System::Void label102_Click(System::Object^  sender, System::EventArgs^  e) {
	//link
}
public: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e);
	//confirm to deactivate account
};
}

using namespace Project10;

struct forgetPassword
{

public:
	void fp(MainForm^ ptr);
};

struct modifyAbout
{
	std::string dob;
	std::string homton;
	std::string phone;
	
public:
	//void modAbout(MainForm^ ptr);
	void modDob(MainForm^ ptr);
	void modPhone(MainForm^ ptr);
	void modLocation(MainForm^ ptr);
};


struct profilePic {
	void tempProfilePic(MainForm^ ptr);
};

struct WritePost
{
	void post(MainForm^ ptr);
};

struct StringBuilder {

	std::string main;
	std::string scratch;

	const std::string::size_type ScratchSize = 1024;  // or some other arbitrary number

	StringBuilder & append(const std::string & str) {
		scratch.append(str);
		if (scratch.size() > ScratchSize) {
			main.append(scratch);
			scratch.resize(0);
		}
		return *this;
	}

    std::string & str() 
	{
		if (scratch.size() > 0) {
			main.append(scratch);
			scratch.resize(0);
		}
		return main;
	}
};

struct coverPic
{
	void setCover(MainForm^ ptr);
};

struct Messagess {
	void SENTmsgs(MainForm^ ptr);
	void newMsg(MainForm^ ptr);
};

struct deactivate {
	void deact(MainForm^ ptr);
};