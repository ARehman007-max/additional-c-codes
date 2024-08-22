#include<iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;

    cout << "\t\tenter number for odd natural number and their sum:\n";
    cout << " Input number of terms: ";
    cin >> n;
    for (i = 1; i <= n; i++) 
    {
        if (i%2==1)
        {
		cout <<i<<endl;
		sum=sum+i;
        }
		//sum=sum+i;
    }
    
    cout << sum << endl;
return 0;
}

