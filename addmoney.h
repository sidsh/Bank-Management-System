#include<fstream>
#include<iostream>
using namespace std;
void addmoneyy(long int add)
{
	ofstream ob;
	char ch[12];long int n[10]; long int k,m;
	cout<<"\n please enter your phone no.";
	cin>>ch;
	  
	ob.open(ch,ios::app);
	if(!ob)
	{
	
	cout<<"u enter wrong no.";
	exit(0);
    }
    cout<<"\n enter amount u want to add\n";
    cin>>k;
    	m=k+add;
	
	ob<<"\n new ammount u added= "<<k;

	ob<<"\n total Balance= "<<m;
	ob.close();
}
