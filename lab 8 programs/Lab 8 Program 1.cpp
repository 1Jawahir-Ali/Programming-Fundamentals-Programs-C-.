#include<iostream>
using namespace std; 
int main(){
	
	
				
	//-----------------------------------------------Program no-01-----------------------------	
	
	

	cout<<"\n\t\t\t\t\t-:Simple Calculator:-"<<endl;
	int num1,num2;
	char opr;
	cout<<"Enter number 1 :";
	cin>>num1;
	cout<<" Enter numkber 2 :"<<endl;
	cin>>num2;
	cout<<"Enter the operator :";
	cin>>opr;
	switch(opr)
	{
		case'+':
			cout<<"number1 + number2= "<<num1+num2;
			break;
		case '-':
			cout<<"number1 -number2= "<<num1-num2;
			break;
		case'*':
		   cout<<"number1 * number 2"<<num1*num2;	
		   break;
		case '/':
			cout<<"number1/number2+ "<<num1/num2;
			break;
		default:
				cout<<"invalid";
				break;
				
				
				return  0;
    }
	
         	}
		
		
		
