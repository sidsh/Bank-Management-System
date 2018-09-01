//.......bank management main................


#include<stdio.h>
#include<iostream>
#include "newaccount.h"
#include "addmoney.h"
#include "display.h"
using namespace std;

//***********Globalvaribles*********//
long int ak;

//**********prototypes***********
long int id();
void addmoneyy(long int);
void display();

int main()
{
int choice;
cout<<"To Select any option press numbers that are before to options";
cout<<"\n 1. create new account";
cout<<"\n 2. get details of ur account";
cout<<"\n 3.  update details of ur account";
cout<<"\n 4. press to exit";
cout<<"Press your choice\n";
cin>>choice;
switch(choice)
{
	
 case 1:
    ak =id();
       
        break;
case 2:
       addmoneyy(ak);
      
	  break;
case 3: 
       display();
case 4: exit (0);
        break;
default:  cout<<"Enter your valid choice";
}
}
