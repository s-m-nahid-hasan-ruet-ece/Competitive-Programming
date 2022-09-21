
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


typedef    set<ll>sl;
typedef    pair<ll,ll>pll;
typedef    pair<ll,pll>pl;
typedef    unordered_map<ll,ll>mll;
typedef    vector<ll>vl;
typedef    vector<sl>vll;
typedef    vector<pl>vlp;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;

int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

    //tst
    {
        vl vc;
        vc.pb(4);
        vc.pb(8);
        vc.pb(15);
        vc.pb(16);
        vc.pb(23);
        vc.pb(42);


        sl st[50];


        cin>>n;

        ll ar[n+5];

        forn(i,0,n)
        {
            cin>>ar[i];
            st[ar[i]].insert(i);
        }
        ll cnt=0;
        while(1)
        {
            ll pre = -1,f=0;
            forn(i,0,vc.size())
            {
                if(st[vc[i]].empty())
                {
                    f = 1;
                    break;
                }
                auto I = st[vc[i]].begin();
                ll x = *I;
                st[vc[i]].erase(x);

                if(pre<x)
                    cnt++;
                else
                    {
                        
                        i--;
                        continue;
                    }
                pre = x;
            }

            if(f || cnt==n)
                break;
        }

//printf("cnt-- %lld\n",cnt );
        ll y = cnt - (cnt%6);
       
        cout<<n-y<<el;







    }


    return 0;
}



