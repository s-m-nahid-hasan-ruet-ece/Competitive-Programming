

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

    ll dp[sz][2];
    vl vc;

    void init()
    {
        forn(i,0,vc.size()+10)
        {
            dp[i][0] = -1*(1e9);
            dp[i][1] = -1*(1e9);
        }
    }

    ll solve(ll i, ll f)
    {
        if(i==vc.size())
            return 1;

        if(dp[i][f]!=-1*(1e9))
            return dp[i][f];
        ll ans1 = 1, ans2= 1;

        ans1 = vc[i] * solve(i+1,f);

        if(f!=1)
          ans2 = solve(i+1,1);

        printf("i--  %d f--  %d  ans1--  %d  ans2--  %d\n",i,f,ans1,ans2);
        dp[i][f] = max(ans1,ans2);
        return dp[i][f];
    }

    int maxProduct(vector<int>& nums) {

        forn(i,0,nums.size())
        vc.pb(nums[i]);

        init();

        ll ans = solve(0,0);

        return ans;

    }
};



/*


class Solution {
public:

    ll dp[sz];


    void init()
    {
        forn(i,0,vc.size()+10)
        {
            dp[i] = -1*(1e9);
        }
    }

    int maxProduct(vector<int>& nums) {



        ll curProduct = 1, ans=-1*1e9;

        dp[0] = nums[0];

        forn(i,1,nums.size())
        {
          dp[i] =
        }

        return ans;

    }
};








class Solution {
public:
    int maxProduct(vector<int>& nums) {

        ll curProduct = 1, ans=-1*1e9;

        forn(i,0,nums.size())
        {
            curProduct*=nums[i];

            if(curProduct>ans)
                ans = curProduct;
            if(curProduct<0)
                curProduct = 1;
        }

        return ans;

    }
};



class Solution {
public:

    ll dp[sz][2];
    vl vc;

    void init()
    {
        forn(i,0,vc.size()+10)
        {
            dp[i][0] = -1*(1e9);
            dp[i][1] = -1*(1e9);
        }
    }

    ll solve(ll i, ll f)
    {
        if(i==vc.size())
            return 1;

        if(dp[i][f]!=-1*(1e9))
            return dp[i][f];
        ll ans1 = 1, ans2= 1;

        ans1 = vc[i] * solve(i+1,f);

        if(f!=1)
          ans2 = solve(i+1,1);

        printf("i--  %d f--  %d  ans1--  %d  ans2--  %d\n",i,f,ans1,ans2);
        dp[i][f] = max(ans1,ans2);
        return dp[i][f];
    }

    int maxProduct(vector<int>& nums) {

        forn(i,0,nums.size())
        vc.pb(nums[i]);

        init();

        ll ans = solve(0,0);

        return ans;

    }
};
*/



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

    ans = obj.maxProduct(vc);
    cout<<ans<<el;

    return 0;
}





