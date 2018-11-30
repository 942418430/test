#include<stdio.h>
#include<stdlib.h>

int main ()
{
	
	int ch;
	int line;
	int at_beginning;
 
	line = 0;
	at_beginning = 1;
	//逐个读取字符。
	while ((ch = getchar()) != EOF)
	{
		//若处在行的起始位置，打印行号。
		if (at_beginning == 1)
		{
			at_beginning = 0;
			line ++;
			printf("%d.", line);
		}
		//打印字符，并对行尾进行检查。
		putchar(ch);
		if (ch == '\n')
		{
			at_beginning = 1;
		}
	}
	system("pause");
	return 0;
}
