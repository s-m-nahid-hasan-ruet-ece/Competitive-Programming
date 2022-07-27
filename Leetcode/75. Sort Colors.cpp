
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

    void sortNums(vector<int>& nums)
    {
        forn(i,0,nums.size()-1)
        {
            forn(j,i+1,nums.size())
            {
                if(nums[j]<nums[i])
                   {
                       ll x= nums[i];
                       nums[i]= nums[j];
                       nums[j]=x;
                   }
            }
        }

    }

    void sortColors(vector<int>& nums) {

        sortNums(nums);

    }
};

int main()
{

    fio
    Solution obj;
    int n,t,x;
    vl ans;
    vl vc1,vc2;

    cin>>n;
    forn(i,0,n)
    {
        cin>>x;
        vc1.pb(x);
    }


    obj.sortColors(vc1);










    return 0;
}







