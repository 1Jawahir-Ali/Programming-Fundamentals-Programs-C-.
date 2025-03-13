#include<iostream>
using namespace std; 
int main(){
		
		
		
	//-----------------------------------------------Program no-03------------------------------------
	
	
	//Area of different shapes using switch statements
	cout<<"\t\tArea of different shapes\n"<<endl;
	int shape, r,l,w,b,h;
	cout<<"1.for circle"<<endl;
	cout<<"2.for Rectangle"<<endl;
	cout<<"3.for Triangle\n"<<endl;

	cin>>shape;
	switch(shape)
	{
		case 1:
			cout<<"Enter the radius of circle";
			cin>>r;
			cout<<"The area of circle is= "<<3.14*r*r;
			break;
			
		case 2:
			cout<<"Enter the length: ";
			cin>>l;
			cout<<"Enter the width: ";
			cin>>w;
			cout<<"The area of rectangle= "<<l*w<<endl;
			break;
		case 3:
			cout<<"Enter the base of triangle: ";
			cin>>b;
			cout<<"Enter the height of triangle: ";
			cin>>h;
			cout<<"The area of Triangle is= "<<(b*h)/2<<endl;
			break;
		default:
			cout<<"Please! choose the right option."<<endl;	
	}
}

	
