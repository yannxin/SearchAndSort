

#include "stdafx.h"

void AgeSort(int data[], int low, int high)
{
	if (data == NULL || low > high)
		return;

	const int maxAge = 99;
	int numOfAge[maxAge + 1];
	int i;
	for (i = 0; i <= maxAge; i++)
		numOfAge[i] = 0;
	for (i = low; i <= high; i++)
	{
		if (data[i] < 0 || data[i] > maxAge)
			return;
		++numOfAge[data[i]];
	}

	int k = low; //number of person
	for (i = 0; i <= maxAge; i++)
	{
		int j;
		for (j = 0; j < numOfAge[i]; j++)
		{
			data[k++] = i;
		}
	}
}