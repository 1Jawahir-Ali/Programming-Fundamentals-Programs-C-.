#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;

    // Input a positive odd integer N
    cout << "Enter a positive odd integer N: ";
    cin >> N;

    if (N % 2 == 0) {
        cout << "N must be an odd number!" << endl;
        return 1;
    }

    // Calculate the sum of the series
    for (int i = 1; i <= N; i += 2) {
        sum += i; // Add the current odd number to sum
    }

    cout << "The sum of the series 1 + 3 + 5 + ... + " << N << " is: " << sum << endl;
    return 0;
}

