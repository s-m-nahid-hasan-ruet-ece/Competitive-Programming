
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
    	
    	cin>>n>>a>>b;
    	
    	ll sum = (n*(n+1))/2;
    	ll fl = 0;
    	mll mp;
    	vl vc;
    	i = 1;
    	ll p1,p2;
    	while(1)
    	{
    		
    		if(i*b + i*a==sum)
    			{
    				p1 = i*a;
    				p2 = i*b;
    				fl = 1;
    				break;
    			}
    		
    		if(i*b+i*a>sum)
    			break;
    		i++;
    	}
    	
    	ll cnt = 0;
    	if(fl)
    	{
    		ll sum1 = 0;
    		for(int i = n;i>=1;i--)
    		{
    			if(sum1+i<=p1)
    				{
    					vc.pb(i);
    					sum1+= i;
    					cnt++;
    			        if(sum1==p1)
    			        	break;
    				}
    		}
    	}
    	
sort(vc.begin(),vc.end());
          
  if(fl)          
    {
    	cout<<"Case #"<<tc++<<": "<<"POSSIBLE"<<el;
    	cout<<vc.size()<<el;
    	
    	forn(i,0,vc.size())
    	cout<<vc[i]<<" ";
    	cout<<el;
    }
  else
    {
    	cout<<"Case #"<<tc++<<": "<<"IMPOSSIBLE"<<el;
    }
  	
          

    }


    return 0;
}



