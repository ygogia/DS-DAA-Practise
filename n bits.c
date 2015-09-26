#include<stdio.h>
void binary(int);
char arr[4];
main()
{
	binary(4);	
}
void binary(int n)
{
	if(n<1)
		printf("%s \n", arr);
	else{
		arr[n-1]='0';
		binary(n-1);
		arr[n-1]='1';
		binary(n-1);
	}
}
