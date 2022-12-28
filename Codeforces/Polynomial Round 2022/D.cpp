
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
typedef    pair<pll,ll>pl;
typedef    unordered_map<ll,ll>mll;
typedef    vector<ll>vl;
typedef    vector<pll>vll;
typedef    vector<pl>vlp;
typedef    set<pll>sl;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;

int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

    tst
    {
      cin>>n>>m;

      ll ar[n+5][m+5];
      sl st1,st2;
      ll cnt = 0;
      forn(i,0,n)
      {
        ll c= 0;
        forn(j,0,m)
        {
          cin>>ar[i][j];
          if(ar[i][j]==1)
            c++;
        }
        st1.insert(pll(-1*c,i));
        st2.insert(pll(c,i));
        cnt+=c;
      }


      if(cnt%n!=0)
        {
          cout<<-1<<el;
          continue;
        }
      else
      {
           ll x = cnt/n;
           vlp ans;

           while(1)
           {
               auto I1 = st1.begin();
               auto I2 = st2.begin();

               pll x1 = *I1;
               pll x2 = *I2;



               if(x1.first*-1==x2.first && x2.first==x)
                break;

               ll ind1 = x1.second, ind2 = x2.second,c1=0;
               st1.erase(x1);
               st2.erase(x2);

             //  printf("ind1-- %lld  ind2--  %lld  c1-- %lld  c2-- %lld\n", ind1,ind2,-1* x1.first,x2.first);
               forn(i,0,m)
               {
                  if(ar[ind1][i]==1 && ar[ind2][i]==0)
                  {
                      ar[ind1][i]=0;
                      ar[ind2][i]=1;
                      c1++;
                      ans.pb(pl(pll(ind2,ind1),i));
                  }

                  if(x2.first+c1==x || -1*x1.first-c1==x)
                    break;
               }

               st1.insert(pll(x1.first+c1,ind1));
               st2.insert(pll(x2.first+c1,ind2));

           }
/*
           forn(i,0,n)
           {
            forn(j,0,m)
            {
              cout<<ar[i][j]<<" ";
            }
            cout<<endl;
           }

*/


           cout<<ans.size()<<el;
           forn(i,0,ans.size())
           {
            cout<<ans[i].first.first+1<<" "<<ans[i].first.second+1<<" "<<ans[i].second+1<<el;
           }

      }


    }


    return 0;
}



/*


4 3
1 1 1
1 0 1
0 0 0
1 1 1


*/
