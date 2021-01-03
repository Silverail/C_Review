#include <stdio.h>

int main()
{
	int a=0, b=0, c=0, d=0;
	int max1 = 0, min1 = 0, max2 = 0, min2 = 0;
	int Max = 0, Min = 0;
	printf("Enter your integers:");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	if (a < b)
	{
		max1 = b;min1 = a;
	}
	else
	{
		max1 = a;min1 = b;
	}
	if (c < d)
	{
		max2 = d;min2 = c;
	}
	else
	{
		max2 = c;min2 = d;
	}
	if (max1 < max2)
		Max = max2;
	else
		Max = max1;
	if (min1 < min2)
		Min = min1;
	else
		Min = min2;
	printf("Largest: %d\nSmallest:%d\n", Max, Min);
	return 0;
}