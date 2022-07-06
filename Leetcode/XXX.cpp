
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

    	ll p,q,r,s;
    	cin>>n>>a>>b;
    	cin>>p>>q>>r>>s;


        forn(i,p,q+1)
    	{
    		forn(j,r,s+1)
              {
                  ll x1,y1,x2,y2;

                  x1 = i-a;
                  y1 = j-b;

                  x2 = i-a;
                  y2 = b-i;
                 // if(i==p && j==r)
                  {
                      printf("x1-- %lld  y1-- %lld  x2-- %lld  y2-- %lld  %lld   %lld   %lld  %lld\n",x1,y1,x2,y2,max(1-a,1-b),min(n-a,n-b),max(1-a,b-n),x2<=min(n-a,b-1));
                  }
//
                  if(x1==y1 && x1>=max(1-a,1-b) && x1<=min(n-a,n-b))
                  {
                    cout<<'#';
                  }
//
                 else if(x2==y2 && x2>=max(1-a,b-n) && x2<=min(n-a,b-1))
                  {
                    cout<<'#';
                  }
                  else
                    cout<<'.';

              }
          cout<<el;
        }



    }


    return 0;
}




