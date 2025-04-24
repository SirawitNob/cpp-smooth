#include <iostream>
#include <cstring>
using namespace std;

int main(){
    
    cout << "String concatination." << endl;
    char s1[20];
    char s2[20];
    cout << "Enter destination string : ";
    cin.getline(s1, 20);
    cout << "Enter source string : ";
    cin.getline(s2, 20);
    cout << "Concat with strcat(destination, source) : " << strcat(s1, s2) << endl;
    return 0;
}
