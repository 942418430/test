#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

char* my_strncat(char* q, const char* p, int n)
{
	char* str = q;
	assert(q);
	assert(p);
	while (*q)
	{
		q++;
	}
	while (n--)
	{
		if (!(*q++ = *p++))
		{
			return str;
		}
	}
	*q = '\0';
	return str;
}
int main()
{
	char arr[20] = "i love " ;
	printf("%s\n",my_strncat(arr, "you are ", 3));
	system("pause");
	return 0;
}
