// ShellSortTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "ShellSort.h"


void test1()
{
// common test for quickSort.
	int data[] = {2, 5, 6, 16, 7, 4, 9, 2};
	int n = sizeof(data)/sizeof(int);
	shellSort(data, 0, n-1);

	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", data[i]);
	}
	printf("\n");
}

int _tmain(int argc, _TCHAR* argv[])
{
	test1();
	return 0;
}

