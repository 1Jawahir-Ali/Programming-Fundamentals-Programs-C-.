#include<iostream>
#include<string>
using namespace std;
struct Student
{
	string first_name;
	string last_name;
	int marks;
	
	
	void StudentInfo(){
		cout<<"\nThe Full name of student is : "<<first_name<<" "<<last_name<<endl;
		cout<<"The Marks of student is : "<<marks<<endl;
		
	}
};
int main()
{   
    int N;
	cout<<"Enter the number of students:";
	cin>>N;
	Student student[N];
	for(int i=0; i<N; i++){
		cout<<"\nEnter the first name of student "<<i+1<<" : ";
		cin>>student[i].first_name;
		cout<<"Enter the last name of student "<<i+1<<" : ";
		cin>>student[i].last_name;
		cout<<"Enter the marks of student "<<i+1<<" : ";
		cin>>student[i].marks;
		
	}
	for(int i=0;i<N;i++)
	{
		student[i].StudentInfo();
	}
	return 0;
}


