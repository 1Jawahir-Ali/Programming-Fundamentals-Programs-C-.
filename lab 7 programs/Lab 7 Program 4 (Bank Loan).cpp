#include<iostream>
using namespace std;
int main(){
	

	
//	                           -------------------- Program no 4--------------------
	
	
//	                                           ------Program for bank loan------
	
	int age,income;
	cout <<"Enter your age :";
	cin>>age;
	cout<<"Enter your income :";
	cin>>income;
	if(age<18)
	{
		cout<<"You are not eligible for loan because you are under 18 year age.";
	}
	else if(age>18&&income<30000)
	{
		cout<<"You meet the age requirement but are not eligible for a loan because your income is below 30,000.";
	}
	else
	{
		cout<<"Congratulation!Your are eligible for a loan.";
	}
	return 0;
}


