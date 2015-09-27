#include<iostream>
using namespace std;
void InsertionSort(int A[], int n){
	int i, j, v;
	for(i=2; i<n; i++){
		v = A[i];
		j=i;
		while(j>=1 && A[j-1]>v){
			A[j] = A[j-1];
			j--;
		}
		A[j] = v;
	}
}
int main(){
	int arr[] = {13, 23, 2, 13, 11};
	InsertionSort(arr, 5);
	for(int i=0; i<5 ;i++)
		cout<<arr[i]<<endl;	
}
