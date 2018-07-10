#include <stdio.h>

int main()
{
	int i, j;
	int N;

	scanf("%d", &N);

	for(i=0; i<N; i++)
	{
		for(j=N; j>0; j--)
		{
			if(j <= N-i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}