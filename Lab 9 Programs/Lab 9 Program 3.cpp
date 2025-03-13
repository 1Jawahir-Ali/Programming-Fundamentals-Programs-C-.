#include<iostream>
using namespace std;
int main(){
	
	
//	                                     PROGRAM_NO_3
	
	
	int N;
	cout <<"Enter a positive Number: ";
	cin>>N;
	while(N<=0){
		cout<<"\nError!Your Enter  number is not a positive\n"<<endl;
		cout<<"Please enter a positive Number:";
		cin>>N;
	}
	cout<<"\nYou enter: "<<N<<endl;
	
	return 0;
}
