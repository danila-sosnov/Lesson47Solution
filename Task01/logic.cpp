// Сумма элементов [The sum of elements]
//
// Необходимо разработать функцию, которая вычисляет 
// сумму элементов массива, расположенных между первыми
// максимальным по модулю и минимальным по модулю элементами.

#include "logic.h"


int sum_between_first_min_max(int* array, int size)
{
	
	int maxIndex = 0;
	int minIndex = 0;

	for (int i = 0; i < size; i++)
	{
		if (abs(array[i]) > abs(array[maxIndex]))
		{
			maxIndex = i;
		}

	}

	for (int i = 0; i < size; i++)
	{
		if (abs(array[i]) < abs(array[minIndex]))
		{
			minIndex = i;
		}
	}

	if (maxIndex > minIndex)
	{
		int t = minIndex;
		minIndex = maxIndex;
		maxIndex = t;
	}

	int sum = 0;

	for (int i = maxIndex + 1; i < minIndex; i++)
	{
		sum += array[i];
	}


	

	return sum;
}