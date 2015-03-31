//*************************************************************************************************************************
//*************************************************************************************************************************
//*************************************Bulk Spell Checker is a program for bulk spell-checking and correcting an entire website**************************************
//	*************************************There are  various components  in this program and they are mentioned below .**************************************************************************
//*************************************const char* DELIMITERS = " ,.-':;?()+*/\\%$#!\"@^&"; these are the delimiters used to separate tokens*************************************
//*************************************const int TABLE_SIZE = 19000;itis the hashtable size**************************************************************************
//*************************************void PrintTableStats(HashTable<string>& hashTable);**************************************************************************
//*************************************void SpellCheck(HashTable<string>& hashTable, string word);**************************************************************************
//*************************************string ToLowerCase(string word);**************************************************************************
//*************************************HashTable<string> hashTable(TABLE_SIZE);
//*************************************parsefile bo;****************************************************************************************************************************************************
//*************************************words wo;**************************************************************************
//*************************************words badwo;**************************************************************************
//*************************************String^ convertstrintopointer(string str);**************************************************************************


#pragma once
#include "stdAfx.h"
#include<sstream>
#include<iostream>
#include<cstdlib>
#include <ctime>
#include <limits>
#include <cctype>
#include<cstring>
#include<vector>
#include<fstream>
#include<string>
#include "HashTable.h"
#include "parseandtokenise.h"
#include "node.h"
#include "resource.h"
//*********************************************************************************************************************
//*********************************************************************************************************************
//*********************************************************************************************************************

// iterator declaration for hash table
typedef HashTable<string>::Iterator iterDec;

// hash table size
const int TABLE_SIZE = 19000;

// strtok delimiters
const char* DELIMITERS = " ,.-':;?()+*/\\%$#!\"@^&";

// function prototypes
void PrintTableStats(HashTable<string>& hashTable);
void SpellCheck(HashTable<string>& hashTable, string word);
string ToLowerCase(string word);
HashTable<string> hashTable(TABLE_SIZE);
parsefile bo;
words wo;
words badwo;
String^ convertstrintopointer(string str);
//*********************************************************************************************************************
//*********************************************************************************************************************
//*********************************************************************************************************************

namespace testproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::IO;
	using namespace System::Resources;

	
	/// <summary>
	/// Summary for Form1
	/// </summary>



public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;

	private: System::Windows::Forms::Button^  button7;
	public: System::Windows::Forms::ListBox^  listBox2;
	public: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  replaceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  replaceAllToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ignoreToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ignoreAllToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	private: System::Windows::Forms::MenuStrip^  menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem11;
	private: System::Windows::Forms::Button^  button20;

















	public: 
	public: 
	private: System::ComponentModel::IContainer^  components;

	protected: 



	protected: 

	public:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		//**********************************************************
		//*************************************************************

		void SpellCheck(HashTable<string>& hashTable, string word)
		{	
			int result = 0;
			int suggestion = 0;
			string remove[256];
			int numRemove=0;
			String^ wordpoint=gcnew String((word).c_str());
			//label3->Text=wordpoint;
			//MessageBox::Show("spell check me ghusa hai");
			if(!hashTable.Count(word))
			{	//MessageBox::Show(wordpoint->ToString());
				//MessageBox::Show("if me ghusa hai");
			
				
			++result;
			
			//cout<<"** "<<word<<": ";
			//		MessageBox::Show("**" & word);
			//Form1->listBox1->Items->Add("Tokyo");
			// alteration & insertion
			for(unsigned x = 0; x < word.length(); ++x)
			{
				string alteration = word;
				for(char c = 'a'; c <= 'z'; ++c)
				{	
					//alteration
					alteration[x] = c;
					//if(alteration=="hostel")
					//MessageBox::Show("abhi alteration");	
					//MessageBox::Show(convertstrintopointer(alteration)->ToString());
					if(hashTable.Count(alteration))
					{	//MessageBox::Show("alteration me ghusa");
						//MessageBox::Show(convertstrintopointer(alteration));
						listBox2->Items->Add(convertstrintopointer(alteration));
						//cout<<alteration<<", ";
						remove[numRemove++] = alteration;
						++suggestion;
						// remove the entry so it isn't displayed multiple times
						hashTable.Remove(alteration);
					}
					//insertion
					string insertion = word.substr(0, x) + c + word.substr(x);
					if(hashTable.Count(insertion))
					{	
						//MessageBox::Show(convertstrintopointer(insertion));
						listBox2->Items->Add(convertstrintopointer(insertion));
						//cout<<insertion<<", ";
						//MessageBox("" & insertion &",")
						remove[numRemove++] = insertion;
						++suggestion;
						// remove the entry so it isnt displayed multiple times
						hashTable.Remove(insertion);
					}
				}
			}
			// transposition & deletion
			for(unsigned x = 0; x < word.length()-1;++x)
			{
				// transposition
				string transposition = word.substr(0,x) + word[x+1] + word[x] + word.substr(x+2);
				if(hashTable.Count(transposition))
				{
					//cout<<transposition<<", ";
					//MessageBox::Show(convertstrintopointer(transposition));

					//MessageBox("" & transposition &",")
					listBox2->Items->Add(convertstrintopointer(transposition));
					remove[numRemove++] = transposition;
					++suggestion;
					// remove the entry so it isn't displayed multiple times
					hashTable.Remove(transposition);

				}
				// deletion
				string deletion = word.substr(0, x)+ word.substr(x + 1);
				if(hashTable.Count(deletion))
				{//	MessageBox::Show(convertstrintopointer(deletion));
				//MessageBox::Show("deletion me kuch mila");
					listBox2->Items->Add(convertstrintopointer(deletion));
					//cout<<deletion<<", ";
					//MessageBox("" & deletion &",")
					remove[numRemove++] = deletion;
					++suggestion;
					// remove the entry so it isnt displayed multiple times
					hashTable.Remove(deletion);
				}
			}
			// place the removed items back inside the hash table
			while(numRemove>=0)
			{
				hashTable.Insert(remove[numRemove--]);
			}
			if(suggestion < 1)
			{
				listBox2->Items->Add("No suggestions");
				listBox2->Enabled=false;
			}
			//cout<<endl<<endl;
			}
			//return result;
		}// end of SpellCheck
		//***************************************************************
		//*****************************************************************

		void replaceoneoccurence(string old,string neww)
		{
			if(wo.ispresent(old))
			{

			
			int l1=old.length();
			int l2=neww.length();
			int diff=l2-l1;
			int y;
			int xstart;
			int xend;
				int tempp=0;
			wo.getfirstcoordinates(old,y,xend,xstart);
			if(xstart-2>=0)
			{
				int textLocation = richTextBox1->Find( convertstrintopointer(old),xstart-2,xend+4, RichTextBoxFinds::MatchCase );
				tempp=textLocation;
				String^ x= System::Convert::ToString(xstart-2);
			String^ dif= System::Convert::ToString(diff);
			//MessageBox::Show(dif);
			String^ newword=convertstrintopointer(neww);
			if(textLocation>=0)
			{
			richTextBox2->Text=richTextBox2->Text->Remove(textLocation,l1);	
			richTextBox2->Text=richTextBox2->Text->Insert(textLocation,newword);
			
			}
			/*richTextBox2->Text=richTextBox2->Text->Remove(xstart-1,l1);	
			richTextBox2->Text=richTextBox2->Text->Insert(xstart-1,newword);
			*/
			wo.deletefirstoccurrenceofstring(old);
			wo.updatenode(xstart+1,diff);
			
			int index=textLocation+2;
			String^ temp=richTextBox2->Text;
			richTextBox2->Text="";
			richTextBox2->Text=temp;
			String^ repword=label2->Text;
			while(index < richTextBox2->Text->LastIndexOf(repword))
			{
				richTextBox2->Find(repword,index,richTextBox2->TextLength,RichTextBoxFinds::MatchCase);
				richTextBox2->SelectionBackColor=Color::OrangeRed;
				index=richTextBox2->Text->IndexOf(repword,index)+1;
			}	
			if(tempp>=0)
			{
			richTextBox2->SelectionStart=tempp;
			richTextBox2->ScrollToCaret();
			
			}
			
			}
			else
			{
				int textLocation = richTextBox1->Find( convertstrintopointer(old),0,RichTextBoxFinds::MatchCase );
				String^ x= System::Convert::ToString(xstart-2);
			String^ dif= System::Convert::ToString(diff);
			//MessageBox::Show(dif);
			String^ newword=convertstrintopointer(neww);
			if(textLocation>=0)
			{
			richTextBox2->Text=richTextBox2->Text->Remove(textLocation,l1);	
			richTextBox2->Text=richTextBox2->Text->Insert(textLocation,newword);
			richTextBox2->SelectionStart=textLocation;
			richTextBox2->ScrollToCaret();
			}
			richTextBox2->Text=richTextBox2->Text->Remove(xstart-1,l1);	
			richTextBox2->Text=richTextBox2->Text->Insert(xstart-1,newword);
			
			wo.deletefirstoccurrenceofstring(old);
			wo.updatenode(xstart+1,diff);
			

			}
			
			
			}
			/*else
				MessageBox::Show("No occurrence left");
		*/}
		



