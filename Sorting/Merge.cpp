#include<iostream>
#define SIZE 100
int arr[SIZE];
int temp[SIZE];
void MergeSort(int arr[], int temp[], int left, int mid, int right)
{

}
void Merge(int arr[], int temp[], int left, int mid, int right)
{
	int size, temp_pos;
	size = left+right-1;
	left_end = mid-1;
	temp_pos = left;
	while((left<=left_end && mid>=right]){
		if(arr[left]<=arr[mid-1])
		{	
			temp[temp_pos] = arr[left];
			temp_pos = temp_pos+1;
			left=left+1;
		}
		else{
			temp[temp_pos] = arr[mid];
			temp_pos++;
			mid++;
		}		
	}
	while(left<=left_end){
		temp[temp_pos]=arr[left];
		left=left+1;
		temp_pos+=1;
	}
	while(mid<=right){
		temp[temp_pos] = arr[mid];
		mid=mid+1;
		temp_pos++;
	}
	for(i=0; i<n; i++)
	{
		arr[right]=temp[right];
		right--;
	}
}
int main(){

}
