#include<stdio.h>
#include<stdlib.h>

int my_strlen2(const char*  p)
{

	if( *p != '\0')
	{
		return 1 + my_strlen2(p+1) ;	//这里注意p+1不能写成p++
	}
	else
	{
		return 0;
	
	}
}

int main()
{
	char arr[] = "abcdefg";
	int m = 0;
	m =	my_strlen2(arr);


	printf("%d\n",m);
	
	system("pause");
	return 0;
}
