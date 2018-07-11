#include<stdio.h>
#include<stdlib.h>

int main()
{
    int C, N;
    int i, j;
    scanf("%d", &C);
    int **Arr = (int **)malloc(sizeof(int *) * C);
    int * sum = (int *)malloc(sizeof(int *) * C);
    double * result = (double *)malloc(sizeof(double *) * C);
    double * persent = (double *)malloc(sizeof(double *) * C);
    int count=0;

    for(i=0; i<C; i++)
    {
        scanf("%d", &N);
        Arr[i] = (int *)malloc(sizeof(int) * N);
        sum[i] = 0;
        persent[i] = 0;
        result[i] = 0;

        for(j=0; j<N; j++)
        {
            scanf("%d", &Arr[i][j]);
            sum[i] += Arr[i][j];
        }
        result[i] = (double)sum[i] / N;

        for(j=0; j<N; j++)
        {
            if(Arr[i][j] > result[i])
            {
                count++;
            }
        }

        persent[i] = (double)count / N * 100;
        count = 0;
    }

    for(int i=0; i<C; i++)
    {
        printf("%.3f%%\n", persent[i]);
    }
    
    for(int i=0; i<C; i++)
    {
        free(Arr[i]);
    }
    free(Arr);
    return 0;
}
