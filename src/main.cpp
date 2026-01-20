#include<bits/stdc++.h>
using namespace std;

struct Edge{
int to;
int distance;
int traffic;
int pollution;
};

class Graph{
int V;
vector<vector<Edge>> adj;

public:
Graph(int V){
V=v;
  adj.resize(V);
}

void printGraph(){
  for(int i=0;i<V;i++){
    cout<<"Node"<<i<<"->";
    for(auto &e : adj[i])
      {
        cout<<"[to:"<<e.to<<",d:"<<e.distance
          <<",t:"<<e.trafiic
          <<",p:"<<e.pollution<<"]"
      }    
    cout<<endl;
  }
}
};
int main(){
  int V,E;
  cout<<"Enter number of locations and roads:";
  cin>>V>>E;

  Graph g(V);

  cout<<"Enter u v distance traffic pollution:\n";
  for(int i=0;i<E;i++){
    int u,v,d,t,p;
    cin>>u>>v>>d>>t>>p;
    g.addEdge(u,v,d,t,p);
  }
  cout<<"\nCity Map:\n";
  g.printGraph();

  return 0;
}

