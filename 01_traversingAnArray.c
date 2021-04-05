#include <stdio.h>
//Traverse an array - Print all the elements of the array one by one.
int main()
{
    int A[] = {1, 2, 3, 7, 8, 9};
    int i = 0;
    while(i < 6)
    {
        printf("%d ", A[i++]);
    }

    return 0;
}