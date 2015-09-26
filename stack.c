#include<stdio.h>
struct stack{
	int top;
	int capacity;
	int *arr;	
};
int isStackFull(struct stack *stack){
	return (stack->top==stack->capacity-1);
}
int isStackEmpty(struct stack *stack){
	return (stack->top==-1);
}
void push(struct stack *stack, int data){
	if(isStackFull(stack))
		printf("Stack Overflow ;)");
	else
		stack->arr[++stack->top] = data;
}
int pop(struct stack *stack){
	if(isStackEmpty(stack))
		printf("Empty Stack");
	else
		{
			return (stack->arr[stack->top--]);
		}
}
struct stack * create(){
	struct stack *stack = malloc(sizeof(struct stack));
	if(!stack)
		printf("Memory Error");
	else
		{
			stack->capacity=40;
			stack->top=-1;
			stack->arr = malloc(sizeof(stack->capacity * sizeof(int)));
			return stack;
		}
}
main()
{
	struct stack *stack = create();
	push(stack, 6);
	push(stack, 7);
	printf("%d", pop(stack));	
}
