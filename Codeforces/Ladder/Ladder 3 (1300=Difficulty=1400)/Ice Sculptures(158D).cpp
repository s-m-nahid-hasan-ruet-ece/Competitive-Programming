
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

  //  tst
    {
    	cin>>n;
    	
    	ll ar[n+5];
    	
    	forn(i,0,n)
    	cin>>ar[i];
    	
    	vl vc;
      
      for(i=1;i*i<=n;i++)
      {
         if(n%i==0)
         {
            vc.pb(n/i);
            
            if(i*i!=n)
              vc.pb(i);            
         }
      }
      
      ll ans= INT_MIN;
      forn(i,0,vc.size())
      {
          if((n/vc[i])<=2)
            continue;
          for(j = 0;j<vc[i];j++)
          {
             ll s = 0;
             for(k = j;k<n;k+=(vc[i]))
             {
               s+=ar[k];
               
             //  printf("i--  %lld  j--  %lld  k-- %lld vc[i]--- %lld\n",i,j,k,vc[i] );
             }
             
             ans = max(ans,s);
          }
                
      }
      
      
      cout<<ans<<el;
        
            
    	


    }


    return 0;
}


