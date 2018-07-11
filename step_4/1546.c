#include <stdio.h>

int main()
{
    int real_score[3];
    int fake_score;
    int i, j;
    int max_score;
    int empty;

    for(i=0; i<3; i++)
    {
        scanf("%d", real_score[i]);
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
        {
            if(real_score[i] > real_score[j])
            {
                empty = real_score[i];
                real_score[i] = real_score[j];
                real_score[j] = empty;
            }
        }
    }

    printf("%d %d %d\n", real_score[0], real_score[1], real_score[2]);

    return 0;
}
