#include <stdio.h>

int ConvToInt(char c)
{
	static int diff = 1 - '1';
	return c + diff;
}

int main()
{
    char str[100];
	int i, j;
	int num;
	int count;
	int sum=0;
	int len;

	scanf("%d", &count);
	scanf("%s", str);

	for(i=0; i<=count; i++)
	{
		if('1' <= str[i] && str[i] <= '9')
			sum += ConvToInt(str[i]);
	}
	printf("%d\n", sum);
    return 0;
}
