#include <iostream>
#include <stack>
#include <limits.h>
#include <unordered_map>
#include <list>
#include <vector>
using namespace std;

class graph
{

public:
    unordered_map<int, list<pair<int, int>>> adj;

    void addedge(int s, int d, int weight)
    {
        pair<int, int> p = make_pair(d, weight);
        adj[s].push_back(p);
    }

    void printadj()
    {
        for (auto i : adj)
        {
            cout << i.first << "-> ";
            for (auto j : i.second)
            {
                cout << "(" << j.first << "," << j.second << ")";
            }
            cout << endl;
        }
    }

    void dfs(int node, unordered_map<int, bool> &vis, stack<int> &topo)
    {
        vis[node] = true;

        for (auto neighbour : adj[node])
        {
            if (!vis[neighbour.first])
            {
                dfs(neighbour.first, vis, topo);
            }
        }
        topo.push(node);
    }

    void getshortpath(int src, vector<int> &ans, stack<int> &topo)
    {
        ans[src] = 0;

        while (!topo.empty())
        {
            int top = topo.top();
            topo.pop();

            if (ans[top] != INT16_MAX)
            {
                for (auto i : adj[top])
                {
                    if (ans[top] + i.second < ans[i.first])
                    {
                        ans[i.first] = ans[top] + i.second;
                    }
                }
            }
        }
    }
};

int main(int argc, char const *argv[])
{
    graph g;

    g.addedge(0, 1, 5);
    g.addedge(0, 2, 3);
    g.addedge(1, 2, 2);
    g.addedge(1, 3, 6);
    g.addedge(2, 3, 7);
    g.addedge(2, 4, 4);
    g.addedge(2, 5, 2);
    g.addedge(3, 4, -1);
    g.addedge(4, 5, -2);

    g.printadj();

    int n = 6;

    unordered_map<int, bool> vis;
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            g.dfs(i, vis, s);
        }
    }
    int src = 1;
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[i] = INT16_MAX;
    }

    g.getshortpath(src, ans, s);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
