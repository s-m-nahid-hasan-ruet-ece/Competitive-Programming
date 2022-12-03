
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
        string s;
        cin>>s;

        vll vc;

        ll f = 0;
        for(i=1; i<=12; i++)
        {
            if(12%i!=0)
                continue;
            for(k = 0; k<12/i; k++)
            {            
            	mll mp;

                for(j = k; j<12; j+=12/i)
                {
                    if(s[j]=='X')
                        mp[k]++;
                }
                if(mp[k]==i)
                {
                	vc.pb(pll(i,12/i));
                	break;
                }
            }            

        }
        
        cout<<vc.size()<<" ";
        forn(i,0,vc.size())
        cout<<vc[i].first<<"x"<<vc[i].second<<" ";
        cout<<el;





    }


    return 0;
}



