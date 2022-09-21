
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
    	ll ar[n+5];
    	
    	forn(i,0,n)
    	cin>>ar[i];
    	
    	
    	ll cur=0,mx=INT_MIN,yas=0,f=-1,l=0,r=-1;
    	
    	forn(i,0,n)
    	{
    		cur+=ar[i];
    		yas+=ar[i];
            if(mx<cur)
            {
                mx = cur;
                r = i;
            }
    		
    		if(cur<=0)
    			{
                    cur =0;
                    l = i+1;
                }
    	}
        
        //printf("l-- %lld  r-- %lld  mx-- %lld\n", l,r,mx);
        
    	
    	if(yas>mx || ((r-l+1)==n && yas==mx))
    		cout<<"YES"<<el;
    	else
    		cout<<"NO"<<el;


    }


    return 0;
}

/*

4
0 1 2 3

4
-3 1 2 3

4
1 -3 2 3

*/