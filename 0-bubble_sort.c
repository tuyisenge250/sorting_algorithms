#include "sort.h"

/**
 * swap_p - swap two integer in an array
 * @a: the first integer to swap.
 * @b: the secondary integer to swap.
 */

void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort: sort an array of in ascending order
 * @array: ab array of integers
 * @size: the size of the array
 *
 * description: prints the array after each swap.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i,len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len -1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array,size);
				bubbly = false;
			}
		}
		len--;
	}
}
