#define _CRT_SECURE_NO_WARNINGS  1

#include <stdio.h>

int main()
{
	int arr[4][4] = { 0 };
	int row_sums[4] = { 0 };
	int column_sums[4] = { 0 };
	int Diagonal_sums_R = 0, Diagonal_sums_L = 0;
	int i = 0, j = 0;
	printf("Enter the numbers from 1 to 16 in any order:\n");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &arr[0][0], &arr[0][1], &arr[0][2], &arr[0][3], \
		& arr[1][0], &arr[1][1], &arr[1][2], &arr[1][3], \
		& arr[2][0], &arr[2][1], &arr[2][2], &arr[2][3], \
		& arr[3][0], &arr[3][1], &arr[3][2], &arr[3][3]);
	for (i = 0;i < 4;i++)
	{
		for (j = 0;j < 4;j++)
		{
			row_sums[i] += arr[i][j];
			column_sums[j] += arr[i][j];
			if (i == j) { Diagonal_sums_R += arr[i][j]; }
			if (i + j == 3) { Diagonal_sums_L += arr[i][j]; }
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("\nRow sums:");
	for (i = 0;i < 4;i++)
	{
		printf("\t%d", row_sums[i]);
	}
	printf("\nColumn sums:");
	for (i = 0;i < 4;i++)
	{
		printf("\t%d", column_sums[i]);
	}
	printf("\nDiagonal sums:\t%d\t%d",Diagonal_sums_R,Diagonal_sums_L);
	return 0;
}
