#include<iostream>
using namespace std;
int main(){
		
//	                                  ---------- Program no 3------------
	
	string username="Admin";
	string password="12345";
	cout<<"Enter username :";
	cin>>username;
	cout<<"\n\tEnter your Password :";
	cin>>password;
	if(username=="Admin"&&password=="12345")
	{
		cout<<"\n\t\tAccess Granted.";
	}
	
	else if(username=="Admin"&&password!="12345")
	{
		cout<<"\n\t\tWrong Password!";
	}
	else{
		cout<<"\n\t\tuser not Found.";
	}
	return 0;
}

