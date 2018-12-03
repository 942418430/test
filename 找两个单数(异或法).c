#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 4, 3, 2, 1};
	int i = 0;
	int n = 0;
	int j = 1;
	int x = 0;
	int y = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//所有数异或，等于两个单数异或
	for(i=0; i<sz; i++)
	{
		n ^= arr[i];
	}
	//找出两个数二进制数最低位的不同
	while(1)
	{
		if( (n & j) == j )
		{
			break;
		}
		j <<= 1;
	}
	//根据二进制那一位的1或0将数组分为两组，然后分别异或
	for(i=0; i<sz; i++)
	{
		if((arr[i]&j) == j)
		{
			x ^= arr[i];
		}
		else
		{
			y ^= arr[i];
		}
	}
	printf("这两个数分别是%d %d\n",x,y);


	system("pause");
	return 0;
}
