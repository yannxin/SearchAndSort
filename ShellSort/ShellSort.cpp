

#include "stdafx.h"

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void shellSort(int data[], int low, int high)
{
	if (low >= high)
		return;
	int size = high - low + 1;
	int step;
	for (step = size/2; step > 0; step /= 2)
	{
		int i;
		for (i = low + step; i <= high; i++)
		{
			int j;
			for (j = i - step; j >= low && data[j] > data[j+step]; j -= step)
			{
				swap(data[j], data[j+step]);
			}
		}
	}
}