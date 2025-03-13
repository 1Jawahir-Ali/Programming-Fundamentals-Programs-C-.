#include<iostream>
using namespace std;
int main(){
	
	
//	                        PROGRAM NO_02

	int N;
	int arr[N];
     cout <<"Enter the size of array:";
     cin>>N;
     cout<<"Enter "<<N<<" integers:\n";
	for(int i=0;i<N;i++)
	{
	  cin>>arr[i];	
	}
     cout<<"Reverse Order: ";
	for(int i=N-1;i>=0;i--){
     cout<<arr[i]<<" "; 
   }
	
}
