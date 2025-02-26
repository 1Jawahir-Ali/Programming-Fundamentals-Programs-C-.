#include<iostream>
#include<iomanip>
using namespace std; 
int main(){
		cout<<"\n -:BMI Calculator:-"<<endl;
		cout<<setfill('*')<<setw(100)<<endl;
	  double weight,height;
	  cout<<"\nEnter your weight in kilogram: ";
	  cin>>weight;
//	   cout<<"Kg"<<endl;
	  cout<<"Enter your height in meter : ";
	  cin>>height;
	 double BMI=weight/(height*height);
	  cout<<"your BMI is:"<<BMI<<endl;
	  
	  
	  
}
