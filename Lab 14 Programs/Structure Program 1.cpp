#include<iostream>
#include<cmath>
#include<string>
using namespace std;
struct Student
 {
	string first_name;
	string last_name;
	int roll_no;
	int marks;
	
	void StudentInfo(Student student)
	{
		
		cout<<"The First_Name of student is : "<<student.first_name<<endl;
		cout<<"The Last_Name of student is : "<<student.last_name<<endl;
		cout<<"The Roll_No of student is : "<<student.roll_no<<endl;
		cout<<"The Marks of student is : "<<student.marks<<endl;	
	 }
		
  };

    int main()
{   
  //First Student
	Student s1;
	s1.first_name="Jawahir";
	s1.last_name="Ali";
	s1.roll_no=34;
	s1.marks=50;
	s1.StudentInfo(s1);
	
  return 0;
}

