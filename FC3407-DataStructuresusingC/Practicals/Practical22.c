#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef struct node
{
    struct node *next;
    int vertex;
} node;

node *G[20];

int n;
void read_graph();
int in_degree();
int out_degree();
void insert(int vi, int vj);

void main()
{
    int i_degree, o_degree, i;
    read_graph();
    for (i = 0; i < n; i++)
    {
        i_degree = in_degree(i);
        o_degree = out_degree(i);
        printf("\nNode No=%d \t outdegree=%d", i, i_degree, o_degree);
    }
}

void read_graph()
{
    int i, vi, vj, no_of_edges;
    printf("\nEnter no of vertices :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        G[i] = NULL;
        printf("\nEnter no of edges : ");
        scanf("%d", &no_of_edges);
        for (i = 0; i < no_of_edges; i++)
        {
            printf("\nEnter an edge(u,v) :");
            scanf("%d%d", &vi, &vj);
            insert(vi, vj);
        }
    }
}

void insert(int vi, int vj)
{
    node *p, *q;
    q = (node *)malloc(sizeof(node));
    q->vertex = vj;
    q->next = NULL;
    if (G[vi] == NULL)
        G[vi] = q;
    else
    {
        p = G[vi];
        while (p->next != NULL)
            p = p->next;
        p->next = q;
    }
}

int out_degree(int v)
{
    node *p;
    int o_degree = 0;
    p = G[v];
    while (p != NULL)
    {
        o_degree++;
        p = p->next;
    }
    return (o_degree);
}

int in_degree(int v)
{
    node *p;
    int in_degree, i;
    in_degree = 0;
    for (i = 0; i < n; i++)
    {
        p = G[i];
        while (p != NULL)
        {
            if (p->vertex == v)
                in_degree++;
            p = p->next;
        }
    }
    return (in_degree);
}
