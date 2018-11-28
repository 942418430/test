#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i = 0;
	int x, y , z;
	
	printf("1到1000的水仙花数有：\n");
	for(i = 100; i<=999; i++)
	{
		//分别求个位，十位，百位上的数字
		x = i%10;
		y = i/10%10;
		z = i/100;
		//判断，为真输出
		if(i == pow(x, 3.0) + pow(y, 3.0) + pow(z, 3.0))
		{
			printf("%d\n",i);
		}
	}
	system("pause");
	return 0;
}
