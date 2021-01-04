#include <stdio.h>

int main()
{
    int i, n, start_day;

    printf("Enter number of days in month: ");
    scanf_s("%d", &n);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf_s("%d", &start_day);

    /* print any leading "blank dates" */
    for (i = 1; i < start_day; i++)
        printf("   ");

    /* now print the calendar */
    for (i = 1; i <= n; i++) {
        printf("%3d", i);
        if ((start_day + i - 1) % 7 == 0)
            printf("\n");
    }

	return 0;
}