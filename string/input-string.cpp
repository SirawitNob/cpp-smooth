#include <iostream>

using namespace std;

int main(){
    char s[20];
    char s2[20];
    cout << "First Solution" << endl;
    cout << "Enter Name : ";
    cin.get(s, 20);
    cin.ignore();
    cout << "Enter Another Name : ";
    cin.get(s2, 20);
    cin.ignore();
    cout << "Welcome " << s << " " << "And " << s2 << endl;
    
    cout << "Second Solution" << endl;
    cout << "Enter Name : ";
    cin.getline(s, 20);
    cout << "Enter Another Name : ";
    cin.getline(s2, 20);
    cout << "Welcome " << s << " " << "And " << s2 << endl;

    return 0;
}
