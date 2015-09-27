#include<iostream>
void ShellSort(int arr[], int n){
	int i, j, gap;
	for(gap = n/2; gap>0; gap/=2)
	{
		for(i=gap; i<n; i++){
			int temp=arr[i];
			for(j=i; j>=gap && arr[j-gap]>arr[j]; j-=gap){
				arr[j] = arr[j-gap]; 
			}
			arr[j]=temp;
		}
	}
}
int main(){
	int arr[]={12, 34 , 2, 11, 5};
	ShellSort(arr,5);
	for(int i=0; i<5 ;i++)
		cout<<arr[i]<<endl;	
}