#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem11 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->replaceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->replaceAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ignoreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ignoreAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox1->Location = System::Drawing::Point(223, 218);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(281, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::Color::DarkRed;
			this->button1->Location = System::Drawing::Point(568, 216);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Browse...";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::DarkRed;
			this->label1->Location = System::Drawing::Point(220, 191);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Please Select the html file to be spellchecked";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->ForeColor = System::Drawing::Color::DarkRed;
			this->button2->Location = System::Drawing::Point(223, 256);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"SpellCheck";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->progressBar1->Location = System::Drawing::Point(229, 30);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(168, 17);
			this->progressBar1->TabIndex = 5;
			this->progressBar1->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->ForeColor = System::Drawing::Color::DarkRed;
			this->button3->Location = System::Drawing::Point(229, 145);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(69, 17);
			this->button3->TabIndex = 6;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click_1);
			// 
			// listBox1
			// 
			this->listBox1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(237)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(984, 43);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(146, 290);
			this->listBox1->TabIndex = 7;
			this->listBox1->Click += gcnew System::EventHandler(this, &Form1::listBox1_Click);
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox1_SelectedIndexChanged);
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(4, -12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1184, 615);
			this->tabControl1->TabIndex = 8;
			this->tabControl1->Selected += gcnew System::Windows::Forms::TabControlEventHandler(this, &Form1::tabControl1_Selected);
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->progressBar1);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1176, 589);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage2->Controls->Add(this->menuStrip2);
			this->tabPage2->Controls->Add(this->button18);
			this->tabPage2->Controls->Add(this->button17);
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1176, 589);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &Form1::tabPage2_Click);
			// 
			// menuStrip2
			// 
			this->menuStrip2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolStripMenuItem1, 
				this->toolStripMenuItem11});
			this->menuStrip2->Location = System::Drawing::Point(3, 3);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(1170, 24);
			this->menuStrip2->TabIndex = 30;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->toolStripMenuItem2, 
				this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(37, 20);
			this->toolStripMenuItem1->Text = L"File";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(111, 22);
			this->toolStripMenuItem2->Text = L"New";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem2_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(111, 22);
			this->toolStripMenuItem3->Text = L"Save";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem3_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(111, 22);
			this->toolStripMenuItem4->Text = L"SaveAs";
			this->toolStripMenuItem4->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem4_Click);
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(111, 22);
			this->toolStripMenuItem5->Text = L"Exit";
			this->toolStripMenuItem5->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem5_Click);
			// 
			// toolStripMenuItem11
			// 
			this->toolStripMenuItem11->Name = L"toolStripMenuItem11";
			this->toolStripMenuItem11->Size = System::Drawing::Size(44, 20);
			this->toolStripMenuItem11->Text = L"Help";
			this->toolStripMenuItem11->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem11_Click);
			// 
			// button18
			// 
			this->button18->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->ForeColor = System::Drawing::Color::DarkRed;
			this->button18->Location = System::Drawing::Point(984, 368);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(124, 23);
			this->button18->TabIndex = 14;
			this->button18->Text = L"Show all words";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// button17
			// 
			this->button17->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->ForeColor = System::Drawing::Color::DarkRed;
			this->button17->Location = System::Drawing::Point(984, 339);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(124, 23);
			this->button17->TabIndex = 13;
			this->button17->Text = L"Show occurrences";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->richTextBox1->Location = System::Drawing::Point(6, 73);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(953, 503);
			this->richTextBox1->TabIndex = 12;
			this->richTextBox1->Text = L"";
			this->richTextBox1->WordWrap = false;
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->ForeColor = System::Drawing::Color::DarkRed;
			this->button8->Location = System::Drawing::Point(984, 397);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 11;
			this->button8->Text = L"Correct";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->ForeColor = System::Drawing::Color::DarkRed;
			this->button6->Location = System::Drawing::Point(1093, 556);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Exit";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->ForeColor = System::Drawing::Color::DarkRed;
			this->button4->Location = System::Drawing::Point(9, 44);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 23);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Back to homepage ";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage3.BackgroundImage")));
			this->tabPage3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage3->Controls->Add(this->button22);
			this->tabPage3->Controls->Add(this->button19);
			this->tabPage3->Controls->Add(this->button16);
			this->tabPage3->Controls->Add(this->button15);
			this->tabPage3->Controls->Add(this->button14);
			this->tabPage3->Controls->Add(this->button13);
			this->tabPage3->Controls->Add(this->button12);
			this->tabPage3->Controls->Add(this->button11);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Controls->Add(this->textBox3);
			this->tabPage3->Controls->Add(this->textBox2);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->button10);
			this->tabPage3->Controls->Add(this->label3);
			this->tabPage3->Controls->Add(this->richTextBox2);
			this->tabPage3->Controls->Add(this->button9);
			this->tabPage3->Controls->Add(this->label2);
			this->tabPage3->Controls->Add(this->listBox2);
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->menuStrip1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1176, 589);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Click += gcnew System::EventHandler(this, &Form1::tabPage3_Click);
			// 
			// button22
			// 
			this->button22->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button22->ForeColor = System::Drawing::Color::DarkRed;
			this->button22->Location = System::Drawing::Point(1036, 438);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(119, 23);
			this->button22->TabIndex = 32;
			this->button22->Text = L"Find and Replace";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Visible = false;
			this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
			// 
			// button19
			// 
			this->button19->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button19->ForeColor = System::Drawing::Color::DarkRed;
			this->button19->Location = System::Drawing::Point(1007, 351);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(74, 23);
			this->button19->TabIndex = 28;
			this->button19->Text = L"Save As";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// button16
			// 
			this->button16->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->ForeColor = System::Drawing::Color::DarkRed;
			this->button16->Location = System::Drawing::Point(911, 409);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(119, 23);
			this->button16->TabIndex = 27;
			this->button16->Text = L"Search Online";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button15
			// 
			this->button15->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->ForeColor = System::Drawing::Color::DarkRed;
			this->button15->Location = System::Drawing::Point(911, 351);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(79, 23);
			this->button15->TabIndex = 26;
			this->button15->Text = L"Save ";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button14
			// 
			this->button14->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->ForeColor = System::Drawing::Color::DarkRed;
			this->button14->Location = System::Drawing::Point(1008, 322);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(73, 23);
			this->button14->TabIndex = 25;
			this->button14->Text = L"Ignore All";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button13
			// 
			this->button13->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->ForeColor = System::Drawing::Color::DarkRed;
			this->button13->Location = System::Drawing::Point(911, 322);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(79, 23);
			this->button13->TabIndex = 24;
			this->button13->Text = L"Ignore Once";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button12
			// 
			this->button12->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->ForeColor = System::Drawing::Color::DarkRed;
			this->button12->Location = System::Drawing::Point(911, 380);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(119, 23);
			this->button12->TabIndex = 23;
			this->button12->Text = L"Add to Dictionary";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button11
			// 
			this->button11->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->ForeColor = System::Drawing::Color::DarkRed;
			this->button11->Location = System::Drawing::Point(1007, 296);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(73, 23);
			this->button11->TabIndex = 22;
			this->button11->Text = L"Replace All";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::DarkRed;
			this->label5->Location = System::Drawing::Point(908, 61);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 13);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Replacement word";
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox3->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->textBox3->Location = System::Drawing::Point(1007, 58);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 20;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox2->Location = System::Drawing::Point(1007, 33);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 19;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::DarkRed;
			this->label4->Location = System::Drawing::Point(908, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Misspelled word";
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->ForeColor = System::Drawing::Color::DarkRed;
			this->button10->Location = System::Drawing::Point(911, 296);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(79, 23);
			this->button10->TabIndex = 17;
			this->button10->Text = L"Replace";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::DarkRed;
			this->label3->Location = System::Drawing::Point(908, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Suggestions";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->richTextBox2->Location = System::Drawing::Point(3, 58);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(852, 523);
			this->richTextBox2->TabIndex = 15;
			this->richTextBox2->Text = L"";
			this->richTextBox2->WordWrap = false;
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox2_TextChanged);
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->ForeColor = System::Drawing::Color::DarkRed;
			this->button9->Location = System::Drawing::Point(911, 438);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 14;
			this->button9->Text = L"Back";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1120, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"label2";
			this->label2->Visible = false;
			// 
			// listBox2
			// 
			this->listBox2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->listBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(237)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(911, 121);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(169, 160);
			this->listBox2->TabIndex = 12;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox2_SelectedIndexChanged);
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->ForeColor = System::Drawing::Color::DarkRed;
			this->button7->Location = System::Drawing::Point(1092, 553);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 1;
			this->button7->Text = L"Exit";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->ForeColor = System::Drawing::Color::DarkRed;
			this->button5->Location = System::Drawing::Point(6, 30);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(113, 23);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Back to homepage";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->fileToolStripMenuItem, 
				this->editToolStripMenuItem, this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(3, 3);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1170, 24);
			this->menuStrip1->TabIndex = 29;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->newToolStripMenuItem, 
				this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(111, 22);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::newToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(111, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(111, 22);
			this->saveAsToolStripMenuItem->Text = L"SaveAs";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveAsToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(111, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->replaceToolStripMenuItem, 
				this->replaceAllToolStripMenuItem, this->ignoreToolStripMenuItem, this->ignoreAllToolStripMenuItem});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// replaceToolStripMenuItem
			// 
			this->replaceToolStripMenuItem->Name = L"replaceToolStripMenuItem";
			this->replaceToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->replaceToolStripMenuItem->Text = L"Replace";
			this->replaceToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::replaceToolStripMenuItem_Click);
			// 
			// replaceAllToolStripMenuItem
			// 
			this->replaceAllToolStripMenuItem->Name = L"replaceAllToolStripMenuItem";
			this->replaceAllToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->replaceAllToolStripMenuItem->Text = L"Replace All";
			this->replaceAllToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::replaceAllToolStripMenuItem_Click);
			// 
			// ignoreToolStripMenuItem
			// 
			this->ignoreToolStripMenuItem->Name = L"ignoreToolStripMenuItem";
			this->ignoreToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->ignoreToolStripMenuItem->Text = L"Ignore";
			this->ignoreToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ignoreToolStripMenuItem_Click);
			// 
			// ignoreAllToolStripMenuItem
			// 
			this->ignoreAllToolStripMenuItem->Name = L"ignoreAllToolStripMenuItem";
			this->ignoreAllToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->ignoreAllToolStripMenuItem->Text = L"Ignore All";
			this->ignoreAllToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ignoreAllToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::helpToolStripMenuItem_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage4.BackgroundImage")));
			this->tabPage4->Controls->Add(this->button20);
			this->tabPage4->Controls->Add(this->richTextBox3);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1182, 595);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"tabPage4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->ForeColor = System::Drawing::Color::DarkRed;
			this->button20->Location = System::Drawing::Point(9, 17);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 23);
			this->button20->TabIndex = 1;
			this->button20->Text = L"Back";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// richTextBox3
			// 
			this->richTextBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox3->Location = System::Drawing::Point(163, 1);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(877, 584);
			this->richTextBox3->TabIndex = 0;
			this->richTextBox3->Text = L"";
			this->richTextBox3->WordWrap = false;
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// Form1
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1189, 606);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
this->progressBar1->Show();
this->timer1->Start();

