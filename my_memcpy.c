#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

void* my_memcpy(void* dest, const void*src, const unsigned int n)
{
	char* q = (char*)dest;
	char* p = (char*)src;
	char* ret = q;
	assert(dest != NULL);
	assert(src != NULL);

	int m = (int)n;
	while (m--)
	{
		*q = *p;
		q++;
		p++;
	}
	return ret;
}

int main()
{

	int arr1[] = { 1, 2, 3, 4, 5, 6, 7 };
	int arr2[20] = { 0 };
	/*my_memcpy(arr2, arr1, 28);*/
	int i = 0;
	for (i = 0; i < 20; i++)
	{
		printf("%d ", *((int*)my_memcpy(arr2,arr1,28)+i) );
	}
	printf("\n");
	system("pause");
	return 0;
}
