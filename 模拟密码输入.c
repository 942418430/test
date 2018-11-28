//编写代码模拟三次密码输入的场景。 
//最多能输入三次密码，密码正确，提示“登录成功”,密码错误， 
//可以重新输入，最多输入三次。三次均错，则提示退出程序。 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char arr[8] = { 0 };
	int count = 3;
	
	while(count)//count限制输入次数
	{
		printf("请输入密码：\n");
		scanf("%s",arr);
		if(0 == strcmp(arr, "123456"))//判断密码是否输入正确
		{
			printf("密码正确！登陆成功！\n");
			break;
		}
		else
		{
			count--;//机会减一次
			printf("密码错误！还有%d次机会！\n",count);
		}
	}
	if(count == 0)//当count为0时，三次均输入错误。
	{
		printf("退出程序");
	}
	system("pause");
	return 0;
}
