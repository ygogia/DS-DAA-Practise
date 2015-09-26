#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node {
	int data;
	struct node *next;	
};
int getLength(struct node *head){
	struct node *current = head;
	int count=0;
	while(current!=NULL){
		current = current->next;
		count++;
	}
}
void display(struct node *head){
	struct node *current = head;
	while(current!=NULL){
		printf("%d ",current->data);
		current=current->next;
	}
}
struct node * create(int data){
    struct	node *newNode,*head;
	newNode = (struct node *)malloc(sizeof(struct node));
	newNode->data=data;
	head = newNode;
	newNode->next=NULL;
	return head;
}
int insert(struct node **head, int position, int data){
	int k=1;
	struct node *p, *q, *newNode;
	newNode = (struct node *)malloc(sizeof(struct node));
	if(!newNode){
		printf("Cannot Create New Node.");
		return 0;
	}
	newNode->data=data;
	p = *head;
	if(position==1)
	{
		newNode->next = p;
		*head = newNode;
		return 1;
	}
	else{
		while((p!=NULL) && (k<position))
		{	
			k++;
			q=p;	
			p = p->next;
		}
		q->next = newNode;
		newNode->next=p;
		return 1;
	}	
}
struct node * reverse(struct node *head){
	struct node *prev, *next, *current;
	current = head;
	prev=NULL;
	while(current){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head = prev;
	return head;
}
struct node * reverserecursive(struct node **head){
	struct node *first, *head, *second;
	head = *head;
	if(head==NULL){
		return 0;
	}
	if(head->next==NULL)
		return head;	
	 
 	second = head->next;
 	head->next=NULL;
 	
	
}

main(){
			struct node *linkedlist = create(5);
			struct node **head;
			head = &linkedlist;
			insert(head, 2, 2);
			insert(head, 3, 2);
			insert(head, 4, 2);
			insert(head, 4, 6);
			insert(head, 5, 2);
			insert(head, 7, 4);
			display(linkedlist);
			linkedlist = reverse(linkedlist);
			display(linkedlist);
}     
