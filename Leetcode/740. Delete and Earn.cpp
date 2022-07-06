

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
    mll mp;
    int dp[20010];
    vl vc;

    void init()
    {
        memset(dp,-1,sizeof dp);
    }

    int solve(int i)
    {
        if(i>=vc.size())
            return 0;

        if(dp[i]!=-1)
            return dp[i];

        int ans1=mp[vc[i]]*vc[i],ans2=0;

        if(i+1<vc.size() && vc[i+1]>1+vc[i])
           ans1 += solve(i+1);
        else if(i+2<vc.size() && vc[i+2]>1+vc[i])
           ans1 += solve(i+2);


        ans2 = solve(i+1);

        dp[i] = max(ans1,ans2);

        return dp[i];
    }

    int deleteAndEarn(vector<int>& nums) {

       init();

       forn(i,0,nums.size())
           {
               if(mp[nums[i]]==0)
                 vc.pb(nums[i]);
               mp[nums[i]]++;
           }
        sort(vc.begin(),vc.end());

       ll ans = solve(0);

       return ans;

    }
};







int main()
{

    fio
    Solution obj;
    int n;
    int ans;

    cin>>n;
    vl vc;

    forn(i,0,n)
    {
        cin>>ans;
        vc.pb(ans);
    }

    ans = obj.deleteAndEarn(vc);


    cout<<ans<<el;







    return 0;
}






