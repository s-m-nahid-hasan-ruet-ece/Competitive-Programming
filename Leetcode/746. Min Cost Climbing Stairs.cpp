

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

    vl costs;
    int dp[1010];
    int n;

    void init()
    {
        memset(dp,-1,sizeof dp);
    }


    int solve(int i)
    {
             //   printf("i--  %d  dp--  %d  n--  %d\n",i,dp[i],n);

        if(i>=n)
            return 0;

        if(dp[i]!=-1)
            return dp[i];

        int ans1=0,ans2=0;

        ans1 = costs[i]+ solve(i+1);
        ans2 = costs[i] + solve(i+2);

        dp[i] = min(ans1,ans2);

        return dp[i];
    }


    int minCostClimbingStairs(vector<int>& cost) {

        forn(i,0,cost.size())
        {
            costs.pb(cost[i]);
        }
        n = costs.size();

        init();

        int ans  = solve(0);
        ans = min(ans,solve(1));

        return ans;
    }
};





int main()
{

    fio
    Solution obj;
    int n;
    int ans;
    vl vc;

    cin>>n;

    forn(i,0,n)
    {
        ll x ;
        cin>>x;
        vc.pb(x);
    }

    ans = obj.minCostClimbingStairs(vc);

    cout<<ans<<el;









    return 0;
}





