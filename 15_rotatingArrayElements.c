#include <stdio.h>

void rotateArray(int*, int, int);
int main()
{
    int A[] = {1, 3, 5, 7, 9, 11};

    rotateArray(A, 6, 2);

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }
    

    return 0;
}

void rotateArray(int* A, int n, int k)
{
    if(k == 1)
    {
        int temp = A[0];
        for (int i = 0; i < n; i++)
        {
            A[i] = A[i + k];
        }
        A[n - 1] = temp;
    }
    else{
        for (int i = 0; i < k; i++)
        {
            rotateArray(A, n, 1);
        }
        
    }
}