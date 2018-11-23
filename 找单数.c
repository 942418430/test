#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[] = {4,1,2,3,2,1,4};
	int n = sizeof(arr)/sizeof(arr[0]);
    int i = 1;
	for(i=1; i<n; i++)
	{
		arr[0] ^= arr[i];
	}

	printf("%d\n",arr[0]);
	system("pause");
	return 0;
}
