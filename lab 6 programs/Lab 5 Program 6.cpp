#include<iostream>
using namespace std;
int main(){
	
	
//	                                                    ----------------task no 06-----------
	cout<<"ATM Machine"<<endl;
	int total_amount,with_drawal,remain;
	cout<<"Enter you total amount in account :";
	cin>>total_amount;
	cout<<" Enter the amount you want to withdraw :";
	cin>>with_drawal;
	if(with_drawal<=total_amount)
	{
		remain=total_amount-with_drawal;
		cout<<"Your with drawal is :"<<with_drawal<<endl;
		cout<<"Your remaining balance is :"<<remain;
	}
	
	else{
	
	cout<<"Insufficient balance"<<endl;
      }
    return 0;
}
      
      
