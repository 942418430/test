#include<stdio.h>
#include<stdlib.h>

int main()
{
	double i = 1;
	double s = 0;
	double q = 1;
	for(i=1; i<=100; i++)
	{
		s = s + 1.0/i * q;
		q = -q;
	}
	printf("%lf\n",s);

	system("pause");
	return 0;
}
