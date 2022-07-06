

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
    int search(vector<int>& nums, int target) {

        ll l=0, r = nums.size()-1;

        while(l<=r)
        {
            ll mid = (l+r)/2;
            //printf("l--  %d  r--  %d mid--  %d\n",l,r,mid);

            if(nums[mid]==target)
                return mid;

            if(nums[mid]>target)
            {
                r = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }

        return -1;

    }
};








int main()
{

    fio
    Solution obj;
    int n,m;
    int ans;
    cin>>n>>m;

    vl vc;

    forn(i,0,n)
    {
        cin>>ans;
        vc.pb(ans);
    }

    ans = obj.search(vc,m);

    cout<<ans<<el;









    return 0;
}

/*

7 9
-1 0 3 5 9 12 13

6 9
-1 0 3 5 9 12


6 2
-1 0 3 5 9 12

*/



