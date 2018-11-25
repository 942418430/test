#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8};
	int count = sizeof(arr)/sizeof(arr[0]);
	int i = 1;
	int j = 0;
	int t = 0;
	 
	for(i=0; i<count-1; i++)
	{
		if(arr[i] % 2 == 1)
		{
			t = arr[i];
			arr[i] = arr[j];
			arr[j] = t;
			j++;
		}
	}

	for(i=0; i<count; i++)
		printf("%d",arr[i]);
	printf("\n");
	system("pause");
	return 0;
}
