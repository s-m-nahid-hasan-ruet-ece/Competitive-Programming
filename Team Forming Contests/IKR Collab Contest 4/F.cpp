
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
typedef    map<pl,ll>mll;
typedef    vector<ll>vl;
typedef    vector<pll>vll;
typedef    vector<pl>vlp;
typedef    set<ll>sl;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;

//ll dp[sz][2][10];
mll dp, vis;

ll n,m, ar[sz];


ll solve(ll i, ll f,ll cnt)
{
	
	if(i==n)
		return 0;
	if(cnt>m)
		return INT_MAX;
	
	if(vis[pl(i,pll(f,cnt))]==1)
		return dp[pl(i,pll(f,cnt))];
	
	ll ans = 0;
	
	if(f==0)
	{
  	if(i+1<n && ar[i+1]<0)
		ans=1+solve(i+1,1,cnt+1);
	else if(i+1<n && ar[i+1]>=0)
		ans=solve(i+1,0,cnt);		
	}
    else
    {
     	if(i+1<n && ar[i+1]<0)
		ans=solve(i+1,1,cnt+1);
	    else if(i+1<n && ar[i+1]>=0)
		{
			ll ans1=INT_MAX,ans2=INT_MAX;
			ans1=1+solve(i+1,0,cnt);	   	
			ans2=solve(i+1,1,cnt+1);
			
			ans =min(ans1,ans2);
		}
	   
    }
    vis[pl(i,pll(f,cnt))]==1;
    dp[pl(i,pll(f,cnt))] = ans;
    
   // printf("i-- %lld  f-- %lld  cnt-- %lld  dp--  %lld\n", i,f,cnt,dp[i][f][cnt]);
    
    return ans;
	
		
}

int main()
{

    fio

    ll t,i,j,k,a,b,c=0,tc=1,bug1=1;

    //tst
    {
    	cin>>n>>m;
    	

    	ll s= 0;
    	forn(i,0,n)
    	{
    		cin>>ar[i];
    		if(ar[i]<0)
    			s++;    		
    	}
    	
        
    	
    	if(s>m)
    	{
    		cout<<-1<<el;
    	}
    	else
    	{
    		ll ans;
            
            if(ar[0]<0)
              ans = 1+ solve(0,1,1);
            else
              ans= solve(0,0,0);
            cout<<ans<<el;
    	}
        
        


    }


    return 0;
}



