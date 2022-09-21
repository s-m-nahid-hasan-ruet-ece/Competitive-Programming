
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

ll n,k, ar[20], dp[20][1e5];


ll solve(ll i, ll val)
{
	
	if(val==k)
		return 1;
	if(i>=n)
		return 0;
	
	if(dp[i][val]!=-1)
		return dp[i][val];
	
	ll ans1 = 0, ans2=0, ans3=0;
	
	if(val+ar[i]<=k)
		ans1=solve(i+1,val+ar[i]);
	
	if(ar[i]*2+val<=k)
		ans2=solve(i+1,val+ar[i]*2);
	
	ans1 = ans1|ans2;
	ans3= solve(i+1,val);
	
	dp[i][val] = ans1|ans3;
	
	printf("i--  %lld  dp--  %lld\n",i,dp[i][val] );
	
	return dp[i][val];
}


int main()
{

    fio

    ll t,i,j,a,b,c=0,tc=1,bug1=1;

    tst
    {
    	
    	cin>>n>>k;
    	
    	forn(i,0,n)
    	cin>>ar[i];
        
        memset(dp,-1,sizeof dp);
    	
    	ll r = solve(0,0);
    	
    	cout<<r<<el;


    }


    return 0;
}