MessageBox::Show("Please wait for the dictionary to load");			 				 
////***********************************************************************************************
////***********************************************************************************************
////***********************************************************************************************
////////*******************ab dictionary load karenge**********************************************

////***********************************************************************************************
	// declare variables
	string currWord;
	
	clock_t beg; // used to time the hashtable load
	clock_t end; // used to time the hashtable load
//	char response;
	ifstream infile;
	

	// open the dictionary file
	infile.open("dictionary.txt");

	// check if the file exists, EXIT if it doesnt
	if(infile.fail())
	{
		MessageBox::Show("**ERROR - The dictionary file could not be found...");
		//cout<<"\n\n**ERROR - The dictionary file could not be found...\n";
		//exit(1);
	}

	//MessageBox::Show("Dictionary khhul gya hai");

	//cerr<<"\nLoading dictionary....";
	beg = clock(); // start the tim8er
	//MessageBox::Show("clock begin");
	// get data from file and put into hashtable

	while(infile >> currWord)
	{//MessageBox::Show("i");
		// makes sure duplicate words arent inserted into table
		if(!hashTable.Count(currWord))
		{
	
			hashTable.Insert(currWord);
		//MessageBox::Show("after inserting i");
	
		}
		
	}
	//MessageBox::Show("hashtable ban gaya hai");
	//MessageBox::Show("after reading before close");
	infile.close();

	//MessageBox::Show("infile close");
	//PrintTableStats(hashTable);

	end = clock()-beg; // end the ti

	
		 
		 this->progressBar1->Hide();
			 }
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//this is the browse button to have the filepath in the textbox	
		Stream^ myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;


		if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
		{
			if((myStream = openFileDialog1->OpenFile())!=nullptr)
			{
			String^ strfilename = openFileDialog1->InitialDirectory +openFileDialog1->FileName;
			//inputfile=strfilename;
			textBox1->Text=strfilename;
			myStream->Close();
			
			}
		
		
		}
			 
			 
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //this is the spell check button in tabpage1 which  open tabpage2 and load text in richtextboxes of tabpage 2 and 3
			//listBox1->Items->Clear();
