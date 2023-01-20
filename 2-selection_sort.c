#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using
 * the selection sort algorithm
 *
 * @array: the array of integers to sort
 * @size: the size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	if (size < 2)
		return;

	for (i = 0; i < (size - 1); i++)
	{
		size_t min = i;

		for (j = (i + 1); j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
