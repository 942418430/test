#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i=1; i<100; i++)
	{
		if(i%10 == 9)
		{
			count++;
		}
		if(i/10 ==9)
		{
			count++;
		}
	}
	printf("1到100之间9的个数是%d\n",count);
	system("pause");
	return 0;

}
