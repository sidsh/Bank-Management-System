//.......bank management main................


#include<stdio.h>
#include<iostream>
using namespace std;


int main()
{
cout<<"\t\t\t\t...MAIN MENU..."<<endl;
  cout<<" 1: NEW ACCOUNT "<<endl;
  cout<<" 2: DEPOSIT AMOUNT "<<endl;
  cout<<" 3: WITHDRAWL AMOUNT "<<endl;
  cout<<" 4: BALANCE ENQUIRY "<<endl;
  cout<<" 5: ALL ACCOUNT HOLDER LIST "<<endl;
  cout<<" 6: CLOSE AN ACCOUNT "<<endl;
  cout<<" 7: MODIFY AN ACCOUNT "<<endl;
  cout<<" 8: EXIT "<<endl;
  int choice;
  cin>>choice;
  switch(choice)
  {
    case 1 : cout<<"WElcome to our bank "<<endl;
                     new_account();
              break();
    case 2 : depo_amount();
             break();
    case 3 : with_amount();
             break();
    case 4 : bal_enquiry();
             break();
    case 5 : all_acc_hol();
             break();
    case 6 : clo_account();
             break();
    case 7 : mod_account();
             break();
    case 8 : exit();
    case 9 : cout<<"PLEASE ENTER THE CORRECT CHOICE "<<endl;
             break();
  }
  



}

