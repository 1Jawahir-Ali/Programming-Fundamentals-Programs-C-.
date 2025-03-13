#include<iostream>
using namespace std;
int main(){
	cout<<"\t\t\t\n\t\t\tWELCOME TO GBIANS RESTAURANT\n"<<endl;
	cout<<"\n\t\t\t:RESTAURANTS MENU SYSTEM:\n"<<endl;

    char Main_Menu;
	int subMenu; 
	double Quantity, totalBill;
	bool X;
	do{
		cout<<"\tEnter From the Following: \n \n B For Breakfast\n L For Lunch\n D For Dinner\n"<<endl;	
		cin>>Main_Menu;
		switch(Main_Menu){ 
			case 'B':
			case 'b':	
				cout<<"Breakfast Menu is here\n1.for Anda Paratha\n2.for Nan Channy\n3.Siri Paye\n4. for Tea "<<endl;
				cin>>subMenu;
				switch(subMenu){
					case 1:
						cout<<"How much you want to order?"<<endl;
						cin>>Quantity;
						totalBill+=40*Quantity;
						break;
					case 2:
			    		cout<<"How much you want to order?"<<endl;
			    		cin>>Quantity;
			    		totalBill+=60*Quantity;
			    		break;
					case 3:
						cout<<"How much you want to order?"<<endl;
						cin>>Quantity;
						totalBill+=150*Quantity;
						break;
					case 4:
			    		cout<<"How much you want to order?"<<endl;
			    		cin>>Quantity;
			    		totalBill+=15*Quantity;
			    		break;
		}
		
				break;
		
			case 'L':
			case 'l':	
				cout<<"Lunch Menu is here\n1. for Chicken Karahi\n2. for Mutton karahi\n3. for Egg Fried Rice\n4. for BBQ"<<endl;
				cin>>subMenu;
				switch(subMenu){
	    			case 1:
			  			 cout<<"How much you want to like order?"<<endl;
			  			 cin>>Quantity;
			  			 totalBill+=Quantity*1050;
			  			 break;
		    		case 2:
			   			cout<<"How much you want to like order?"<<endl;
			    		cin>>Quantity;
			    		totalBill+=Quantity*1800;
			   			break;
	     	        case 3:
		   	            cout<<"How much you want to like order?"<<endl;
		   	            cin>>Quantity;
		   	            totalBill+=Quantity*450;
			            break;
	     	        case 4:
		                cout<<"How much you want to like order?"<<endl;
		                cin>>Quantity;
		                totalBill+=Quantity*1050;
			            break;	
			}
	
	
		       break;
		
		   case 'D':
		   case	'd':
			   cout<<"Dinner Menu is here \n1. for Chicken Karahi\n2. for Mutton Karahi\n3. for Egg Fried Rice\n4.for BBQ\n5.Saji"<<endl;
		      cin>>subMenu;
			   switch(subMenu){
			       case 1:
				      cout<<"How much you want to like order"<<endl;
				      cin>>Quantity;
			          totalBill+=Quantity*1050;
			    	  break;
			      case 2:
			          cout<<"How much you want to like order"<<endl;
				      cin>>Quantity;
				      totalBill+=Quantity*1800;	
			          break;
			      case 3:
				      cout<<"How much you want to like order"<<endl;
				      cin>>Quantity;
				      totalBill+=Quantity*450;
				      break;
			     case 4:	
				      cout<<"How much you want to like order"<<endl;
				      cin>>Quantity;
				      totalBill+=Quantity*1050;
			          break;
			     case 5:
			          cout<<"How much you want to like order"<<endl;
			          cin>>Quantity;
			          totalBill+=Quantity*800;
			          break;
		}
		
		       break;
		
	}	
		      cout<<"Do you want to Order something else?"<<endl;
		      cout<<"1 for Yes and 0 for No"<<endl;
	          cin>>X;
	}
			while(X==1);
			{
			cout<<"Your total bill= "<<totalBill<<endl;
	        }
			 
	}
	
	
	
	
	
	
	
	
	

