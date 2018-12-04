#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

char* my_strchr( char* dest, char ch)
{
	char* q = (char*) dest;
	assert(dest != NULL);
	if(ch == '\0 ')
	{
		return NULL;
	}
	while(*q)
	{
		if(*q == ch)
		{
			return q;
		}
		q++;
	}
	return NULL;
}
int main()
{
	char arr[] = "i love you";
	printf("%s\n",my_strchr(arr, 'l'));
	system("pause");
	return 0;
}
