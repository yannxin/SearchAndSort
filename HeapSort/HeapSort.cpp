

#include "stdafx.h"

void BuildMaxHeap(int data[], int low, int high)
{
	int p = low + (high - low + 1) / 2 - 1;
	for (; p >= low; p--)
	{
		
	}
}

void HeapSort(int data[], int low, int high)
{
	BuildMaxHeap(data, low, high);
	int i;
	for (i = high; i >= low; i--)
	{
		swap(data[0], data[i]);

	}
}