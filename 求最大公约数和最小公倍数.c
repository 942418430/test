
#include<stdio.h>
#include<stdlib.h>

int gcd1(int x, int y)//穷举法求最大公约数
{
	int i = 0;
	for(i=x; i>0; i--)
	{
		if(x%i == 0 && y%i == 0)
			return i;
	}

}
int gcd2(int x, int y)//辗转相除法求最大公约数
{
	int z = 0;
	while(y)
	{
		z = x%y; 
		x = y;
		y = z;
	}
	return x;
}

int gcd3(int x, int y)//递归辗转相除法
{
	return y==0 ? x : gcd3(y, x%y);
}

int gcd4(int x, int y)//相减法求最大公约数
{
	while(x - y != 0)//当x和y相等时跳出循环
	{
		if(x>y)
		{
			x = x - y;//当x>y,给x赋值其差
		}
		else
		{
			y = y - x;//给y赋值其差
		}
	}
	return x;
}

int a(int x, int y)//穷举法求最小公倍数
{
	int i = x;
	while(!(i%x == 0 && i%y == 0))
	{
		i++;
	}
	return i;
}


int main()
{
	int x = 0;
	int y = 0;

	printf("请输入两个数：\n");
	scanf("%d%d",&x,&y);
    printf("%d和%d的最大公约数为%d\n",x,y,gcd1(x,y));
	printf("%d和%d的最大公约数为%d\n",x,y,gcd2(x,y));
	printf("%d和%d的最大公约数为%d\n",x,y,gcd3(x,y));
	printf("%d和%d的最大公约数为%d\n",x,y,gcd4(x,y));
	printf("%d和%d的最小公倍数为%d\n",x,y,x*y/gcd4(x,y));//最小公倍数是两数之积除最大公约数
	printf("%d和%d的最小公倍数为%d\n",x,y,a(x,y));


	system("pause");
	return 0;
}
