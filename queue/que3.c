#include <stdlib.h>
#include <stdbool.h>

// Queue implementation for BFS typedef 

struct Queue {
int front, rear, size;
unsigned capacity;
int *arr;
}
Queue;

struct Queue *createQueue(unsigned capacity)
{

    struct Queue *queue = (struct Queue *)malloc(sizeof(Queue));
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = capacity - 1;
    queue->arr = (int *)malloc(queue->capacity * sizeof(int));
    return queue;
}

bool isFull(struct Queue *queue)
{

    return (queue->size == queue->capacity);
}

bool isEmpty(struct Queue *queue)
{
    return (queue->size == 0);
}

void enqueue( struct Queue *queue, int item)
{
    if (isFull(queue))
    {
        return;
    }

    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->arr[queue->rear] = item;
    queue->size++;
}

int dequeue(struct Queue *queue)
{
    if (isEmpty(queue))
    {
        return -1;
    }

    int item = queue->arr[queue->front];

    queue->front = (queue->front + 1) % queue->capacity;
    queue->size--;
    return item;
}

// BFS implementation on an undirected graph 
void BFS(int graph[][6], int start, int vertices) {
struct Queue *queue = createQueue(vertices);
bool visited[vertices];
for (int i = 0; i < vertices; i++)
{
    visited[i] = false;
}

visited[start] = true;
enqueue(queue, start);
while (!isEmpty(queue))
{
    int current = dequeue(queue);
    printf("%d ", current);
    for (int i = 0; i < vertices; i++)
    {

        if (graph[current][i] && !visited[i])
        {
            visited[i] = true;
            enqueue(queue, i);
        }
    }
}
}

int main()
{
    printf("Gaurang Gaur 2100320120066\n");

    // Example undirected graph represented as an adjacency matrix
    int graph[6][6] = {{0, 1, 1, 0, 0, 0},
                       {1, 0, 1, 1, 1, 0},

                       {1, 1, 0, 0, 1, 0},

                       {0, 1, 0, 0, 1, 1},

                       {0, 1, 1, 1, 0, 1},

                       {0, 0, 0, 1, 1, 0}};

    printf("The given graph is : \n");
    for (int i = 0; i < 6; i++)
    {

        for (int j = 0; j < 6; j++)

        {

            printf("%d ", graph[i][j]);
        }

        printf("\n");
    }

    int start = 0;
    int vertices = 6;
    printf("BFS traversal starting from vertex %d: ", start);
    BFS(graph, start, vertices);
    printf("\n");
    return 0;
}
