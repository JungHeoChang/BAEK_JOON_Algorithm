#include <stdio.h>

int main()
{
	int i, j;
	int N;

	scanf("%d", &N);

	for(i=0; i<N; i++)
	{
		for(j=1; j<=N; j++)
		{
		if(j < N-i)
			printf(" ");
		else
			printf("*");
		}
		printf("\n");
	}
	return 0;
}