#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,2);
    cout<<"\t\t\t\t\t\t -:ACCOUNT SYSTEM(ATM):-"<<endl;
    SetConsoleTextAttribute(hConsole,7);
    double Amount=1000,depositMoney,withdrawMoney,checkBalance;
    int choice;
    
	while(choice!=4)
	{
		
	   cout <<"\nEnter 1.  to Deposit Money"<<endl;	
	   cout <<"Enter 2. to  Withdraw Money"<<endl;	
	   cout <<"Enter 3. to check Balance"<<endl;	
	   cout <<"Enter 4.  to Exit"<<endl;	
       cout<<" \nPress any Value From above Option: ";
	   cin>>choice;
	 switch(choice){
    case 1:
	   cout<<"Enter the amount you want to Deposit: ";
	   cin>>depositMoney;
	   Amount+=depositMoney;
	   cout<<"Deposit Sussessful You new amount is= "<<Amount<<endl;
	   break;
 	case 2:
	   cout<<"Enter the amount you want to Withdraw: ";
	   cin>>withdrawMoney;
	   if(withdrawMoney>Amount||withdrawMoney<0)
	   {
	   SetConsoleTextAttribute(hConsole,12);
	   	cout<<"Insufficient Balance"<<endl;
	   }else{
	   	Amount-=withdrawMoney;
	   	SetConsoleTextAttribute(hConsole,7);
	   	cout<<"Withdraw Successful You Remaning Balance is=  "<<Amount<<endl;
	   }
	   break;
	   
 	case 3:
	 cout<<"Your Current Account Balance is= : "<<Amount<<endl;
	 break;
	 
	case 4:
		cout<<"Thank You For Using Our Service..."<<endl;
		break;
		
	default:
		SetConsoleTextAttribute(hConsole,12);
	    cout<<"You entered Wrong Input"<<endl;
		break;	
	 }
	
	

}

return 0;
}
