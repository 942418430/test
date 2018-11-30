
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

void calc( int (*p)(int , int ))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入操作数：\n");
	scanf("%d%d",&x,&y);
	//根据实参函数地址来找到函数调用。
	ret = p(x, y);
	printf("ret = %d\n",ret);
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
	int input = 0;
	do
	{
		//打印菜单
		menu();
		printf("请选择：\n");
		//输入要进行的运算或者退出
		scanf("%d",&input);
		//条件语句判断input，执行相应操作
		switch(input)
		{
		case 1:
			//调用函数，参数是函数指针。
			calc(add);
			break;
		case 2:
			calc(sub);
			break;
		case 3:
			calc(mul);
			break;
		case 4:
			calc(d);
			break;
		case 0:
			printf("退出计算器！\n");
			break;
		default:
			printf("选择错误！\n");
		}
	}while(input);
	system("pause");
	return 0;
}
