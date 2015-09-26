#include<stdio.h>
int sum(int n);
main(){
	printf("%d",sum(3));
}
int sum(int n){
	if(n==1)
		return 1;
	else 
		return (n + sum(n-1));
}
