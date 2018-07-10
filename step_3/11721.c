#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j;

    scanf("%s", str);

    for(i=0; i<strlen(str); i++)
    {
        if(i%10 == 0 && i != 0)
			printf("\n");
		printf("%c", str[i]);
    }
	printf("\n");
    return 0;
}