//MessageBox::Show("abhi parse karega ");
			 if(textBox1->TextLength>0)
			{
				ifstream dummyfile;//this is to give a condition that the file selected exists or not
				string dummyfilename;
				bo.MarshalString(textBox1->Text,dummyfilename);
				dummyfile.open(dummyfilename);
				if(dummyfile.fail())
				{
					MessageBox::Show("Please provide a proper path.");

				}
				else{
			 richTextBox1->Text=File::ReadAllText(textBox1->Text);//dispaying the content of source file in the rich textbox			
			 richTextBox2->Text=File::ReadAllText(textBox1->Text);
			 
 string a = "test";
  bo.MarshalString(textBox1->Text, a);
  //MessageBox::Show("bo create kar liya hai");

bo.parse(a);
//MessageBox::Show("parse ho gaya");

ifstream file9("C:\\Windows\\Temp\\final.txt");
//ifstream file10( "ycor.txt");
//ifstream file11( "x1cor.txt");
//ifstream file12( "x2cor.txt");
//ofstream file8("write4.txt");
string line;
string expression;;
//int y2=1;
int y1;
int x1;
int x2;
//bool nos;
//bool res1;
//bool res2;
//bool res3;
//char ch[30];
while(getline(file9,line))
{int cont=0;
	getline(file9,expression);
	y1=stoi(expression);
	getline(file9,expression);
	x2=stoi(expression);
	getline(file9,expression);
	x1=stoi(expression);

	String^ badword=gcnew String((line).c_str());
		string lower=ToLowerCase(line);	
	for(wo.it=wo.node.begin();wo.it!=wo.node.end();wo.it++)
	{
		
		
		if(wo.it->word==line)
		{cont++;
		
		//if(SpellCheck(hashTable,wo.it->word)!=0)
		//{//MessageBox::Show("andar aaya");	
			if(!hashTable.Count(lower))
			{
			
				//listBox1->Items->Add(badword);
				wo.addsame(line,y1,x1,x2);
				break;
			}
		
		}
	//y2++;
	//y1++;
	//x1++;
	}
	if(cont==0)
	{
		if(!hashTable.Count(lower))
			{
			
				listBox1->Items->Add(badword);
				wo.addnew(line,y1,x1,x2);
			}
	
	}
}
//cout<<"while execute ho gaya bina error ke"<<endl;
//cin>>x1;
file9.close();
wo.sortkey();
			 
string userInput;
	string currWord;
	int result = 0;	
	//wo.it=wo.node.begin();
	//
	//do//(wo.it!=(wo.node.end()))
	//{
	////adding to the listbox all the words in the vector which are not in dictionary
	//	//MessageBox::Show("while ke andar aaya");	
	//String^ badword=gcnew String((wo.it->word).c_str());
	//string lower=ToLowerCase(wo.it->word);
	//	//if(SpellCheck(hashTable,wo.it->word)!=0)
	//	//{//MessageBox::Show("andar aaya");	
	//		if(!hashTable.Count(lower))
	//		{
	//		
	//			listBox1->Items->Add(badword);
	//			
	//		}
	//	//}
	//	wo.it++;
	//}while(wo.it!=wo.node.end());

//wo.it=wo.node.begin();
//	do{ // get user input
//		//cout<<"\n>> Please enter a sentence: ";
//		//getline(cin,userInput);
//		
//		
//		userInput=wo.it->word;
//		
//		//cout<<endl;
//
//		// split each word from the string into individual words to check if
//		// they are spelled correctly
//		char* splitInput = strtok(const_cast<char*>(userInput.c_str()),DELIMITERS);
//		while(splitInput!=NULL)
//		{
//			currWord = splitInput;
//			currWord = ToLowerCase(currWord);
//			result += SpellCheck(hashTable,currWord);
//			splitInput = strtok(NULL,DELIMITERS);
//		}
//
//		// display results
//		if(result > 0)
//		{
//		//	cout<<"Number of words spelled incorrectly: "<<result<<endl;
//			result = 0;
//		}
//
//		// ask for more data
//		
//		//cout<<"\nDo you want to enter another sentence? (y/n): ";
//		//cin >> response;
//		//cin.ignore(numeric_limits<streamsize>::max(),'\n'); // clear the cin buffer
//	wo.it++;
//	}while(wo.it!=wo.node.end());


	tabControl1->SelectedTab = tabPage2;
	}
}
	else
		MessageBox::Show("Please provide a file path.");

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {



		 }

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		this->progressBar1->Increment(1);
		 
		 }
