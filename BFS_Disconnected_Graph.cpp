#include <bits/stdc++.h> 
void solve(vector<int> adj[], int s, vector<bool>& visited, vector<int>& ans)
{
    queue<int> q;

    visited[s] = true;
    q.push(s);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        ans.push_back(u);

        for (int x : adj[u])
        {
            if (!visited[x])
            {
                visited[x] = true;
                q.push(x);
            }
        }
    }
}

vector<int> BFS(int Vertex, vector<pair<int, int>> edges)
{
    // Adjacency List 
    vector<int> adj[Vertex];

    for (int i = 0; i < edges.size(); i++) {
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

     for(int i = 0;i<Vertex;i++){
        sort(adj[i].begin(),adj[i].end());
    }

    vector<bool> visited(Vertex, false);
    vector<int> ans;

    // In disconnected graph, the starting point will not be the same,
    // so it will be changed again and again.
    for (int i = 0; i < Vertex; i++)
    {
        if (!visited[i])
            solve(adj, i, visited, ans);
    }

    return ans;
}
