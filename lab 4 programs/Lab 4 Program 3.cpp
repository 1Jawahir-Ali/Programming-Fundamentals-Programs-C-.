#include <iostream>
using namespace std;
int main(){   
	
//	                                ++++++++ Third program ++++++++ 
	
	int x;
	cout<<"\nPlease Enter Your Account Balance: ";
	cin>>x;
	(x<100)?cout<<"\nThe account is Low Balance account":(x>=500)?cout<<"The account is Premium account":cout<<"The account is Standard acccount";
	cout<<""<<endl;
    bool y;
    cout<<"enter 1 for loyal  : ";
    cin>>y;
   (x>=200&&y==1)?cout<<"The customer is eligible ":cout<<"the customer is not eligible";
  	                   


return 0;
}
