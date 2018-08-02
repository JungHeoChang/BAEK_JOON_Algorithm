#include <stdio.h>

int main()
{
    long long x, y;
    int N;
    long long i, j;
    int dist;

    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        scanf("%d %d", &x, &y);

        dist = y - x;

		for(j=1; ; j++)
		{
			if((j * j) - j + 1 <= dist && dist <= (j * j) + j)
			{
				if((j * j) - j + 1 <= dist && dist <= (j * j))
					printf("%lld\n", (j * 2) - 1);
				else
					printf("%lld\n", (j * 2));
				break;
			}
		}
    }    
    return 0;
}
