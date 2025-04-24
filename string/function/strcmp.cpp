#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s1[50];
    char s2[50];
    cout << "Compare 2 strings." << endl;
    cout << "Enter first string: ";
    cin.getline(s1, 50);
    cout << "Enter second string: ";
    cin.getline(s2, 50);
    cout << "Result of strcmp(str1,str2) is: " << strcmp(s1,s2) << endl;
    return 0;
}
