#include <bits/stdc++.h>
using namespace std;

void dfs(int node, unordered_map<int, list<int>> &adj, unordered_map<int, bool> &visited,

         int timer, vector<int> &low, vector<int> &disc, int parent, vector<int> &ans)
{

    visited[node] = 1;

    low[node] = disc[node] = timer++;
    int child = 0;

    for (auto i : adj[node])
    {

        if (i == parent)
        {

            continue;
        }
        else if (!visited[i])
        {

            dfs(i, adj, visited, timer, low, disc, node, ans);

            low[node] = min(low[node], low[i]);

            if (low[i] >= disc[node] && parent != -1)
            {
                ans[node] = true;
            } 
            child++;
        }
        else
        {

            low[node] = min(low[node], disc[i]);
        }
    }
    if (parent == -1 && child > 1){
        ans[node] = 1;
    }
    
}

int main(int argc, char const *argv[])
{
    int v = 5;
    int e = 5;

    vector<pair<int, int>> edges;
    edges.push_back({0, 3});
    edges.push_back({3, 4});
    edges.push_back({0, 1});
    edges.push_back({0, 4});
    edges.push_back({1, 2});

    unordered_map<int, list<int>> adj;

    for (int i = 0; i < e; i++)
    {

        int u = edges[i].first;

        int v = edges[i].second;

        adj[u].push_back(v);

        adj[v].push_back(u);
    }

    int timer = 0;

    vector<int> low(v);

    vector<int> disc(v);

    int parent = -1;

    for (int i = 0; i < v; i++)
    {

        low[i] = -1;

        disc[i] = -1;
    }

    unordered_map<int, bool> visited;

    vector<int> ans(v,0);

    for (int i = 0; i < v; i++)
    {

        if (!visited[i])
        {

            dfs(i, adj, visited, timer, low, disc, parent, ans);
        }
    }

    cout << "Articulation points are:-" ;

    for (int i = 0; i < v; i++)
    {
        if(ans[i] != 0){
            cout << i << " ";
        }
    }cout<< endl;

    return 0;
}
