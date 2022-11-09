

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

    //tst
    {

        string s, ss="";

        cin>>s;

        mll mp;

        ll f= 0;
        forn(i,0,s.size())
        {
            ll x = (s[i]-'0');

            if(i==0)
            {
                if(s[i]<'5')
                {
                    x+=5;
                }
                else
                {
                    x-=5;
                }
                ss+=('0' + x);
                mp[x]=1;
            }
            else
            {
                ll p, mn = INT_MAX;

                if(f==0)
                {
                    for(j=x; j>=0; j--)
                    {
                        if(mp[j]==0)
                        {
                            mp[j]=1;
                            ss+=('0'+j);
                            if(j!=x)
                                f=1;
                            break;
                        }

                    }
                }
                else
                {
                    for(j = 9; j>=0; j--)
                    {
                        if(mp[j]==0)
                        {
                            ss+=('0'+j);
                            mp[j]=1;
                            break;
                        }
                    }
                }

            }
        }

        cout<<ss<<el;
    }


    return 0;
}



