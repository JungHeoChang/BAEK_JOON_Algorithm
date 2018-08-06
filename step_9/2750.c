#include <stdio.h>

int main()
{
    int N;
    int i,j,k;
    int num[1000];
    int empty;

    scanf("%d", &N);

    for(i=0; i<N; i++)
    {
        scanf("%d", &num[i]);
    }

    for(i=0; i<N-1; i++)
    {
        k = i;
        for(j=i+1; j<N; j++)
        {
            if(num[k] > num[j])
                k = j;
        }
        empty = num[i];
        num[i] = num[k];
        num[k] = empty;
    }
    
    for(i=0; i<N; i++)
    {
        printf("%d\n", num[i]);
    }
    return 0;
}
