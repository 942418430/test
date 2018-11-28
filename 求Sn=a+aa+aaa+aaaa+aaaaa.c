//求Sn = a + aa + aaa + aaaa + aaaaa
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n = 0;
	int s = 0;
	int i = 0;
	printf("输入a：\n");
	scanf("%d",&n);

	for(i=1; i<=5; i++)
	{
		s = s + n;
		n = n*10 +n;
	}
	printf("Sn=%d\n",s);
	system("pause");
	return 0;
}
