#include<iostream>
using namespace std;
int main(){
	
	
//	                       			 PROGRAM NO_05

	int N;
	int arr[N];
	int Largest_Number; 
	cout<<"Enter the size of an array: ";
	cin>>N;
	cout<<"\n\t\tEnter the "<<N<<" Number in array: "<<endl;
	for(int i=0;i<N;i++){
	cin>>arr[i];
	}
	
	for(int i=1;i<N;i++)
	{
		
			if(arr[i]>Largest_Number)
			{
			Largest_Number=arr[i];	
			
	          }
	
}
cout<<"The largest Number is "<<Largest_Number;
}

