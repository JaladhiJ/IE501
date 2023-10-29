#include <iostream>
#include <vector>
#include "graph.h"
#include <set>
#include <bits/stdc++.h>

using namespace std;

void Graph::kuchbhi()
{
    //std::cout << "a";
    for(auto tmp:nbg_nodes){
        //cout<<"b"<<endl;
        for(auto i:tmp){
            //cout<<"c"<<endl;
            cout<<i<<"  ";
        }
        cout<<endl;
    }
}
// class Graph
// {
//   // vector<node*> roadnet;
//   public:
//   int no_of_vertices;
//   vector<pair<int,int> > edges;
//         Graph(int no_of_vertices, vector<pair<int,int> > edges){
//           this->no_of_vertices=no_of_vertices;
//           this->edges=edges;
//           return;
//         };
//         // vector<int> getneighbours(int v){
//         //   vector<int>neighbours;
//         //   for(int i=0;i<edges.size();i++)
//         //   {
//         //     if(edges[i].first==v)
//         //     {
//         //       neighbours.push_back(edges[i].second);
//         //     }
//         //     if(edges[i].second==v)
//         //     {
//         //       neighbours.push_back(edges[i].first);
//         //     }
//         //   }
//         // return neighbours;
//         // };
// };
void Graph::nbg_nodes_in_d(){
    // for(int j =0; j<nodes.size();j++){
    // for(auto neighbours:nodes[j]->adj)
    //         {
    //        cout<<neighbours.first << " ";
              
    //         }
    //         cout << endl;
    //     }



    for(int j =0; j<nodes.size();j++){
          queue<int> q;
          vector<int> dist(nodes.size(),10000);
          set<int> tmp;
          int source=j;
          set<int> visited;
          visited.insert(source);
          q.push(source);
          dist[source]=0;
          //pathe.clear();
          //cout<<j<<endl;
          while(!q.empty())
          {
            int v=q.front();
            int d=dist[v];
            q.pop();
            // vector<int>neighbours=g.getneighbours(v);
           
            for(auto neighbours:nodes[v]->adj)
            {
             // cout<<v<<" "<<neighbours.first << " "<<d<<" "<<neighbours.second<<" "<<endl;
              if(visited.count(neighbours.first)==0 && D>=(d+neighbours.second))
              {
                visited.insert(neighbours.first);
                q.push(neighbours.first);
                dist[neighbours.first]=d+neighbours.second;
                tmp.insert(neighbours.first);
                // parent[neighbours[i].first]=v;
               // cout<<"going in "<<endl;
              }
              else if(visited.count(neighbours.first)!=0 && d+neighbours.second<dist[neighbours.first])
              {
                q.push(neighbours.first);
                dist[neighbours.first]=d+neighbours.second;
                tmp.insert(neighbours.first);
                // parent[neighbours[i].first]=v;
                //cout<<"going in now"<<endl;
              }
            }
          }
          //vector<int>tmp1;
           std::vector<int> tmp1(tmp.begin(), tmp.end());
          nbg_nodes.push_back(tmp1);
    }
}

