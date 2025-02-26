#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	
//	                          ------Task no#01_                                            ------Lab no_03-----                                 
	
//	double item1=12.95;
//	double item2=24.95;
//	double item3=6.95;
//	double item4=14.95;
//	double item5=3.95;
//	double subtotal=item1+item2+item3+item4+item5;
//	double saletax=subtotal/100*6;
	
//	cout<<"price of item1: $"<<item1<<endl;
//	cout<<"price of item2: $"<<item2<<endl;
//	cout<<"price of item3: $"<<item3<<endl;
//	cout<<"price of item4: $"<<item4<<endl;
//	cout<<"price of item5: $"<<item5<<endl;
//	cout<<"subtotal : $"<<subtotal<<endl;
//	cout<<"sale tax (6%) :"<<saletax<<endl;
//	
//	cout<<"total : $"<<subtotal+saletax<<endl;

	
//	                                              ------------------Task no#02------------
   
   
//	double a=85.5,b=90.75,c=88.5;
//	double ave=(a+b+c)/3;
//	cout<<"the average of three number is = "<<setprecision(4)<<ave<<endl;
//	
	
	
//                                                   ______ Task no#03 ________

  /*int num1,num2,sum,sub,multip,divison,modulus;
	cout<<"Please Enter The  Two Numbers: "<<endl;
    cout<<"Number1 : ";
    cin>>num1;
    cout<<"Number2 : ";
    cin>>num2;
	sum=num1+num2;  
	cout<<"\n"<<endl;
	cout<<"\tAddition:\n\t\t"<<num1<<"+"<<num2<<"="<<sum<<endl;
	sub=num1-num2;
	cout<<"\tSubtraction:\n\t\t"<<num1<<"-"<<num2<<"="<<sub<<endl;
	multip=num1*num2;
	cout<<"\tMultiplication:\n\t\t"<<num1<<"*"<<num2<<"="<<multip<<endl;
	divison=num1/num2;
	cout<<"\tDivision:\n\t\t"<<num1<<"/"<<num2<<"="<<divison<<endl;
	modulus=num1%num2;
	cout<<"\tModulus:\n\t\t"<<num1<<"%"<<num2<<"="<<modulus<<endl;
	  
	  */
	  
	  
//	                                              ------------Task NO# 04------------

/*	cout<<"\nBMI Calculator\n------------"<<endl;
	  double weight,height;
	  cout<<"Enter your weight in kilogram: ";
	  cin>>weight;
	  cout<<"Enter your height in meter : ";
	  cin>>height;
	  
	 double BMI=weight/(height*height);
	  cout<<"your BMI is:"<<BMI<<endl; 
	  */
	  
//                                                  ------------Task NO# 05-----------
	  
	  
	cout<<"Trip Cost Estimator\n------------------------------------"<<endl;
	double distance, fuel_efficency,fuel_cost_per_liter;
	cout<<"Enter distance of trip in kilometers: ";
	cin>>distance;
	cout<<"Enter vehicle's fuel efficency (km per liter): ";  
	cin>> fuel_efficency;
	cout<<"Enter fuel cost per liter: ";
	cin>>fuel_cost_per_liter;
	double Total_Trip_cost=(distance/ fuel_efficency)*fuel_cost_per_liter;
	cout<<"Total trip cost: Rs "<<Total_Trip_cost<<endl;
	
	 return 0;
          
		   }
