#include <stdio.h>

int main()
{
    char str[1000001];
    int i;
    int count=1;

    fgets(str, sizeof(str), stdin);

	if((str[0] == ' ' && str[1] != ' ') || str[0] == '\n')
		count--;

    for(i=0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ' && str[i+1] != ' ')
            count++;
		if(str[i] == ' ' && str[i+1] == '\n')
			count--;
    }

    printf("%d\n", count);
    return 0;
}
