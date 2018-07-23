#include <stdio.h>

int main()
{
    char word[1000001];
    int alphabet[26]= {0};
	int clone[26] = {0};
    int i, j, k;
    int count=0;
    int empty;

    scanf("%s", word);

    for(i=0; word[i] != '\0'; i++)
    {
        for(j='a'; j<='z'; j++)
        {
            if(word[i] == j || word[i] == j-32)
			{
                alphabet[count]++;
				break;
			}
            count++;
        }
		count = 0;
    }
	
	for(i=0; i<26; i++)
	{
		clone[i] = alphabet[i];
	}

    for(i=0; i<25; i++)
    {
		k = i;
        for(j=i+1; j<26; j++)
        {
            if(alphabet[k] < alphabet[j])
				k = j;
        }
		empty = alphabet[i];
        alphabet[i] = alphabet[k];
        alphabet[k] = empty;	
    }

	count = 0;
	for(i=0; i<26; i++)
	{
		if(alphabet[0] == clone[i])
			count++;
	}
	
	for(i=0; i<26; i++)
	{
		if(alphabet[0] == clone[i])
			break;
	}

    if(count == 1)
        printf("%c\n", i+65);
    else
        printf("?\n");
		
    return 0;
}
