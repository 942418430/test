#include<stdio.h>
#include<stdlib.h>

int pbnq_1(int n)
{
	if(n>2)
	{
		return pbnq_1(n-1) + pbnq_1(n-2);
	}
	else
		return 1;
}

int pbnq_2(int n)
{
	int a = 1;
	int b = 1;
	int i = 0;
	int s = 0;
	for(i=3; i<=n; i++)
	{
		s = a + b;
		a = b;
		b = s;
	}
	return b;
}

int main()
{
	int n = 0;
	printf("请输入n：\n");
	scanf("%d",&n);
	printf("用递归求得第n个斐波那契数为：%d\n",pbnq_1(n));
	printf("用循环求得第n个斐波那契数为：%d\n",pbnq_2(n));

	system("pause");
	return 0;
}
