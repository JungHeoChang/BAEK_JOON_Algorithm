#include <stdio.h>
#include <stdlib.h>

int main()
{
    char O = 'O';
    char X = 'X';
    int i, j, N;
    int bonus=0;
    scanf("%d", &N);

    char ** test = (char**)malloc(sizeof(char *) * N);
    int * score = (int *)malloc(sizeof(int *) * N);
    
	for(i=0; i<N; i++)
	{
		score[i] = 0;
	}

    for(i=0; i<N; i++)
    {
        test[i] = (char *)malloc(sizeof(char) * 80);
    }

    for(i=0; i<N; i++)
    {
        scanf("%s", test[i]);
    }

    for(i=0; i<N; i++)
    {
        for(j=0; j<80; j++)
        {
            if(O == test[i][j])
			{
                score[i]++;
				if(O == test[i][j-1])
				{
					bonus++;
					score[i] += bonus;
				}
			}
            else if(X == test[i][j])
			{
				bonus = 0;
			}
			else
			{
				break;
			}
        }
		bonus = 0;
    }

    for(i=0; i<N; i++)
    {
        printf("%d\n", score[i]);
    }

    for(i=0; i<N; i++)
    {
        free(test[i]);
    }
    free(test);
    return 0;
}
