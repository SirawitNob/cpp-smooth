
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    cout << "Find length of string." << endl;
    char p[50];
    cout << "Enter String : ";
    cin.getline(p, 50);
    cout << strlen(p) << endl;
    return 0;
}
