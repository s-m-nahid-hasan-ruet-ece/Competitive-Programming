

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

    ll dp[sz];
    vl vc;
    void init()
    {
       forn(i,0,sz)
          dp[i] = 1*1e8;
    }

    ll solve(ll i)
    {
        printf("i--  %lld\n",i);
        if(i+1>=vc.size())
            return 0;

        if(dp[i]!=1*1e8)
            return dp[i];

        ll ans1=1e8,ans2=0;


        forn(j,1,vc[i]+1)
        {
           ans1 = min(ans1,1+solve(i+j));
           printf("i--  %d   ans1-- %d sol--  %d\n",i,ans1,1+solve(i+j));

        }


        dp[i] = ans1;
        return dp[i];
    }
    int jump(vector<int>& nums) {

        init();
        cout<<dp[0]<<el;

        forn(i,0,nums.size())
        vc.pb(nums[i]);

        ll ans = solve(0);

        return ans;
    }
};






int main()
{

    fio
    Solution obj;
    int n,m;
    int ans;
    vl vcc;

    cin>>n;
    forn(i,1,n+1)
    {
        cin>>ans;
        vcc.pb(ans);
    }

     ans = obj.jump(vcc);

    cout<<ans<<el;








    return 0;
}

/*
5
2 3 1 1 4

5
2 3 0 1 4

*/








