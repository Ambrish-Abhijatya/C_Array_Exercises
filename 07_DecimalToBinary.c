#include <stdio.h>
#include <math.h>
int countBits(int);
void DisplayDecimaltoBinary(int);

int main()
{
    int x;
    printf("Enter the value to convert to binary: ");
    scanf("%d", &x);
    printf("%d has %d bits.\n", x, countBits(x));
    DisplayDecimaltoBinary(x);
    return 0;
}

void DisplayDecimaltoBinary(int x)
{
    int A[countBits(x)], temp = x;
    for (int j = 0; j < countBits(x); j++)
    {
        A[j] = temp % 2;
        temp /= 2;
    }
    printf("The number %d in binary is ", x);
    for (int i = countBits(x) - 1; i >= 0; i--)
    {
        printf("%d", A[i]);
    }
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