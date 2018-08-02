#include <stdio.h>

int main()
{
    int i, j;
    int T, k, n, x;
    int floor[15][14];

    scanf("%d", &T);
    
    for(i=0; i<14; i++)
    {
        floor[0][i] = i+1;
    }
    
	for(x=0; x<T; x++)
	{
		scanf("%d", &k);
		scanf("%d", &n);

		for(i=1; i<=k; i++)
		{
			floor[i][0] = 1;
			for(j=1; j<n; j++)
			{
				floor[i][j] = floor[i][j-1] + floor[i-1][j];
			}
		}
		printf("%d\n", floor[k][n-1]);
	}
    return 0;
}
