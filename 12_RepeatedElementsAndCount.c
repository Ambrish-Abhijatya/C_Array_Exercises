#include <stdio.h>

int main()
{
    int A[] = {1, 9, 3, 3, 5, 88, 88, 99, 99, 9, 3, 5};
    int arSize = sizeof(A)/sizeof(A[0]);
    int count;
    for (int i = 0; i < arSize - 1; i++)
    {
        count = 1;
        for (int j = i + 1; j < arSize; j++)
        {
            if(A[i] == 0)
                continue;
            
            if(A[i] == A[j])
            {
                count++; 
                A[j] = 0;
            }
        }

        if(count > 1)
            printf("%d repeated %d times.\n", A[i], count);
        
    }



    return 0;
}