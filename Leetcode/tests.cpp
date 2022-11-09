

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

        ll n = 0, x = 1;

        for(i = s.size()-1;i>=0;i--)
             {
                n+=x*(s[i]-'0');
                x*=10;
             }

        ll m;
        if(n<(x/2))
        {
            m=n+(x/2);

                    while(m!=0)
            {
                ss+=(char)('0'+(m%10));
                m/=10;
            }
        while(ss.size()<s.size())
        {
            ss+='0';
        }


            ll f= 0;
            reverse(ss.begin(),ss.end());

            forn(i,0,ss.size())
            {
                if(f==0 && mp[ss[i]]==1)
                {

                   forn(j,0,10)
                   {
                    if(mp['0'+j]==0)
                    {
                        mp['0'+j]=1;
                        ss[i]=('0'+j);
                        f = 1;
                        break;
                    }
                   }
                }
                else if(f==1)
                {
                   forn(j,0,10)
                   {
                    if(mp['0'+j]==0)
                    {
                        mp['0'+j]=1;
                        ss[i]=('0'+j);
                        break;
                    }
                   }
                }
                else
                        mp[ss[i]]=1;
            }
        }
        else
        {
            m=n-(x/2);

                    while(m!=0)
            {
                ss+=(char)('0'+(m%10));
                m/=10;
            }
        while(ss.size()<s.size())
        {
            ss+='0';
        }


            ll f= 0;
            reverse(ss.begin(),ss.end());

            forn(i,0,ss.size())
            {
                if(f==0 && mp[ss[i]]==1)
                {
                  ll ff = 0;
                   for(j=(ss[i]-'0');j>=0;j--)
                   {
                    if(mp['0'+j]==0)
                    {
                        mp['0'+j]=1;
                        ss[i]=('0'+j);
                        f = 1;
                        ff = 1;
                        break;
                    }

                   }
                   if(ff==0)
                   {
                       f = 1;
                       i-=1;
                   }
                }
                else if(f==1)
                {
                   for(j=9;j>=0;j--)
                   {
                    if(mp['0'+j]==0)
                    {
                        mp['0'+j]=1;
                        ss[i]=('0'+j);
                        break;
                    }
                   }
                }
                else
                        mp[ss[i]]=1;
            }
        }




            cout<<ss<<el;






    }


    return 0;
}



