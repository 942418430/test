#include<stdio.h>
#include<stdlib.h>

void sort_1(int *p, int n)
{
	int i = 0;
	int j = 0;
	for(j=0; j<n-1; j++)
	{
			
		for(i = 0; i<n-j-1; i++)
		{
			if(*(p+i) < *(p+i+1))//将比较j和j+1下标元素的大小，小的放后面
			{
				*(p+i) = *(p+i) + *(p+i+1);
				*(p+i+1) = *(p+i) - *(p+i+1);
				*(p+i) = *(p+i) - *(p+i+1);
			}
		}
	}
}


int main()
{
	int arr[] = {1, 2, 3};
	int n = sizeof(arr) / sizeof(arr[0]);//求元素个数
	int i = 0;
	sort_1(arr, n);

	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}

	printf("\n");

	
	system("pause");
	return 0;
}
