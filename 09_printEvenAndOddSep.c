#include <stdio.h>

void PrintEvensAndOdds(int*, int);

int main()
{
    int *A, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n); 

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d of the array: ", i);
        scanf("%d", A + i);
    }
    

    PrintEvensAndOdds(A, n);
    return 0;
}

void PrintEvensAndOdds(int* A, int n)
{
    printf("The even members of the given array are:\n");
    for (int i = 0; i < n; i++)
    {
        if(A[i] % 2 == 0)  
            printf("%d ", A[i]);
    }

    printf("\nThe odd members of the given array are:\n");
    for(int i = 0; i < n; i++)
    {
        if(A[i] % 2 != 0)   
            printf("%d ", A[i]);
    }

    
}