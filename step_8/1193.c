#include <stdio.h>

int main()
{
    int sum=0;
    int i, X;
	int denominator, numerator;

	scanf("%d", &X);

    for(i=1; ;i++)
    {
		if(sum-i < X && X <= sum)
			break;
        sum += i;
    }

	denominator = (i - 1) - (sum - X);
	numerator = 1 + (sum - X);

	if((i-1) % 2 == 0)
		printf("%d/%d\n", denominator, numerator);
	else
		printf("%d/%d\n", numerator, denominator);
    return 0;
}
