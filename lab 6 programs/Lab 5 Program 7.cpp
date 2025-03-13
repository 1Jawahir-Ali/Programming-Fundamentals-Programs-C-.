#include<iostream>
using namespace std;
int main(){
	
	
 // -----------task no 07-------------
	
	int salary,work_experience;
	cout<<"Enter your salary: ";
	cin>>salary;
	cout<<"\nYour work experience: ";
	cin>>work_experience;
	if((salary>=25000)||(salary>=20000&&work_experience>5)){
		cout <<"\nEligible For Loan.";
	}

	else
		cout<<" \nSorry! You are not eligible for loan.\n";
	
		return 0;
	}
