#include <stdio.h>

int main()
{
    int M, N;
    int num[100];
    int prime_number=0;
    int i, j, cnt=0;
    int sum=0;
	int min=0;

	scanf("%d", &M);
    scanf("%d", &N);
    
	for(i=M; i<=N; i++)
	{
		for(j=1; j<=i; j++)
		{
			if(i % j == 0)
				prime_number++;
		}
		
		if(prime_number == 2)
		{
			sum += i;
			if(cnt == 0)
			{
				min = i;
				cnt = 1;
			}
		}
		prime_number = 0;
	}

	if(sum == 0)
		printf("-1\n");
	else
	{
		printf("%d\n", sum);
		printf("%d\n", min);
	}
    return 0;
}
