// BinarySearch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//#include "BinarySearch.h"

int binarySearch(int data[], int begin, int end, int value)
{
	if (data == NULL || end < 0 || begin < 0 || begin > end)
		return -1;

	int middle = begin + (end - begin)/2;
	if (value == data[middle])
	{
		return middle;
	}
	else if (value < data[middle])
	{
		return binarySearch(data, begin, middle - 1, value);
	}
	else
	{
		return binarySearch(data, middle + 1, end, value);
	}
}

