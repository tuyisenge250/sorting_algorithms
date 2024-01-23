#include "sort.h"

/*
 * swaps_ints - ffunction to swap value
 * @a: pointer to value one
 * @b: pointer to value two
 */

void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
 * selection_sort - sort array of integert on ascending order using selectoin sort
 * @array: an array of integer
 * @size: the size of the array
 *
 * description: prints the after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap_ints(array + i, min);
			print_array(array, size);
		}
	}
}
