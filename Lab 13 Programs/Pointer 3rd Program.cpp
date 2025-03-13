#include<iostream >
using namespace std;
int main(){
	//Program no 3
	
	int arr[4]={2,4,6,8};

	int *ptr = &arr[0];
		for(int i=0;i<4;i++)
		{
		cout<<*ptr<<" ";
    	ptr++;
        }
	
}
	
	
