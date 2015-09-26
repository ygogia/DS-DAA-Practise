#include<stdio.h>
void foo(int, char, char, char);
main()
{
	foo(3, 'B', 'A', 'E');
	printf("%d", 445/10);
}
void foo(int n, char beg, char aux, char end){
	if(n>0){
		foo(n-1, beg, end , aux );
		printf("Move a disk from %c to %c\n",beg, end );
		foo(n-1, aux, beg, end);
	}
}
