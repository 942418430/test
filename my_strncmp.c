#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int my_strncmp(const char* q, const char* p, int n)
{
	assert(q);
	assert(p);
	if (n == 0)
	{
		return 0;
	}
	while ((n--) && *q && *p && (*q == *p))
	{
		q++;
		p++;
	}
	return *q - *p;
}
int main()
{
	char arr[20] = "i love you";
	printf("%d\n", my_strncmp(arr, "i like you", 6));
	system("pause");
	return 0;
}
