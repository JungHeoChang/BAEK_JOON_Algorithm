#include <stdio.h>

int main()
{
    int N;
    int i=0, j=0;
    int count = 0;
	int Arr[4]={0};
    int d=0;
    int quotient;
    int remainder;
    int num;
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        if(i <= 99)
            count++;
        else if(i >= 100)
        {
            num = i;
            while(1)
            {
		        if(num == 0)
                    break;
                quotient = num / 10;
                remainder = num % 10;
                num = quotient;
                Arr[j+3] = remainder;
                j--;
            }
			j=0;
			if(Arr[0] == 0)
			{
				d = Arr[j+2] - Arr[j+1];
				if(Arr[j+1] + (2*d) == Arr[j+3])
					count++;
			}
			else
			{
				d = Arr[j+1] - Arr[j];
				if(Arr[j] + (2*d) == Arr[j+2])
					count++;
			}
        }
    }
    printf("%d\n", count);
    return 0;
}
