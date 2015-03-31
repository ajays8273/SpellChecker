//******************We have also a function void MarshalString ( String ^ s, string& os )**********************
//***********This function takes a string  as an input and a String^ and assigs the *******************
//***********************content of String^ to the string.**************************************





#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <cctype>
#include <algorithm>
#include "stdafx.h"
#include "Form1.h"
using namespace std;
	
//*********************************************************************************************************************
//*********************************************************************************************************************
//*********************************************************************************************************************
//*********************************************************************************************************************
//*************************************************node.cpp************************************************************
//*********************************************************************************************************************	
 struct position {
	
	int y;
	int x1;
	int x2;
	position(int yin,int x1in, int x2in)
	{
	y=yin;
	x1=x1in;
	x2=x2in;
	}
	/*position(int a,int b)
	{
	x=a;
	y=b;
	}*/
};

 struct Node{
	 int key;
	string word;
	vector<position> pos;
	//position posorg;
	//position posnew;
	vector<position>::iterator posit;
	Node(string wor,int y,int x1,int x2)
	{posit=pos.begin();
	word=wor;
	key=1;
	/*
	
	posorg.x=x1;
	posorg.y=y1;
	posnew.x=x2;
	posnew.y=y2;
	*/
	position *newposition=new position(y,x1,x2);
	pos.push_back(*newposition);

	}
	/*void otheroccurence(string wor,int y,int x1,int x2)
	{
	position *newposition=new position(y,x1,x2);
	pos.push_back(*newposition);
	}
 */
 };

 
	struct less_than_key
	{
	
	inline bool operator()(const Node& struct1,const Node& struct2)
	{
	return (struct1.key<struct2.key);
	}
	
	};

class words{
	
public:
	vector<Node> node;
	vector<Node>::iterator it;
	void addnew(string wor,int y,int x1,int x2)
	{
	Node *newNode= new Node(wor,y,x1,x2);
	node.push_back(*newNode);
	
	}
	void addsame(string wor,int y,int x1,int x2)
	{//int cont=0;
	/*
		for(it=node.begin();it!=node.end();it++)
		{
			if(it->word==wor)
			{cont++;*/
			position *newposition=new position(y,x1,x2);
			it->pos.push_back(*newposition);
			(it->key)++;
			/*break;
			}
		}*/
		/*if(cont=0)
		{
			addnew(wor,y,x1,x2);
		}*/
	}


	void updatenode(int xindex,int difference)
	{//this function is used to update the xcoodinates of all the nodes which have x coordinate greater than x1
	
	//vector<Node>::iterator it;
	for( it=node.begin();it !=node.end();it++)
	{
		for(it->posit=it->pos.begin();it->posit!=it->pos.end();(it->posit)++)
	{
		if(it->posit->x1>xindex+1)//+1 is done so that it does not change the index of the same word that is deleted before deleting
		{
			it->posit->x1+=difference;
			it->posit->x2+=difference;
		}
	}
	
	}

	
	}

	void updatekeytozero(string word)
	{
		for( it=node.begin();it !=node.end();it++)
		{
			if(it->word==word)
				it->key=0;

		}
	}
	void getfirstcoordinates(string word,int& ycor,int& xstart,int& xend)
	{//to the string given as arguments it gives the values
		for( it=node.begin();it !=node.end();it++)
		{	
			if(it->word==word)
			{
			it->posit=it->pos.begin();
			ycor=it->posit->y;
			
			xstart=it->posit->x1;
			
			xend=it->posit->x2;
			
			}
		}
		
	}

	int getkey(string word)
	{
	
		for( it=node.begin();it !=node.end();it++)
		{	
			if(it->word==word)
			{

				return it->key;

			}
		}
		return 0;
	
	}
	
	void deletealloccurrenceofword(string word)
	{
		for( it=node.begin();it !=node.end();it++)
		{	
			if(it->word==word)
			{
				
			node.erase(it);
				
			}
		}
	}
	
	void deletefirstoccurrenceofstring(string word)
	{int i=0;
		for( it=node.begin();it !=node.end();it++,i++)
		{	
			if(it->word==word)
			{
			if((it->pos.size())==1)
				{

				node.erase(it);
				//it->pos.erase(pos.begin());
				}
			else
				{
					it->pos.erase(it->pos.begin());
					it->key--;
				}
			
			break;
			}
		}
	
	
	
	}
	

	bool ispresent(string word)
	{
	 bool res=false;
		for( it=node.begin();it !=node.end();it++)
		{	
			if(it->word==word)
			{				
				res=true;
				break;
			}
		}
	 return res;
	}
	
	void sortkey()
	{
	
	std::sort(node.begin(),node.end(),less_than_key());
	
	}


	void print()
	{
	vector<Node>::iterator it;
	for( it=node.begin();it !=node.end();it++)
	{
		int con=0;
	cout<<it->word<<endl;
	for(it->posit=it->pos.begin();it->posit!=it->pos.end();(it->posit)++)
	{
	cout<<"("<<it->posit->y<<","<<it->posit->x2<<","<<it->posit->x1<<")"<<endl;
	con++;
	}
	cout<<con<<endl;
	cout<<endl<<endl;;
	/*cout<<"("<<it->posorg.x<<",";
	cout<<it->posorg.y<<")"<<endl;
	cout<<"("<<it->posnew.x<<",";
	cout<<it->posnew.y<<")"<<endl;
	cout<<endl;
*/
	}
	
	}
	

	
};

//*********************************************************************************************************************
//*********************************************************************************************************************
//**************************************node.cpp ends here****************************************************
//*********************************************************************************************************************
