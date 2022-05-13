
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
    	
    	vl vc[1500];
        vl vcc;
        mll mp;
    	
    	forn(i,0,n)
    	 {
            cin>>a;
            vc[a].pb(i);
            if(mp[a]==0)
            {
                vcc.pb(a);
            }
                
            mp[a]++;
         }
         
         ll ans = 0;
         for(i = 0;i<vcc.size();i++)
         {
            for(j= 0;j<vcc.size();j++)
            {
                a = vcc[i];
                b = vcc[j];
                
                ll x = min(a,b);
                ll y = max(vc[b][mp[b]-1]-vc[a][0], vc[a][mp[a]-1]- vc[b][0]);
                ans = max(ans,y*x);
            }
         }
         
         cout<<ans<<el;
    	 
    	
    		


    }


    return 0;
}



