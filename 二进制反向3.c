#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int n = 0;
	int i = 0;
	int ret = 0;
	
	printf("请输入n：\n");
	scanf("%d",&n);
	for(i=0; i<32; i++)
	{
		ret += ((n >> i) & 1) * pow(2,31-i);
	}
	printf("ret = %d\n",ret);
	system("pause");
	return 0;
}
