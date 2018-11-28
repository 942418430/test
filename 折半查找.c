#include<stdio.h>
#include<stdlib.h>

int find(int*p, int n, int k)
{
	int l = 0;
	int g = 0;
	int z = 0;
	g = k - 1;

	while(g >= l)//如果左下标大于右下标跳出
	{
		z = (g-l)/2+l;//求中间下标
		if(p[z] == n)//取中间元素和n比较
		{
			return z;
		}
		else if(p[z] < n)
		{
			l = z + 1;
		}
		else
		{
			g = z - 1;
		}
	}

	return -1;
}

int main()
{
	int n = 0;
	int k = 0;
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 888};
	k = sizeof(arr)/sizeof(arr[0]);//求元素个数
	printf("请输入要查找的数：\n");
	scanf("%d",&n);
	if(find(arr, n, k) == -1)//如果返回值是-1，输出找不到了
	{
		printf("找不到\n");
	}
	else//输出返回值
	{
		printf("找到了，下标为：%d\n",find(arr, n, k));
	}

	system("pause");
	return 0;
}
