#include<stdio.h>
struct treeNode{
	int data;
	struct node *right;
	struct node *left;
};
struct Queue{
	struct node *front;
	struct node *rear;
};
struct node{
	struct treeNode *data;
	struct node *next;
};
struct Queue * createQueue(){
	struct Queue *Q;
	struct node *list;
	Q = (struct Queue *)malloc(sizeof(struct Queue));
	Q->front = Q->rear = NULL;
	return Q;
}
int isEmptyQueue(struct Queue *Q){
	return (Q->front==NULL);
}
void EnQueue(struct Queue *Q, struct treeNode *data){
	struct node *list;
	list = (struct node *)malloc(sizeof(struct node));
	list->data = data;
	if(Q->rear)
		Q->rear->next = list;
	
	Q->rear=list;
	list->next=NULL;
	if(Q->front==NULL)
		Q->front = Q->rear;		
}
struct treeNode * DeQueue(struct Queue *Q){
	struct node *temp;
	struct treeNode *data;
	
	if(isEmptyQueue(Q)){
		printf("Empty Queur");
		return NULL;
	}
	else{
		temp = Q->front;
		data = (Q->front->data);
		Q->front = Q->front->next;
		free(temp);	
	}
	return data;
}
void deleteQueue(struct Queue *Q){
	struct node *temp;
	while(!isEmptyQueue(Q)){
		temp = Q;
		Q=Q->front->next;
		free(temp);
	}
	free(Q);
}
