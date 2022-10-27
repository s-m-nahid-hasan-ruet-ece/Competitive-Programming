
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
typedef    vector<ll>vl;
typedef    unordered_map<ll,vl>mll;
typedef    vector<vl>vvl;
typedef    vector<pll>vll;
typedef    vector<pl>vlp;
typedef    set<ll>sl;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;


//  DSU
ll par[sz];
void init()
{
    for(ll i=0; i<=sz; i++)		par[i]=i;
}
ll Find(ll a)
{
    if(par[a]==a)		return a;
    return par[a]=Find(par[a]);
}
void Union(ll a,ll b)
{
    par[Find(b)]=Find(a);
}




int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

    //tst
    {
    	cin>>n>>m;
    	init();
        mll mp;
        ll ans = 0;
        
    	forn(j,0,n)
    	{
    		cin>>k;
            vl vc;
            if(k==0)
                ans++;
    		forn(i,0,k)
    		{
    			cin>>a;  
                vc.pb(a);
    		}
            
            mp[j+1]=vc;
    	}
        
        
        forn(i,1,n+1)
        {
            forn(j,i+1,n+1)
            {
                ll f = 0;
                forn(k,0,mp[i].size())
                {
                    forn(l,0,mp[j].size())
                    {
                        if(mp[i][k]==mp[j][l])
                        {
                            Union(i,j);
                            f = 1;
                            break;
                        }
                    }
                    if(f)
                      break;
                }
            }
        }
        
    	sl st;
        
        forn(i,1,n+1)
          {
            st.insert(Find(i));
            //printf("i--  %lld  par--  %lld\n", i,Find(i));
          }
          
        ans = max(ans,(ll)(st.size()-1));
        
        
        cout<<ans<<el;
        
        

    }


    return 0;
}