private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		 
		 
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

			 
			 //this is tab2's button that takes back to the home page and clearing the listbox so that new files data is not appended here
		tabControl1->SelectedTab = tabPage1;//selected tab is set to 1 and in next line listbox1 is cleared
		//listBox1->Items->Clear();
		 }


private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	
			 //this is tab3's button that takes going back to the home page and clearing the listbox so that new files data is not appended here
			 tabControl1->SelectedTab = tabPage1;//selected tab is set to 1 and in next line listbox1 is cleared
			// listBox1->Items->Clear();
		 }
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	//first un-highlight previous one and then highlighting a particular selcted word
			  String^ repword=listBox1->Text;
			  string word;
			  bo.MarshalString(repword,word);
			 if(wo.getkey(word)>0)
			 {
			  int index=0;
			 String^ temp=richTextBox1->Text;
			 richTextBox1->Text="";
			 richTextBox1->Text=temp;
			
			 while(index < richTextBox1->Text->LastIndexOf(repword))
			 {
				 richTextBox1->Find(repword,index,richTextBox1->TextLength,RichTextBoxFinds::MatchCase);
				 richTextBox1->SelectionBackColor=Color::OrangeRed;
				 index=richTextBox1->Text->IndexOf(repword,index)+1;
			 }
			 }
			 else
				 MessageBox::Show("Already Spell checked");
	 
		 
		 
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(MessageBox::Show("Do you really want to exit?","Spell checker",MessageBoxButtons::YesNo,MessageBoxIcon::Question)==System::Windows::Forms::DialogResult::Yes)
			 {
				 Application::Exit();
			 }
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(MessageBox::Show("Do you really want to exit?","Spell checker",MessageBoxButtons::YesNo,MessageBoxIcon::Question)==System::Windows::Forms::DialogResult::Yes)
			 {
				 Application::Exit();
			}
			 
		 }
