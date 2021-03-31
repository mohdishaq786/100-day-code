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

//sieve alog for prime no o(nloglogn) tc
void sieve(int n)
{
	vector <bool> isPrime(n + 1, true);

	for (int i = 2; i <= n; i++)
	{
		if (isPrime[i])
		{
			cout << i << " ";
			for (int j = i * i; j <= n; j = j + i) ///j=j+6
				isPrime[j] = false;
		}
	}
}




int main()
{
	fast();
	int n; cin >> n;
	sieve(n);
}
