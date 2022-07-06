

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

    int dp[110][2];
    vl cost;


    void init()
    {
        memset(dp,-1,sizeof dp);
    }

    int solve(int i, int j)
    {
        if(i>=cost.size())
            return 0;
        if(i==cost.size()-1 && j==1 && i!=0)
            return 0;

        if(dp[i][j]!=-1)
            return dp[i][j];

        int ans1=0,ans2=0;

        ans1 = cost[i] + solve(i+2,j);

        if(i==0)
        ans2 = solve(i+1,0);
        else
        ans2 = solve(i+1,j);

        dp[i][j] = max(ans1,ans2);

        return dp[i][j];

    }

    int rob(vector<int>& nums) {

        forn(i,0,nums.size())
        cost.pb(nums[i]);

        init();

        int r = solve(0,1);
        return r;
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
        cin>>ans;
        vc.pb(ans);
    }



    ans = obj.rob(vc);

    cout<<ans<<el;









    return 0;
}

/*

5
2 7 9 3 1

5
7 5 3 9 1

6
7 1 1 9 2 10

*/




