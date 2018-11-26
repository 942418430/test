#include<stdio.h>
#include<stdlib.h>
int my_strlen1(char* const arr)
{
	
	char* p =arr;
	int count= 0;
	assert(arr != NULL);//断言

	while(*p)//判断头指针是否走到'/0'
	{
		p++;
		count++;//头指针向后移动，计数器++
	}
	return count;
}

int my_strlen2(char* const arr)
{
	
	char* p =arr;

	assert(arr != NULL);

	while(*p)
	{
		p++;
	}
	return p-arr;//指向同一块内存指针相减，代表指针之间相差元素个数。
}

int main()
{
	char arr[] = "abcdefg";
	int n = 0;
	int m = 0;

	n =	my_strlen1(arr);
	m =	my_strlen2(arr);

	printf("%d\n",n);
	printf("%d\n",m);
	
	system("pause");
	return 0;
}#include<assert.h>

