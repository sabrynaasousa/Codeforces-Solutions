#include <bits/stdc++.h>

using namespace std;

vector<int>graph[3000];
int ans = 0;

void dfs( int u, int k ){
  for( auto& v : graph[u] ){
      dfs(v, k + 1);
  }
  ans = max(ans, k);
}

int main(){
  int n, h;
  cin >> n;
  
  for( int i = 1; i <= n; ++i ){
    int u;
    cin >> u;
    if( u != -1 )
      graph[u].push_back(i);
  }
  
  for( int u = 1; u <= n; ++u ){
     dfs(u, 1);
  }
  
  cout << ans << endl;
  
  return 0;
}
