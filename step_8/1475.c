#include <stdio.h>
#include <stdlib.h>

int main()
{
	char N[8];
	int i, j;
	int room_number[2][10] = {0};
	int room_rank[9]={0};
	int aski = 48;
	int num_empty;

	scanf("%s", N);

	for(i=0; i<10; i++)
	{
		room_number[0][i] = aski++;
	}

	for(i=0; N[i] != '\0'; i++)
	{
		for(j=0; j<10; j++)
		{
			if(N[i] == room_number[0][j])
			{
				room_number[1][j]++;
				break;
			}
		}
	}
	// 6 ÀÌ¶û 9
	num_empty = ((room_number[1][6] + room_number[1][9]) / 2) + (room_number[1][6] + room_number[1][9]) % 2;
	room_number[1][6] = num_empty;

	for(i=0; i<9; i++)
	{
		room_rank[i] = room_number[1][i];
	}

	for(i=0; i<8; i++) // ¼øÀ§ ºñ±³
	{
		for(j=1; j<9-i; j++)
		{
			if(room_rank[j-1] < room_rank[j])
			{
				num_empty = room_rank[j-1];
				room_rank[j-1] = room_rank[j];
				room_rank[j] = num_empty;
			}
		}
	}
	printf("%d\n", room_rank[0]);
	
	return 0;
}
