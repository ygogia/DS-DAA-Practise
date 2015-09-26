#include<stdio.h>
#include "Queue.c"
struct treeNode * createTree(int data){
	struct treeNode *pehla;
	pehla = (struct treeNode *)malloc(sizeof(struct treeNode));
	pehla->right = NULL;
	pehla->left = NULL;
	pehla->data = data;
	return pehla; 
}
void insert(struct treeNode *root, int data){
	struct treeNode *newNode;
	struct treeNode *temp;
	struct Queue *Q;
	newNode = (struct treeNode *)malloc(sizeof(struct treeNode));
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
	if(!newNode){
		printf("No Memory Available.");
		return;
	}
	if(!root)
	{
		root = newNode;
		return;
	}
	Q = createQueue();
	EnQueue(Q, root);
	
	while(!isEmptyQueue(Q))
	{
		temp = DeQueue(Q);
		if(temp->left)
			{
				EnQueue(Q,temp->left);
			}
		else{
			temp->left = newNode;
			return;
		}
		
		if(temp->right)
		{
			EnQueue(Q,temp->right);
		}
		else
		{
		
			temp->right = newNode;
			return;
		}
	}
}
void PostOrder(struct treeNode *root)
{
	if(root)
	{
		PostOrder(root->left);
		PostOrder(root->right);
		printf("%d \n", root->data);
	}
}
void LevelOrder(struct treeNode *root){
	struct treeNode *temp;
	struct Queue *Q = createQueue();
	if(!root)
		return;
	EnQueue(Q, root);
	while(!isEmptyQueue(Q)){
		temp = DeQueue(Q);
		printf("%d\n", temp->data);
		if(temp->left)
			EnQueue(Q, temp->left);
		if(temp->right)
			EnQueue(Q, temp->right);
	}
	deleteQueue(Q);
}
int maxelement(struct treeNode *root){
	struct treeNode *temp;
	struct Queue *Q;
	int max=0;
	Q = createQueue();
	EnQueue(Q, root);
	while(!isEmptyQueue(Q)){
		temp = DeQueue(Q);
		if(max < temp->data)
			max = temp->data;
		if(temp->left)
			EnQueue(Q, temp->left);	
		if(temp->right)
			EnQueue(Q,temp->right);
		}
	return max;
}
int searchelement(struct treeNode *root,int x){
	struct treeNode *temp;
	struct Queue *Q;
	Q = createQueue();
	EnQueue(Q, root);
	while(!isEmptyQueue(Q)){
		temp = DeQueue(Q);
		if( x == temp->data)
			return 1;
		if(temp->left)
			EnQueue(Q, temp->left);	
		if(temp->right)
			EnQueue(Q,temp->right);
		}
	return 0;
}
struct treeNode * LCA(struct treeNode *root, struct treeNode *A, struct treeNode *B)
{
	struct treeNode *left, *right;
	if(root==NULL)
		return root;
	if(root==A && root == B)
		return root;
	left = LCA(root->left, A, B);
	right = LCA(root->right, A, B);
	if(left && right)
		return root;
	else
		return (left?left:right);
}
main()
{
	struct treeNode *root;
	root = createTree(1);
	insert(root, 2);
	insert(root, 3);
	insert(root, 4);
	insert(root, 5);
	insert(root, 6);
	insert(root, 7);
	insert(root, 8);
	insert(root, 9);
	PostOrder(root);
	printf("\nLevel Order:\n");
	LevelOrder(root);
	printf("%d",searchelement(root,1));	
	
}
