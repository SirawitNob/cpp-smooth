#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s1[50];
    char s2;
    cout << "Finding last character of string." << endl;
    cout << "Enter first string: ";
    cin.getline(s1, 50);
    cout << "Enter second string: ";
    cin >> s2;
    if (strrchr(s1, s2) != NULL) {
        cout << "Result of strrchr(main, char) is: " << strrchr(s1, s2) << endl;
    }
    else {
        cout << s2 << " is not found" << endl;
    }
    return 0;
}
