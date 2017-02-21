#include <stdio.h>
#include <string.h>

int main()
{
	char palindrome[100];
	int len = 0, i;
	int j = 0;
	char temp = 0;

	gets_s(palindrome);

	while (palindrome[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		if (palindrome[i] != palindrome[len - 1 - i])
		{
			j++;
		}
	}

	if (j == 0)
		printf("True");
	else
		printf("False");

	return 0;
}
