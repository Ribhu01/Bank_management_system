#include<iostream>
#include <cstdio>

#define clrscr()system("cls")
using namespace std;


class Bank{

private:
       int amount;
public:
    Bank(){
    amount = 0;
   }

void deposit(int amt);
void withdrawal(int amt);
void balance();
};

void Bank :: deposit(int amt)
{
    if(amt<0){
        cout<<"\nInvalid amouunt.";
    }else{
    amount = amount+amt;
    }
}
void Bank :: withdrawal(int amt)
{
    if (amt>amount){
        cout<<"\nInsufficient balance.";
    }else{
    amount = amount-amt;
    }
}
void Bank :: balance()
{
   cout<<"\nAvailable balance - " <<amount;
}
int main(){
    string s;
    int count=4;;
        clrscr();
  while(count !=0){
        cout<<"\nEnter pin- ";
       cin>>s;
        if (s=="1234"){
          break;
          }else{
            count--;
          cout<<"\nInvalid pin:"<<count<<"try left.";}
        
    }
    if(count==0){
        cout<<"\nYour acount is blocked for 24 hours.";
        cout<<endl;
    }
if (s=="1234"){

    int Chosen,amt;
    Bank c1;
    
do{ 
    
  
  cout<<"\n-------------------------------Bank Application-------------------------------";
  cout<<"\n 1. Deposit.";
  cout<<"\n 2. Withdrawal.";
  cout<<"\n 3. Balance.";
  cout<<"\n 4. Exit.";
  cout<<"\n-------------------------------------------------------------------------------";
  cout<<"\nEnter your choice -";
  cin>>Chosen;
  switch (Chosen)
  {
  case 1:
    {
        cout<<"\nEnter amount for deposite- ";
        cin>>amt;
      c1.deposit(amt);
      break;
    }
    case 2:
    {
        cout<<"\nEnter amount for withdrawal- ";
        cin>>amt;
      c1.withdrawal(amt);
      break;
    }
case 3:
{
    c1.balance();
}
  default:
    break;
  }
  }while(Chosen != 4);

}else{
    cout<<"\nInvalid pin.";
}



  return 0;
}

