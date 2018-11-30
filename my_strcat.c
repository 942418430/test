
#include<stdio.h>
#include<stdlib.h>

char* my_strcat(char* p,const char* q)
{
	//记录指针p
	char *ret = p;
	//指针p移动到'\0'位置
	while(*p)
	{
		p++;
	}
	//复制字符串q到p后面
	while(*p++ = *q++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20] = "i love ";
	char arr2[20] = "you";
	printf("%s\n",my_strcat(arr1, arr2));

	system("pause");
	return 0;
}
