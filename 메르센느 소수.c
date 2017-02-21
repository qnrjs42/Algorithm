#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int i = 0;
	int j = 0;

	for (i = 2; i <= 127; i++)
	{
		for (j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)
				break;
		}

		if (i == j)
		{
			printf("%.f ", pow((double)2, (double)i)-1);
		}
	}

	return 0;
}
