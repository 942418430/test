//编写一个函数 reverse_string(char * string)（递归实现） 
//实现：将参数字符串中的字符反向排列。 
//要求：不能使用C函数库中的字符串操作函数。 
#include<stdio.h>
#include<stdlib.h>

void reverse_string(char* arr)
{
	if(*(++arr))
	{
		reverse_string(arr);
	}
		printf("%c",*(arr-1));
			
}

int main()
{
	char arr[] = "abcdefg";
	reverse_string(arr);
	printf("\n");

	system("pause");
	return 0;
}
