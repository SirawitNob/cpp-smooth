#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char s1[50];
    char s2[50];
    cout << "Copy string." << endl;
    cout << "Enter destination string : ";
    cin.getline(s1, 50);
    cout << "Enter source string : ";
    cin.getline(s2, 50);
    cout << "Destination string is : " << strcpy(s1, s2) << endl;
    return 0;
}
