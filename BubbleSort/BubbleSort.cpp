// BubbleSort.cpp

#include "stdafx.h"

void swap(int &a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void bubbleSort(int data[], int low, int high)
{
	if (low > high)
		return;

	int i;
	bool flag = true;
	for (i = high; i > low && flag; i--)
	{
		flag = false;
		int j;
		for (j = low; j < i; j++)
		{
			if (data[j] > data[j+1])
			{
				swap(data[j], data[j+1]);
				flag = true;
			}
		}
	}
}