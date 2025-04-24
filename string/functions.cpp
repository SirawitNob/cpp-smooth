#include <iostream>
#include <cstring>
using namespace std;

int main(){
    cout << "Find length of string." << endl;
    char p[50];
    cout << "Enter String : ";
    cin.getline(p, 50);
    cout << strlen(p) << endl;
    
    char s1[20];
    char s2[20];
    int len;
    cout << "Enter destination string : ";
    cin.getline(s1, 20);
    cout << "Enter source string : ";
    cin.getline(s2, 20);
    cout << "Concat with strcat(destination, source) : " << strcat(s1, s2) << endl;
    return 0;
}
