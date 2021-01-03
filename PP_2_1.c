/*
printf a picture
*/
#include <stdio.h>

int main()
{
	char Star_char = '*';
	char arr[6] = { 0x01,0x02,0x04,0x88,0x50,0x20 };
	int i = 0, j = 0;
	for (i = 0;i < 6;i++)
	{
		for (j = 0;j < 8;j++)
		{
			if ((arr[i] << j) & 0x80)
			{
				printf("%c", Star_char);
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
