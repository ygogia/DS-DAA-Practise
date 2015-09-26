#include<stdio.h>
void findmaxdepth(int A[][], int L, int H, int x, int y, int size, int *maxsize, bool **arr)
{
	if(x<0 || x>=L || y>=H || y<0)
		return;
	size++;
	arr[x][y] = true;
	if(size>maxsize)
		maxsize=size;
	int directions[][2] = {{-1,0},{-1,-1},{0,-1},{1,-1},{1,0},{1,1},{0,1},{-1,1}};
	int i=0;
	for(i=0; i<8; i++){
		int newx = x+directions[i][0];
		int newy = y+directions[i][1];
		int val = getval(newx, newy, L, H, A);
		if(val>0; && (arr[newx][newy]==false)){
			findmaxdepth(A, L, H, newx, newy, size, maxsize, arr);
		}
	}
	arr[x][y]=false;
}
int getval(int x, int y, int L, int H, int A[])
{
	if(x<0 || x>=L || y>=H || y<0)
		return 0;
	else
		return A[x][y];
}
int getMaxDepth(int A[][], int rmax, int colmax)
{
	int maxsize=0;
	int size=0;
	bool **arr = create2darray(rmax, colmax);
	int i=0,j=0;
	for(i=0; i<rmax; i++)
		for(j=0; j<colmax; j++){
			if(A[i][j]==1){
				findmaxdepth(A, rmax, colmax, i, j, 0, 0, arr);
			}
		}
}
main()
{
 	int arr[][5] = {{1,1,0,0,0},{0,1,1,0,1},{0,0,0,1,1},{1,0,0,1,1},{0,1,0,1,1}};
 	printf("%d",getMaDepth(arr, 5,5));
}
