#include <bits/stdc++.h>
using namespace std;
vector<int> G[200000];
int n;
void dfs(int u, int fa)
{
	for (int i = 0; i < G[u].size(); i++)
	{
		int v = G[u][i];
		if (v != fa)
		{
			dfs(v, u);
		}
	}
}
int main()
{
	cin >> n;
	for (int i = 1; i <= n - 1; i++)
	{
		int u, v;
		cin >> u >> v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	dfs(1, 0);
	return 0;
}
