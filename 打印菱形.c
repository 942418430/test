#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	printf("请输入正三角形行数：\n");
	scanf("%d",&n);

	for(i=1; i<=n; i++)//控制行数
	{
		for(j=1; j<=n-i; j++)//控制打印空格数
		{
			printf(" ");
		}
		for(j=1; j<=2*i-1; j++)//控制打印*的个数
		{
			printf("*");
		}
		printf("\n");//打印完一行后换行
	}

	for(i=n-1; i>=1; i--)//控制行数
	{
		for(j=1; j<=n-i; j++)//控制打印空格数
		{
			printf(" ");
		}
		for(j=1; j<=2*i-1; j++)//控制打印*的个数
		{
			printf("*");
		}
		printf("\n");//打印完一行后换行
	}

	system("pause");
	return 0;
}
