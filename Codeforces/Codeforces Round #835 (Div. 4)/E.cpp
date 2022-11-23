
/*
     Author's Handle : Crazy_Dreamer
     Author's Name   : S M Nahid Hasan                
*/

#include<bits/stdc++.h>
using namespace std;

#define ll               long long
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

int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

    tst
    {
    	cin>>n;
    	
    	ll ar[n];
    	
    	forn(i,0,n)
    	cin>>ar[i];
    	
        
        
        ll ans1=0, cnt = 0, ans2=0, ans3 = 0;
        ll ind=-1;

         for(i = n-1;i>=0;i--)
        {
            if(ar[i]==0)
                cnt++;
            else
                ans3+=cnt;
        }        
        
        cnt = 0;
        
        forn(i,0,n)
        {
            if(ar[i]==0)
            {
                ar[i]=1;
                ind = i;
                break;
            }
        }
        
        
         for(i = n-1;i>=0;i--)
        {
            if(ar[i]==0)
                cnt++;
            else
                ans1+=cnt;
        }
        if(ind!=-1)
        ar[ind]=0;
        cnt = 0;
        
        for(i= n-1;i>=0;i--)
        {
            if(ar[i]==1)
            {
                ar[i]=0;
                break;
            }
        }

        
         for(i = n-1;i>=0;i--)
        {
            if(ar[i]==0)
                cnt++;
            else
                ans2+=cnt;
        }
        
        
    
    
       
        cout<<max(ans1,max(ans3,ans2))<<el;

    }


    return 0;
}



/*


10000100  8
11000100  12


1111110  6

1111100  10

1111010


*/