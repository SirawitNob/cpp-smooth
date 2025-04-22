#include <iostream>
using namespace std;

int main(){
    char S[10] = "Hello";
    cout << S << endl;
    char S2[] = {65, 66, 67, 68, 69, 0, 70, 71};
    cout << S2 << endl;
    char S3[] = {'H', 'e', 'l', 'l', 'o' , '\0', 'p', 'p'};
    cout << S3 << endl;
    char *P = "create string by pointer";
    cout << P << endl;
    string s = "create string with string class";
    cout << s << endl;
    return 0;
}
