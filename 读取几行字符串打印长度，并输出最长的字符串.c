#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char arr1[1000] = { 0 };
	char arr2[1000] = { 0 };
	int n = 0;
	int m = 0;
	//输入几行字符串并打印长度，在输入control加z时，循环跳出。
	while(gets(arr1) != NULL)
	{
		//求字符串长度
		n = strlen( arr1 );
		//打印字符串长度
		printf("%d\n",n);
		//如果下一个字符串长度大于最大的zifuchuan长度，则把其拷贝到最长的字符串中。并且把长度值赋值给最大的长度。
		if( m < n )
		{
			m = n;
			strcpy(arr2, arr1);
		}
	}
	//输出最长的字符串
	puts( arr2 );
	system("pause");
	return 0;
}
