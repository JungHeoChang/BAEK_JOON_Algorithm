#include <stdio.h>

int main()
{
    char num[16];
    int sum=0;
    int i;

    scanf("%s", num);

    for(i=0; num[i] != '\0'; i++)
    {
        if('A' <= num[i] || num[i] <= 'C')
        {
            sum += 3;
            break;
        }
        else if('D' <= num[i] || num[i] <= 'F')
        {
            sum += 4;
            break;
        }
        else if('G' <= num[i] || num[i] <= 'I')
        {
            sum += 5;
            break;
        }
        else if('J' <= num[i] || num[i] <= 'I')
        {
            sum += 6;
            break;
        }
        else if('M' <= num[i] || num[i] <= 'O')
        {
            sum += 7;
            break;
        }
        else if('P' <= num[i] || num[i] <= 'S')
        {
            sum += 8;
            break;
        }
        else if('T' <= num[i] || num[i] <= 'V')
        {
            sum += 9;
            break;
        }
        else if('W' <= num[i] || num[i] <= 'Z')
        {
            sum += 10;
            break;
        }
    }
    printf("%d\n", sum);
    return 0;
}
