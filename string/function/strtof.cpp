#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s[50];
    cout << "String to Float." << endl;
    cout << "Enter string: ";
    cin.getline(s, 50);
    float x = strtof(s, NULL);
    cout << "Result of strtof(str) + 0.5 is: " << x + 0.5 << endl;
    return 0;
}
