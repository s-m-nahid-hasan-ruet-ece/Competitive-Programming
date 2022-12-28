
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
typedef    map<string,ll>mll;
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
        
        string s;
        cin>>s;
        
        mll mp,mp1;
        
        ll l = 0, r = s.size()-1, f = 0;
        
        forn(i,1,n)
        {
            string s1="",s2="";
            s1+=s[i-1];
            s1+=s[i];
            if(mp[s1]!=0)
            {
                f = 1;              
               // break;
            }
            mp[s1]=i;
         cout<<s1<<" "<<mp[s1]<<el;

            i++;
        }
        cout<<"---"<<el;
        forn(i,1,n-1)
        {
            string s1="",s2="";
            s1+=s[i];
            s1+=s[i+1];
         //   cout<<s1<<" "<<s2<<el;
            if(mp1[s1]!=0 || (abs(mp[s1]-i)>2 && mp[s1]!=0))
            {
                f = 1;              
                //break;
            }
            mp1[s1]=i;
           cout<<s1<<" "<<mp1[s1]<<el;

            i++;
        }
        
        if(f)
            cout<<"YES"<<el;
        else
            cout<<"NO"<<el;


    }


    return 0;
}

/*

//  aba   aaacbbb  uohhhuou


*/