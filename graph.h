#include <bits/stdc++.h>
#include <stack>
#include <map>
using namespace std;
class GraphNode
{
public:
    // variables
    int label;
    bool visited;
    // int dist;
    // adjacency
    vector<std::pair<int, int>> adj;

    // constructors
    GraphNode();
    GraphNode(int v);

    // add neighbour
    void addNgbr(int d, int w);
};

class Graph
{

    // variables
    std::map<int, GraphNode *> nodes;
    vector<vector<int>> nbg_nodes;
    // topo sort result
    std::stack<int> S;

public:
    int D;
    // constructors
    Graph();

    // add node
    void addNode(int s);

    // add edge
    void addEdge(int s, int d, int w);

    // reset visits
    void resetVisit();

    // topological sort
    // void dfs(int s);
    // void topoSort();
    void print();
    void kuchbhi();
    void nbg_nodes_in_d();
};