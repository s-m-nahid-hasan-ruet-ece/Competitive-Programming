
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

int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

    tst
    {
    	cin>>n;
    	
    	ll ar[n],br[n];
    	ll cnt1 = 0,cnt2=0;
    	forn(i,0,n)
    	{
    		cin>>ar[i];
    	}
    	
    	forn(i,0,n)
    	{
    		cin>>br[i];
    		if(br[i]!=ar[i])
    		{
    		   if(ar[i]==1)	
    		   	cnt1++;
    		   else
    		   	cnt2++;
    		}
    		
    	}
    	
    	ll x= min(cnt1,cnt2);
    	cnt1-=x;
    	cnt2-=x;
    	
    	ll ans = 0;
    	if(x!=0)
    		ans++;
    	
    	ans+=cnt1+cnt2;
    	
    	cout<<ans<<el;
    	
    	


    }


    return 0;
}



