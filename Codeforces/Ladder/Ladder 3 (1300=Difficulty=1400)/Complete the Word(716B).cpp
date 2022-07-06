
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
typedef    unordered_map<char,ll>mll;
typedef    vector<char>vl;
typedef    vector<pll>vll;
typedef    vector<pl>vlp;
typedef    set<char>sl;
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

        if(s.size()<26)
        {
            cout<<-1<<el;
            return 0;
        }


        sl st;
        ll cnt = 0;
        mll mp;


        forn(i,0,26)
        {
            if(s[i]!='?')
                {
                    st.insert(s[i]);
                }

                mp[s[i]]++;
        }
       //printf("sz--  %lld   cnt--  %lld\n", st.size(),mp['?']);

        ll ind = 26;
        while(st.size()!=26 && (26-st.size())!=mp['?'])
        {
            if(ind<s.size())
            {
               mp[s[ind-26]]--;
               if(mp[s[ind-26]]==0)
                st.erase(s[ind-26]);


               mp[s[ind]]++;
               if(s[ind]!='?')
                st.insert(s[ind]);

               ind++;
            }
            else
                break;
                   // printf("szz--  %lld   cnt--  %lld\n", st.size(),mp['?']);

        }


        if(st.size()==26)
        {
            forn(i,0,s.size())
            {
                if(s[i]=='?')
                    s[i]='A';
            }

            cout<<s<<el;
        }
        else if((26-st.size())==mp['?'])
        {
            vl vc;
            for(char ch = 'A';ch<='Z';ch++)
              {
                if(mp[ch]==0)
                 {
                    vc.pb(ch);
                   // printf("--  %c\n", ch);
                 }
              }
             ll indx =0;
             forn(i,ind-26,ind)
             {
                //cout<<"??  "<<vc[indx]<<el;
                if(s[i]=='?')
                    s[i]=vc[indx++];
             }


             forn(i,0,s.size())
             {
                 if(s[i]=='?')
                    {
                        s[i]='A';
                        //cout<<"i--  "<<i<<"  s---  " <<s[i]<<el;
                    }
            }

             cout<<s<<el;
        }
        else
        {
            cout<<-1<<el;
        }


    }


    return 0;
}



/*

CCCCCASDDABC??FGHIJK???OPQR?TUVWXY?AAAA


ABABABBAB????????????ABABABABA???????????ABABABABA?????????KLCSJB?????????Z


*/
