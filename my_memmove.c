void* my_memmove(void* dest, const void*src, const unsigned int n)
{
	char* ret = (char*)dest;
	int m = n;
	assert(dest != NULL);
	assert(src != NULL);
	if (dest <= src)
	{
		while (m--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		dest = (char*)dest + m - 1;
		src = (char*)src + m - 1;
		while (m--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest - 1;
			src = (char*)src - 1;
		}
		
	}
	return ret;
}

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7 };
	int i = 0;
	int* p = (int*)my_memmove(arr1, arr1 + 2, 16);
	for (i = 0; i < 7; i++)
	{
		printf("%d ", p[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
