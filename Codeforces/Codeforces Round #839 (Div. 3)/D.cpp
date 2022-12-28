
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

ll ar[sz],n;

const ll mod=1000000007;
ll cntn = 0,cnt1=0;
ll check(ll x)
{
	ll  pre, f = 1;
	cntn = 0;
	
	forn(i,0,n)
	{
		if(i==0)
			pre= abs(ar[i] - x);
		else
		{
			ll y = abs(ar[i]- x);
			if(y<pre)
				{
                    f = 0;
                    cnt1++;
                }
				
			pre = y;
		}
		
		if(ar[i]-x<0)
			cntn++;
	}
	
	return f;
}

int main()
{

    fio

    ll t,i,j,m,k,a,b,c=0,tc=1,bug1=1;

    tst
    {
    	cin>>n;
    	
    	forn(i,0,n)
    	cin>>ar[i];
    	
    	
    	ll l=0, r = 1e9, mid,mid1,mid2;
    	
    	while(l<r)
    	{
    		mid = (l+r)/2;
    		mid1 = (l+mid-1)/2;
            mid2 = (mid+1+r)/2;
            ll x, y;
            if(check(mid1)==1)
            {
                mid = mid1;
                break;
            }
            x = cnt1;
            
            if(check(mid2)==1)
            {
                mid = mid2;
                break;
            }
            y = cnt1;
            
            
            
    		if(check(mid)==1)
    			break;
    		printf("l- %lld  r-- %lld cntn--  %lld\n", l,r,cntn);

    		if(y>x)
    			r=mid-1;
    		else
    			l=mid+1;
    	}
    	
    	if(check(mid)==0)
    		cout<<-1<<el;
    	else
    		cout<<mid<<el;


  printf("c--  %lld  ch--  %lld\n",check(40741153),cntn );

    }


    return 0;
}



