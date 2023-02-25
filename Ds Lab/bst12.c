

#include <stdio.h>
 #include <stdlib.h>

struct Node
{
    int data;

    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node *insertNode(struct Node *root, int data)
{
    if (root == NULL)
    {
        return createNode(data);
    }
    if (data < root->data)
    {
        root->left = insertNode(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insertNode(root->right, data);
    }
    return root;
}

struct Node *searchNode(struct Node *root, int data)
{
    if (root == NULL || root->data == data)
    {
        return root;
    }
    if (data < root->data)
    {
        return searchNode(root->left, data);
    }

    return searchNode(root->right, data);
}

void traverseInOrder(struct Node *root)
{
    if (root != NULL)
    {
        traverseInOrder(root->left);
        printf("%d ", root->data);
        traverseInOrder(root->right);
    }
}

int main()
{
    printf("Gaurang Gaur 2100320120066\n");

    struct Node *root = NULL;
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);

    printf("In-order traversal of the binary search tree: ");
    traverseInOrder(root);

    struct Node *node1 = searchNode(root, 40);
    if (node1 != NULL)
    {
        printf("\n%d found in the binary search tree", node1->data);
    }
    else
    {
        printf("\n%d not found in the binary search tree", 40);
    }

    struct Node *node2 = searchNode(root, 90);
    if (node2 != NULL)
    {
        printf("\n%d found in the binary search tree", node2->data);
    }
    else
    {
        printf("\n%d not found in the binary search tree", 90);
    }

    return 0;
}
