#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
using namespace std;
void display()
{
	ifstream fin;
	char phone[12];
	cout<<"Enter your id"<<endl;
	cin>>phone;
	int a=strlen(phone);
	if(a!=10)
	{
	cout<<"You have entered a wrong id "<<endl;
	      exit(0);
}
	fin.open(phone);
	/*if(phone!=0)
	{
	   cout<<"No such file found"<<endl;
	   exit (0);	
	}*/
	
char ch;
   ch=fin.get();
	while(!fin.eof())
	{
		cout<<ch;
	ch=fin.get();
	}
	fin.close();
//	return 0;
}
