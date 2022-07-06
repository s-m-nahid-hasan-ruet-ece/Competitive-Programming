
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
#define sz               100050



typedef    pair<ll,ll>pll;
typedef    pair<ll,pll>pl;
typedef    map<pll,ll>mll;
typedef    map<ll,ll>ml;
typedef    vector<ll>vl;
typedef    vector<pll>vll;
typedef    vector<pl>vlp;
typedef    set<ll>sl;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;
vl edges[sz];



int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

    //tst
    {

      mll weight;
      ml vis;

      cin>>n>>m>>k;

      forn(i,0,m)
      {
        cin>>a>>b>>c;
        edges[a].pb(b);
        edges[b].pb(a);

        if(weight[pll(a,b)]==0)
           {
            weight[pll(a,b)]=c;
            weight[pll(b,a)]=c;
           }
         else
         {
            weight[pll(a,b)]=min(c,weight[pll(a,b)]);
            weight[pll(b,a)]=min(c,weight[pll(b,a)]);
         }

      }


      ll ar[k+5];

      forn(i,0,k)
      {
          cin>>ar[i];
          vis[ar[i]]=1;
      }

      ll ans = 1e12;


      forn(i,0,k)
      {
       // printf("i--  %lld   ar--  %lld\n",i,ar[i]);
        forn(j,0,edges[ar[i]].size())
        {
            ll x= edges[ar[i]][j];
           // printf("x--  %lld\n",x);
            if(vis[x]==0)
          ans = min(ans,weight[pll(ar[i],x)]);
        }
      }


      if(ans==1e12)
        cout<<-1<<el;
      else
        cout<<ans<<el;





    }


    return 0;
}



