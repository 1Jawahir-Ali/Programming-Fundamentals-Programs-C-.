//for ict course
	int m1; int m2; int m3;
	cout<<"Enter your marks in ICT :";
	cin>>m1;
	cout<<"Enter your marks in calculus :";
	cin>>m2;
	cout<<"Enter your marks in programming fundamentals :";
	cin>>m3;
	char ICTgrade;
	double p1=(m1*100)/100;
	if(p1>=90){
		ICTgrade='A';
		cout<<"\n\t  grades in ICT =  "<<ICTgrade<<endl;
	}
	else if(p1<90 && p1>=80){
		ICTgrade='B';
		cout<<"\n\t  grades in ICT =  "<<ICTgrade<<endl;
	}
	else if(p1<80 && p1>=70){
		ICTgrade='C';
		cout<<"\n\t  grades in ICT =  "<<ICTgrade<<endl;
	}
	else if(p1<70 && p1>=60){
		ICTgrade='D';
		cout<<"\n\t  grades in ICT =  "<<ICTgrade<<endl;
	}
	else if(p1<60){
		ICTgrade='F';
		cout<<"\n\t grades in ICT =  "<<ICTgrade<<endl;
		cout<<"\n\t  fail "<<endl;
		return 0;
	}
	
	//for calculas coure
		
	
	
	char Mathgrade;
	double	p2=(m2*100)/100;
	if(p2>=90){
		Mathgrade='A';
		cout<<"\n\t  grades in Calculas =  "<<Mathgrade<<endl;
	}
	else if(p2<90 && p2>=80){
		Mathgrade='B';
		cout<<"\n\t  grades in Calculas =  "<<Mathgrade<<endl;
	}
	else if(p2<80 && p2>=70){
		Mathgrade='C';
		cout<<"\n\t  grades in Calculas =  "<<Mathgrade<<endl;
	}
	else if(p2<70 && p2>=60){
		Mathgrade='D';
		cout<<"\n\t  grades in Calculas =  "<<Mathgrade<<endl;
	}
	else if(p2<60){
		Mathgrade='F';
		cout<<"\n\t  grades in Calculas =  "<<Mathgrade<<endl;
		cout<<"\n\t  fail "<<endl;
		return 0;
	}
	
	
	// for the grade calculaation of PF : ----------------------------------
		
	char PFgrade;
	double	p3=(m3*100)/100;
	if(p3>=90){
		PFgrade='A';
		cout<<"\n\t  grades in PF ="<<PFgrade<<endl;
	}
	else if(p3<90 && p3>=80){
		PFgrade='B';
		cout<<"\n\t  grades in PF =  "<<PFgrade<<endl;
	}
	else if(p3<80 && p3>=70){
		PFgrade='C';
		cout<<"\n\t  grades in PF =  "<<PFgrade<<endl;
	}
	else if(p3<70 && p3>=60){
		PFgrade='D';
		cout<<"\n\t  grades in PF =  "<<PFgrade<<endl;
	}
	else if(p3<60){
		PFgrade='F';
		cout<<"\n\t  grades in PF =  "<<PFgrade<<endl;
		cout<<"\n\t   fail"<<endl;
	}
	
	//    For the calculation of total marks and grades:-------------------------------------------
	
	 double total_marks=m1+m2+m3;
	 cout<<"\n\t\t\t   Overall marks  ="<<total_marks<<endl;
	double percentage;
	percentage=(total_marks*100)/300;
	cout<<"\n\t\t\t  Overall percentage is  :  "<<percentage<<"%"<<endl;
	 char Total_grades;
	 	if(percentage>=90){
		Total_grades='A';
		cout<<"\n\t\t\t\t Overall grades  :"<<Total_grades<<endl;
	}
	else if(percentage<90 && percentage>=80){
	Total_grades='B';
	cout<<"\n\t\t\t\t Overall grades :"<<Total_grades<<endl;
	}
	else if(percentage<80 && percentage>=70){
		Total_grades='C';
		cout<<"\n\t\t\t\t overall grades :"<<Total_grades<<endl;
	}
	else if(percentage<70 && percentage>=60){
		Total_grades='D';
		cout<<"\n\t\t\t\t overall grades :"<<Total_grades<<endl;
	}
	else if(percentage<60){
		Total_grades='F';
		cout<<"\n\t\t\t\t overall grades :"<<Total_grades<<endl;
	}
	else {
		cout<<"\t\t\t\t you failed\n"<<endl;
	}
