#include "stdafx.h"
#include "BinarySearch.h"

void test1()
{
// the value is in the data.
	int data[] = {1, 3, 6, 7, 8, 8, 12, 13, 18, 25, 47, 58, 61, 78, 89, 93};
	int n = sizeof(data)/sizeof(int);
//	printf("%d\n", n);
	int result = binarySearch(data, 0, n-1, 18);
	if (result < 0)
		printf("Binary search is failed.\n");
	else
		printf("Binary search is succeed, and the value is at %d\n", result);
}

void test2()
{
// the value is not in the data.
	int data[] = {1, 3, 6, 7, 8, 8, 12, 13, 18, 25, 47, 58, 61, 78, 89, 93};
	int n = sizeof(data)/sizeof(int);
//	printf("%d\n", n);
	int result = binarySearch(data, 0, n-1, 19);
	if (result < 0)
		printf("Binary search is failed.\n");
	else
		printf("Binary search is succeed, and the value is at %d\n", result);
}

void test3()
{
// the value is more than one in the data.
	int data[] = {1, 3, 6, 7, 8, 8, 12, 13, 18, 25, 47, 58, 61, 78, 89, 93};
	int n = sizeof(data)/sizeof(int);
//	printf("%d\n", n);
	int result = binarySearch(data, 0, n-1, 8);
	if (result < 0)
		printf("Binary search is failed.\n");
	else
		printf("Binary search is succeed, and the value is at %d\n", result);
}

void test4()
{
// the value is the minimum in the data.
	int data[] = {1, 3, 6, 7, 8, 8, 12, 13, 18, 25, 47, 58, 61, 78, 89, 93};
	int n = sizeof(data)/sizeof(int);
//	printf("%d\n", n);
	int result = binarySearch(data, 0, n-1, 1);
	if (result < 0)
		printf("Binary search is failed.\n");
	else
		printf("Binary search is succeed, and the value is at %d\n", result);
}

void test5()
{
// the value is the maximum in the data.
	int data[] = {1, 3, 6, 7, 8, 8, 12, 13, 18, 25, 47, 58, 61, 78, 89, 93};
	int n = sizeof(data)/sizeof(int);
//	printf("%d\n", n);
	int result = binarySearch(data, 0, n-1, 93);
	if (result < 0)
		printf("Binary search is failed.\n");
	else
		printf("Binary search is succeed, and the value is at %d\n", result);
}

void test6()
{
// the value is less than the maximum in the data.
	int data[] = {1, 3, 6, 7, 8, 8, 12, 13, 18, 25, 47, 58, 61, 78, 89, 93};
	int n = sizeof(data)/sizeof(int);
//	printf("%d\n", n);
	int result = binarySearch(data, 0, n-1, -1);
	if (result < 0)
		printf("Binary search is failed.\n");
	else
		printf("Binary search is succeed, and the value is at %d\n", result);
}

void test7()
{
// the value is greater than the maximum in the data.
	int data[] = {1, 3, 6, 7, 8, 8, 12, 13, 18, 25, 47, 58, 61, 78, 89, 93};
	int n = sizeof(data)/sizeof(int);
//	printf("%d\n", n);
	int result = binarySearch(data, 0, n-1, 100);
	if (result < 0)
		printf("Binary search is failed.\n");
	else
		printf("Binary search is succeed, and the value is at %d\n", result);
}

void test8()
{
// the data is empty.
	int* data = NULL;
	int n = sizeof(data)/sizeof(int);
//	printf("%d\n", n);
	int result = binarySearch(data, 0, n-1, 100);
	if (result < 0)
		printf("Binary search is failed.\n");
	else
		printf("Binary search is succeed, and the value is at %d\n", result);
}

int _tmain(int argc, _TCHAR* argv[])
{
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	test8();
	return 0;
}

