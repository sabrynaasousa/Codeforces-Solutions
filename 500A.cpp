#include <bits/stdc++.h>

using namespace std;

const int oo = 1e9;

vector<int>dist(30010);
int cells[30010];

bool bfs( int source, int destination ){
  queue<int>q;
  fill( dist.begin(), dist.end(), oo );
  dist[source] = 0;
  q.push(source);
  while( not q.empty() ){
    int u = q.front(); q.pop();
   
    if( u == destination ){
      return true;
      break;
    }
    if(( u + cells[u]) <= destination ){
      q.push( u + cells[u] );
    }
    else{
      return false;
      break;
    }
  }
}  

int main(){
  int n, t, u;
  
  cin >> n >> t;
  memset( cells, 0, sizeof cells );
  
  for( int i = 1; i <= (n - 1); ++i ){
    cin >> u;
    cells[i] = u;
  }
  
  if( bfs(1, t) )
    cout << "YES" << endl;
  else
    cout << "NO" << endl;  
  
}
