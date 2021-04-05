#include <stdio.h>
//Deletion - Delete an element at the given index.
int main()
{
    int *A, i, deletion_index, n;
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d of the array: ", i);
        scanf("%d", A + i);
    }

    printf("You have enetered the following array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\nEnter the index where the element is to be deleted: ");
    scanf("%d", &deletion_index);

    while(deletion_index > n || deletion_index < 0)
    {
        printf("Index is out of range. Please enter a valid index: ");
        scanf("%d", &deletion_index);
        
    }

    for (i = deletion_index; i < n; i++)
    {
        A[i] = A[i + 1];
    }

    printf("Now the array has been modified to:\n");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}