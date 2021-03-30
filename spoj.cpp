#include<bits/stdc++.h>

#define pb         push_back
#define vi         vector<int>

using namespace std;


vi arr[1001];
int vist[1001];

void dfs(int node)
{
	vist[node] = 1;
	for (auto& child : arr[node])
	{
		if (vist[child] == 0)
			dfs(child);
	}
}






int main()
{

	int n, m, a, b;
	cin >> n >> m;
	int ccount = 0;
	for (int i = 1; i <= m; i++)
	{
		cin >> a >> b;
		arr[a].pb(b);
		arr[b].pb(a);

	}
	for (int i = 1; i <= n; i++)
		if (vist[i] == 0)
			dfs(i); ccount++;


	if (ccount == 1 && m == n - 1)
		cout << "YES";
	else
		cout << "NO";

}