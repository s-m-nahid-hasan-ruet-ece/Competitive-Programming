

/*
     Author's Handle : Crazy_Dreamer
     Author's Name   : S M Nahid Hasan
*/

#include<bits/stdc++.h>
using namespace std;

#define ll               int
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
typedef    vector<vl>vll;
typedef    vector<pl>vlp;
typedef    set<ll>sl;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;



class Solution {
public:
    vl generate(int numRows) {
        vll ans;
        ll n = numRows;

        forn(i,1,n+1)
        {
            vl xx;
            forn(j,0,i)
            {
                //printf("%d ",j);
                if(i==1)
                    xx.pb(1);
                else
                {
                   if(j>0 && j<i-1)
                   {
                       xx.pb(ans[i-2][j-1]+ans[i-2][j]);
                   }
                   else
                    xx.pb(1);

                }
               // printf("j--  %d   xx-- %d\n",j,xx[xx.size()-1]);
            }
            ans.pb(xx);
           // cout<<endl;

        }

        return ans[n-1];
    }


    vector<int> getRow(int rowIndex) {

        rowIndex++;
        vl vc = generate(rowIndex);

        return vc;
    }
};







int main()
{

    fio
    Solution obj;
    int n;
    vl ans;

    cin>>n;


    ans = obj.getRow(n);

    forn(i,0,ans.size())
    cout<<ans[i]<<" ";
    cout<<el;









    return 0;
}





