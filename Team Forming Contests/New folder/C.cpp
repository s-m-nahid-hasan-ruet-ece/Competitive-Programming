
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


ll dp[22][10][2][2];
ll n;
ll solve(ll i,ll j,ll f,ll fl)
{
	if(i==n)
		return 0;
	
	if(dp[i][j][f][fl]!=-1)
		return dp[i][j][f][fl];
	
	ll ans = 0;
	
	if(f==0)
	{
		forn(ii,j,10)
		{        
            
		    if(fl==0 && ii!=0)
            ans+=solve(i+1,ii,f,1);
            else if(fl==0 && ii==0)
            ans+=solve(i+1,ii,f,0);
            else if(fl!=0)
            ans+=1+solve(i+1,ii,f,fl);
            
           // if(i==0)
            printf("*%lld %lld\n",j,ii );
            if(ii!=0)
                fl = 1;
			ans+=solve(i+1,ii,1,fl);
		}		
	}
	else    
    {
    	for(ll k = j-1 ;k>=0 ;k--)
    		{
               //if(i==1)
                printf("_ %lld %lld\n",j,k );                    
    			ans+=1+solve(i+1,k,1,fl);
    		}
    }
    
    dp[i][j][f][fl] = ans;
    return dp[i][j][f][fl];
}

int main()
{

    fio

    ll t,i,j,m,k,a,b,c=0,tc=1,bug1=1;

    //tst
    {
    	cin>>n;
    	memset(dp,-1,sizeof dp);
    	
    	ll ans = solve(0,0,0);
    	
    	cout<<ans<<el;


    }


    return 0;
}



