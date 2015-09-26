#include<stdio.h>
#define MAX 1000
void display(int *, int);
main()
{	
	int arr[MAX], i=0;
	int *p=arr;
	for(i=0; i<MAX; i++)
		arr[i]=i;
	display(arr,MAX);
}
void display(int arr[], int size)
{
	if(size==1)
		printf("%d \n",*arr);
	else
		{
			printf("%d \n",*arr);
			display(arr+1, size-1);
		}
}

