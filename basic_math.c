#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[] = {8, 2, 3, 4, 5, 6, 7, -1, 9, 10};
	int *p = arr;
	int min = p[0];
	int max = p[0];
	int total_sum = 0;
	int average = 0;
	int size = sizeof(arr)/sizeof(int);
	printf("size of array: %d\n", size);
	for (int i = 0; i < size; i++)
	{
		if (min > p[i])
		{
			min = p[i];
		}
		if (max < p[i])
		{
			max = p[i];
		}
		total_sum += p[i];
	}
	average = total_sum / size;
	printf("min value: %d\n", min);
	printf("max value: %d\n", max);
	printf("average: %d\n", average);
}