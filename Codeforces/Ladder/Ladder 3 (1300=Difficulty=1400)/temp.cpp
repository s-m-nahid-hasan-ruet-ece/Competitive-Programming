
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

    //tst
    {
    	cin>>n;
    	vl vc;
    	
    	for(i=1;i*i<=n;i++)
    	{
    		if(n%i==0)
    		{
    			vc.pb(i);
    			if(i*i!=n)
    				vc.pb(n/i);
    		}
    	}
    	
    	
    	mll mp;
    	
    	while(n!=0)
    	{
    		mp[n%10]++;
    		n/=10;
    	}
    	ll cnt =0;
    	forn(i,0,vc.size())
    	{
    		ll x = vc[i];
    		while(x!=0)
    		{
    			if(mp[x%10])
    			{
    				cnt++;
    				break;
    			}
    			x/=10;
    		}
    	}
    	
    	cout<<cnt<<el;

freopen("file.txt","r",stdin);


    }


    return 0;
}



