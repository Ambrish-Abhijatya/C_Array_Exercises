#include <stdio.h>
//Insertion - Add an element at the given index.
int main()
{
    int *A, i, insertion_index, n, insertion_value;
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter the element %d of the array: ", i);
        scanf("%d", A + i);
    }

    printf("You have enetered the following array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\nEnter the index where the element is to be inserted: ");
    scanf("%d", &insertion_index);

    printf("Enter the value to insert at index %d: ", insertion_index);
    scanf("%d", &insertion_value);
    
    for(i = n - 1; i >= insertion_index; i--)
    {
        A[i+1] = A[i];
    }
    A[insertion_index] = insertion_value;

    printf("Now the array has been modified to:\n");
    for(i = 0; i < n + 1; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}