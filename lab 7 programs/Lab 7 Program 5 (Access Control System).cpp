#include<iostream>
using namespace std;
int main(){
	
//	              -------------------Program of  Access Control System---------------
	
	
	string username,password;
	cout<<"enter username :";
	cin>>username;
	cout<<"enter password :";
	cin>>password;
	if(username=="admin" && password =="password123"){
		cout<<"\n\tAuthentication successful"<<endl;
	}
	else if(username!="admin" || password !="password123"){
		cout<<"\n\tAuthebtication failed, Access dinied"<<endl;
		return 0;
	}
	string role;
	cout<<"Enter you role :";
	cin>>role;
	if(role=="admin"){
		cout<<"\n\t\tFull access granted"<<endl;
	}
	else if(role=="guest"){
		cout<<"\n\t\tLimited access "<<endl;
	}
	else{
		cout<<"\n\t\tNo access"<<endl;
	}
	
	
	return 0;
}

