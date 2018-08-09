#include <stdio.h>

int main()
{
    int N;
    int num[100];
    int prime_number[100]={0};
    int i, j;
    int count=0;

    scanf("%d", &N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &num[i]);
    }
    
    for(i=0; i<N; i++)
    {
        for(j=1; j<=num[i]; j++)
        {
            if(num[i] % j == 0)
                prime_number[i]++;
        }
    }

    for(i=0; i<N; i++)
    {
        if(prime_number[i] == 2)
            count++;
    }
	printf("%d\n", count);
    return 0;
}
