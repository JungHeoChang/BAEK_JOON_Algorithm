#include <stdio.h>

int main()
{
	int Month, Day;
	int i;
	int Sum = 0;
	int result = 0;
	scanf("%d %d", &Month, &Day);

	for(i=1; i<Month; i++)
	{
		if(i == 1 || i== 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			Sum += 31;
		else if(i == 4 || i == 6 || i == 9 || i == 11)
			Sum += 30;
		else
			Sum += 28;
	}
	Sum = Sum + Day-1;
	result = Sum % 7;

	switch (result)
	{
	case 0:
		printf("MON\n");
		break;
	case 1:
		printf("TUE\n");
		break;
	case 2:
		printf("WED\n");
		break;
	case 3:
		printf("THU\n");
		break;
	case 4:
		printf("FRI\n");
		break;
	case 5:
		printf("SAT\n");
		break;
	case 6:
		printf("SUN\n");
		break;
	default:
		break;
	}
	return 0;
}