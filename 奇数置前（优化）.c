#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int tmp = 0;
	int left = 0;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]) ;
	int right = sz - 1;
	while(left < right)
	{
		//从左边遍历找到偶数
		while((arr[left] % 2 == 1) && (left < right))
		{
			left++;
		}
		//从右边遍历找到奇数
		while((arr[right] % 2 == 0) && (left < right))
		{
			right--;
		}
		//交换两个数
		if(left < right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
		//跳过交换的数
		left++;
		right--;

	}
	for(i=0; i<sz; i++)
	{
		printf("%d ",arr[i]);
	}
	system("pause");
	return 0;
}
