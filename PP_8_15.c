#include <stdio.h>

int main()
{
	char mes_code[80] = { 0 };
	int shift_amount = 0;
	int i = 0;
	printf("Enter message to be encrypted: ");
	while (mes_code[i-1] != '\n')
	{
		mes_code[i] = getchar();
		i++;
	}
	printf("Enter shift amount (1-25): ");

	scanf_s("%d", &shift_amount);

	for (int i = 0;i < (int)sizeof(mes_code);i++)
	{
		mes_code[i] = ((mes_code[i] - 'a') + shift_amount) % 26 + 'a';
		if (mes_code[i] < 'a' || mes_code[i] >'z') mes_code[i] = ' ';
	}

	printf("Encrypted message: ");
	for (int i = 0;i < (int)sizeof(mes_code);i++)
	{
		printf("%c", mes_code[i]);
	}

	return 0;
}