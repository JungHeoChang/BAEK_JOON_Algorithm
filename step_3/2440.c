#include <stdio.h>

int main()
{
	int i, j;
	int N;

	scanf("%d", &N);

	for(i=0; i<N; i++)
	{
		for(j=i; j<N; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}