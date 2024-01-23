#include "sort.h"

/**
 *bubble_sort - sorts an array in ascending order
 *@array: array of numbers
 *@size: Size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t p, i;
	int num;

	if (array == NULL  || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (p = 0; p < size - i - 1; p++)
		{
			if (array[p] > array[p + 1])
			{
				num = array[p];
				array[p] = array[p + 1];
				array[p + 1] = num;
				print_array(array, size);
			}
		}
	}
}
