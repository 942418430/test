#include<stdio.h>
#include<stdlib.h>


int main()
{
	int n = 0;
	int i = 0;
	int ret = 0;
	
	printf("请输入n：\n");
	scanf("%d",&n);
	//从后向前取出每一位，然后左移加上后取出的。
	for(i=0; i<32; i++)
	{
		ret <<= 1;
		ret |= ((n >> i) & 1);
	}
	printf("ret = %d\n",ret);
	system("pause");
	return 0;
}
