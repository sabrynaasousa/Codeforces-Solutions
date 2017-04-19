#include <bits/stdc++.h>

using namespace std;

const int oo = 1e9;
vector<int>dist(30010);

int bfs( int source, int destination ){
  queue<int>q;
  fill( dist.begin(), dist.end(), oo );
  dist[source] = 0;
  q.push(source);
  while( not q.empty() ){
    int u = q.front(); q.pop();
    if( u == destination ){
      return dist[u];
    }
    if( u*2 <= (2*destination) and dist[u*2] == oo ){
      q.push( u*2 );
      dist[u*2] = dist[u] + 1;
    } 
    if(  dist[u-1] == oo ){
      q.push( u-1 );
      dist[u-1] = dist[u] + 1;
    } 
  }
}

int main(){

  int n, m;
  
  cin >> n >> m;
  
  cout << bfs( n, m ) << endl;
  return 0;
}
