#include<stdio.h>
#define SIZE 500

	int multiply(int x, int res[], int res_size){
	int i,carry = 0;
	for(i=0; i<res_size; i++){
		int prod = x*res[i] + carry;
		carry = prod/10;
		res[i] = prod%10;
	}
	while(carry){
		res[res_size]=carry%10;
		carry = carry/10;
		res_size++;
	}
	return res_size;
}  void factorial(int n){
	int res[SIZE];
	res[0]=1;
	int i, x;
	int res_size = 1;
	for (x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);
   for (i=res_size-1; i>=0; i--)
        printf("%d", res[i]);
}

int main(){
	factorial(100);	
}
