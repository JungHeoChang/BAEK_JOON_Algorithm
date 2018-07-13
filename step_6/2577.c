#include <stdio.h>

int main()
{
    int A, B, C;
    int i;
    int result=0;
    int quotient=1;
    int remainder=0;
    int number[10] = {0};
    
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    result = A * B * C;

    for(; quotient != 0; )
    {
        quotient = result / 10;
        remainder = result % 10;
        result = quotient;
        number[remainder] += 1;
    }

    for(i=0; i<10; i++)
    {
        printf("%d\n", number[i]);
    }
    return 0;
}
