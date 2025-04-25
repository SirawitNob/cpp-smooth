#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s[50];
    cout << "String to Long.";
    cout << "Input String: ";
    cin.getline(s, 50);
    long int x = strtol(s, NULL, 10);
    cout << "Result of strtol(str) + 10 is: " << x + 10 << endl;
    return 0;
}
