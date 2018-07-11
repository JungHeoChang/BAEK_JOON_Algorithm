#include <stdio.h>

int main()
{
    int num;
    
    scanf("%d", &num);

    if(100 >= num && num >= 90)
        printf("A\n");
    else if(89 >= num && num >= 80)
        printf("B\n");
    else if(79 >= num && num >= 70)
        printf("C\n");
    else if(69 >= num && num >= 60)
        printf("D\n");
    else
        printf("F\n");

    return 0;
}
