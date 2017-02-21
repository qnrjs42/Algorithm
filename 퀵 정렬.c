#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void QuickSort(int arr[], int left, int right)
{
	int i = left, j = right;
	int tmp;
	int pivot = arr[(left + right) / 2];

	while (arr[i] < pivot) i++;
	while (arr[j] > pivot) j--;

	if (i <= j)
	{
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
		i++;
		j--;
	}

	if (left < j) QuickSort(arr, left, j);
	if (right > i) QuickSort(arr, i, right);
}

int main()
{
	int i;
	int arr[] = { 1, 5, 3, 2, 7, 9, 8, 6, 10, 4  };
	int left = arr[0];
	int right = sizeof(arr) / sizeof(arr[0]);

	printf("퀵 정렬 전 : ");

	for (i = 0; i < right; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");

	QuickSort(arr, left, right-1);

	printf("퀵 정렬 후 : ");

	for (i = 0; i < right; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");

	return 0;
}
