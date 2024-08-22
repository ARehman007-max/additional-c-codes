#include<iostream>
using namespace std;
int main() 
{
	int  n;
	cout << "Enter the number of items:" ;cin >>n;
	int *arr = new int(n);
	cout << "Enter " << n << " items" << endl;
	for (int x = 0; x < n; x++) 
	{
		cout<<"enter value"<<x+1<<"=";cin >> arr[x];
	}
	
	for (int x = 0; x < n; x++)
    {
		cout <<"value you had entered : "<<x+1<<'='<< arr[x] <<endl;
	}
	return 0;
}