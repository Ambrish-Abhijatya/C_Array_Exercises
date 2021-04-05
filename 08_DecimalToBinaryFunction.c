#include <stdio.h>
#include <math.h>
int countBits(int);
int DecimaltoBinary(int);

int main()
{
    int x;
    printf("Enter the value to convert to binary: ");
    scanf("%d", &x);
    printf("%d has %d bits.\n", x, countBits(x));
    printf("%d in binary is %d", x, DecimaltoBinary(x));
    return 0;
}

int DecimaltoBinary(int x)
{
    int A[countBits(x)], temp = x;
    for (int j = 0; j < countBits(x); j++)
    {
        A[j] = temp % 2;
        temp /= 2;
    }
    int result = 0;
    for (int i = 0; i < countBits(x); i++)
    {
        result += A[i]*(int)pow(10, i);
    }

    return result;
}

int countBits(int x)
{
    int count = 0;
    while (x != 0)
    {
        count++;
        x /= 2;
    }

    return count;
    
}