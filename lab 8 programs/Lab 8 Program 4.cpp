#include<iostream>
using namespace std; 
int main(){
	
 //-------------------------------------Program no 04..........................................
	
	
	cout<<"\t\t\t\n\t\t\tProgram for currency converter\n"<<endl;
	int currency;
	int amount;
	cout<<"1. to conver USD to PKR"<<endl;
	cout<<"2. to convert USD to INR"<<endl;
	cout<<"3. to convert USD to Euros"<<endl;
	cin>>currency;
	switch(currency)
	{
		case 1:
			cout<<" Enter the amount in USD: ";
			cin>>amount;
			cout<<"The amount in PKR is= "<<amount*280<<" PKR"<<endl;
		break;
		case 2:
			cout<<"Enter the amount in USD: ";
			cin>>amount;
			cout<<"The amount in INR is= "<<amount*83<<" INR"<<endl;
			break;
		case 3:
			cout<<"Enter the amoint in USD: ";
			cin>>amount;
			cout<<"The amount in Euros is= "<<amount*0.93<<" Euros"<<endl;
			break;
		default:
			cout<<"Please enter rhe valid option."<<endl;
	}
}
	
	
	
	
	
