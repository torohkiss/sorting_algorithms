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

	if (!array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}

		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
