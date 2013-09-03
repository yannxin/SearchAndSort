// HeapSort.cpp

#include "stdafx.h"

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int leftChild(int i)
{
    return (2 * i + 1);
}

int rightChild(int i)
{
    return (2 * i + 2);
}

void AdjustHeap(int data[], int low, int high, int i)
{
	int left = leftChild(i);
	int right = rightChild(i);
	int k = i; // the largest
	while (left <= high || right <= high)
	{
		if (left <= high && data[left] > data[k])
			k = left;
		if (right <= high && data[right] > data[k])
			k = right;

		if (k != i)
		{
			swap(data[i], data[k]);
			i = k;
			left = leftChild(i);
			right = rightChild(i);
		}
		else
		{
			break;
		}
	}
}

void BuildMaxHeap(int data[], int low, int high)
{
	int p = low + (high - low + 1) / 2 - 1;
	for (; p >= low; p--)
	{
		AdjustHeap(data, low, high, p);
	}
}

void HeapSort(int data[], int low, int high)
{
	BuildMaxHeap(data, low, high);
	int i;
	for (i = high; i > low; i--)
	{
		swap(data[low], data[i]);
		AdjustHeap(data, low, i-1, low);
	}
}