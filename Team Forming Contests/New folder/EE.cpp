
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
        
        bitset<60>bs;
        
        bs = n;
        ll f=0, cnt = 0;
        
       // cout<<bs<<el;
        
        forn(i,0,60)
        {
            if(bs[i]==1)
                f = 1;
            if(f && bs[i]==0)
                {
                    bs[i-1]=0;
                    bs[i]=1;
                    i-=2;
                    while(i>=0)
                    {
                        if(bs[i]==1)
                        {
                            cnt++;
                            bs[i]=0;
                        }
                        i--;
                    }
                    break;
                }
            
        }
        
        ll i = 0;
        while(cnt!=0)
        {
            bs[i]=cnt--;
            i++;
        }
        
       // cout<<bs<<el;
        
        ll m = 0;        
        forn(i,0,60)
        {
            if(bs[i]==1)
            {
                m|=1<<i;
                //cout<<"i--  "<<i<<"   "<<(1<<i)<<el;
            }
            
        }
       // cout<<bs<<el;
        cout<<"Case "<<tc++<<": "<<m<<el;

 

    }


    return 0;
}



