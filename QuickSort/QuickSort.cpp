// QuickSort.cpp : 
//

#include "stdafx.h"
#include "QuickSort.h"

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/*

int partition(int data[], int low, int high)
{
	int key = data[high];
	int i = low - 1;
	int j = low;
	for (j = low; j < high; j++)
	{
		if (data[j] <= key)   //must add "="
		{
			i++;
			swap(&data[i], &data[j]);
		}
	}
	i++;
	swap(&data[i], &data[high]);
	return i;
}
*/


//Hoare
int partition(int data[], int low, int high)
{
	int key = data[low];
	int i = low;
	int j = high;
	while (i < j)
	{
		while (data[j] >= key && i < j)
			j--;
		data[i] = data[j];

		while (data[i] <= key && i < j)
			i++;
		data[j] = data[i];
	}
	data[i] = key;
	return i;
}


void quickSort(int data[], int low, int high)
{
	if (low < high)
	{
		int p = partition(data, low, high);
		quickSort(data, low, p-1);
		quickSort(data, p+1, high);
	}
}

