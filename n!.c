//递归和非递归分别实现求n的阶乘 

#include<stdio.h>
#include<stdlib.h>

int a(int n)
{
	if(n>1)
	{
		return n * a(n-1);
		
	}
	return 1;
}

int b(int n)
{
	int s = 1;
	for(; n>=1; n--)
	{
		s *= n;
	}
	return s;
}
int main()
{
	int n = 0;
	printf("请输入n：\n");
	scanf("%d",&n);
	printf("%d!=%d\n",n,a(n));
	printf("%d!=%d\n",n,b(n));

	system("pause");
	return 0;
}
