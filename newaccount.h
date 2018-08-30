#include<iostream>
using namespace std;
#include<fstream>
#include<stdio.h>

void  id()
{
 char name[10],parentage[10],money1[20];long int phone,money; int i=-1,dob;  
ofstream fout;
cout<<"Enter your name\n";
cin>>name;
cout<<"Enter your parentage\n";
cin>>parentage;
cout<<"Enter dob\n";
scanf("%d",&dob);
cout<<"Enter ur phone no";
cin>>phone;
cout<<"Your phone no. is ur login id also";
cout<<"if u want to add money to account \n then press  any key to contuniue";
cin>>i;
if(i!=-1)
{
    cout<<"Plese enter ur ammount in numbers";
    cin>>money;
    cout<<"Your Balance has been updated";
} 
fout.open("id.txt");
fout.close();

    
}
