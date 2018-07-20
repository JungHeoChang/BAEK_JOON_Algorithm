#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, j, k;
    char storage;
    int count=0;

    scanf("%d", &N);

    char ** word = (char **)malloc(sizeof(char *) * N);
    int ** alphabet = (int **)malloc(sizeof(int *) * N);

    for(i=0; i<N; i++)
    {
        word[i] = (char *)malloc(sizeof(char) * 101);
		alphabet[i] = (int *)malloc(sizeof(int) * 26);
    }
	for(i=0; i<N; i++)
	{
		for(j=0; j<26; j++)
			alphabet[i][j] = 0;
	}

    for(i=0; i<N; i++)
    {
        scanf("%s", *(word+i)); // word[i]
    }

    for(i=0; i<N; i++)
    {
        storage = word[i][0];
		alphabet[i][word[i][0]-97] += 1;
        for(j=1; word[i][j] != '\0'; j++)
        {
            if(storage == word[i][j])
                storage = word[i][j];
            else
            {
                alphabet[i][word[i][j]-97] += 1;
                storage = word[i][j];
            }
        }
    }

    for(i=0; i<N; i++)
    {
        for(j=0; j<26; j++)
        {
            if(alphabet[i][j] >= 2)
			{
                count++;
				break;
			}
        }
    }
    printf("%d\n", N - count);

    for(i=0; i<N; i++)
    {
        free(word[i]);
    }
    free(word);
    return 0;
}
