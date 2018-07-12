#include <stdio.h>

int Self_Number(int);

int main()
{
	int Arr[11000] = {0};
    int result;
    int i=1;
    
    for(i=0; i<10000; i++)
    {
        result = Self_Number(i);
        Arr[result] = 1;
    }

	for(i=0; i<10000; i++)
	{
		if(Arr[i] == 0)
			printf("%d\n", i);
	}
    return 0;
}

int Self_Number(int num)
{
    int quotient;
    int remainder;
    int result=num;

    while(1)
    {
		if(num == 0)
            break;
        quotient = num / 10;
        remainder = num % 10;
        num = quotient;
        result += remainder;
    }
    return result;
}
