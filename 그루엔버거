#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main()
{
	char result[100];
	int num, reverse = 0;
	int temp = 0, temp2 = 0;
	int len = 0, i = 0, j = 0;
	int sum = 0, check = 0;

	scanf_s("%d", &num);

	sum = num;
	temp = num;

	for (;;)
	{
		j = 0;
		check = 0;

		while (temp != 0)
		{
			reverse = reverse * 10;
			reverse = reverse + temp % 10;
			temp = temp / 10;
		}
		sum = num + reverse;

		printf("%d + %d = %d \n", num, reverse, sum);

		num = sum;
		temp = sum;
		reverse = 0;
		temp2 = sum;

		itoa(temp2, result, 10);

		len = strlen(result);

		for (j = 0; j < len / 2; j++)
		{
			if (result[j] != result[len - 1 - j])
			{
				check++;
				break;
			}
		}

		if (check == 0)
		{
			printf("Palindrome!!! \n");
			break;
		}

		reverse = 0;
	}
	return 0;
}
