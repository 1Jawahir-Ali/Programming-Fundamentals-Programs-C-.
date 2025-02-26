
#include <iostream>
using namespace std;
int main()
{
    int n,count;
    cout << "Enter n:" << endl;
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if (count==2)
        cout<<"Its a prime number.";
    else
        cout <<"Not a prime.";
    return 0;
	}
