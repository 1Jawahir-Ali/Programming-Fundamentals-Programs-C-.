#include<iostream >
using namespace std;
int main(){
	
	// Program NO 02
	
	int n=6;
	int *ptr=&n;
	*ptr=9;
	cout<<"The modified value is: "<<n<<endl;
	
	return 0;
}
