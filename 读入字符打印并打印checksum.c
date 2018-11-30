#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	char ch;
	signed char checksum = -1;
 //从标准输入逐个读取字符
	while((ch = getchar()) != EOF)
	{
		//打印字符，并将值加入checksum中
		putchar(ch);
		checksum += ch;
		//如果读取到换行符则输出checksum，并置-1
		if(ch == '\n')
		{
			printf_s("%d\n", checksum);
			checksum = -1;
		}
	}

	system("pause");
	return 0;
}
