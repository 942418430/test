#include<stdio.h>
#include<stdlib.h>

void swap1(int *a, int *b)//创建中间变量
{
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
	
}

void swap2(int *a, int *b)//加法
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void swap3(int *a, int *b)//异或
{
	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d",&a,&b);//传的是地址，用指针接收

	printf("a=%d b=%d\n",a,b);

	swap1(&a,&b);

	printf("a=%d b=%d\n",a,b);

	swap2(&a,&b);

	printf("a=%d b=%d\n",a,b);

	swap3(&a,&b);

	printf("a=%d b=%d\n",a,b);

	system("pause");
	return 0;
}
