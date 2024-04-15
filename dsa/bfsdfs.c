#include <stdio.h>

#define SIZE 5

// Function to perform BFS on the graph
void BFS(int graph[SIZE][SIZE], int start) {
    int visited[SIZE] = {0};
    int queue[SIZE] = {0};
    int front = 0, rear = 0;

    // Mark the start node as visited and enqueue it
    visited[start] = 1;
    queue[rear++] = start;

    while (front != rear) {
        int vertex = queue[front++];
        printf("%d ", vertex);

        for (int i = 0; i < SIZE; i++) {
            if (graph[vertex][i] && !visited[i]) {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}

// Function to perform DFS on the graph
void DFS(int graph[SIZE][SIZE], int start, int visited[SIZE]) {
    printf("%d ", start);
    visited[start] = 1;

    for (int i = 0; i < SIZE; i++) {
        if (graph[start][i] && !visited[i]) {
            DFS(graph, i, visited);
        }
    }
}

int main() {
    int graph[SIZE][SIZE] = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 1, 1},
        {1, 1, 0, 0, 1},
        {0, 1, 0, 0, 1},
        {0, 1, 1, 1, 0}
    };

    printf("BFS: ");
    BFS(graph, 0);

    printf("DFS: ");
    int visited[SIZE] = {0};
    DFS(graph, 0, visited);

    return 0;
}
