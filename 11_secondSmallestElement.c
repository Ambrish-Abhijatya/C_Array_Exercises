#include <stdio.h>
#include <math.h>
#include <limits.h>

int SmallestElement(int*, int);
int SecondSmallestElement(int*, int);

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
    
    printf("Smallest element of A is %d.\n", SmallestElement(A, n));
    printf("Second least element of A is %d.\n", SecondSmallestElement(A, n));

    return 0;
}


int SecondSmallestElement(int* A, int n)
{
    int result = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if(A[i] != SmallestElement(A, n) && A[i] < result)
            result = A[i];
    }

    return result;
}

int SmallestElement(int* A, int n)
{
    int result = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (A[i] <= result)
        {
            result = A[i];
        }
        
    }

    return result;
     
}