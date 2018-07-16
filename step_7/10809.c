#include <stdio.h>

int main()
{
    char input[101];
	int alphabet[26];
	int count=0;
	int i, j=97;

    scanf("%s", input);

	for(i=0; i<26; i++)
	{
		alphabet[i] = -1;
	}

	for(i=0; i < input[i] != '\0'; i++)
	{
		for(j='a'; j<='z'; j++)
		{
			if(input[i] == j && alphabet[count] == -1)
			{
				alphabet[count] = i;
				break;
			}
			count++;
		}
		count=0;
	}
    
	for(i=0; i<26; i++)
	{
		printf("%d ", alphabet[i]);
	}
	printf("\n");
    return 0;
}
