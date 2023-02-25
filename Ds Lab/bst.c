#include <stdio.h> 
#include <stdlib.h>

// Definition of a binary tree node 
struct Node {
int data;
struct Node *left;
struct Node *right;
};

// Enqueue and Dequeue operations for Queue 
struct Queue {
int front, rear;
int capacity;
struct Node **arr;
};

struct Queue *createQueue(int capacity)
{
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->front = q->rear = -1;
    q->capacity = capacity;
    q->arr = (struct Node **)malloc(q->capacity * sizeof(struct Node *));
    return q;
}

void enqueue(struct Queue *q, struct Node *item)
{
    if (q->rear == q->capacity - 1)
    {
        printf("Queue is full.\n");
        return;
    }
    q->arr[++q->rear] = item;

    if (q->front == -1)
    {
        q->front = 0;
    }
}

struct Node *dequeue(struct Queue *q)
{
    if (q->front == -1)
    {
        printf("Queue is empty.\n");
        return NULL;
    }
    struct Node *item = q->arr[q->front];
    if (q->front == q->rear)
    {
        q->front = q->rear = -1;
    }
    else
    {
        q->front++;
    }
    return item;
}

int isQueueEmpty(struct Queue *q)
{
    return (q->front == -1);
}

// Function to print level order traversal of a binary tree 
void levelOrderTraversal(struct Node* root)
 {
if (root == NULL)
{
    return;
}
struct Queue *q = createQueue(1000);
enqueue(q, root);

while (!isQueueEmpty(q))
{

    int n = q->rear - q->front + 1;
    for (int i = 0; i < n; i++)
    {
        struct Node *temp = dequeue(q);
        printf("%d ", temp->data);
        if (temp->left)
        {
            enqueue(q, temp->left);
        }
        if (temp->right)
        {
            enqueue(q, temp->right);
        }
    }
    printf("\n");
}
}

// Main function to test the above functions 
int main() {
printf("Gaurang Gaur 2100320120066\n");

struct Node *root = (struct Node *)malloc(sizeof(struct Node));
root->data = 1;
root->left = (struct Node *)malloc(sizeof(struct Node));
root->left->data = 2;
root->left->left = NULL;
root->left->right = NULL;
root->right = (struct Node *)malloc(sizeof(struct Node));
root->right->data = 3;
root->right->left = (struct Node *)malloc(sizeof(struct Node));
root->right->left->data = 4;
root->right->left->left = NULL;
root->right->left->right = NULL;
root->right->right = (struct Node *)malloc(sizeof(struct Node));
root->right->right->data = 5;

root->right->right->left = NULL;
root->right->right->right = NULL;
printf("Level Order Traversal of Binary Tree: \n");
levelOrderTraversal(root);
return 0;
}
