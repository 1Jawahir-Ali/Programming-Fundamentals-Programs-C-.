#include<iostream >
using namespace std;
int main(){
    
	//  Program ---> 06



  void *ptr;
  int a=10;
  ptr=&a;
  *(int*)ptr;
  cout<<*(int*)ptr<<endl;

return 0;
}
