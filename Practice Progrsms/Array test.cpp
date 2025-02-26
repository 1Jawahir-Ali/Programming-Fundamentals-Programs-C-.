#include<iostream>
using namespace std;
int main(){
 //Greatest number in arrays
	int N;
	int arr[N];
	int Largest_Number; 
	cout<<"Enter the size of an array: ";
	cin>>N;
	cout<<"The numbers  in array: "<<endl;
	for(int i=0;i<N;i++)
	{
	cin>>arr[i];
	}
	for(int i=1;i<N;i++)
	{
		
			if(arr[i]>Largest_Number)
			{
			Largest_Number=arr[i];	
	        }
	}
cout<<"the largest Number is "<<Largest_Number;
}
// Smallest number in arrays
//	int N;
//	int arr[N];
//	int smallestNumber;
//	cout<<"Enter the size of array:" ;
//	cin>>N;
//	cout<<"The numbers in array:"<<endl;
//	for(int i=0;i<N;i++)
//	{
//		cin>>arr[i];
//	}
//	for (int i=1;i<N;i++)
//	{
//		if(arr[i]<smallestNumber)
//		{
//			smallestNumber=arr[i];
//		}
//	}
//	cout<<"The smallest numbeer is "<<smallestNumber;
//
//
//}
