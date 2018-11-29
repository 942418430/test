#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n = 0;//整型
	char ch = 0;//字符
	int arr1[5] = { 0 };//整型数组
	char arr2[5] = { 0 };//字符数组
	int* p1 = &n;//整形指针
	char* p2 = &ch;//字符指针
	int* p3 = arr1;//整形指针
	char* p4 = arr2;//字符指针
	int (*p5)[5] = &arr1;//整形数组指针
	char (*p6)[5] = &arr2;//字符数组指针
	int* arr3[5] = { p1 };//整形指针数组
	char* arr4[5] = { p2 };//字符型指针数组
	printf("int占%d个字节\n",sizeof(int));
	printf("short占%d个字节\n",sizeof(short));
	printf("char占%d个字节\n",sizeof(char));
	printf("long占%d个字节\n",sizeof(long));
	printf("float占%d个字节\n",sizeof(float));
	printf("long long占%d个字节\n",sizeof(long long));
	printf("double占%d个字节\n",sizeof(double));
	printf("整形变量占%d个字节\n",sizeof(n));
	printf("字符变量占%d个字节\n",sizeof(ch));
	printf("整形数组 int [5] 占%d个字节\n",sizeof(arr1));
	printf("字符数组 char [5] 占%d个字节\n",sizeof(arr2));
	printf("整形指针 int* 占%d个字节\n",sizeof(p1));
	printf("字符指针 char* 占%d个字节\n",sizeof(p2));
	printf("整形数组指针 占%d个字节\n",sizeof(p5));
	printf("字符数组指针 占%d个字节\n",sizeof(p6));
	printf("整形指针数组 占%d个字节\n",sizeof(arr3));
	printf("字符指针数组 占%d个字节\n",sizeof(arr4));
	printf("指向整形数组的指针 占%d个字节\n",sizeof(p3));
	printf("指向字符数组的指针 占%d个字节\n",sizeof(p4));



	system("pause");
	return 0;
}
