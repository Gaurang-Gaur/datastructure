#include <stdio.h> 
 #include <stdlib.h>
#define MAX_VERTICES 100
int adj_matrix[MAX_VERTICES][MAX_VERTICES];
int num_vertices;

void init_adj_matrix()
{
    for (int i = 0; i < MAX_VERTICES; i++)
    {
        for (int j = 0; j < MAX_VERTICES; j++)
        {
            adj_matrix[i][j] = 0;
        }
    }
}
void add_edge(int u, int v, int weight)
{
    adj_matrix[u][v] = weight;
}

void print_adj_matrix()
{

    printf("Adjacency matrix:\n");
    printf(" ");
    for (int i = 0; i < num_vertices; i++)
    {
        printf("%d ", i + 1);
    }
    printf("\n");
    for (int i = 0; i < num_vertices; i++)
    {
        printf("%d |", i + 1);
        for (int j = 0; j < num_vertices; j++)
        {
            printf("%d ", adj_matrix[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    printf("Gaurang Gaur 2100320120066\n");

    num_vertices = 5;
    init_adj_matrix();
    add_edge(0, 1, 1);
    add_edge(0, 3, 3);
    add_edge(1, 2, 2);
    add_edge(2, 0, 1);
    add_edge(2, 3, 1);
    add_edge(3, 4, 1);
    add_edge(4, 2, 2);
    print_adj_matrix();
    return 0;
}
