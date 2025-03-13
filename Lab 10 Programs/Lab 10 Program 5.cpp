#include<iostream>
using namespace std;
int main(){

//                                     PROGRAM NO_05

   int i,j;
   int fact=1;
    cout<<"Enter the number : ";
    cin>>i;
   if(i<0)
  {
  	cout<<"The factorial of negative number is not defined."<<endl;
  }                             
	for(j=i;j>=1;j--)
	{
	   fact=fact*j;
    }
     cout<<"Factorial of "<<i<<" is = "<<fact;

	
}
