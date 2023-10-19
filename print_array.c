#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Printing an array of the integers
 * @array: The array to be printed on
 * @size: Number of elements in the array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
