
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
    	
    	cin>>n>>m;
    	
    	
    	ll x= n/2;
    	
    	if(x>m || n==1)
    	{
            if(n==1 && m==0)
                cout<<1<<el;
            else            
    		cout<<-1<<el;
    		return 0;
    	}
    	
    	
    	vl ans;
    	
    	ll cnt = 2;
        mll mp;

    	ll y = m-x+1;
    	ans.pb(y);
    	ans.pb(2*y);
        mp[y]=1;
        mp[y*2]=1;

    	forn(i,0,x-1)
    	{
    		while(mp[cnt]==1 || mp[cnt+1]==1)
               cnt++;
           
           
    		ans.pb(cnt++);
            mp[cnt-1]=1;
            mp[cnt]=1;
    		ans.pb(cnt++);
    	}
    	
    	
    	if(n%2==1)
    		{
                ll x= 1;
                while(mp[x]==1)
                    x++;
                ans.pb(x);
            }
    	
    	
    	forn(i,0,n)
    	cout<<ans[i]<<" ";
    	cout<<el;
    	
    	
    	
    	



    }


    return 0;
}



