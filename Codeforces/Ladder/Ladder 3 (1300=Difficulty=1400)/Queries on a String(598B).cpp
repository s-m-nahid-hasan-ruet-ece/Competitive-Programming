
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
typedef    vector<char>vl;
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
        string s;
        cin>>s;

        vl vc;

        forn(i,0,s.size())
        vc.pb(s[i]);


        cin>>m;

        while(m--)
        {
            ll l,r,x;

            cin>>l>>r>>x;

            x %= (r-l+1);
            vl vc1;

            forn(i,r-x,r)
            vc1.pb(vc[i]);

            forn(i,l-1,r-x)
            vc1.pb(vc[i]);
            ll ind = 0;
            forn(i,l-1,r)
            vc[i]=vc1[ind++];
        /*
        forn(i,0,vc1.size())
        cout<<vc1[i];
        cout<<el;

        forn(i,0,vc.size())
        cout<<vc[i];
        cout<<el;
        */
        }

        //cout<<"Final\n";


        forn(i,0,vc.size())
        cout<<vc[i];
        cout<<el;




    }


    return 0;
}



/*

1
abacaba
2
3 6 5
1 4 6


*/
