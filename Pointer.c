#include <stdio.h>

int main()
{
	int arr[10] = { 0 };//
	//int* p = arr;//数组名-首元素地址
	char* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}