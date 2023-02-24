#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
// Define a structure for the stack
 struct Stack {
struct Node *top;
};
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
int isEmpty(struct Stack *stack)
{
    return (stack->top == NULL);
}
void push(struct Stack *stack, int data)
{
    struct Node *newNode = createNode(data);
    newNode->next = stack->top;
    stack->top = newNode;
}

int pop(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty.\n");
        return -1;
    }
    struct Node *temp = stack->top;
    int data = temp->data;
    stack->top = temp->next;
    free(temp);
    return data;
}

void printStack(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty.\n");
        return;
    }
    struct Node *temp = stack->top;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{

    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->top = NULL;
    push(stack, 1);
    push(stack, 2);

    push(stack, 3);
    push(stack, 4);
    push(stack, 5);
    printf("Current stack: ");
    printStack(stack);
    int popped = pop(stack);
    printf("Popped element: %d\n", popped);
    printf("Current stack: ");
    printStack(stack);
    printf("Gaurang Gaur 2100320120066\n");

    return 0;
}
