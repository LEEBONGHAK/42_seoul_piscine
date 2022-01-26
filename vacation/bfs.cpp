#include<bits/stdc++.h>
using namespace std;
vector<int> adj[202020];
bool chk[202020];
int ans[202020];
void bfs(int s) {
	if (chk[s]) return;
	int cnt = 0;
	chk[s] = 1;
	queue<int> q;
	q.push(s);
	while (q.size()) {
		int cur = q.front(); q.pop();
		++cnt;
		for (int i = 0; i < adj[cur].size(); ++i) {
			int nx = adj[cur][i];
			if (!chk[nx]) {
				chk[nx] = 1;
				q.push(nx);
			}
		}
	}
	ans[s] = cnt;
}
int main(){
	int n, m; scanf("%d %d", &n, &m);
	for (int i = 0; i < m; ++i) {
		int a, b;
		scanf("%d %d", &a, &b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	int resI = 0, res = 0;
	for (int i = 1; i <= n; ++i) {
		bfs(i);
		if (ans[i] > res) {
			res = ans[i];
			resI = i;
		}
	}
	printf("%d %d", resI, res);
}
