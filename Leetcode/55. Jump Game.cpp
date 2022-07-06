

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
typedef    vector<pll>vll;
typedef    vector<pl>vlp;
typedef    set<ll>sl;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;




class Solution {
public:
    vl vc;
    int dp[10010];

    void init()
    {
        memset(dp,-1,sizeof dp);
    }

    int solve(ll i)
    {
      if(vc.size()==1)
        return 1;

      ll mx = 0;
      forn(i,0,vc.size())
      {

         if(vc[i]!=0 && i<=mx)
          {
              mx = max(mx,vc[i]+i);
              //printf("mx--  %d\n",mx);

              if(vc[i]+i>=vc.size()-1)
                dp[vc.size()-1]=1;

          }
      }


      if(dp[vc.size()-1]==-1)
        return 0;
      else
        return 1;


    }

    bool canJump(vector<int>& nums) {

      forn(i,0,nums.size())
      {
          vc.pb(nums[i]);
      }

      init();

      ll ans = solve(0);

      //forn(i,0,vc.size())
      //printf("i--   %d   dp--  %d\n",i,dp[i]);



      if(ans)
        return true;
      else
        return false;

    }
};






int main()
{

    fio
    Solution obj;
    int n;
    bool ans;
    cin>>n;
    vl vc;

    forn(i,0,n)
    {
        ll x;
        cin>>x;
        vc.pb(x);
    }

    ans = obj.canJump(vc);

    cout<<ans<<el;









    return 0;
}

/*

5
2 3 1 1 4


5
3 2 1 0 4


8
3 4 2 1 0 1 2 3

7
3 0 8 2 0 0 1

*/





