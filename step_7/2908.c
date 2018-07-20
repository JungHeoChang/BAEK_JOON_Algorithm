#include <stdio.h>

int main()
{
    char num[2][4];
    char temp;
    int i, j;
    int len=0;
    int check=0;

    for(i=0; i<2; i++)
        scanf("%s", num[i]);
    
    for(i=0; i<2; i++)
    {
        for(j=0; num[i][len] != '\0'; j++)
        {
            len++;
        }
    }
    
    for(i=0; i<2; i++)
    {
        for(j=0; j<len/2; j++)
        {
            temp = num[i][j];
            num[i][j] = num[i][(len-j)-1];
            num[i][(len-j)-1] = temp;
        }
    }
    for(i=0; i<4; i++)
    {
        if(num[0][i] == num[1][i])
            continue;
        else if(num[0][i] > num[1][i])
        {
            check = 0;
            break;
        }
        else if(num[0][i] < num[1][i])
        {
            check = 1;
            break;
        }
    }

    if(check == 0)
        printf("%s\n", num[0]);
    else
        printf("%s\n", num[1]);

    return 0;
}
