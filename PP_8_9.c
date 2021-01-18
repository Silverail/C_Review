#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	unsigned int row = 0, col = 0;
	int temp = -1;
	char str[10][10] = { 0 };
	int flag = 0;
	srand((unsigned)time(NULL));

	for (int i = 0;i < 10;i++)
	{
		for (int j = 0;j < 10;j++)
		{
			str[i][j] = '.';
		}
	}

	for (unsigned char i = 0;i < 26;i++)
	{
		str[row][col] = 'A' + i;
		temp = -1;
		while (row < 0 || row >9 || col < 0 || col > 9 || str[row][col] != '.')
		{
			if (flag++ > 100) 
			{
				for (int i = 0;i < 10;i++)
				{
					for (int j = 0;j < 10;j++)
					{
						printf("%c ", str[i][j]);
					}
					printf("\n");
				}
				printf("\n\n\t\tMISSION FAILED\t\tT_T...\n");
				return 2;
			}

			switch (temp)
			{
			case 0:row += 1;break;
			case 1:col -= 1;break;
			case 2:row -= 1;break;
			case 3:col += 1;break;
			default: break;
			}

			temp = rand() % 4;
			switch (temp)
			{
			case 0:row -= 1;break;
			case 1:col += 1;break;
			case 2:row += 1;break;
			case 3:col -= 1;break;
			default: break;
			}
		}
	}

	for (int i = 0;i < 10;i++)
	{
		for (int j = 0;j < 10;j++)
		{
			printf("%c ", str[i][j]);
		}
		printf("\n");
	}
	printf("\n\n\t\tMISSION SUCCESSED!!!\t\t^v^\n");

	return 0;
}