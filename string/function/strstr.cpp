#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[50];
    char s2[50];
    cout << "Finding Substring" << endl;
    cout << "Enter first string : ";
    cin.getline(s1, 50);
    cout << "Enter second string : ";
    cin.getline(s2, 50);
    if(strstr(s1, s2) != NULL) {
        cout << "Checking second string is substring of first string by strstr(main, sub): " << strstr(s1, s2) << endl;
    }
    else {
        cout << s2 << " is not substring of first string." << endl;
    }
    return 0;
}
