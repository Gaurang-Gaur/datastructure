#include <stdio.h>

#include <limits.h>

#define V 4 // Number of vertices in the graph
void printSolution(int dist[][V])
{
    printf("Shortest distances between all pairs of vertices:\n");
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {

            if (dist[i][j] == INT_MAX)
                printf("INF ");

            else
            {
                printf("%d ", dist[i][j]);
            }

            printf("\n");
        }
    }
}

    void floydWarshall(int graph[][V])
    {
        int dist[V][V];
        int i, j, k;

        for (i = 0; i < V; i++)
            for (j = 0; j < V; j++)
                dist[i][j] = graph[i][j];
        for (k = 0; k < V; k++)
        {
            for (i = 0; i < V; i++)
            {
                for (j = 0; j < V; j++)
                {
                    if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX && dist[i][k] + dist[k][j] < dist[i][j])
                        dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }

        printSolution(dist);
    }

    int main()
    {
        printf("Gaurang Gaur 2100320120066\n");

        int graph[V][V] = {{0, 5, INT_MAX, 10},

                           {INT_MAX, 0, 3, INT_MAX},

                           {INT_MAX, INT_MAX, 0, 1},

                           {INT_MAX, INT_MAX, INT_MAX, 0}};

        floydWarshall(graph);
        return 0;
    }
