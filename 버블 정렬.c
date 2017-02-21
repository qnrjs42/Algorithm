#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i, j, num, temp;
	int bFound;
	int arr[15];

	srand((unsigned int)time(NULL));

	for (i = 0; i < 15; i++)
	{
		while (1)
		{

			arr[i] = rand() % 15 + 1;
			bFound = 0;

			for (j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					bFound = 1;
					break;
				}
			}
			if (!bFound)
				break;
		}
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (i = 0; i < 15; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	for (i = 0; i < 15; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
