#include<iostream>
using namespace std;
int main(){


//                                         PROGRAM_NO_2--for table of Number

	int N,i=1;
	cout<<"Enter the number: ";
	cin>>N;
	cout<<"\t\t\t\t-:TABLE OF "<<N<<":-\n"<<endl;
	while(i<=10){
	cout<<N<<"x"<<i<<"="<<i*N<<endl;
	i++;
	}
	return 0;
}
