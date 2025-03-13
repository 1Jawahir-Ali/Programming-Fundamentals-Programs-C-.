#include <iostream>
#include <string>
using namespace std;

struct Student {
    string first_name;
    string last_name;
    int marks;

    void StudentInfo() const {  // Marking function as 'const' since it doesn't modify data
        cout << "\nThe Full name of the student is: " << first_name << " " << last_name << endl;
        cout << "The Marks of the student are: " << marks << endl;
    }
};

int main() {   
    int N;
    cout << "Enter the number of students: ";
    cin >> N;

    // Dynamic memory allocation
    Student* student = new Student[N];

    // Taking student details as input
    for (int i = 0; i < N; i++) {
        cout << "\nEnter the first name of student " << i + 1 << ": ";
        cin >> student[i].first_name;
        cout << "Enter the last name of student " << i + 1 << ": ";
        cin >> student[i].last_name;
        cout << "Enter the marks of student " << i + 1 << ": ";
        cin >> student[i].marks;
    }

    // Displaying student information
    cout << "\nStudent Details:\n";
    for (int i = 0; i < N; i++) {
        student[i].StudentInfo();
    }

    // Free dynamically allocated memory
    delete[] student;

    return 0;
}
