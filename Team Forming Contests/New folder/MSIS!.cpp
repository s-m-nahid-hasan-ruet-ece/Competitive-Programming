
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
typedef    map<pll,ll>mll;
typedef    vector<ll>vl;
typedef    vector<pll>vll;
typedef    vector<pl>vlp;
typedef    set<ll>sl;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;

mll dp;
ll ar[100010],n;


ll solve(ll i, ll last)
{
	
	if(i>=n)
		return 0;
	
	if(dp[pll(i,last)]!=0)
		return dp[pll(i,last)];
	
	
	ll ans =0, ans1=0;
	
	if(ar[i]>last)
	ans+=ar[i]+solve(i+1,ar[i]);
	
	ans1+=solve(i+1,last);
	
	dp[pll(i,last)]= max(ans,ans1);
	
	return dp[pll(i,last)];
}

int main()
{

    fio

    ll t,i,j,m,k,a,b,c=0,tc=1,bug1=1;

   // tst
    {
    	cin>>n;
    	
    	
    	forn(i,0,n)
    	cin>>ar[i];
    	        
        
        ll r = solve(0,-1);
        
        cout<<r<<el;

    }


    return 0;
}



