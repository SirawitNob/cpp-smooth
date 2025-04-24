#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s1[50];
    char s2;
    cout << "Finding first match character in string." << endl;
    cout << "Enter first string : ";
    cin.getline(s1, 50);
    cout << "Enter target character : ";
    cin >> s2;
    if (strchr(s1, s2) != NULL) {
        cout << "Result of strchr(main, char) is: " << strchr(s1, s2) << endl;
    }
    else {
        cout << s2 << " is not found." << endl;
    }
    return 0;
}
