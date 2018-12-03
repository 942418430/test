#include<stdio.h>
#include<stdlib.h>

//用空瓶可以换的汽水总数
int heqishui(int n, int b)
{
	//一次可以兑换的汽水数
	int s = n / b;
	//兑换后剩余汽水瓶数
	n = n/b + n%b;
	//剩余的足够换一瓶或者更多
	if(n>=b)
	{
		return s+ heqishui(n, b);
	}
	return s;
}

int main()
{
	int n = 0;
	int m = 0;
	int b = 0;
	printf("请输入现金数：\n");
	scanf("%d",&n);
	printf("请输入每瓶汽水的价格：\n");
	scanf("%d",&m);
	printf("请输入兑换一瓶汽水需要的空瓶数：\n");
	scanf("%d",&b);
	printf("可以喝到汽水%d瓶\n",n/m + heqishui(n/m, b));
	system("pause");
	return 0;
}
