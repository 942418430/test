#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//回调函数
//如果第一个数大于第二个数则返回1.
//int比较函数
int int_cmp(const void* p1, const void* p2)
{
	return ((*(int*)p1) > (*(int*)p2)? 1:-1);
}

//char比较函数
int char_cmp(const void* p1, const void* p2)
{
	return ((*(char*)p1) > (*(char*)p2) ? 1 : -1);
}

//char*比较函数
int str_cmp(const void* p1, const void* p2)
{
	return strcmp((*(char**)p1), (*(char**)p2));
}

//double比较函数
int double_cmp(const void* p1, const void* p2)
{
	return ((*(double*)p1) > (*(double*)p2)) ? 1:-1;
}

int main()
{
	int arr1[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	char arr2[] = { 'e', 'r', 't', 's' };
	char* arr3[] = { "as", "sasdf", "fdsa", "fasd" };
	double arr4[] = { 1.2, 3.2, 1.3, 3.5 };
	int i = 0;
	int j = 0;
	int k = 0;
	int g = 0;
	//int型排序
	qsort(arr1, sizeof(arr1) / sizeof(arr1[0]), sizeof(int), int_cmp);
	//char型排序
	qsort(arr2, sizeof(arr2) / sizeof(arr2[0]), sizeof(char), char_cmp);
	//char*排序
	qsort(arr3, sizeof(arr3) / sizeof(arr3[0]), sizeof(char*), str_cmp);
	//double排序
	qsort(arr4, sizeof(arr4) / sizeof(arr4[0]), sizeof(double), double_cmp);
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (j = 0; j < sizeof(arr2) / sizeof(arr2[0]); j++)
	{
		printf("%c ", arr2[j]);
	}
	printf("\n");
	for (k = 0; k < sizeof(arr3) / sizeof(arr3[0]); k++)
	{
		printf("%s ", arr3[k]);
	}
	printf("\n");
	for (g = 0; g < sizeof(arr4) / sizeof(arr4[0]); g++)
	{
		printf("%lf ", arr4[g]);
	}
	printf("\n");
	system("pause");
	return 0;
}
