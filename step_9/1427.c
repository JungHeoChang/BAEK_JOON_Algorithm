#include <stdio.h>
#include <string.h>

int CharToInt(char);

int main()
{
    int arr[10];
    char N[11];
	int len=0;
	int i,j;
    int empty;

	scanf("%s", N);
	len = strlen(N);

	for(i=0; i<len; i++)
	{
		if('0' <= N[i] && N[i] <= '9')
			arr[i] = CharToInt(N[i]);
	}
    for(i=0; i<len-1; i++)
    {
        for(j=1; j<len-i; j++)
        {
            if(arr[j] > arr[j-1])
            {
                empty = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = empty;
            }
        }
    }

    for(i=0; i<len; i++)
        printf("%d", arr[i]);
    printf("\n");
    return 0;
}

int CharToInt(char c)
{
	static int diff = 0 - '0';
	return c + diff;
}
