#include<iostream>
using namespace std;
void BubbleSort(int arr[], int n){
	int swapped=1;
		for(int pass=n-1; pass>=0&&swapped; pass--){
			swapped = 0;
			for(int i=0; i<=pass; i++){
			if(arr[i]>arr[i+1])
			{
				int temp;
				//swap
				temp = arr[i+1];
				arr[i+1] = arr[i];
				arr[i] = temp;
				swapped = 1;
			}
		}
	}
}
int main(){
	int arr[] = {34, 12, 243, 3, 12};
	BubbleSort(arr, 5);
	for(int i=0; i<5; i++)
		cout<<arr[i]<<endl;	
}
