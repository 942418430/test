#include<stdio.h>
#include<stdlib.h>

int heqishui(int n, int m, int b)
{
	//第一次可以喝到的汽水数
	int s = n/m;
	 n = n/m;
	//循环判断剩余的空瓶数是否大于等于可以兑换的数。
	while(n >= b)
	{
		//每次可以喝到的汽水数累加
		s += n/b;
		//每次兑换后剩余的空瓶数
		n = n/b +n%b;
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
	printf("可以喝到汽水%d瓶\n",heqishui(n,m,b));
	system("pause");
	return 0;
}
