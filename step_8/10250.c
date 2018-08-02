#include <stdio.h>

int main()
{
    int W, H, N;
    int floor, room;
    int i;
    int T;

    scanf("%d", &T);

    for(i=0; i<T; i++)
    {
        scanf("%d %d %d", &H, &W, &N);

        if((N % H) == 0)
        {
            floor = H * 100;
            room = (N / H);
        }
        else
        {
            floor = (N % H) * 100;
            room = (N / H) + 1;
        }
        printf("%d\n", floor + room);
    }
    return 0;
}
