#include<iostream>
using namespace std;
int main(){


    int num1, num2;

    // Input two numbers
    cout << "Enter First Numbers: ";
    cin >> num1; 
    cout<<"Enter Second Number: ";
	cin>> num2;

    cout << "\nBefore swapping: num1 = " << num1 << "\n\t\t num2 = " << num2 << endl;

    // Swapping using pointers
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    int i = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = i;

    cout << "\nAfter swapping: num1 = " << num1 << "\n\t\t num2 = " << num2 << endl;

    return 0;
}
  
  
