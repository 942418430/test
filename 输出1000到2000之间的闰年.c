#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	printf("1000到2000之间的闰年有：\n");
	for(i=1000; i<=2000; i++ )
	{
		if( i%4 == 0 && i%100 != 0 )
		{
			printf("%d ", i);
		}
		else if (i%400 == 0)
		{
			printf("%d ", i );
		}

	}
	system("pause");
	return 0;
}
