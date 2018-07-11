#include <stdio.h>

int main()
{
    int num[3];
    int i, j;
    int empty;
    scanf("%d %d %d", &num[0], &num[1], &num[2]);

    for(i=0; i<2; i++)
    {
        for(j=1; j<3; j++)
        {
            if(num[i] > num[j])
            {
                empty = num[i];
                num[i] = num[j];
                num[j] = empty;
            }
        }
    }

    printf("%d\n", num[1]);
    
    return 0;
}
