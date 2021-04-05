#include <stdio.h>

int main()
{
    int A[] = {1, 3, 7, 5, 9};
    *(A + 2) = *(A + 2) + *(A + 3);
    *(A + 3) = *(A + 2) - *(A + 3);
    *(A + 2) = *(A + 2) - *(A + 3);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", A[i]);
    }
    
    return 0;
}