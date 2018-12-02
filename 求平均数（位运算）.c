
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 0;
	int b = 0;
	printf("请输入：\n");
	scanf("%d%d",&a,&b);
	printf("%d和%d的平均数是%d\n",a,b,(a & b)+((a | b) >> 1 ));
	system("pause");
	return 0;
}
