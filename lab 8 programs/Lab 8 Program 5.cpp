#include<iostream>
using namespace std; 
int main(){
	
	
	//-------------------------------------------------  Program no-05---------------------------
	
	
	cout<<"\t\n\t\tShopping System\t\n"<<endl;
	char category;
	cout<<"Enter the category of items : (E or e for Electronics, C or c for Cloathing, G or g for Groceries) :";
	cin>> category;
	switch(category)
	{
	
	case 'E':
	case 'e':	
		cout<<"\n\t\t\tElectronic"<<endl;
		int electronic;
		cout<<" Enter 1 for laptop \n Enter 2 for smart phone \n Enter 3 for headphones"<<endl;
		cin>>electronic;
		switch(electronic)
		{
			case 1:
				cout <<"Laptop price = $1000"<<endl;
				break;
				
			case 2:
			    cout<<"Smart Phone price = $700"<<endl;
			    break;
			case 3:
			    cout<<"Head Phone price = $150"<<endl;
				break;
			default:
				cout<<"Enter the valid option";
				break;
			}
			
			    break;
			    
		    case 'C':
		    case 'c':	
			    cout<<"clothing"<<endl;
			    int clothing;
			    cout<<"Enter 1 for jacket\nEnter 2 for shirt\nEnter 3 for jeans"<<endl;
			    cin>>clothing;
	    	switch(clothing)
			{
				case 1:
					cout<<"Jacket price= $120"<<endl;
					break;
				case 2:
				    cout<<"Shirt price= $40"<<endl;
				    break;
				case 3:
				    cout<<"Jeans price= $60"<<endl;
				    break;
				    default:
				    cout<<"Enter the valid option";
				    break;
				}
		            break;
					 
				case 'G':
				case 'g':	
					int Groceries;
					cout<<"Groceries"<<endl;
					cout<<"Enter 1 for milk\nEnter 2 for bread\nEnter 3 for egg"<<endl;
					cin>>Groceries;
			switch(Groceries)
					{
				case 1:		
					cout<<"milk price = $2"<<endl;
					break;
				case 2:
				    cout<<"bread price = $3"<<endl;
				    break;
				case 3:
					cout<<"egg price = $5"<<endl;
					break;
			    default:
				    cout<<"Enter the valid option";
				    break;
				    		
			}
			
			        break;
		
		
		
	}
	
}


