#include<stdio.h>
#include<stdlib.h>

#define x 3
#define y 3

int fing(int const arr[x][y], int a, int b, int  n)
{
	int i = 0;
	int j = b-1;
	while(i<=a-1 && j>=0)
	{
		if(arr[i][j] == n)
			return 1;
		else if(arr[i][j]>n)
		{
			j--;
		}
		else
			i++;
	}
	return 0;
}

int main()
{
	int i , j;
	int n = 0;
	
	int arr[x][y] = { 0 };
	printf("输入杨氏矩阵：\n");
	for(i=0; i<x; i++)
		for(j=0; j<y; j++)
			scanf("%d",&arr[i][j]);
	printf("\n输入要查找的数：\n");
	scanf("%d",&n);
	printf("%d\n",fing(arr,x,y,n));
	system("pause");
	return 0;
}
