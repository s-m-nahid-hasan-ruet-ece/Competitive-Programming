
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


ll n,ar[300010];

ll check(ll mid)
{
    ll f =0;

    forn(i,0,n)
    {
        if(ar[i]>=i)
            continue;
        else
            f = 1;
    }
    if(f==0)
        return f;
    ll x= 0;

    for(ll i = n-1;i>=0;i--)
    {
        if(ar[i]>=x)
            x++;
        else
            f = 1;
    }

    if(f==0)
        return f;
    forn(i,0,mid+1)
    {
        if(ar[i]>=i)
            continue;
        else
            return -1;

    }
    x = 0;
    for(ll i=n-1;i>=mid;i--)
    {
        if(ar[i]>=x)
            x++;
        else
            return 1;
    }

    return 0;
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


        ll l=0,r=n-1,mid, f = 0;
        
        if(n==1)
            f = 1;

        while(l<r)
        {
            mid =(l+r)/2;

            ll x = check(mid);
           // printf("l-- %lld  r-- %lld  mid-- %lld  x--  %lld\n", l,r,mid,x);

            if(x==0)
             {
                    f = 1;
                    break;
             }

             if(x==-1)
                r = mid;
             else if(x==1)
                l = mid+1;
        }


        if(f)
            cout<<"Yes"<<el;
        else
            cout<<"No"<<el;


    }


    return 0;
}



