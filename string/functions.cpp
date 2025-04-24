#include <iostream>
#include <cstring>
using namespace std;

int main(){
    cout << "Find length of string." << endl;
    char p[50];
    cout << "Enter String : ";
    cin.getline(p, 50);
    cout << strlen(p) << endl;
    
    cout << "String concatination." << endl;
    char s1[20];
    char s2[20];
    cout << "Enter destination string : ";
    cin.getline(s1, 20);
    cout << "Enter source string : ";
    cin.getline(s2, 20);
    cout << "Concat with strcat(destination, source) : " << strcat(s1, s2) << endl;
    
    cout << "Another String concatination." << endl;
    char v1[20];
    char v2[20];
    int len;
    cout << "Enter destination string : ";
    cin.getline(v1, 20);
    cout << "Enter source string : ";
    cin.getline(v2, 20);
    cout << "Enter length of source string to be concat : ";
    cin >> len;
    cout << "Concat with strncat(destination, source, length) : " << strncat(v1, v2, len) << endl;
    return 0;
}
