#include<stdio.h>
struct stack{
	int top;
	struct node *list;	
};
struct node{
	int data;
	struct node *next;
};
struct stack * create(int data){
	struct stack *stack = (struct stack *)malloc(sizeof(struct stack));
	stack->top=-1;
	stack->list = (struct node *)malloc(sizeof(struct node));
	stack->list->data = data;
	stack->list->next=NULL;
	return stack;
}
void push(struct stack *stack1, int data){
	struct stack *stack = stack1;
	struct node *temp;
	temp= (struct node *)malloc(sizeof(struct node));
	temp->next = stack->list;
	stack->list = temp;
	temp->data = data;
	stack->top++; 
}
int pop(struct stack *stack1){
	struct stack *stack = stack1;
	int data;
	data=stack->list->data;
	stack->list = stack->list->next;
	return data;
}
main()
{
	struct stack *stack;
	stack = create(5);
	push(stack, 7);
	push(stack, 9);
	push(stack, 9);
	push(stack, 8);
	push(stack, 9);
	printf("%d", pop(stack));
	printf("%d", pop(stack));
}
