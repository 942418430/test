#include<stdio.h>
#include<stdlib.h>

void bubble(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	int tep = 0;
	for(i=0; i<sz-1; i++)
	{	
		for(j=0; j<sz-1-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				tep = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tep;
			}
		}
	}
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 4, 3, 2, 1};
    int sz =sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int j = 0;
	//用冒泡排序法将数组从小到大排序
	bubble(arr,sz);
	printf("这两个数分别是\n");
	//判断第i个数和i+1是否相等，相等的话跳过i+1，不相等就输出
	for(i=0; i<sz; i++)
	{
		if(arr[i] == arr[i+1])
		{
			i++;
		}
		else
		{
			printf("%d ",arr[i]);
			//当找到两个数则跳出循环
			if(++j == 2)
			{
				break;
			}
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
