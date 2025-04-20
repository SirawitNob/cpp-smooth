#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array : " ;
    cin >> size;
    int *p = new int[size];
    for(int i = 0 ; i < size ; i++){
        p[i] = i;
        cout << p[i] << " ";
    }
    cout << endl;
    delete []p;

    cout << "Enter new size : ";
    cin >> size;
    p = new int[size];
    for(int i = 0 ; i < size ; i++){
        p[i] = i;
        cout << p[i] << " ";
    }
    cout << endl;
    delete []p;

    p = nullptr;
    return 0;
}
