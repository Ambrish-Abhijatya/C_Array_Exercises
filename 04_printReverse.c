#include <stdio.h>

int main()
{
    int *A, n, i;
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

    printf("\nPrinting that array in reverse order...\n");

    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", A[i]);
    }

    return 0;
}