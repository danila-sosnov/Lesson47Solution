﻿// Среднее арифметическое неэкстремальных элементов
// [The arithmetic mean of non - extreme elements]
//
// Дан вектор натуральных чисел. Необходимо разработать 
// функцию, которая вычисляет среднее рифметическое элементов
// вектора без учета минимального и максимального элементов.

double calculate_arithmetical_mean_of_nonextreme_elements(int* array, int size)
{
	int max = 0;
	int min = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}

	}

	for (int i = 0; i < size; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
	}

	double sum = 0;
	int count = 0;
	

	for (int i = 0; i < size; i++)
	{
		if (array[i] != max && array[i] != min)
		{
			sum += array[i];
			count++;
		}
	}


	return count == 0 ? 0 : sum / count;
}