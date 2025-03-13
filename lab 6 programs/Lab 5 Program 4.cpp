#include<iostream>
using namespace std;
int main(){
	
//	      -----------Task no 04-----------
	
          int marks;
          cout<<"Enter your marks (max marks=100): ";
          cin>>marks;
          if(marks>=90){
          	cout<<"Your grade is A"<<endl;
          	
		  }
		  if(80<=marks&&marks<90){
          	cout<<"Your grade is B"<<endl;
          	
		  }
		  if(70<=marks&&marks<80){
          	cout<<"Your grade is C"<<endl;
          	
		  }
		  if(70>marks&&marks>=60){
          	cout<<"Your grade is D"<<endl;
          	
		  }
		  if(marks<60){
          	cout<<"fail"<<endl;
          	
		  }
		  return 0;
	}
		  
	
	
