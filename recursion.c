#include<stdio.h>
int fact(int ); 
main()
{
	unsigned long int x = 10;
	printf("%d",fact(x));
}
int fact(int n){
	if(n==1 || n==0)
		return 1;
	else
		return n*fact(n-1);
}