private: System::Void listBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
				textBox3->Clear();
			 timer2->Start();
			 try{
	if(listBox1->SelectedIndex>=0)
			 {int index=0;
			 String^ temp=richTextBox2->Text;
			 richTextBox2->Text="";
			 richTextBox2->Text=temp;
			 String^ repword=listBox1->Text;
			 while(index < richTextBox2->Text->LastIndexOf(repword))
			 {
				 richTextBox2->Find(repword,index,richTextBox2->TextLength,RichTextBoxFinds::MatchCase);
				 richTextBox2->SelectionBackColor=Color::OrangeRed;
				 index=richTextBox2->Text->IndexOf(repword,index)+1;
			 }			
			// tabControl1->SelectedTab=tabPage3;
			//// MessageBox::Show(a);
			// string word="beuty";
			// //label3->Text=del;
			//  SpellCheck(hashTable,word);
			// String^ del=gcnew String((word).c_str());
		 //label2->Text=del;
			 //here when the selected item of the listbox is clicked then we will give the suggestions accordingly in an another listbox
			 //MessageBox::Show("Hello index changed");
			 listBox2->Items->Clear(); 
			 tabControl1->SelectedTab=tabPage3;
			 // MessageBox::Show(a);
			 listBox2->Enabled=true;

			 string word;
			 String^ wordpoint=listBox1->SelectedItem->ToString();
			 label2->Text=wordpoint;
			 textBox2->Text=label2->Text;
			 parsefile ba;
			 ba.MarshalString(wordpoint,word);
			 //  MessageBox::Show("abhi hoga spellcheck");
			 word=ToLowerCase(word);
			 SpellCheck(hashTable,word);

			 //MessageBox::Show("abhi hogaya spellcheck");
			 String^ del=gcnew String((word).c_str());
			 // label2->Text=del;
			 //  timer2->Start();
	}
	else MessageBox::Show("Please select a word from the list.");
}
catch(Exception^ e)
{
MessageBox::Show("Please select a word from the list.");
}


		 }
			 
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
//this button clears item that was just checke from the listbox1 so that it is not pressed by the user again and again
			// listBox1->Items->Remove(label2->Text);
			//takes back to tabpage2
			 tabControl1->SelectedTab=tabPage2;
			richTextBox1->Text=richTextBox2->Text;
			timer2->Stop();
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 //replace button
			 //richTextBox2->Text = richTextBox1->Text->Remove(86,8);
			 string str1,str2;
			 bo.MarshalString(textBox2->Text,str1);
			 bo.MarshalString(textBox3->Text,str2);
			 if(wo.getkey(str1)>0)
			 {

			 
		try{
			 if(textBox3->TextLength>0)
			 {
/*		 int ycor;
		 int xstart;
		 int xend;
			 */
			
//wo.getfirstcoordinates("Acudemic",ycor, xstart, xend);
	replaceoneoccurence(str1,str2);	 
			 }
			 else
				 MessageBox::Show("Please provide a replacement word.");
		}

			 catch(Exception^ e)
			 {
				 MessageBox::Show(e->Message);
			 }
			 }
			 else
				 MessageBox::Show("No occurrences left.Already spellchecked");
	
	// MessageBox::Show("replace exe ho gaya");
		 }
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void listBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if(listBox2->SelectedIndex>=0)	
			 textBox3->Text=listBox2->SelectedItem->ToString();
		 
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 //adding word to dictionary
			 string word;
			 bo.MarshalString(textBox2->Text,word);
			 word=ToLowerCase(word);
			 ofstream dictionarywrite;
			 dictionarywrite.open("dictionary.txt",std::ios_base::app);
			 dictionarywrite<<word<<endl;
			 dictionarywrite.close();
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 //ignore once
			 string word;
			 bo.MarshalString(textBox2->Text,word);
			 if(wo.getkey(word)>0)
			 {

			 
			 if(wo.getkey(word)<=1)
			 {
			// listBox1->Items->Remove(textBox2->Text);
			 wo.updatekeytozero(word);
			 }
			 int y,xend,xstart;
			 wo.getfirstcoordinates(word,y,xend,xstart);
			 int index = xstart+1;
			 wo.deletefirstoccurrenceofstring(word);
			 String^ temp=richTextBox2->Text;
			 richTextBox2->Text="";
			 richTextBox2->Text=temp;
			 String^ repword=label2->Text;
			 while(index < richTextBox2->Text->LastIndexOf(repword) && index>0)
			 {
				 richTextBox2->Find(repword,index,richTextBox2->TextLength,RichTextBoxFinds::MatchCase);
				 richTextBox2->SelectionBackColor=Color::OrangeRed;
				 index=richTextBox2->Text->IndexOf(repword,index)+1;
			 }	

			 }
			 else
				 MessageBox::Show("No occurrences left.already spellchecked");
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 //ignore all removing from the listbox
			 
			 string word;
			 bo.MarshalString(textBox2->Text,word);
			 if(wo.getkey(word)>0)
			 {

			 
			 wo.updatekeytozero(word);
			// listBox1->Items->Remove(textBox2->Text);
				String^ temp=richTextBox2->Text;
				richTextBox2->Text="";
				richTextBox2->Text=temp;
			 // wo.deletealloccurrenceofword(word);
			 
			 }

			 else
				 MessageBox::Show("No occurrences left.already spellchecked");
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
//replace all button
			 string str1,str2;
			 bo.MarshalString(textBox2->Text,str1);
			 bo.MarshalString(textBox3->Text,str2);
			 if(wo.getkey(str1)>0)
			{
			 if(textBox3->TextLength>0)
			 {

			 
			
			 int countrep=0;
			 while(wo.ispresent(str1))
			 {	countrep++;
				 replaceoneoccurence(str1,str2);
			 }
				String^ cont =System::Convert::ToString(countrep);
			 if(countrep>0)
			 { MessageBox::Show("Replaced " + cont + " occurrences");}
			 	
			 wo.updatekeytozero(str1);
			 }
			 else
				 MessageBox::Show("Please select a replacement word");
		 
		 }
			 else
				 MessageBox::Show("No occurrences left.already spellchecked");
		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			//save button
			 //ofstream overwrite;
			 //string filepath;
			 //bo.MarshalString(textBox1->Text,filepath);
			// overwrite.open(filepath);
			 File::WriteAllLines(textBox1->Text,richTextBox2->Lines);
		 }
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			 string str="http://www.infoplease.com/spellcheck?word=";
			 
			 string str1;
			 bo.MarshalString(label2->Text,str1);
			 str="start " + str+str1;
			 const char * c = str.c_str();
			// MessageBox::Show(convertstrintopointer(str));
			 system(c);
		 }
