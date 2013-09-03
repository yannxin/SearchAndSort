

#include "stdafx.h"

void merge(int data[], int low, int mid, int high, int temp[])
{
	int i = low, j = mid + 1; 
	int m = mid, n = high;
	int k = 0;
	
	while (i <= m && j <= n)
	{
		if (data[i] <= data[j])
			temp[k++] = data[i++];
		else
			temp[k++] = data[j++];
	}
	
	while (i <= m)
		temp[k++] = data[i++];
	
	while (j <= n)
		temp[k++] = data[j++];
	
	for (i = 0; i < k; i++)
		data[low + i] = temp[i];
}
void mergesort(int data[], int low, int high, int temp[])
{
	if (low < high)
	{
		/*mid = (low+high)/2;*/ /*注意防止溢出*/
		/*mid = low/2 + high/2;*/
		/*mid = (low & high) + (low ^ high) >> 1);*/
		/*mid = ((low & high) + ((low ^ high) >> 1));*/    /*修正上一句优先级错误*/
		int mid = low + (high - low) / 2;
		mergesort(data, low, mid, temp);    //左边有序
		mergesort(data, mid + 1, high, temp); //右边有序
		merge(data, low, mid, high, temp); //再将二个有序数列合并
	}
}

void MergeSort(int data[], int low, int high)
{
	int *p = new int[high - low + 1];
	if (p == NULL)
		return;
	mergesort(data, low, high, p);
	delete[] p;
}