

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
    vector<int> twoSum(vector<int>& numbers, int target) {

        mll mp;
        vl ans;

        forn(i,0,numbers.size())
        {
          //  cout<<" --  "<<numbers[i]<<el;
            mp[numbers[i]]= i+1;
        }
/*
        for(auto I = mp.begin();I!=mp.end();I++)
        {
            cout<<I->first<<"  --  "<<I->second<<el;
        }
*/

        forn(i,0,numbers.size())
        {
            if(mp[target-numbers[i]]!=0)
            {
                ans.pb(i+1);
                ans.pb(mp[target-numbers[i]]+1);
                break;
               // printf("i--  %d  mp--  %d\n",i,mp[target-numbers[i]]);
            }

        }


        return ans;

    }
};







int main()
{

    fio
    Solution obj;
    int n,m;
    int ans;
    vl vc;

    cin>>n>>m;
    vc.pb(0);
    forn(i,1,n+1)
    {
        cin>>ans;
        vc.pb(ans);
    }

    vl aans = obj.twoSum(vc,m);

    forn(i,0,aans.size())
    cout<<aans[i]<<" ";
    cout<<el;









    return 0;
}





