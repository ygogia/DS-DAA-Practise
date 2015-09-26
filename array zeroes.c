#include<stdio.h>
int zeroes(int arr[], int size);
main(){
	int arr[] = {0,0,0,0,2,0,0,0,23,0,234,23};
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("%d",zeroes(arr, size));
}
int zeroes(int arr[], int size){
	if(size==1){
		if(*arr==0)
			return 1;
		else
			return 0;
	}
	else
	{
		if(*arr==0)
			return (1+zeroes(arr+1,size-1));
		else
			return (0 + zeroes(arr+1, size-1));
	}
			
}
