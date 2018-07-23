#include <stdio.h>

int main()
{
    char word[101];
    int sum=0;
    int i;

    scanf("%s", word);

	for(i=0; word[i] != '\0'; i++)
	{	
		if((word[i] == 'c' && word[i+1] == '=') || (word[i] == 'c' && word[i+1] == '-'))
		{
			sum++;
			i++;
		}
		else if((word[i] == 'd' && word[i+1] == 'z' && word[i+2] == '=') || (word[i] == 'd' &&word[i+1] == '-'))
		{
			if(word[i+2] == '=')
			{
				sum++;
				i += 2;
			}
			else
			{
				sum++;
				i++;
			}
		}
		else if(word[i] == 'l' && word[i+1] == 'j')
		{
			sum++;
			i++;
		}
		else if(word[i] == 'n' && word[i+1] == 'j')
		{
			sum++;
			i++;
		}
		else if(word[i] == 's' && word[i+1] == '=')
		{
			sum++;
			i++;
		}
		else if(word[i] == 'z' && word[i+1] == '=')
		{
			sum++;
			i++;
		}
		else
		{
			sum++;
		}
	}
	printf("%d\n", sum);

    return 0;
}
