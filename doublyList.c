#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node {
	int data;
	struct node *next;
	struct node *prev;
};
struct node * create(int data){
	struct node *newNode;
	newNode = (struct node *)malloc(sizeof(struct node));
	newNode->next=NULL;
	newNode->data=data;
	newNode->prev=NULL;
	return newNode;
}
int insert(struct node **head, int data, int position){
	struct node *newNode, *p;
	int k=1;
	newNode = (struct node *)malloc(sizeof(struct node));
	newNode->data=data;
	p = *head;
	if(position==1){
		newNode->prev = NULL;
		newNode->next = p;
		if(p)
			p->prev=newNode;
		p=newNode;
		return 1;
	}
	p = *head;
		while((k<position-1)&& p->next!=NULL){
			p=p->next;
			k++;	
		}
		if(k!=position){
			printf("Location Does Not Exists\n");
		}
		newNode->next=p->next;
		newNode->prev=p;
		if(p->next)
			p->next->prev=newNode;
		p->next=newNode;
		return 1;
}
void display(struct node *head){
	struct node *current;
	current = head;
	while(current!=NULL){
		printf("%d \n", current->data);
		current=current->next;
	}
}
int count(struct node **head){
	int count=0;
	struct node *current;
	current = *head;
	while(current!=NULL){
		count++;
		current=current->next;
	}
	return count;
}
main(){
	struct node *head = create(8);
	struct node **doubly = &head;

	insert(doubly, 10, 2);
	insert(doubly, 12, 3);
	insert(doubly, 14, 4);
	insert(doubly, 15, 5);
	insert(doubly, 13, 5);
	printf("%d\n",count(doubly));
	display(head);
}
