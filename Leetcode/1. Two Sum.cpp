
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


typedef    vector<ll>vl;
typedef    pair<ll,ll>pll;
typedef    pair<ll,pll>pl;
typedef    unordered_map<ll,ll>mll;
typedef    unordered_map<ll,vl>mlv;
typedef    vector<pll>vll;
typedef    vector<pl>vlp;
typedef    set<ll>sl;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        mll mp;
        mlv mp1;
        vl ans;

        forn(i,0,nums.size())
        {
            mp[nums[i]]++;
            mp1[nums[i]].pb(i);
        }
ll f= 0;
        forn(i,0,nums.size())
        {
            if((2*nums[i]==target && mp[nums[i]]>1))
            {
                f=1;
                ans.pb(mp1[nums[i]][0]);
                ans.pb(mp1[nums[i]][1]);
                break;
            }



            if(mp[target-nums[i]]!=0 && 2*nums[i]!=target)
            {
                f = 2;
                ans.pb(i);
                ans.pb(mp1[target-nums[i]][0]);
                break;
            }
        }

       // cout<<"F: "<<f<<el;

        return ans;


    }
};


int main()
{

    fio
    Solution obj;
    int n,t,x;
    vl ans;
    vl vc;

    cin>>n>>t;
    forn(i,0,n)
    {
        cin>>x;
        vc.pb(x);
    }

    ans = obj.twoSum(vc,t);

    forn(i,0,ans.size())
    cout<<ans[i]<<" ";
    cout<<el;









    return 0;
}





