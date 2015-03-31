//**************************Firstly, there is a parser that scans ****************************************************
//*******a local copy of the entire website, ignoring HTML (Hypertext Markup Language) *****************************************
//****markup, creating a list of all the words used anywhere on the entire website, with ***********************************
//****a count of how many times each  word was used along with their co-ordinates*****************************************
//************we are built a function  bool isalphabetic( string s,int siz)which ***************************************
//***********************takes the string  and its length as input arguments and **********************************
//*******************returns whether that string is alphabetic or not.



#include <iostream>
#include <string>
#include <sstream>
#include<fstream>
#include <cstdlib>
#include<cstring>
#include<iomanip>
#include <ctime>
#include <limits>
#include <cctype>
#include "stdafx.h"
using namespace std;
using namespace System;

//*************************************parse nd tokinse starts here**********************************************************
//*********************************************************************************************************************
class parsefile{
	public:


bool isalphabetic( string s,int siz)//global function to check if a word contains alphabets or other characters also
{

  /*  char ch[l];
    ch=s;*/
    bool alpha=true;
    for(int i=0;i<siz;i++)
    {
        if(!isalpha(s[i]))
            alpha=false;
    }
    return alpha;
}

bool isnotvar(string word)
{
	if(word=="var")
		return false;
	else 
		return true;
}

void MarshalString ( String ^ s, string& os ) {
   using namespace Runtime::InteropServices;
   const char* chars = 
      (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
   os = chars;
   Marshal::FreeHGlobal(IntPtr((void*)chars));
}

bool iseligible(string word)
{
	if(word.length()>1)
		return true;
	else return false;
}
void parse(string filepath){


	//System::Windows::Forms::MessageBox::Show("Ab parsefunc me ghus gay hai");
	//*********************************************
	ifstream filex(filepath);
filex.unsetf(ios_base::skipws);//not to skip spaces and \n
ofstream filey("C:\\Windows\\Temp\\temp.txt");
//System::Windows::Forms::MessageBox::Show("Ab ofsream remp banaya");
char e,f,g;
int lineno=1,totalchar=0;
int xcor=1;
int xstart=1;
int xend=1;
 filex>>g;
 totalchar++;
 filex>>f;
 xcor++;
  totalchar++;
  
 if((g!='\n'||g!='['||g!=']'||g!=' ' || g!='!' ||g!='@' || g!='#' || g!='$' ||g!='%'||g!='^'||g!='&'||g!='*'||g!='('||g!=')'||g!='-'||g!='_'||g!='+'||g!='='||g!='~'||g!='`'||g!='{'||g!='}'||g!=':'||g!=';'||g!='"'||g!='\''||g!=','||g!='<'||g!='.'||g!='>'||g!='/'||g!='?'||g!='\\'||g!='|')&&(f=='\n'||f=='['||f==']'||f==' ' || f=='!' ||f=='@' || f=='#' || f=='$' ||f=='%'||f=='^'||f=='&'||f=='*'||f=='('||f==')'||f=='-'||f=='_'||f=='+'||f=='='||f=='~'||f=='`'||f=='{'||f=='}'||f==':'||f==';'||f=='"'||f=='\''||f==','||f=='<'||f=='.'||f=='>'||f=='/'||f=='?'||f=='\\'||f=='|'))


 {
     filey<<" "<<1<<" "<<1<<" "<<1<<" ";
 }

 if((f!='\n'||f!='['||f!=']'||f!=' ' || f!='!' ||f!='@' || f!='#' || f!='$' ||f!='%'||f!='^'||f!='&'||f!='*'||f!='('||f!=')'||f!='-'||f!='_'||f!='+'||f!='='||f!='~'||f!='`'||f!='{'||f!='}'||f!=':'||f!=';'||f!='"'||f!='\''||f!=','||f!='<'||f!='.'||f!='>'||f!='/'||f!='?'||f!='\\'||f!='|')&&(g=='['||g==']'||g==' ' || g=='!' ||g=='@' || g=='#' || g=='$' ||g=='%'||g=='^'||g=='&'||g=='*'||g=='('||f==')'||g=='-'||g=='_'||g=='+'||g=='='||g=='~'||g=='`'||g=='{'||g=='}'||g==':'||g==';'||g=='"'||g=='\''||g==','||g=='<'||g=='.'||g=='>'||g=='/'||g=='?'||g=='\\'||g=='|'))


 {
	 xstart=xcor;
	 xend=xcor;

	// xcor++;
 }

 if(g== '\n')
	{
	lineno++;
	//xcor++;
	xstart=xcor;
	xend=xcor;
	}
 
 filey<<g;


 //abhi yahan careful rehna padega bad me dekhenge

 if(f== '\n')
	{
	lineno++;
	//xcor=0;
	xstart=xcor;
	xend=xcor;
	}
 //filey<<d;

e=g;
 while(!filex.eof())
 { if(totalchar!=2)
    {

     filey<<e;
    }


 if((e=='\n'||e=='['||e==']'||e==' ' || e=='!' ||e=='@' || e=='#' || e=='$' ||e=='%'||e=='^'||e=='&'||e=='*'||e=='('||e==')'||e=='-'||e=='_'||e=='+'||e=='='||e=='~'||e=='`'||e=='{'||e=='}'||e==':'||e==';'||e=='"'||e=='\''||e==','||e=='<'||e=='.'||e=='>'||e=='/'||e=='?'||e=='\\'||e=='|') && (f=='\n'||f=='['||f==']'||f==' ' || f=='!' ||f=='@' || f=='#' || f=='$' ||f=='%'||f=='^'||f=='&'||f=='*'||f=='('||f==')'||f=='-'||f=='_'||f=='+'||f=='='||f=='~'||f=='`'||f=='{'||f=='}'||f==':'||f==';'||f=='"'||f=='\''||f==','||f=='<'||f=='.'||f=='>'||f=='/'||f=='?'||f=='\\'||f=='|'))

    {
        xstart=xcor+1;
        xend=xcor+1;
            if(f== '\n')
	{
	lineno++;
	//xcor=0;
	xstart=xcor;
	xend=xcor;
	}

    }
else if((e!='\n'||e!='['||e!=']'||e!=' ' || e!='!' ||e!='@' || e!='#' || e!='$' ||e!='%'||e!='^'||e!='&'||e!='*'||e!='('||e!=')'||e!='-'||e!='_'||e!='+'||e!='='||e!='~'||e!='`'||e!='{'||e!='}'||e!=':'||e!=';'||e!='"'||e!='\''||e!=','||e!='<'||e!='.'||e!='>'||e!='/'||e!='?'||e!='\\'||e!='|')&&(f=='\n'||f=='['||f==']'||f==' ' || f=='!' ||f=='@' || f=='#' || f=='$' ||f=='%'||f=='^'||f=='&'||f=='*'||f=='('||f==')'||f=='-'||f=='_'||f=='+'||f=='='||f=='~'||f=='`'||f=='{'||f=='}'||f==':'||f==';'||f=='"'||f=='\''||f==','||f=='<'||f=='.'||f=='>'||f=='/'||f=='?'||f=='\\'||f=='|'))
    {

            xend=xcor-1;
            filey<<" "<<lineno<<" "<<xstart<<" "<<xend<<" ";
             xstart=xcor+1;

        if(f== '\n')
	{
	lineno++;
	//xcor=0;
	xstart=xcor;
	xend=xcor;
	}

    }
else if((e!=' ' ||e!='[' ||e!=']' || e!='!' ||e!='@' || e!='#' || e!='$' ||e!='%'||e!='^'||e!='&'||e!='*'||e!='('||e!=')'||e!='-'||e!='_'||e!='+'||e!='='||e!='~'||e!='`'||e!='{'||e!='}'||e!=':'||e!=';'||e!='"'||e!='\''||e!=','||e!='<'||e!='.'||e!='>'||e!='/'||e!='?'||e!='\\'||e!='|')&&((f!=' ' ||f!='[' ||f!=']' || f!='!' ||f!='@' || f!='#' || f!='$' ||f!='%'||f!='^'||f!='&'||f!='*'||f!='('||f!=')'||f!='-'||f!='_'||f!='+'||f!='='||f!='~'||f!='`'||f!='{'||f!='}'||f!=':'||f!=';'||f!='"'||f!='\''||f!=','||f!='<'||f!='.'||f!='>'||f!='/'||f!='?'||f!='\\'||f!='|')))
    {
        xend=xcor;
     if(f== '\n')
	{
	lineno++;
	//xcor=0;
	xstart=xcor;
	xend=xcor;
	}

    }
else if((f!=' ' || f!='!' ||f!='@' || f!='#' || f!='$' ||f!='%'||f!='^'||f!='&'||f!='*'||f!='('||f!=')'||f!='-'||f!='_'||f!='+'||f!='='||f!='~'||f!='`'||f!='{'||f!='}'||f!=':'||f!=';'||f!='"'||f!='\''||f!=','||f!='<'||f!='.'||f!='>'||f!='/'||f!='?'||f!='\\'||f!='|'||f!='['||f!=']')&&(e==' ' ||e=='[' ||e==']' || e=='!' ||e=='@' || e=='#' || e=='$' ||e=='%'||e=='^'||e=='&'||e=='*'||e=='('||e==')'||e=='-'||e=='_'||e=='+'||e=='='||e=='~'||e=='`'||e=='{'||e=='}'||e==':'||e==';'||e=='"'||e=='\''||e==','||e=='<'||e=='.'||e=='>'||e=='/'||e=='?'||e=='\\'||e=='|'))

    {
        xstart=xcor;
        xend=xcor;
    if(f== '\n')
	{
	lineno++;
	//xcor=0;
	xstart=xcor;
	xend=xcor;
	}

    }
//filey<<d;
    e=f;
    filex>>f;
   // filey<<d;
    xcor++;
    totalchar++;
//    if(d== '\n')
//	{
//	lineno++;
//	xcor=0;
//	xstart=1;
//	xend=1;
//	}
 }

//while(!filex.eof())
//{
//
//
////parsing  the given file
//    if(c=='<')//beginning of an html tag
//        {
//        filex>>c;
//        while(c!='>')//till the end of the tag
//            {
//            filex>>c;
//
//            }
//
//        }
//      else{
//            if(c!='>')
//                {
//                filey<<c;
//                filex>>c;
//                }
//
//            else
//                filex>>c;
//          }
//
//}//yaha<> khatm

	//**********************************************
//////////////////////////////////////////////////////////////////////////////////////////
//abhi <> deal kar raha hai
 //System::Windows::Forms::MessageBox::Show("Ab temp complete");
 filex.close();
 filey.close();
 //System::Windows::Forms::MessageBox::Show("Ab temp input");
	ifstream file1("C:\\Windows\\Temp\\temp.txt");
	//if(file1.fail())
		//System::Windows::Forms::MessageBox::Show("temp nahi khol paya");
file1.unsetf(ios_base::skipws);//not to skip spaces and \n
ofstream file2("C:\\Windows\\Temp\\write.txt");
//System::Windows::Forms::MessageBox::Show("Ab write output dega ab");
char c;
//int lineno=1;
//int xcor=1;
 file1>>c;
 //xcor++;
 /*if(c== '\n')
	{
	lineno++;
	xcor=1;
	}*/
 
while(!file1.eof())
{
	

	//System::Windows::Forms::MessageBox::Show("Ab parsefunc me ghus gay hai");

//parsing  the given file
    if(c=='<')//beginning of an html tag
        {
        file1>>c;
	//	xcor++;
		/*if(c== '\n')
		{
			lineno++;
			xcor=1;
		}
        */while(c!='>')//till the end of the tag
            {
			
            file1>>c;
			//xcor++;
			/*if(c== '\n')
			{
			lineno++;
			xcor=1;
			}*/
            }
		
        }
      else{
            if(c!='>')
                {
                file2<<c;//<<" ";
				//file2<<lineno<<" "<<xcor<<" ";
                file1>>c;
				//xcor++;
				/*if(c== '\n')
				{
				lineno++;
				xcor=1;
				}*/
                }

            else
               { file1>>c;
				/*xcor++;
				if(c== '\n')
				{
				lineno++;
				xcor=1*/;
				}
			   }
//System::Windows::Forms::MessageBox::Show("Read kar raha hai hai file1 se emp se");          
}

//System::Windows::Forms::MessageBox::Show("Ab write complete");

//cin>> lineno;//yaha<> khatm
//////////////////////////////////////////////////////////////////////////////////////////////////
//ab {} deal kar raha hai
file1.close();
file2.close();
ifstream file3("C:\\Windows\\Temp\\write.txt");

file3.unsetf(ios_base::skipws);//not to skip spaces and \n
ofstream file4("C:\\Windows\\Temp\\write2.txt");

 file3>>c;
while(!file3.eof())
{


//parsing  the given file
    if(c=='{')//beginning of an html tag
        {
        file3>>c;
        while(c!='}')//till the end of the tag
            {
            file3>>c;

            }

        }
      else{
            if(c!='}')
                {
                file4<<c;
                file3>>c;
                }

            else
                file3>>c;
          }
}//yahan pe write file ban gaya jo ki parse karke de dega
//yahan {} khatm
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
file3.close();
file4.close();
//yahan $; start
ifstream file5("C:\\Windows\\Temp\\write2.txt");

file5.unsetf(ios_base::skipws);//not to skip spaces and \n
ofstream file6("C:\\Windows\\Temp\\write3.txt");

 file5>>c;
while(!file5.eof())
{


//parsing  the given file
    if(c=='$')//beginning of an html tag
        {
        file5>>c;
        while(c!=';')//till the end of the tag
            {
            file5>>c;

            }

        }
      else{
            if(c!=';')
                {
                file6<<c;
                file5>>c;
                }

            else
                file5>>c;
          }
//file6<<"jhghghjghjghjghjg";
}
file5.close();
file6.close();


 //yahan pe write3 file ban gaya jo ki parse karke de dega
//iske bad removing blank lines
ifstream file7("C:\\Windows\\Temp\\write3.txt");
ofstream file8("C:\\Windows\\Temp\\write4.txt");
string line;
while(getline(file7,line))
{
	
	
		if(line.length()>0)
		{	
			
			file8 << line <<endl;
		}
		
   
 
}
file7.close();
file8.close();
//remove("write.txt");
//remove("write2.txt");
//remove("write3.txt");

const int MAX_CHARS_PER_LINE = 1000;
const int MAX_TOKENS_PER_LINE = 200;
const char* const DELIMITER = " ',@;()|`~!@#$%^&*-=_+[]{}|:/\\.\"";
ifstream fin;
ofstream fout("C:\\Windows\\Temp\\write5.txt");
  fin.open("C:\\Windows\\Temp\\write4.txt"); // open a file
 // if (!fin.good())
//    return 1; // exit if file not found
		
  // read each line of the file

  while (!fin.eof())
  {
    // read an entire line into memory
    char buf[MAX_CHARS_PER_LINE];
    fin.getline(buf, MAX_CHARS_PER_LINE);

     //parse the line into blank-delimited tokens
    int n = 0; // a for-loop index

     //array to store memory addresses of the tokens in buf
    const char* token[MAX_TOKENS_PER_LINE] = {}; // initialize to 0

     //parse the line
    token[0] = strtok(buf, DELIMITER); // first token
    if (token[0]) // zero if line is blank
    {
      for (n = 1; n < MAX_TOKENS_PER_LINE; n++)
      {
        token[n] = strtok(0, DELIMITER); // subsequent tokens
        if (!token[n]) break; // no more tokens
      }
    }

//     process (print) the tokens
    string s1;
int len;
  for (int i = 0; i < n; i++) // n = #of tokens
     {s1=token[i];
      len=s1.length();
  //bool res;
  //res=isalphabetic(s1,len);
     /* if(res)
      {*/
      fout << /*"Token[" << i << "] = " << */token[i] << endl;
     
      //}
     }
  }
fin.close();
fout.close();
ifstream fin1;
ofstream fout1("C:\\Windows\\Temp\\final.txt");
//ofstream fout2("ycor.txt");
//ofstream fout3("x1cor.txt");
//
//ofstream fout4("x2cor.txt");
  fin1.open("C:\\Windows\\Temp\\write5.txt");
  bool res;
//  bool dash;
  bool var;
  /*res=getline(fin1,line);
   res=getline(fin1,line);
    res=getline(fin1,line);*/
 // string line;
	//const char* tempvar;
while(getline(fin1,line))
{//tempvar=line;
	res=isalphabetic(line,line.length());
	var=iseligible(line);
		if(res)
		{	if(var)
			{
			
			fout1 << line <<endl;
			/*dash=*/getline(fin1,line);
			fout1 << line <<endl;
			/*dash=*/getline(fin1,line);
			fout1 << line <<endl;
			/*dash=*/getline(fin1,line);
			fout1 << line <<endl;
			}
		}
		
   
 
}
//System::Windows::Forms::MessageBox::Show("final.txt ban gaya hai");

//remove("temp.txt");
//remove("write.txt");
//remove("write2.txt");
//remove("write3.txt");
//remove("write4.txt");
//remove("write5.txt");

//parse("Read.txt");
}
};	

//*********************************************************************************************************************
//*****************************************parse and tokenise ends here *****************************************
//*********************************************************************************************************************



//#include <iostream>
//#include <string>
//#include <sstream>
//#include<fstream>
//#include <cstdlib>
//#include<cstring>
//#include<iomanip>
//#include <ctime>
//#include <limits>
//#include <cctype>
//#include "stdafx.h"
//using namespace std;
//using namespace System;
//
////*************************************parse nd tokinse starts here**********************************************************
////*********************************************************************************************************************
//class parsefile{
//	public:
//
//
//bool isalphabetic( string s,int siz)//global function to check if a word contains alphabets or other characters also
//{
//
//  /*  char ch[l];
//    ch=s;*/
//    bool alpha=true;
//    for(int i=0;i<siz;i++)
//    {
//        if(!isalpha(s[i]))
//            alpha=false;
//    }
//    return alpha;
//}
//
//
//void MarshalString ( String ^ s, string& os ) {
//   using namespace Runtime::InteropServices;
//   const char* chars = 
//      (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
//   os = chars;
//   Marshal::FreeHGlobal(IntPtr((void*)chars));
//}
//
//
//void parse(string filepath){
//
//
//
//	//*********************************************
//	ifstream filex(filepath);
//filex.unsetf(ios_base::skipws);//not to skip spaces and \n
//ofstream filey("temp.txt");
//char e,f,g;
//int lineno=1,totalchar=0;
//int xcor=1;
//int xstart=1;
//int xend=1;
// filex>>g;
// totalchar++;
// filex>>f;
// xcor++;
//  totalchar++;
// if((g!='\n'||g!='['||g!=']'||g!=' ' || g!='!' ||g!='@' || g!='#' || g!='$' ||g!='%'||g!='^'||g!='&'||g!='*'||g!='('||g!=')'||g!='-'||g!='_'||g!='+'||g!='='||g!='~'||g!='`'||g!='{'||g!='}'||g!=':'||g!=';'||g!='"'||g!='\''||g!=','||g!='<'||g!='.'||g!='>'||g!='/'||g!='?'||g!='\\'||g!='|')&&(f=='\n'||f=='['||f==']'||f==' ' || f=='!' ||f=='@' || f=='#' || f=='$' ||f=='%'||f=='^'||f=='&'||f=='*'||f=='('||f==')'||f=='-'||f=='_'||f=='+'||f=='='||f=='~'||f=='`'||f=='{'||f=='}'||f==':'||f==';'||f=='"'||f=='\''||f==','||f=='<'||f=='.'||f=='>'||f=='/'||f=='?'||f=='\\'||f=='|'))
//
//
// {
//     filey<<" "<<lineno<<" "<<xstart<<" "<<xend<<" ";
// }
// if(g== '\n')
//	{
//	lineno++;
//	xcor=1;
//	xstart=1;
//	xend=1;
//	}
// filey<<g;
//
//
//
// //abhi yahan careful rehna padega bad me dekhenge
//
// if(f== '\n')
//	{
//	lineno++;
//	xcor=0;
//	xstart=1;
//	xend=1;
//	}
// //filey<<d;
//
//e=g;
// while(!filex.eof())
// { if(totalchar!=2)
//    {
//
//     filey<<e;
//    }
//
//
// if((e=='\n'||e=='['||e==']'||e==' ' || e=='!' ||e=='@' || e=='#' || e=='$' ||e=='%'||e=='^'||e=='&'||e=='*'||e=='('||e==')'||e=='-'||e=='_'||e=='+'||e=='='||e=='~'||e=='`'||e=='{'||e=='}'||e==':'||e==';'||e=='"'||e=='\''||e==','||e=='<'||e=='.'||e=='>'||e=='/'||e=='?'||e=='\\'||e=='|') && (f=='\n'||f=='['||f==']'||f==' ' || f=='!' ||f=='@' || f=='#' || f=='$' ||f=='%'||f=='^'||f=='&'||f=='*'||f=='('||f==')'||f=='-'||f=='_'||f=='+'||f=='='||f=='~'||f=='`'||f=='{'||f=='}'||f==':'||f==';'||f=='"'||f=='\''||f==','||f=='<'||f=='.'||f=='>'||f=='/'||f=='?'||f=='\\'||f=='|'))
//
//    {
//        xstart=xcor+1;
//        xend=xcor+1;
//            if(f== '\n')
//	{
//	lineno++;
//	xcor=0;
//	xstart=1;
//	xend=1;
//	}
//
//    }
//else if((e!='\n'||e!='['||e!=']'||e!=' ' || e!='!' ||e!='@' || e!='#' || e!='$' ||e!='%'||e!='^'||e!='&'||e!='*'||e!='('||e!=')'||e!='-'||e!='_'||e!='+'||e!='='||e!='~'||e!='`'||e!='{'||e!='}'||e!=':'||e!=';'||e!='"'||e!='\''||e!=','||e!='<'||e!='.'||e!='>'||e!='/'||e!='?'||e!='\\'||e!='|')&&(f=='\n'||f=='['||f==']'||f==' ' || f=='!' ||f=='@' || f=='#' || f=='$' ||f=='%'||f=='^'||f=='&'||f=='*'||f=='('||f==')'||f=='-'||f=='_'||f=='+'||f=='='||f=='~'||f=='`'||f=='{'||f=='}'||f==':'||f==';'||f=='"'||f=='\''||f==','||f=='<'||f=='.'||f=='>'||f=='/'||f=='?'||f=='\\'||f=='|'))
//    {
//
//            xend=xcor-1;
//            filey<<" "<<lineno<<" "<<xstart<<" "<<xend<<" ";
//             xstart=xcor+1;
//
//        if(f== '\n')
//	{
//	lineno++;
//	xcor=0;
//	xstart=1;
//	xend=1;
//	}
//
//    }
//else if((e!=' ' ||e!='[' ||e!=']' || e!='!' ||e!='@' || e!='#' || e!='$' ||e!='%'||e!='^'||e!='&'||e!='*'||e!='('||e!=')'||e!='-'||e!='_'||e!='+'||e!='='||e!='~'||e!='`'||e!='{'||e!='}'||e!=':'||e!=';'||e!='"'||e!='\''||e!=','||e!='<'||e!='.'||e!='>'||e!='/'||e!='?'||e!='\\'||e!='|')&&((f!=' ' ||f!='[' ||f!=']' || f!='!' ||f!='@' || f!='#' || f!='$' ||f!='%'||f!='^'||f!='&'||f!='*'||f!='('||f!=')'||f!='-'||f!='_'||f!='+'||f!='='||f!='~'||f!='`'||f!='{'||f!='}'||f!=':'||f!=';'||f!='"'||f!='\''||f!=','||f!='<'||f!='.'||f!='>'||f!='/'||f!='?'||f!='\\'||f!='|')))
//    {
//        xend=xcor;
//     if(f== '\n')
//	{
//	lineno++;
//	xcor=0;
//	xstart=1;
//	xend=1;
//	}
//
//    }
//else if((f!=' ' || f!='!' ||f!='@' || f!='#' || f!='$' ||f!='%'||f!='^'||f!='&'||f!='*'||f!='('||f!=')'||f!='-'||f!='_'||f!='+'||f!='='||f!='~'||f!='`'||f!='{'||f!='}'||f!=':'||f!=';'||f!='"'||f!='\''||f!=','||f!='<'||f!='.'||f!='>'||f!='/'||f!='?'||f!='\\'||f!='|'||f!='['||f!=']')&&(e==' ' ||e=='[' ||e==']' || e=='!' ||e=='@' || e=='#' || e=='$' ||e=='%'||e=='^'||e=='&'||e=='*'||e=='('||e==')'||e=='-'||e=='_'||e=='+'||e=='='||e=='~'||e=='`'||e=='{'||e=='}'||e==':'||e==';'||e=='"'||e=='\''||e==','||e=='<'||e=='.'||e=='>'||e=='/'||e=='?'||e=='\\'||e=='|'))
//
//    {
//        xstart=xcor;
//        xend=xcor;
//    if(f== '\n')
//	{
//	lineno++;
//	xcor=0;
//	xstart=1;
//	xend=1;
//	}
//
//    }
////filey<<d;
//    e=f;
//    filex>>f;
//   // filey<<d;
//    xcor++;
//    totalchar++;
////    if(d== '\n')
////	{
////	lineno++;
////	xcor=0;
////	xstart=1;
////	xend=1;
////	}
// }
//
////while(!filex.eof())
////{
////
////
//////parsing  the given file
////    if(c=='<')//beginning of an html tag
////        {
////        filex>>c;
////        while(c!='>')//till the end of the tag
////            {
////            filex>>c;
////
////            }
////
////        }
////      else{
////            if(c!='>')
////                {
////                filey<<c;
////                filex>>c;
////                }
////
////            else
////                filex>>c;
////          }
////
////}//yaha<> khatm
//
//	//**********************************************
////////////////////////////////////////////////////////////////////////////////////////////
////abhi <> deal kar raha hai
// filex.close();
// filey.close();
//	ifstream file1("temp.txt");
//file1.unsetf(ios_base::skipws);//not to skip spaces and \n
//ofstream file2("write.txt");
//char c;
////int lineno=1;
////int xcor=1;
// file1>>c;
// //xcor++;
// /*if(c== '\n')
//	{
//	lineno++;
//	xcor=1;
//	}*/
// 
//while(!file1.eof())
//{
//	
//
//
//
////parsing  the given file
//    if(c=='<')//beginning of an html tag
//        {
//        file1>>c;
//	//	xcor++;
//		/*if(c== '\n')
//		{
//			lineno++;
//			xcor=1;
//		}
//        */while(c!='>')//till the end of the tag
//            {
//			
//            file1>>c;
//			//xcor++;
//			/*if(c== '\n')
//			{
//			lineno++;
//			xcor=1;
//			}*/
//            }
//
//        }
//      else{
//            if(c!='>')
//                {
//                file2<<c;//<<" ";
//				//file2<<lineno<<" "<<xcor<<" ";
//                file1>>c;
//				//xcor++;
//				/*if(c== '\n')
//				{
//				lineno++;
//				xcor=1;
//				}*/
//                }
//
//            else
//               { file1>>c;
//				/*xcor++;
//				if(c== '\n')
//				{
//				lineno++;
//				xcor=1*/;
//				}
//			   }
//          }
//
//
//
////cin>> lineno;//yaha<> khatm
////////////////////////////////////////////////////////////////////////////////////////////////////
////ab {} deal kar raha hai
//file1.close();
//file2.close();
//ifstream file3("write.txt");
//
//file3.unsetf(ios_base::skipws);//not to skip spaces and \n
//ofstream file4("write2.txt");
//
// file3>>c;
//while(!file3.eof())
//{
//
//
////parsing  the given file
//    if(c=='{')//beginning of an html tag
//        {
//        file3>>c;
//        while(c!='}')//till the end of the tag
//            {
//            file3>>c;
//
//            }
//
//        }
//      else{
//            if(c!='}')
//                {
//                file4<<c;
//                file3>>c;
//                }
//
//            else
//                file3>>c;
//          }
//}//yahan pe write file ban gaya jo ki parse karke de dega
////yahan {} khatm
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//file3.close();
//file4.close();
////yahan $; start
//ifstream file5("write2.txt");
//
//file5.unsetf(ios_base::skipws);//not to skip spaces and \n
//ofstream file6("write3.txt");
//
// file5>>c;
//while(!file5.eof())
//{
//
//
////parsing  the given file
//    if(c=='$')//beginning of an html tag
//        {
//        file5>>c;
//        while(c!=';')//till the end of the tag
//            {
//            file5>>c;
//
//            }
//
//        }
//      else{
//            if(c!=';')
//                {
//                file6<<c;
//                file5>>c;
//                }
//
//            else
//                file5>>c;
//          }
////file6<<"jhghghjghjghjghjg";
//}
//file5.close();
//file6.close();
//
//
// //yahan pe write3 file ban gaya jo ki parse karke de dega
////iske bad removing blank lines
//ifstream file7( "write3.txt");
//ofstream file8("write4.txt");
//string line;
//while(getline(file7,line))
//{
//	
//	
//		if(line.length()>0)
//		{	
//			
//			file8 << line <<endl;
//		}
//		
//   
// 
//}
//file7.close();
//file8.close();
////remove("write.txt");
////remove("write2.txt");
////remove("write3.txt");
//
//const int MAX_CHARS_PER_LINE = 700;
//const int MAX_TOKENS_PER_LINE = 150;
//const char* const DELIMITER = " ',@;()|`~!@#$%^&*-=_+[]{}|:/\\.\"";
//ifstream fin;
//ofstream fout("write5.txt");
//  fin.open("write4.txt"); // open a file
// // if (!fin.good())
////    return 1; // exit if file not found
//		
//  // read each line of the file
//
//  while (!fin.eof())
//  {
//    // read an entire line into memory
//    char buf[MAX_CHARS_PER_LINE];
//    fin.getline(buf, MAX_CHARS_PER_LINE);
//
//     //parse the line into blank-delimited tokens
//    int n = 0; // a for-loop index
//
//     //array to store memory addresses of the tokens in buf
//    const char* token[MAX_TOKENS_PER_LINE] = {}; // initialize to 0
//
//     //parse the line
//    token[0] = strtok(buf, DELIMITER); // first token
//    if (token[0]) // zero if line is blank
//    {
//      for (n = 1; n < MAX_TOKENS_PER_LINE; n++)
//      {
//        token[n] = strtok(0, DELIMITER); // subsequent tokens
//        if (!token[n]) break; // no more tokens
//      }
//    }
//
////     process (print) the tokens
//    string s1;
//int len;
//  for (int i = 0; i < n; i++) // n = #of tokens
//     {s1=token[i];
//      len=s1.length();
//  //bool res;
//  //res=isalphabetic(s1,len);
//     /* if(res)
//      {*/
//      fout << /*"Token[" << i << "] = " << */token[i] << endl;
//     
//      //}
//     }
//  }
//fin.close();
//fout.close();
//ifstream fin1;
//ofstream fout1("final.txt");
////ofstream fout2("ycor.txt");
////ofstream fout3("x1cor.txt");
////
////ofstream fout4("x2cor.txt");
//  fin1.open("write5.txt");
//  bool res;
//  bool dash;
//  /*res=getline(fin1,line);
//   res=getline(fin1,line);
//    res=getline(fin1,line);*/
// // string line;
//	//const char* tempvar;
//while(getline(fin1,line))
//{//tempvar=line;
//	res=isalphabetic(line,line.length());
//	
//		if(res)
//		{	
//			
//			fout1 << line <<endl;
//			dash=getline(fin1,line);
//			fout1 << line <<endl;
//			dash=getline(fin1,line);
//			fout1 << line <<endl;
//			dash=getline(fin1,line);
//			fout1 << line <<endl;
//		}
//		
//   
// 
//}
//
//
////remove("temp.txt");
////remove("write.txt");
////remove("write2.txt");
////remove("write3.txt");
////remove("write4.txt");
////remove("write5.txt");
//
////parse("Read.txt");
//
//
//}
//};	
//
////*********************************************************************************************************************
////*****************************************parse and tokenise ends here *****************************************
////*********************************************************************************************************************
////*********************************************************************************************************************