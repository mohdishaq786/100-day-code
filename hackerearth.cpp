#include<bits/stdc++.h>
#define ll         long long int
#define pii        pair<ll ,ll>
#define pd         push_back
#define vi         vector<ll>
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
#define w(c)       int c ; cin>>c; while(c--)
using namespace std;




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



vi ar[1001];

int vist[1001], dist[1001];
void dfs(int x)
{
	visited[x] = true;

	for (auto& i : G[x])
	{
		if (visited[i] == false)
		{
			dfs(i);
		}
	}
}
void dfs(int node, int d)
{
	vist[node] = 1;
	dist[node] = d;
	for (auto& child : ar[node])
	{
		if (vist[child] == 0)
		{
			dfs(child, dist[node] + 1);
		}
	}

}

int main()
{
	fast();
	int n, a, b;
	cin >> n;

	for (int i = 1; i < n; i++)
	{


		cin >> a >> b;
		ar[a].push_back(b);
		ar[b].push_back(a);
	}
	dfs(1, 0);
	int ans = -1;
	int min_dist = INT_MAX;
	w(q)
	{
		int girlcity;
		cin >> girlcity;
		if (dist[girlcity] < min_dist)
		{
			min_dist = dist[girlcity];
			ans = girlcity;
		}
		else if (dist[girlcity] == min_dist && girlcity < ans)
			ans = girlcity;

	}
	cout << ans;


}
}


