#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int my_strcmp(const char* q,const char* p)
{
	assert(q != NULL);
	assert(p != NULL);
	while(*q && *p && *q ==*p)
	{
		q++;
		p++;
	}
	return *q - *p;
}

int main()
{
	char arr1[] = "i love you";
	char arr2[] = "i like you";
	if(my_strcmp(arr1, arr2) > 0)
	{
		printf("%s > %s\n",arr1, arr2);
	}
	else if(my_strcmp(arr1, arr2) == 0)
	{
		printf("%s = %s\n",arr1, arr2);
	}
	else
	{
		printf("%s < %s\n",arr1, arr2);
	
	}
	system("pause");
	return 0;
}
