#include<stdio.h>
#include<stdlib.h>
#include<math.h>

unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	unsigned int s = 0;
	int arr[32] = { 0 };
	int m = 1;
	while(value != 0)
	{
		arr[i]= value%2;
		value /= 2;
		i++;
	}
	for(i=1; i<=32; i++)
	{
		s += arr[32-i]*m;
		m *= 2;
	}
	return s;
}


int main()
{
	unsigned int n = 0;

	scanf("%d",&n);

	n = reverse_bit(n);

	printf("%u\n",n);

	system("pause");
	return 0;
}
