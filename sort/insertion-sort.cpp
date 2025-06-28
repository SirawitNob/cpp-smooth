#include <iostream>
using namespace std;

void insertionSort(int A[], int n) {
    for (int i = 1; i < n; i++) {
        int x = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > x) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = x;
    }
}

int main() {
    int A[] = {3, 82, 1, 46, 98, 27, 13, 75, 42, 91, 19, 67, 85, 32, 49};
    int len = sizeof(A)/sizeof(A[0]);
    insertionSort(A, len);
    for (int x : A) {
        cout << x << " ";
    }
    cout << '\n';
    return 0;

}
