
#include<stdio.h>
#include<stdlib.h>

int check_sys()
{
	//利用公用体特征，变量u的内存空间占4个字节，变量u.i,u.c共用一块内存空间。
	union um
	{
		char c;
		int i;
	}u;
	//判断u.c是否是1，1的话是小端。
	u.i = 1;
	return u.c;
}
int main()
{
	int a = 1;//定义整形
	int b;
	char* p= (char*) &a;//取整形a低字节
	//如果低字节是1，是小端
	if(*p == 1)//
		printf("小端\n");
	else
		printf("大端\n");

	if(check_sys() == 1)
		printf("小端\n");
	else
		printf("大端\n");

	system("pause");
	return 0;
}