private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void richTextBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tabControl1_Selected(System::Object^  sender, System::Windows::Forms::TabControlEventArgs^  e) {
		 }
private: System::Void tabPage3_Click(System::Object^  sender, System::EventArgs^  e) {
		
		 }
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			//show occurrences

			 int index=0;
			 String^ temp=richTextBox1->Text;
			 richTextBox1->Text="";
			 richTextBox1->Text=temp;
			 String^ repword=listBox1->Text;
			 while(index < richTextBox1->Text->LastIndexOf(repword))
			 {
				 richTextBox1->Find(repword,index,richTextBox1->TextLength,RichTextBoxFinds::MatchCase);
				 richTextBox1->SelectionBackColor=Color::OrangeRed;
				 index=richTextBox1->Text->IndexOf(repword,index)+1;
			 }

		 }
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			//show all occurrences


			 String^ temp=richTextBox1->Text;
			 richTextBox1->Text="";
			 richTextBox1->Text=temp;
			for each(String^ repword in listBox1->Items)
			{			 int index=0;
			 //String^ repword=listBox1->Text;
			 while(index < richTextBox1->Text->LastIndexOf(repword))
			 {
				 richTextBox1->Find(repword,index,richTextBox1->TextLength,RichTextBoxFinds::MatchCase);
				 richTextBox1->SelectionBackColor=Color::OrangeRed;
				 index=richTextBox1->Text->IndexOf(repword,index)+1;
			 }
			}
		 
		 }
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	//save as button
			
			 SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
			 saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.* |htm files (*.htm)|*.htm |doc files (*.doc) |*.doc";
			 saveFileDialog1->FilterIndex = 4;
			 saveFileDialog1->RestoreDirectory = true;
			
				 if(saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)  
				 {	
					 File::WriteAllLines(saveFileDialog1->FileName,richTextBox2->Lines);
					
				 }
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
//private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
		 //if(richTextBox2->CanUndo)
		 //{
		 ////button20->Enabled=true;
		 //richTextBox2->Undo();
		 //}/*
		 //else
			// button20->Enabled=false;
		 //*/
		 //}
//private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
//			 if(richTextBox2->CanRedo)
//			 {
//				// button21->Enabled=true;
//				 richTextBox2->Redo();
//			 }
//			 /*else
//				 button20->Enabled=false;
//*/
		// }
	//	 
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
		/*	 if(richTextBox2->CanRedo)
			 {
				 button21->Enabled=false;
			 }
			 else
				 button21->Enabled=true;
			 if(richTextBox2->CanUndo)
			 {
				 button20->Enabled=false;
			 }
			 else
				 button20->Enabled=true;*/

		 }
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void newToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 //this is tab3's button that takes going back to the home page and clearing the listbox so that new files data is not appended here
			 tabControl1->SelectedTab = tabPage1;//selected tab is set to 1 and in next line listbox1 is cleared
			 listBox1->Items->Clear();
		 }
private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //save button
			 //ofstream overwrite;
			 //string filepath;
			 //bo.MarshalString(textBox1->Text,filepath);
			 // overwrite.open(filepath);
			 File::WriteAllLines(textBox1->Text,richTextBox2->Lines);
		 }
private: System::Void saveAsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //save as button

			 SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
			 saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.* |htm files (*.htm)|*.htm |doc files (*.doc) |*.doc";
			 saveFileDialog1->FilterIndex = 4;
			 saveFileDialog1->RestoreDirectory = true;

			 if(saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)  
			 {	
				 File::WriteAllLines(saveFileDialog1->FileName,richTextBox2->Lines);

			 }
		 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(MessageBox::Show("Do you really want to exit?","Spell checker",MessageBoxButtons::YesNo,MessageBoxIcon::Question)==System::Windows::Forms::DialogResult::Yes)
			 {
				 Application::Exit();
			 }
		 }
private: System::Void replaceToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			  //replace button
			 //richTextBox2->Text = richTextBox1->Text->Remove(86,8);
			 string str1,str2;
			 bo.MarshalString(textBox2->Text,str1);
			 bo.MarshalString(textBox3->Text,str2);
			 if(wo.getkey(str1)>0)
			 {

			 
		try{
			 if(textBox3->TextLength>0)
			 {
/*		 int ycor;
		 int xstart;
		 int xend;
			 */
			
//wo.getfirstcoordinates("Acudemic",ycor, xstart, xend);
	replaceoneoccurence(str1,str2);	 
			 }
			 else
				 MessageBox::Show("Please provide a replacement word.");
		}

			 catch(Exception^ e)
			 {
				 MessageBox::Show(e->Message);
			 }
			 }
			 else
				 MessageBox::Show("No occurrences left.Already spellchecked");
	
	// MessageBox::Show("replace exe ho gaya");
		 }
private: System::Void replaceAllToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 //replace all button
			 string str1,str2;
			 bo.MarshalString(textBox2->Text,str1);
			 bo.MarshalString(textBox3->Text,str2);
			 if(wo.getkey(str1)>0)
			 {
				 if(textBox3->TextLength>0)
				 {



					 int countrep=0;
					 while(wo.ispresent(str1))
					 {	countrep++;
					 replaceoneoccurence(str1,str2);
					 }
					 String^ cont =System::Convert::ToString(countrep);
					 if(countrep>0)
					 { MessageBox::Show("Replaced " + cont + " occurrences");}

					 wo.updatekeytozero(str1);
				 }
				 else
					 MessageBox::Show("Please select a replacement word");

			 }
			 else
				 MessageBox::Show("No occurrences left.already spellchecked");



		 }
