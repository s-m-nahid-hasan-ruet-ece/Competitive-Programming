


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



class Solution {
public:

    int dp[50];
    int N;

    void init()
    {
        memset(dp,-1,sizeof dp);
    }

    int solve(int i)
    {
        if(i>=N)
            return 1;

        if(dp[i]!=-1)
            return dp[i];

        int ans1=0,ans2=0;

        if(i+1<=N)
        ans1+=solve(i+1);
        if(i+2<=N)
        ans2+=solve(i+2);

        dp[i]=ans1+ans2;
        return dp[i];
    }



    int climbStairs(int n) {

        N = n;
        init();
        ll r = solve(0);
        return r;


    }
};







int main()
{

    fio
    Solution obj;
    int n;
    int ans;
    cin>>n;

    ans = obj.climbStairs(n);

    cout<<ans<<el;








    return 0;
}





