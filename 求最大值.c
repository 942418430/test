#include<stdio.h>
#include<stdlib.h>

int my_max(int *p, int n)
{
	int i = 0;
	for(i = 1; i<n; i++)
	{
		if(*p<*(p+i))//当第i+1个元素大于第一个元素，把值赋给第一个元素
		{
			*p = *(p+i);
		}
	}
	return *p;
}

int main()
{
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = sizeof(arr) / sizeof(arr[0]);//求元素个数

	printf("max=%d\n",my_max(arr,n));//函数的链式访问

	system("pause");
	return 0;
}
