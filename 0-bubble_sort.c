#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending
 * order using the Bubble sort algorithm.
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */

void bubble_sort(int *array, size_t size)
{
	int temp, swap_count;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		swap_count = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swap_count++;
				print_array(array, size);
			}
		}
		if (swap_count == 0)
			print_array(array, size);
	}
}
