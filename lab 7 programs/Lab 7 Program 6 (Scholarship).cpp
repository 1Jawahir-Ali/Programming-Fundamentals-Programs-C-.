#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
		
   double total_marks,PF,Math,ICT;
   double percentage;                                 // Total Markas = 300
   char grade_PF,grade_Math,grade_ICT;               // Total Marks of one subject is 100.
    cout<<" Enter the Marks in PF: ";
     cin>>PF;
     if(PF>=90)
	 {
	 	grade_PF='A';
     }
	 	else if (PF>=80 && PF<90)
	 	{
		 grade_PF='B';
        }	 
	    else if (PF>=70 && PF<80)
	    {
	 	grade_PF='C';
		}
	 	else if (PF>=60 && PF<70)
	 	{
		 grade_PF='D';
		}	 
	else
	    {
		 grade_PF='F';
		}
	 	
    cout<<" Enter the Marks in Math: ";
     cin>>Math;
     if(Math>=90)
	 {
     	grade_Math='A';
	 }
	 	else if (Math>=80 && Math<90)
	   	{
		 grade_Math='B';
	    }
	 	else if (Math>=70 && Math<80)
	 	{
		 grade_Math='C';
		}
	 	else if (Math>=60 && Math<70)
	 	{
		 grade_Math='D';
		}
	else
         {
		 grade_Math='F';
		 }
	 	
    cout<<" Enter the Marks in ICT: ";
     cin>>ICT;
     if(ICT>=90)
	  {
		 grade_ICT='A';
	  }
	 	else if (ICT>=80 && ICT<90)
	 	{
		 grade_ICT='B';
		}
	 	else if (ICT>=70 && ICT<80)
	 	{
		 grade_ICT='C';
		}
	 	else if (ICT>=60 && ICT<70)
	 	{
		 grade_ICT='D';
		}
	else
	 	 {
		 grade_ICT='F';
		 }
		 
		
	 	cout<<" \n\t\tOUTPUT'S ARE BELOW.\n"<<endl;
	 	cout<<" Grade in PF= "<<grade_PF<<endl;
	 	cout<<" Grade in Math= "<<grade_Math<<endl;
	 	cout<<" Grade in ICT= "<<grade_ICT<<endl;

      
    
    if(grade_ICT=='F' || grade_Math=='F'  || grade_PF=='F')
    {
   	cout<<" Failed"<<endl;
		 	return 0;
	}
    total_marks=PF+Math+ICT;
      cout<<" Total marks= "<< total_marks<<endl;
      
    percentage=(total_marks/300)*100;
      cout<<" Percentage= "<<setprecision(4)<<percentage<<"%"<<endl;
    
 if(percentage>=90)
   {
   	cout<<"Overall Grade= A";
   }
   else if(percentage>=80 && percentage<90)
   {
   	cout<<" Overall Grade= B";
   }
   else if(percentage>=70 && percentage<80)
   {
   	cout<<" Overall Grade= C";
   }
   else if(percentage>=60 && percentage<70)
   {
   	cout<<" Overall Grade= D";
   }
   else 
   {
   	cout<<" Overall Grade= F";
   }
   
      cout<<endl;
      int scholarShip;
      cout<<"\n Do yo want to check the scholorship eligibility? if yes then press 1 else press any key to exit: ";
      cin>>scholarShip;
      
    if(scholarShip==1)
  {
    if(grade_PF=='A' && grade_Math=='A'  && grade_ICT=='A' &&  total_marks>=270)
    {
	    cout<<"\n You are eligible for a Merit Scholarship.";
	}
	   else if(grade_PF=='A'||'B'&& grade_Math=='A'||'B'&& grade_ICT=='A'||'B'&& total_marks>=240)
	   {
	   cout<<"\n You are Eligible for Regular Scholarship.";
	   }
    else 
     {
	      	cout<<"\nSorry! You Are  Not  Eligible For Scholarship.";
     }
  }  
     else
	 {
	    cout<<" Thank You..."<<endl;
     }



	
}
