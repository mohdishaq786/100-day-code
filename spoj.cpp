

//BUGLIFE - A Bug’s Life

#include<bits/stdc++.h>
#define ll         long long int
#define pii        pair<ll ,ll>
#define pb         push_back
#define vi         vector<int>
#define vii        vector<ll>
#define vs         vector<string>
#define ump        unordered_map
#define all(n)     n.begin(),n.end()
#define ff         first
#define ss         second
#define mid(l,r)   (l+(r-1)/2)
#define fo(i,n)    for(i=0;i<n;i++)
#define endl       "\n"
#define inf        1e18

#define deb(x)     cout<< #x << " "<<x<<endl;
#define w(c)       int c ; cin>>c; while(c);
using namespace std;


vi arr[2001];
int vist[2001], col[2001];
void fast()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
}

bool dfs(int node, int c)
{
	vist[node] = 1;
	col[node] = c;
	for (int child : arr[node])
	{
		if (vist[child] == 0)
		{
			bool res = dfs(child, c ^ 1);
			if (res == false)
				return false;
		}
		else if (col[node]  == col[child])
			return false;

	}
	return true;
}

int main()
{
	fast();
	int t, n, m, a, b;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		cin >> n >> m;
		for (int i = 1; i <= n; i++) arr[i].clear(), vist[i] = 0;

		for (int i = 1; i <= m; i++)
			cin >> a >> b, arr[a].pb(b), arr[b].pb(a);

		bool flag = true;
		for (int i = 1; i <= n; i++)
		{
			if (vist[i] == 0)
			{
				bool result = dfs(i, 0);
				if (result == false)
					flag = false;
			}

		}
		cout << "Scenario #" << tc << ":" << endl;

		if (flag == false)
			cout << "Suspicious bugs found!" << endl;
		else
			cout << "No suspicious bugs found!" << endl;
	}
	return 0;






}