//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int a = 1;
//	char b = 'a';
//	int arr[5] = { 0 };
//	int* p =  &a;
//	char* pp = &b;
//	int(*ppp)[5] = &arr;
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(pp));
//	printf("%d\n", sizeof(ppp));
//
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	char b[5] = { 'a', 'b', 'c', 'd', 'e' };
//	printf("%d\n", *(a + 1));
//	printf("%c\n", *(b + 1));
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	char ch = 'a';
//	char* p = &ch;
//	printf("%c\n", *p);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	char* p = "i love you";//这里并不是把字符串放入指针中，而是把字符串的首字符地址放在指针中。
//	printf("%s\n", p);
//	system("pause");
//	return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	char str1[] = "hello bit";
//	char str2[] = "hello bit";
//	char* str3 = "hello bit";
//	char* str4 = "hello bit";
//	if (str1 == str2)
//	{
//		printf("str1 and str2 are same\n");
//	}
//	else
//	{
//		printf("str1 and str2 are not same\n");
//	}
//	if (str3 == str4)
//	{
//		printf("str3 and str4 are same\n");
//	}
//	else
//	{
//		printf("str3 and str4 are not same\n");
//	}
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int n = 0;
//	int* a = NULL;
//	a = &n;
//	*a = 1;
//	printf("%d\n", n);
//	system("pause");
//	return 0;
//}