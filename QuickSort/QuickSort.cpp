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

/*
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
*/
/*
//Bi-scan version
int partition(int data[], int low, int high)
{
	int key = data[low];  
	int l = low - 1;  
	int h = high + 1;  
	for(;;)  
	{  
		do{  
			h--;  
		}while(data[h] > key);  
  
		do{  
			l++;  
		}while(data[l] < key);  
  
		if(l < h)  
		{  
			swap(&data[l], &data[h]);  
		}  
		else  
		{  
			return h;     
		}  
	}  
}
*/

/*
//the uncorrect Bi-scan version, 
int partition(int data[], int low, int high)
{
	int key = data[low];  
	int l = low;  
	int h = high;  
	for(;;)  
	{  
		while(data[h] > key)
			h--;
  
		while(data[l] < key)
			l++;
  
		if(l < h)  
		{  
			swap(&data[l], &data[h]);  
		}  
		else  
		{  
			return h;     
		}  
	}  
}
*/
void quickSort(int data[], int low, int high)
{
	if (low < high)
	{
		int p = partition(data, low, high);
		quickSort(data, low, p-1);
		quickSort(data, p+1, high);
	}
}

