
#include<stdio.h>
#include<stdlib.h>

int count_one1(int n)
{
	int count = 0;
	while(n)
	{
		if(n&1 == 1)
		{
			count++;
		}
		n >>= 1;
	}
	return count;
}

int count_one2( int n )
{
	int count = 0;
	while(n)
	{
		n = n & (n-1);
		count++;
	}
	return count;
}

int count_one3( int n)
{
	int count = 0;
	while(n)
	{
		if(n%2 == 1)
		{
			count++;
		}
		n /= 2;
	}
	return count;
}

int main()
{

	int n = 0;

	printf("输入一个数：\n");
	scanf("%d",&n);
	printf("%d\n",count_one1(n));
	printf("%d\n",count_one2(n));
	printf("%d\n",count_one3(n));
	system("pause");
	return 0;
}
