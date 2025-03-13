#include <iostream>
using namespace std;
int main(){                                 
	           

//                                  *********** Second Program***********

   int age;
    cout<<"Enter your age: ";
    cin>>age;
(age<13)? cout<<"Age"<<" "<<age<<" "<<"falls under the category: Child":(age>=13)&&(age<=19)?cout<<"Age"<<" "<<age<<" "<<"falls under the category: Teenage":cout<<"Age"<<" "<<age<<" "<<"falls under the category: Adult";
         
	return 0;
}
