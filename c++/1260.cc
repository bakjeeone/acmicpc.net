#include <cstdio>
#include <queue>

using namespace std;

int N, M;
bool g[1001][1001];
bool check[1001];

void dfs(int v){
	printf("%d ", v);
	for(int i = 1 ; i <= N ; i ++){
		if(!check[i] && g[v][i]){
			check[i] = 1;
			dfs(i);
		}
	}
}

void bfs(int v){
	queue<int> q;
	q.push(v);
	check[v] = 1;
	while(!q.empty()){
		int n = q.front();
		printf("%d ", n);
		q.pop();
		for(int i = 1 ; i <= N ; i ++){
			if(!check[i] && g[n][i]) {
				q.push(i);
				check[i] = 1;
			}
		}
	}
	putchar('\n');
}


int main(){
	int v;
	scanf("%d%d%d", &N, &M, &v);
	for(int i = 0 ; i < M ; i ++){
		int s, e;
		scanf("%d%d", &s, &e);
		g[s][e] = 1;
		g[e][s] = 1;
	}
	check[v] = 1;
	dfs(v);
	putchar('\n');
	for(int i = 1 ; i <= N ; i ++) check[i] = 0;
	bfs(v);
	return 0;
}