#include<iostream>
using namespace std;
#include<fstream>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
long int updatebalance;
long int  id()
{
 char name[15],parentage[10],phone[13],dob;long int money; int i=1;
 ofstream fout;
 cout<<"Enter ur phone no  please write 10 digits";
cin>>phone;
int a=strlen(phone);
if(a!=10)
{
	cout<<"PHONe no  incorrect";

	exit(0);
}
fout.open(phone);

cout<<"Enter your name\n";
scanf("%s",name);
fout<<"\nNAME= "<<name;
cout<<"Enter your parentage\n";
cin>>parentage;
fout<<"\nPARENTAGE=  "<<parentage;
cout<<"Enter dob\n";
cin>>dob;
fout<<"\nDOB=  "<<dob;
cout<<"if u want to add money to account then any key and if u want to exit then press  1";
scanf("%d",&i);
if(i!=1)
{

    cout<<"Plese enter ur ammount in numbers";
    scanf("%ld",&money);
    
    
    fout<<"\nTOTAL BALANCE= "<<money;
    cout<<"Your Balance has been updated";
    
}


cout<<"moneyyy=="<<money;
return(money);
fout.close();
}
