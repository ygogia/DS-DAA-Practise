#include<iostream>
using namespace std;
void SelectionSort(int arr[], int n){
	int temp;
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1; j<n; j++)
		{
				if(arr[j]<arr[min])
				min = j;
		}
		//swap
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
}
}
int main(){
	int arr[]={12,1,23 ,4,6};
	SelectionSort(arr, 5);
	for(int i = 0; i<5; i++)
		cout<<arr[i]<<endl;
}
