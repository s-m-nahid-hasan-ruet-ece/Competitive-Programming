
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

   // tst
    {

     cin>>n>>a>>b>>c;
     
   
     
     ll x= n%4;
     
     //printf("xx--  %lld\n", x);
     if(x==0)
     {
     	cout<<0<<el;
     	return 0;
     }
     
     x = 4-x;
     
    // printf("x-- %lld\n",x );
     
     ll ans= x*a;
     
     if(x==1)
      ans = min(ans,min(b+c,3*c));
     if(x==2)
      ans = min(ans,min(b,2*c));
     if(x==3)
      ans = min(ans,min(a+b,c));
      
        
     
    
     
     cout<<ans<<el;
     

    }


    return 0;
}



