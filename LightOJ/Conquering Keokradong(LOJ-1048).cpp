
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
ll n,k, ar[1010];

ll check(ll x)
{
	ll s = 0, cnt = 0, fl = 1;
	
	forn(i,0,n+1)
	{
		if(s+ar[i]<=x)
			s+=ar[i];
		else if(x<ar[i])
			{
				fl = 0;
				break;
			}
		else			
			{
				cnt++;
				s=0;
				i--;
			}
	
	}
	
	if(s!=0)
	{
		cnt++;
	}
	
	if(cnt!=k+1)
		 fl = 0;
		
	return fl;
		
}


int main()
{

    fio

    ll t,i,j,m,a,b,c=0,tc=1,bug1=1;

    tst
    {
    	cin>>n>>k;
    	ll l=0,r=1e9,mid;

    	forn(i,0,n+1)
    	{
    		cin>>ar[i];
    		l = max(l, ar[i]);
    	}
    		
    	
    	
    	
    	while(l<r)
    	{
    		
    		mid = (l+r)/2;
    		
    		//printf("l--  %lld  r--  %lld  mid--  %lld\n",l,r,mid );
    		
    		ll r = check(r);
    		
    		if(r)
    			l = mid-1;
    		else
    			r = mid-1;    		
    	}
    	
    	cout<<mid<<el;


    }


    return 0;
}



