//

#include "stdafx.h"

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void selectSort(int data[], int low, int high)
{
	if (low >= high)
		return;
	int i;
	for (i = low; i < high; i++)
	{
		int j;
		int k = i;
		for (j = i+1; j <= high; j++)
		{
			if (data[j] < data[k])
			{
				k = j;
			}
		}
		swap(data[i], data[k]);
	}
}