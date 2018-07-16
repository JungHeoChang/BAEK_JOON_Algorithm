#include <stdio.h>

int main()
{
    int i, j, n;
    int R, T;
    char S[21];

    scanf("%d", &T);

    for(i=0; i<T; i++)
    {
        scanf("%d", &R);
        scanf("%s", S);
        
        for(n=0; n < S[n] != '\0'; n++)
        {
            for(j=0; j<R; j++)
            {
                printf("%c", S[n]);
            }
        }
        printf("\n");
    }
    return 0;
}
