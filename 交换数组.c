
#include<stdio.h>
#include<stdlib.h>

void swap(int* a, int* b, int n)
{
	int t = 0;
	for(--n; n>=0; n--)
	{
		t = a[n];
		a[n] = b[n];
		b[n] = t;
	}
}
int main()
{
	int a[100] = { 0 };
	int b[100] = { 0 };
	int n = 0;
	int i = 0;

	printf("请输入数组大小：\n");
	scanf("%d",&n);
	printf("请输入数组a：\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("请输入数组b：\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&b[i]);
	}
	swap(a,b,n);
	printf("交换后数组a为：\n");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n交换后数组b为：\n");
	for(i=0; i<n; i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
