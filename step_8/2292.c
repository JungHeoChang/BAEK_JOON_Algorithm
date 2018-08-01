#include <stdio.h>

int main()
{
    long long unsigned int i;
    long long unsigned int N;
    long long unsigned int a=2, b=7;
    
    scanf("%llu", &N);

    if(N == 1)
    {
        printf("1");
    }
    else
    {
        for(i=2; ;i++)
        {
            if((a <= N) && (N <= b))
            {
                printf("%d", i);
                break;
            }
        a = b;
        b = a + (6 * i);
        }
    }
    return 0;
}
