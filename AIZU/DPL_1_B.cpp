
/*
     Author's Handle : Crazy_Dreamer
     Author's Name   : S M Nahid Hasan                
*/

#include<bits/stdc++.h>
using namespace std;

#define ll               long long
#define dl               double
#define forn(i,a,n)      for (ll i=a;i<n;i++)
#define per(i,a,n)       for (ll i=n-1;i>=a;i--)
#define pb               push_back
#define mp               make_pair
#define all(x)           (x).begin(),(x).end()
#define fi               first
#define se               second
#define bug              cout<<"bug --  "<<bug1++<<el;
#define SZ(x)            ((ll)(x).size())
#define el               endl
#define pi               acos(-1.0)
#define fio              ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define tst              cin>>t; while(t--)
#define sz               200050



typedef    pair<ll,ll>pll;
typedef    pair<ll,pll>pl;
typedef    unordered_map<ll,ll>mll;
typedef    vector<ll>vl;
typedef    vector<pll>vll;
typedef    vector<pl>vlp;
typedef    set<ll>sl;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;

ll n, W;
ll val[110], weight[110];
ll dp[110][10010];

ll solve(ll i, ll w)
{
	if(i==n)
	{
		return 0;
	}
	
	
	if(dp[i][w]!=-1)
		return dp[i][w];
	
	ll ans1 = 0, ans2 = 0;
	
	if(w+weight[i]<=W)
		ans1 += val[i] + solve(i+1, w+weight[i]);
	
	ans2 += solve(i+1, w);
	
	dp[i][w] = max(ans1,ans2);
	
	return dp[i][w];
}

int main()
{

    fio

    ll t,i,j,k,a,b,c=0,tc=1,bug1=1;

    //tst
    {
    	cin>>n>>W;
    	
    	forn(i,0,n)
    	  cin>>val[i]>>weight[i];    		
    	  
    	memset(dp, -1 ,sizeof dp);
    	
    	
    	ll ans = solve(0,0);
    	
    	cout<<ans<<el;


    }


    return 0;
}



