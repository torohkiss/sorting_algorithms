#include "sort.h"

/**
 * sorts an array of integers in ascending order
 * using the Selection sort algorithm
 *
 * @array: the arrat to sort
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min, temp;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (j = i + 1; j < size; j++)
		{
			if (a[j] < a[min])
				min = j;
		}

		if (min != i)
		{
			temp = a[i];
			a[i] = a[min];
			a[min] = temp;
			print_array(array, size);
		}
	}
}
