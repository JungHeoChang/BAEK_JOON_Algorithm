#include <stdio.h>

void distinction(int []);

int main()
{
    int C_major[8];
    int i;

    for(i=0; i<8; i++)
    {
        scanf("%d", &C_major[i]);
    }

    distinction(C_major);

    return 0;
}

void distinction(int C_major[])
{
    int i, j;
    int ascending=0;
    int descending=0;

    for(i=0; i<8; i++)
    {
        if(C_major[i] == i+1)
            ascending++;
        else if(C_major[i] == 8-i)
            descending++;
        else
            break;
    }

    if(ascending == 8)
        printf("ascending\n");
    else if(descending == 8)
        printf("descending\n");
    else
        printf("mixed\n");
}

