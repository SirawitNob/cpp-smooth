#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char p[20];
    cout << "Enter String : ";
    cin.getline(p, 20);
    cout << strlen(p) << endl;
    return 0;
}
