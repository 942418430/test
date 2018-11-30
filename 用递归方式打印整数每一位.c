
#include<stdio.h>
#include<stdlib.h>
void print(int n)
{
	if(n>9)
	{
		print(n/10);
	}
		printf("%d ",n%10);
}

int main()
{
	int n = 0;
	printf("请输入n：\n");
	scanf("%d",&n);
	print(n);
	system("pause");
	return 0;
}
