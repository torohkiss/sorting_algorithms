#include "sort.h"

/**
 * swap_indexes - swaping values
 * @a: first index
 * @b: second index
 */

void swap_indexes(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - partitioning of the array
 * @array: the array
 * @lo: lower part of the array
 * @hi: uppr part of array
 * @size: size of array
 *
 * Return: 0
 */

int partition(int *array, int lo, int hi, int size)
{
	int pivot = array[hi], j = lo - 1;
	int i = 0;

	for (i = lo; i < hi; i++)
	{
		if (array[i] <= pivot)
		{
			j++;
			if (j != i)
			{
				swap_indexes(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (pivot < array[j + 1])
	{
		swap_indexes(&array[hi], &array[j + 1]);
		print_array(array, size);
	}
	return (j + 1);
}

/**
 * sorter - the sorter function
 * @array: the arrsy
 * @lo: lower partof the array
 * @hi: upper part of the array
 * @size: size of array
 */

void sorter(int *array, int lo, int hi, size_t size)
{
	size_t p = 0;

	if (lo < hi)
	{
		p = partition(array, lo, hi, size);
		if (p > 0)
			sorter(array, lo, p - 1, size);
		if (p != size)
			sorter(array, p + 1, hi, size);
	}
}

/**
 * quick_sort - the quick sort main function
 * @array: the array to be sorted
 * @size: size of rray
 */

void quick_sort(int *array, size_t size)
{
	int lo = 0, hi = size - 1;

	if (!array || size == 0)
		return;

	sorter(array, lo, hi, size);
}
