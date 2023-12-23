#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;


class graph{
    
    public:
       unordered_map<int,list<int>> adj;


       void addedge(int u ,int v, bool direction ){
           adj[u].push_back(v);

           if (direction == 0)
           {
            adj[v].push_back(u);
           }
           
       }

       void printgraph(){
        for(auto i:adj){
            cout << i.first << " ";
            for(auto j:i.second){
                cout<< j << " ";
            }
        }
       }
};

int main(int argc, char const *argv[])
{
    
    int nodes;
    cin >> nodes;

    int edges;
    cin >> edges;

    graph g;

    for (int i = 0; i < edges; i++)
    {
       int u,v;

       cin >> u >> v;
       g.addedge(u,v,0);
    }
    
    g.printgraph();
    

    return 0;
}
