#include <stdio.h>

int main()
{
    int num;
    int count=0;
    int quotient=0;
    int remainder=0;
    int recycle;
    int sum=0;

    scanf("%d", &num);
    recycle = num;

    while(1)
    {
        quotient = recycle / 10;
        remainder = recycle % 10;

        sum = quotient + remainder;
        if(sum >= 10)
            sum = sum % 10;

        remainder *= 10;
        recycle = remainder + sum;

        count++;
        if(num == recycle)
            break;
        quotient=0;
        remainder=0;
    }
    printf("%d\n", count);
    return 0;
}
