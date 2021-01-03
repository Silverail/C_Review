#include <stdio.h>

int main()
{
	int time_hour = 0, time_mins = 0,time_M=0;
	
	printf("Enter a 24-hour time:");
	scanf_s("%d:%d", &time_hour, &time_mins);
	if (time_hour > 12 && time_hour < 24)
	{
		time_hour -= 12;
		time_M = 2;
	}
	else if (time_hour == 24)
	{
		time_hour = 0;
		time_M = 1;
	}
	else if ((time_hour > 24||time_hour<0) ||(time_mins>=60)||time_mins<0)
	{
		printf("Error\n"); return 0;
	}
	else time_M=1;
	if (time_M == 1)
	{
		printf("Equivalent 12-hour time:\t%.2d:%.2d  am", time_hour, time_mins);

	}
	else
		printf("Equivalent 12-hour time:\t%.2d:%.2d  pm", time_hour, time_mins);

	return 0;
}