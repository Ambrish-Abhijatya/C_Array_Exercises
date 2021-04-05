#include <stdio.h>
#include <math.h>
#include <limits.h>

int GreatestElement(int*, int);
int SecondGreatestElement(int*, int);

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
    
    printf("Greatest element of A is %d.\n", GreatestElement(A, n));
    printf("Second Greatest element of A is %d.\n", SecondGreatestElement(A, n));

    return 0;
}


int SecondGreatestElement(int* A, int n)
{
    int result = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if(A[i] != GreatestElement(A, n) && A[i] > result)
            result = A[i];
    }

    return result;
}

int GreatestElement(int* A, int n)
{
    int result = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (A[i] >= result)
        {
            result = A[i];
        }
        
    }

    return result;
     
}