#include <stdio.h>

int SwapEveryAdjacentElement(int *, int);

int main()
{
    int A[] = {1, 3, 5, 7, 9, 11};
    SwapEveryAdjacentElement(A, 5);

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }
    
    return 0;
}

int SwapEveryAdjacentElement(int *A, int n)
{
    int temp;
    for (int i = 0; i < n; i+=2)
    {
        temp = A[i];
        A[i] = A[i+1];
        A[i+1] = temp;
    }
    
}