#include <stdio.h>
 #include <stdlib.h>

struct node
{
    int vertex;
    int weight;
    struct node *next;
};

struct node *create_node(int v, int w)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->vertex = v;
    new_node->weight = w;
    new_node->next = NULL;
    return new_node;
}

struct Graph
{

    int num_vertices;
    struct node **adj_lists;
};

struct Graph *create_graph(int n)
{
    struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
    graph->num_vertices = n;
    graph->adj_lists = (struct node **)malloc(n * sizeof(struct node *));
    for (int i = 0; i < n; i++)
    {
        graph->adj_lists[i] = NULL;
    }
    return graph;
}

void add_edge(struct Graph *graph, int u, int v, int w)
{
    struct node *new_node = create_node(v, w);
    new_node->next = graph->adj_lists[u];
    graph->adj_lists[u] = new_node;

    if (graph->num_vertices > v)
    {
        new_node = create_node(u, w);
        new_node->next = graph->adj_lists[v];
        graph->adj_lists[v] = new_node;
    }
}

void print_graph(struct Graph *graph)
{
    printf("Adjacency List:\n");
    for (int i = 0; i < graph->num_vertices; i++)
    {
        struct node *temp = graph->adj_lists[i];
        printf("Vertex %d: ", i + 1);

        while (temp)
        {
            printf("%d (%d) -> ", temp->vertex + 1, temp->weight);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main()
{
    printf("Gaurang Gaur 2100320120066\n");

    int num_vertices = 5;
    struct Graph *graph = create_graph(num_vertices);
    add_edge(graph, 0, 1, 1);
    add_edge(graph, 0, 3, 3);
    add_edge(graph, 1, 2, 2);
    add_edge(graph, 2, 0, 1);
    add_edge(graph, 2, 3, 1);
    add_edge(graph, 3, 4, 1);
    add_edge(graph, 4, 2, 2);
    print_graph(graph);
    return 0;
}
