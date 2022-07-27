
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

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {

   sort(A.rbegin(),A.rend());

   ll s= 0,cnt = 0;
   double ar[A.size()+10];
   for(int i =0 ;i<A.size();i++)
   {
       s+=A[i];
       ar[i]=A[i];
   }
   double s1 = s;
   for(int i =0;i<A.size(); )
   {
       s1-=ar[i];
       ar[i] = (ar[i]/2.0);
       s1+=ar[i];
       cnt++;
       //cout<<"cnt--"<<cnt<<el;

       if(s1*2<=s)
        break;
       if(ar[i]<ar[i+1])
        i++;
   }



   return cnt;



}


int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

   // tst
    {
        vl vc1,vc2;

        cin>>n;
        forn(i,0,n)
        {

            cin>>a;
            vc1.pb(a);
        }


    	ll r = solution(vc1);
    	cout<<r<<el;


    }


    return 0;
}





