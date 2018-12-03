#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

char* my_strstr(const char* dest,const char* src)
{
	
	char* q = (char*) dest;
	char* w = (char*) src;
	char* e = (char*) dest;
	assert( dest != NULL);
	assert( src != NULL);
	if(*src == '\0')
	{
		return NULL;
	}
	while(*q)
	{
		e = q;
		while(*e && *w && (*e == *w))
		{
			e++;
			w++;
		}
		if(!(*w))
		{
			return q;
		}
		q++;
		w = (char*) src;
	}
	return NULL;
}

int main()
{
	char arr1[] = "i love you";
	printf("%s\n",my_strstr(arr1,"love"));
	system("pause");
	return 0;
}
