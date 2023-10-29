#include <iostream>
#include "graph.h"
#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int N, E;
    Graph g;    
    std::cin >> N >> E>>g.D;
    for (int i = 0; i < E; i++)
    {
        int u, v, w;
        std::cin >> u >> v >> w;
        g.addEdge(u, v, w);
    }
    // g.topoSort();
    g.nbg_nodes_in_d();
    cout<<endl<<endl;
    g.kuchbhi();
    g.print();
}