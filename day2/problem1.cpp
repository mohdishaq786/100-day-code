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
#define w(c)       int c ; cin>>c; while(c);
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
// for small n
bool isprime(int n)
{
	if (n == 1) return false;
	for (int i = 2; i * i <= n; i++) if (n % i == 0) return false;


	return true;

}
//for large n

bool isPrime (int n)
{
	if (n == 1 )
		return false;
	if (n == 2 || n == 3) return true;

	if (n % 2 == 0 || n % 3 == 0) return false;

	for (int i = 5; i * i <= n; i = i + 6)
	{
		if (n % i == 0 || n % (i + 2) == 0) return false;

	}
	return true;
}




int32_t main()
{
	fast();
	int n;
	cin >> n;
	bool ans = isPrime(n);

	cout << ans << endl;
}