#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - implements the linear search algorithm
 * @array: holds the items to be searched
 * @size: size of the array
 * @value: value to be searched
 * Return: index of value being searched or null if not found
*/

int linear_search(int *array, size_t size, int value)
{
    size_t index;
    for (index = 0; index < size; index++)
    {
        printf("Value checked array[%ld] = [%d]\n", index, array[index]);
        if (array[index] == value)
        {
            return (index);
        }
    }
    return (-1);
}