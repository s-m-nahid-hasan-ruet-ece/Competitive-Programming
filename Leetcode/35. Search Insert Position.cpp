

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
    int searchInsert(vector<int>& nums, int target) {

        int lo=0,hi=nums.size()-1,mid;

        while(lo<=hi)
        {

            mid = (lo+hi)/2;
          //  printf("lo--  %d  hi--  %d  mid-- %d\n",lo,hi,mid);

            if(lo==hi)
                break;

            int flag =0;

            if(nums[mid]<target)
            {
                lo = mid+1;
                flag = 1;
            }
            else if(nums[mid]>target)
            {
                hi = mid;
                flag = 1;
            }

            if(!flag)
                break;
        }

        if(mid==nums.size()-1 && nums[mid]!=target && nums[mid]<target)
            mid++;




        return mid;

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

    ans = obj.searchInsert(vc,m);

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

4 2
1 3 5 6

*/




