#include <stdio.h>
#include <string.h>

int main()
{
	char voca[100];
	int len = 0, i;
	char temp;

	fgets(voca, sizeof(voca), stdin);

	while (voca[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = voca[i];
		voca[i] = voca[(len - i) - 1];
		voca[(len-i)-1] = temp;
	}

	printf("%s", voca);

	return 0;
}
