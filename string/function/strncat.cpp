#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    cout << "Another String concatination." << endl;
    char v1[50];
    char v2[50];
    int len;
    cout << "Enter destination string : ";
    cin.getline(v1, 50);
    cout << "Enter source string : ";
    cin.getline(v2, 50);
    cout << "Enter length of source string to be concat : ";
    cin >> len;
    cout << "Concat with strncat(destination, source, length) : " << strncat(v1, v2, len) << endl;
    return 0;
}

