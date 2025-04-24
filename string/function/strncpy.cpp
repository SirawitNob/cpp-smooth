
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char s1[50];
    char s2[50];
    int len;
    cout << "Copy string with length of source string." << endl;
    cout << "Enter destination string : ";
    cin.getline(s1, 50);
    cout << "Enter source string : ";
    cin.getline(s2, 50);
    cout << "Enter length of source string to be copy : ";
    cin >> len;
    cout << "Destination string is : " << strncpy(s1, s2, len) << endl;
    return 0;
}
