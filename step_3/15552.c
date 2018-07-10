#include <stdio.h>

int main()
{
    int count;
    int i;
    int A, B;

    scanf("%d", &count);

    for(i=0; i<count; i++)
    {
        scanf("%d %d", &A, &B);
        printf("%d\n", A+B);
    }
    return 0;
}
