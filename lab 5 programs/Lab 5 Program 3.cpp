#include<iostream>
using namespace std;
int main(){
	
//	                                                 ----------TASK NO 03---------
	
	int num1,num2,num3;
	cout<<"\tEnter number 1:";
	cin>>num1;
		cout<<"\n\t\tEnter number 2:";
	cin>>num2;
		cout<<"\n\t\t\tEnter number 3:";
	cin>>num3;
	if(num1>num2 && num1>num3){
		cout<<"First nummber is the largest :"<<num1;
	}
	if(num2>num1 && num2>num3){
		cout<<"Second number is the largest :"<<num2;
	}
	if(num3>num1 && num3>num2){
		cout<<"Third number is the largest :"<<num3;
	}
//	if (num1==num2&&num1==num3){
//		cout<<"All are equals";
//	}
	
	 return 0;
}
	
	
