#include <iostream>

using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Bubble(int A[], int n)
{
    int i;
    int j;
    for(i = 0 ; i < n-1 ; i++)
    {
        for(j = 0 ; j < n-i-1 ; j++)
        {
            if(A[j] > A[j+1])
            {
                swap(&A[j], &A[j+1]);
            }
        }
    }
}

int main()
{
    int A[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2};
    int n = 10;
    cout << "Lets do Bubble sort!" << endl;
    Bubble(A, n);
    for(int i = 0 ; i < n ; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}
