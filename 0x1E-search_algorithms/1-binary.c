#include <stdio.h>
#include "search_algos.h"
int midd(int lf, int rt);
/**
 * binary_search - conducts a binary search
 * @array: arrat to be searched
 * @size: size of the array
 * @value: value being searched
 * Return: index of value or -1 if not found
*/

int binary_search(int *array, size_t size, int value)
{
    int lf, rt, mid, i;
    lf = 0;
    rt = size - 1;
    mid = midd(lf, rt);
    while (lf <= rt)
    {
        printf("Searching in array: ");
        for ( i = lf; i <= rt; i++)
        {
            if (i != rt)
            {
                printf("%d, ", array[i]);
            }
            else
            {
                printf("%d", array[i]);
            }
        }
        printf("\n");
        if (array[mid] > value)
        {
            rt = mid - 1;
            mid = midd(lf, rt);
        }
        else if (array[mid] < value)
        {
            lf = mid + 1;
            mid = midd(lf, rt);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
/**
 * midd - calculates mid value
 * @lf: left value
 * @rt: right value
 * Return: mid value
*/
int midd(int lf, int rt)
{
    return (lf + rt) / 2;
}