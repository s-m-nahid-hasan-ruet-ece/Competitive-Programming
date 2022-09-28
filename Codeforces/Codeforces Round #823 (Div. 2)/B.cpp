
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

long double ar[100010],tr[100010];
ll n;

long double check(long double x)
{
	long double ans = 0;
	
	forn(i,0,n)
	{
		ans=max(ans,tr[i]*1.0+ abs(x-1.0*ar[i]));
        //printf("ar---%lld  tr--  %lld\n", ar[i],tr[i]);
	}
	
	return ans;
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
    	
    	forn(i,0,n)
    	cin>>tr[i];
    	
    	long double l = 0, r = 200000001, mid, mid1, mid2;
    	
    	while(abs(l-r)>0.0000001)
    	{
    		mid = (l+r)/2.0;
    		mid1 = (l+mid)/2.0;
    		mid2 = (mid+r)/2.0;
    		
    		//double x = check(mid);
    		long double x1 = check(mid1);
    		long double x2 = check(mid2);
    		
    		if((x2-x1)>0.0000001)
    			r = mid;
    		else
    			l = mid;
    		
    		//printf("l--  %lf  r--  %lf   mid--  %lf  x1--%lf\n",l,r,mid1,x1 );
    		
    	}
        
        
        if(mid<0.000001)
            mid = 0;
        
        cout<<mid<<el;


    }


    return 0;
}



