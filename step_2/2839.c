#include <stdio.h>

int main()
{
	int N;
	int num5 = -1, num3 = 0;
	int result = 0;
	int i=0;

	scanf("%d", &N);

	if(N % 5 == 0)
	{
		num5 = N / 5;
		printf("%d\n", num5);
	}
	else
	{
		for(i = N/5; i >= 0; i--)
        {
            if((N - 5 * i) % 3 == 0)
            {
                num5 = i;
                num3 = (N - 5 * i) / 3;
                break;
            }
        }
		printf("%d\n", num3 + num5);
	}
	return 0;
}