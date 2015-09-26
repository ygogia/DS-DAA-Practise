#include<stdio.h>
int sumofdigits(int);
main()
{
	printf("%d",sumofdigits(440));	
}
int sumofdigits(int n){
	if(n/10==0)
		return n;
	else
		return ((n%10) + sumofdigits(n/10));
}
