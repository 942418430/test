#include<stdio.h>
#include<stdlib.h>

int my_pow(int n , int k)
{
	if(k>0)
	{
		return my_pow(n,k-1)*n;
	}
	else
	{
		return 1;
	}
}
int my_pow1(int n, int k)
{
	int s = 1;
	while(k--)
	{
		s *= n;
	}
	return s;
}

int main()
{
	int n = 0;
	int k = 0;
	printf("请输入n和k：\n");
	scanf("%d%d",&n,&k);
	printf("用递归求得%d^%d=%d\n",n,k,my_pow(n,k));
	printf("用循环求得%d^%d=%d\n",n,k,my_pow1(n,k));

	system("pause");
	return 0;
}
