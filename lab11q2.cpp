#include <iostream>
using namespace std;

int main()
 {
    void* ptr;
    float k = 2.3;

    
    ptr = &k;

    cout << &k << endl;
    cout << ptr << endl;

    return 0;
}