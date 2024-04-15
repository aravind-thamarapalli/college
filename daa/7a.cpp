#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int> >& graph, vector<int>& visited, int current) {
    cout << current << " ";
    visited[current] = 1;

    for (int i = 0; i < graph.size(); i++) {
        if (graph[current][i] && !visited[i]) {
            dfs(graph, visited, i);
        }
    }
}

int main() {
    int vertices;
    cout << "Enter the number of vertices: ";
    cin >> vertices;

    vector<vector<int> > graph(vertices, vector<int>(vertices));
    cout << "Enter the adjacency matrix:\n";
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            cin >> graph[i][j];
        }
    }

    vector<int> visited(100, 0);
    cout << "DFS traversal starting from vertex 0: ";
    dfs(graph, visited, 0);

    for (int i = 0; i < vertices; i++) {
        if (!visited[i]) {
            cout << "\nGraph is Not connected" << endl;
            exit(0);
        }
    }
    cout << "\nGraph is Connected" << endl;

    return 0;
}
