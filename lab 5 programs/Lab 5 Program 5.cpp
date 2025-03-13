#include<iostream>
using namespace std;
int main(){
	
//	--------------Task no 05-------------
	
	char color;
	cout<<"Enter the color of signal(R for red,G for green,Y for Yellow ): ";
	cin>>color;
	if(color=='R'||'r'){
		cout<<"STOP!"<<endl;
		
	}
	if(color=='G'||'g'){
		cout<<"GO"<<endl;
	}
	if(color=='Y'||'y'){
	
	cout<<"SLOW DOWN!"<<endl;
    }
 
  return 0;
}
