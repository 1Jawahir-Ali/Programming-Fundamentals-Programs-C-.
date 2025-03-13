#include <iostream>
using namespace std;
int main(){
	
//	                    ++++++++ Company  Payroll  System +++++++++
	
	int basic_salary,tax,bonus,gross_salary, Net_salary,service_length;
	char grade;
	cout<<"Enter your grade: ";
	cin>>grade;
	cout<<"Enter your service length: ";
	cin>>service_length;
	
	if(grade=='A')
	{
		basic_salary=50000;	
	}
	if(grade=='B')
	{
		basic_salary=30000;	
	}
	if(grade=='C')
	{
		basic_salary=20000;	
	}
	if(service_length>=10)
	{
		bonus=(10*basic_salary/100);
	}
	
	if(5<=service_length<=9)
	{
		bonus=(5*basic_salary/100);
	}
	
	if(service_length<5)
	{
		bonus=0;
	}
	gross_salary=basic_salary+bonus;
	
	if(gross_salary>40000)
	{
		tax=(20*gross_salary/100);
	}
	
	if(40000>=gross_salary&&gross_salary>=30000)
	{
		tax=(10*gross_salary/100);
	}
	
	if(gross_salary<30000)
	{
		tax=0;
	}
	
	Net_salary=gross_salary-tax;
	
	cout<<"You Basic Salary = "<<basic_salary<<endl;
	cout<<"Your tax is = "<<tax<<endl;
	cout<<"Your bonus is = "<<bonus<<endl;
	cout<<"Your Gross Salary = "<<gross_salary<<endl;
	cout<<"Your Service Length = "<<service_length<<endl;
	cout<<"Your Net Salary = "<<Net_salary<<endl;
	cout<<"Your Grade is : "<<grade<<endl;
	
	return 0;
}

