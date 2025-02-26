#include <iostream>
#include <iomanip>
using namespace std;
int main(){                                 
	                                 
//	                                          -------------(Lab no 04)--------------

//	                                 ******** First  Program*********


//	int X;	
//	cout<<"Enter a number:";
//	cin>>X;
//	cout<<endl;
//	(X%2==0)?cout<<"The number "<<X<<" is even":cout<<"The number "<<X<<" is odd";




//                                  *********** Second Program***********

//   int age;
//    cout<<"Enter your age: ";
//    cin>>age;
//(age<13)? cout<<"Age"<<" "<<age<<" "<<"falls under the category: Child":(age>=13)&&(age<=19)?cout<<"Age"<<" "<<age<<" "<<"falls under the category: Teenage":cout<<"Age"<<" "<<age<<" "<<"falls under the category: Adult";
//         
	
	
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
