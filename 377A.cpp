#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int> > graph[510][510];
char graph1[510][510];
int visited[510][510];
int j;
int cnt;
int k;

void dfs(int x, int y){
	
	if(j == cnt-k){
		return;
	}
	
	visited[x][y] = 1;
	j++;
	
	for(auto &v : graph[x][y]){
		if(!visited[v.first][v.second]){
			dfs(v.first, v.second);
		}
	} 
}

int main(){

	int m, n;
	char x;
	int in, fim;
	j = 0; cnt = 0;
	scanf("%d %d %d", &n, &m, &k);
	
	
	memset(visited, 0, sizeof visited);
	memset(graph1, '#', sizeof graph1);
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin >> graph1[i][j];	
		}
	}
	
	if(k==0){
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){	
					printf("%c", graph1[i][j]);
				}
		
			printf("\n");
		}
	}
	else{
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){	
				if(graph1[i][j]=='.'){
					in = i; fim = j;	
					cnt++;
					if(graph1[i+1][j]=='.')
						graph[i][j].push_back(make_pair(i+1, j));
					if(graph1[i-1][j]=='.')
						graph[i][j].push_back(make_pair(i-1, j));
					if(graph1[i][j+1]=='.')
						graph[i][j].push_back(make_pair(i, j+1));
					if(graph1[i][j-1]=='.')
						graph[i][j].push_back(make_pair(i, j-1));
				}
			}
		}
	
		dfs(in, fim);
	
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){	
				if(!visited[i][j] && graph1[i][j]=='.')
					printf("X");
				else{
					printf("%c", graph1[i][j]);
				}
			}
		
			printf("\n");
		}
	}

	return 0;
}
