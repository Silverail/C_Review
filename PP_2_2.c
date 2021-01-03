#include <stdio.h>

int main()
{
	int Num_input = 0;
	int bills_20 = 0, bills_10 = 0, bills_5 = 0, bills_1 = 0;

	scanf_s("%d", &Num_input);
	bills_20 = Num_input / 20;
	bills_10 = (Num_input - 20 * bills_20) / 10;
	bills_5 = (Num_input - (20 * bills_20 + 10 * bills_10)) / 5;
	bills_1 = (Num_input - (20 * bills_20 + 10 * bills_10 + 5 * bills_5)) / 1;

	printf("$20 bills:%d\n$10 bills:%d\n$5 bills:%d\n$1 bills:%d\n", bills_20, bills_10, bills_5, bills_1);
	return 0;
}
