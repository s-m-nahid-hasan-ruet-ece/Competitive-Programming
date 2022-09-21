

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
typedef    vector<vl>vlv;
typedef    vector<pl>vlp;
typedef    set<ll>sl;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;

class Solution {
public:
    vlv vc;
    ll n;
    ll dp[201][201];

    ll solve(ll i,ll j)
    {
        if(i>=n)
         return 0;


        if(dp[i][j]!=-1)
            return dp[i][j];

        ll ans1=0, ans2=0;

        ans1 = vc[i][j]+solve(i+1,j);
        ans2 = vc[i][j]+solve(i+1,j+1);

        dp[i][j]= min(ans1,ans2);

        return dp[i][j];

    }
    int minimumTotal(vector<vector<int>>& triangle) {
       vc = triangle;
       n = triangle.size();
       memset(dp,-1,sizeof dp);

       ll ans = solve(0,0);


       return ans;
    }
};

int main()
{

    fio
    Solution obj;
    ll n;
    ll ans;
    vlv vc;
    cin>>n;

    forn(i,0,n)
    {
        vl vcc;
        forn(j,0,i+1)
          {
              cin>>ans;
              vcc.pb(ans);
          }
        vc.pb(vcc);
    }

    ans=  obj.minimumTotal(vc);

    cout<<ans<<el;


    return 0;
}










