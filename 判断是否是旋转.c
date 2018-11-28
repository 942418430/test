//判断一个字符串是否为另外一个字符串旋转之后的字符串。 
//例如：给定s1 =AABCD和s2 = BCDAA，返回1，给定s1=abcd和s2=ACBD，返回0. 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int a(char* arr1, char* arr2)
{
	int n = strlen(arr1);
	int i = 0;
	int j = 0;
	char t = 0;
	for(i=0; i<n; i++)
	{
		t=arr1[0];
		for(j=0; j<n-1; j++)
		{
			arr1[j] = arr1[j+1];
		}
		arr1[n-1] = t;
		if(0 == strcmp(arr1, arr2))
		{
			return 1;
		}
	}
	return 0;

}

int main()
{
	char arr1[] = "abcdefg";
	char arr2[] = "cdefgab";
    int n = 0;
	n = a(arr1, arr2);
	printf("%d\n",n);

	system("pause");
	return 0;
}
