
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
    	
    	ll s = (n*(n+1))/2;
    	
    	
    	
    	vl vc1,vc2;
    	
    	if(s%2==1)
    		cout<<"NO"<<el;
    	else
    	{
    		ll x = 0,f = 0;
    		for(i = n;i>0LL;i--)
    		{
    			if(f==0 && x+i<=(s/2))
    			{
    				vc1.pb(i);
    				x+=i;
    				if(x==(s/2))
    				f =(ll)1;
    			}
    			else
    			{
    				vc2.pb(i);
    			}
    			
    		}
    		
    		
    		cout<<"YES"<<el;
    		
    		sort(vc1.begin(),vc1.end());
    		sort(vc2.begin(),vc2.end());
    		
    		cout<<vc1.size()<<el;
    		forn(i,0LL,(ll)(vc1.size()))
    		cout<<vc1[i]<<" ";
    		cout<<el;
    		
            cout<<vc2.size()<<el;
    		forn(i,0LL,(ll)(vc2.size()))
    		cout<<vc2[i]<<" ";
    		cout<<el;
    	
    		
    		
    	}


    }


    return 0;
}