private: System::Void ignoreToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //ignore once
			 string word;
			 bo.MarshalString(textBox2->Text,word);
			 if(wo.getkey(word)>0)
			 {


				 if(wo.getkey(word)<=1)
				 {
					 // listBox1->Items->Remove(textBox2->Text);
					 wo.updatekeytozero(word);
				 }
				 int y,xend,xstart;
				 wo.getfirstcoordinates(word,y,xend,xstart);
				 int index = xstart+1;
				 wo.deletefirstoccurrenceofstring(word);
				 String^ temp=richTextBox2->Text;
				 richTextBox2->Text="";
				 richTextBox2->Text=temp;
				 String^ repword=label2->Text;
				 while(index < richTextBox2->Text->LastIndexOf(repword) && index>0)
				 {
					 richTextBox2->Find(repword,index,richTextBox2->TextLength,RichTextBoxFinds::MatchCase);
					 richTextBox2->SelectionBackColor=Color::OrangeRed;
					 index=richTextBox2->Text->IndexOf(repword,index)+1;
				 }	

			 }
			 else
				 MessageBox::Show("No occurrences left.already spellchecked");


		 }
private: System::Void ignoreAllToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 //ignore all removing from the listbox

			 string word;
			 bo.MarshalString(textBox2->Text,word);
			 if(wo.getkey(word)>0)
			 {


				 wo.updatekeytozero(word);
				 // listBox1->Items->Remove(textBox2->Text);
				 String^ temp=richTextBox2->Text;
				 richTextBox2->Text="";
				 richTextBox2->Text=temp;
				 // wo.deletealloccurrenceofword(word);

			 }

			 else
				 MessageBox::Show("No occurrences left.already spellchecked");

		 }
private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox3->Text="";
			 richTextBox3->Text=File::ReadAllText("userhelp.txt");
			 tabControl1->SelectedTab=tabPage4;
		 }
private: System::Void toolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {

			 //this is tab3's button that takes going back to the home page and clearing the listbox so that new files data is not appended here
			 tabControl1->SelectedTab = tabPage1;//selected tab is set to 1 and in next line listbox1 is cleared
			 listBox1->Items->Clear();
		 }
private: System::Void toolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) {
			 //save button
			 //ofstream overwrite;
			 //string filepath;
			 //bo.MarshalString(textBox1->Text,filepath);
			 // overwrite.open(filepath);
			 File::WriteAllLines(textBox1->Text,richTextBox2->Lines);
		 }
private: System::Void toolStripMenuItem4_Click(System::Object^  sender, System::EventArgs^  e) {
			 //save as button

			 SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
			 saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.* |htm files (*.htm)|*.htm |doc files (*.doc) |*.doc";
			 saveFileDialog1->FilterIndex = 4;
			 saveFileDialog1->RestoreDirectory = true;

			 if(saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)  
			 {	
				 File::WriteAllLines(saveFileDialog1->FileName,richTextBox2->Lines);

			 }
		 }
private: System::Void toolStripMenuItem5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(MessageBox::Show("Do you really want to exit?","Spell checker",MessageBoxButtons::YesNo,MessageBoxIcon::Question)==System::Windows::Forms::DialogResult::Yes)
			 {
				 Application::Exit();
			 }
		 }
private: System::Void toolStripMenuItem11_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox3->Text="";
			 richTextBox3->Text=File::ReadAllText("userhelp.txt");
			 tabControl1->SelectedTab=tabPage4;
		 }
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			 tabControl1->SelectedTab=tabPage2;
		 }
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			/* if(MessageBox::Show("Do you really want to exit?","Spell checker",MessageBoxButtons::YesNo,MessageBoxIcon::Question)==System::Windows::Forms::DialogResult::Yes)
			 {
				 Application::Exit();
			 }*/
		 }
};
}


////////************************************************************************************************
///////************************************************************************************************
//////////************************************************************************************************
////////************************ab functions define kar rahe hai************************************************


void PrintTableStats(HashTable<string>& hashTable)
{
	int largestBucket = -9999999;
	int largestIndex = 0;
	int smallestBucket = 9999999;
	int smallestIndex = 0;
	double numBuckestUsed = 0;
	ofstream outfile("OUTPUT_HashTable_Stats_programmingnotes_freeweq_com.txt");

	for(int x=0; x < hashTable.TableSize(); ++x)
	{
		// iterator is used to traverse each hashtable bucket
		iterDec it = hashTable.begin(x);
		if(!hashTable.IsEmpty(x))
		{
			if(smallestBucket > hashTable.BucketSize(x))
			{
				smallestBucket = hashTable.BucketSize(x);
				smallestIndex = x;
			}
			if(largestBucket < hashTable.BucketSize(x))
			{
				largestBucket = hashTable.BucketSize(x);
				largestIndex = x;
			}
			++numBuckestUsed;
			outfile<<"\nBucket #"<<x<<":\n";
			for(int y = 0; y < hashTable.BucketSize(x); ++y)
			{
				outfile <<"\t"<< it[y] << endl;
			}
		}
	}
	cout<<"Complete!\n";

	// creates a line separator
	cout<<endl;
	cout.fill('-');
	cout<<left<<setw(50)<<""<<endl;

	cout<<"Total dictionary words = "<<hashTable.TotalElems()<<endl
		<<"Hash table size = "<<hashTable.TableSize()<<endl
		<<"Largest bucket size = "<<largestBucket<< " items at index #"<<largestIndex<<endl
		<<"Smallest bucket size = "<<smallestBucket<< " items at index #"<<smallestIndex<<endl
		<<"Total buckets used = "<<numBuckestUsed<<endl
		<<"Total percent of hash table used = "<<(numBuckestUsed/hashTable.TableSize())*100<<"%"<<endl
		<<"Average bucket size = "<<(hashTable.TotalElems()/numBuckestUsed)<<" items";
}// end of PrintTableStats


string ToLowerCase(string word)
{
	for(unsigned x = 0; x < word.length(); ++x)
	{
		word[x] = tolower(word[x]);
	}
	return word;
}

String^ convertstrintopointer(string str)
{
	String^ wordpoint=gcnew String((str).c_str());
	return wordpoint;
}

//********************************************************************************************************************
//********************************************************************************************************************
//********************************************************************************************************************
//********************************************************************************************************************
