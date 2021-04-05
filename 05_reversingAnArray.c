#include <stdio.h>
//C program to reverse any array.

void reverseArray(int*, int);
int main()
{
    int *A, i, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d of the array: ", i);
        scanf("%d", A + i);
    }

    printf("\nYou have entered the array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    reverseArray(A, n);

    printf("\nNow the array has been modified to:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    

    return 0;
}

void reverseArray(int* A, int n)
{
    for (int i = 0; i < n/2; i++)
    {
        int temp;
        temp = A[i];
        A[i] = A[n - 1 - i];
        A[n - i - 1] = temp;
    }
}