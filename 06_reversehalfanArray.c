#include <stdio.h>
//C program to reverse half an array.

void reverseArray(int*, int);
int main()
{
    int *A, i, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    while(n%2 != 0)
    {
        printf("You enetered an odd array size. Please enter an even size: ");
        scanf("%d", &n);
    }

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
    for (int i = 0; i < n/4; i++)
    {
        int temp;
        temp = A[i];
        A[i] = A[n/2 - 1 - i];
        A[n/2 - i - 1] = temp;
    }
}