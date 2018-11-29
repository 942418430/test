#include<stdio.h>
#include<stdlib.h>

int main()
{
	char ch;
	
	printf("请输入一个字符：\n");
	while(1)
	{			
		scanf("%c",&ch);
		if(ch >= 'a' && ch <= 'z')
		{
			printf("转换后为：\n");
			printf("%c\n",ch-32);			
		}
		else if(ch >= 'A' && ch <= 'Z')
		{
			printf("转换后为：\n");
			printf("%c\n",ch+32);
		}
	}
	system("pause");
	return 0;
}
