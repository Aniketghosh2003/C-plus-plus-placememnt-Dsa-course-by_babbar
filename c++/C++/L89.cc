#include<iostream>
#include <unordered_map>
#include <list>
#include <vector>
using namespace std;

bool cycledfs(int node,unordered_map<bool,int> &vis,unordered_map<bool,int> &dfsvis,unordered_map<int,list<int>> &adj){
  vis[node] = true;
  dfsvis[node] = true;

  for(auto i:adj[node]){
    if(!vis[i]){
      bool ans = cycledfs(i, vis, dfsvis, adj);
      if(ans)
         return true;
    }
    else if (dfsvis[i]){
      return true;
    }
  }
  dfsvis[node] = false;
}

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
   unordered_map<int,list<int>> adj;
   for(int i = 0;i < edges.size();i++){
     int u = edges[i].first;
     int v = edges[i].second;

     adj[u].push_back(v);

   }

   unordered_map<bool,int> vis;
   unordered_map<bool,int> dfsvis;

   for(int i = 1;i <= n;i++){
     if(!vis[i]){
       bool ans = cycledfs(i,vis,dfsvis,adj);
       if(ans)
           return true;
     }
   }
   return false;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
