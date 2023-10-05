#include <stdio.h>

/**
 * bubbleSort - sorts an array of types
 *		Description
 * the bubbles algo sorts an array by comparing two elements
 * and swaping if a condition is true.
 * The process is repeated until order is set
 * @arr: pointer to an array.
 * @n: number of elements in the array to evaluate 
*/

void bubbleSort(int *arr, int size)
{
	int temp;
	int counter;
	int pairer;

	/*iterate through the array*/
	for (counter = 0; counter < size - 1; counter++)
	{
		/*paiting up each elements in the array*/
		for (pairer = 0; pairer < size - counter - 1; pairer++)
		{
			if (arr[pairer] > arr[pairer + 1])
			{
				/*swap */
				temp = arr[pairer];
				arr[pairer] = arr[pairer + 1];
				arr[pairer + 1] = temp;
			}
		}
	}
}
