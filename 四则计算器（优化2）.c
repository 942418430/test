
#include<stdio.h>
#include<stdlib.h>

int add(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int mul(int a, int b)
{
	return a*b;
}
int d(int a, int b)
{
	return a/b;
}

void menu()
{
	printf("*********************************************\n");
	printf("******       1.add    2.sub     *************\n");
	printf("******       3.mul    4.div     *************\n");
	printf("******            0.exit        *************\n");
	printf("*********************************************\n");
}
int main()
{
	int x = 0;
	int y = 0;
	int ret = 0;
	int input = 0;
	int (*p[4])(int ,int ) = {add, sub, mul, d};
	do
	{
		//打印菜单
		menu();
		printf("请选择：\n");
		//输入要进行的运算或者退出
		scanf("%d",&input);
		//条件语句判断input，执行相应操作
		if(input<=4 && input>=1)
		{
			printf("请输入操作数：\n");
			scanf("%d%d",&x,&y);
			//根据函数指针数组调用函数
			ret = p[input-1](x, y);
			printf("ret = %d\n",ret);
		}
		else if(input == 0)
		{
			printf("退出计算器！/n");
		}
		else
		{
			printf("输入有误！\n");
		}
	}while(input);
	system("pause");
	return 0;
}
