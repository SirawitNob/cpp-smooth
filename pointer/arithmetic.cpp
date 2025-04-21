#include <iostream>
using namespace std;

int main() 
{
    int A[5] = {2, 4, 6, 8, 10};
    int *p = A;
    int *q = &A[4];
    cout << *p << endl;
    p++;
    cout << *p << endl;
    p--;
    cout << *p << endl;
    cout << *(p+2) << endl;
    for(int i = 0 ; i < 5 ; i++){
        cout << *(p + i) << endl;
    }
    cout << q - p << endl;
    cout << p - q << endl;
    return 0;
}
