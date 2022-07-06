

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

ll bad;
// The API isBadVersion is defined for you.
 bool isBadVersion(int version)
 {
     if(version<bad)
        return false;
     else
        return true;

 }

class Solution {
public:
    int firstBadVersion(int n) {
        long long int lo = 1, hi = n;
        long long int mid;

        while(lo<=hi)
        {

            mid =(lo+hi)/2;
            printf("lo--  %d hi --  %d  mid-- %d  isbad-- %d\n",lo,hi,mid,isBadVersion(mid));

            if(hi==lo)
                break;
            if(isBadVersion(mid)==false)
                lo = mid+1;
            else
                hi = mid;
        }

        return (int)mid;

    }
};







int main()
{

    fio
    Solution obj;
    int n,m;
    int ans;
    cin>>n>>m;

    bad = m;

    ans = obj.firstBadVersion(n);

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



lo+hi = 5

mid = 2

x = 3

1 2
2 5


*/




