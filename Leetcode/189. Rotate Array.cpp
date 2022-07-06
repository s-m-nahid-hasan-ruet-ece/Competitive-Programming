

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
    void rotate(vector<int>& nums, int k) {

        vl vc1,vc2;
        k %=nums.size();

        forn(i,nums.size()-k,nums.size())
        vc1.pb(nums[i]);

        forn(i,0,nums.size()-k)
        vc2.pb(nums[i]);


        nums.clear();

        forn(i,0,vc1.size())
        nums.pb(vc1[i]);


        forn(i,0,vc2.size())
        nums.pb(vc2[i]);

       //return nums;

    }
};

int main()
{

    fio
    Solution obj;
    int n,m;
    vl ans;
    cin>>n>>m;

    vl vc;

    forn(i,0,n)
    {
        ll x ;
        cin>>x;
        vc.pb(x);
    }

    ans = obj.rotate(vc,m);

    forn(i,0,n)
    cout<<ans[i]<<" ";
    cout<<el;









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
///



