#include<iostream>
using namespace std;
int main(){
	
//	                                       --------------Program no 2-------------------
	
	
	double Temperature;
	cout<<"Enter temperature :";
	cin>>Temperature;
	if(Temperature>=40)
	{
		cout<<"\n\tStay  at home because it is extermely hot and could be dangerous for your haelth.";
	}
	else if(Temperature>=30&&Temperature<=39)
	{
		cout<<"\n\tDrink plenty of water to stay hydrated. ";
	}
	else if(Temperature>=20 &&Temperature<=29)
	{
		cout<<"\n\tYou may go out side and enjoy the beauty of nature.";
	}
	else
	{
		cout<<"\n\tWear warm clothes and stay at home. ";
	}
}
	
	
