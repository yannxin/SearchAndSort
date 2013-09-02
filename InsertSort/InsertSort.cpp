// InsertSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void insertSort(int data[], int low, int high)
{
	if (low >= high)
		return;
	// throw std::exception("the data is NULL.");
	int i;
	for (i = low + 1; i <= high; i++)
	{
		int j;
		int k = data[i];
		for (j = i - 1; j >= low; j--)
		{
			if (data[j] > k)
				data[j+1] = data[j];
			else
			{
				data[j+1] = k;
				break;
			}
		}
	}
}