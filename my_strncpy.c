
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

char* my_strncpy(char* q,const char* p, int n)
{
	char* str = q;
	assert(q);
	assert(p);
	//拷贝字符到目标字符串
	while (n && (*q++ = *p++))
	{
		n--;
	}
	//如果源字符串长度小于n，则后面加0，直到n个
	if (n)
	{
		while (--n)
		{
			*q++ = '\0 ';
		}
	}
	return str;
}
int main()
{
	char arr[20] = { 0 };
	printf("%s\n",my_strncpy(arr, "i love you", 10));
  
	system("pause");
	return 0;
}
