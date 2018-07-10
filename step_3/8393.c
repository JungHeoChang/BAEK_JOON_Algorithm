#include <stdio.h>

int main()
{
    int i, T;
    int Sum=0;
    
    scanf("%d", &T); 
    for(i=1; i<=T; i++)
    {
        Sum += i;
    }

    printf("%d\n", Sum);
    return 0;
}
