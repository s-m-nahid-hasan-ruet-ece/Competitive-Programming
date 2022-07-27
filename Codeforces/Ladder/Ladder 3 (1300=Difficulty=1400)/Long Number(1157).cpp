
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
typedef    vector<string>vls;
typedef    vector<pl>vlp;
typedef    set<ll>sl;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;

int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

    //tst
    {
    	string s;
    	cin>>n>>s;
    	
    	mll mp;
    	
    	forn(i,1,10)
    	{
    		cin>>a;
    		mp[i]=a;
           // printf("i-- %lld   mp--- %lld\n",i,mp[i] );
    	}
    	
        ll f=0,f1=0;
        string ss="";
    	forn(i,0,n)
        {
            if(f==0 && (s[i]-'0')<=mp[(s[i]-'0')])
            {
                ss+=mp[(s[i]-'0')]+'0';
                if((s[i]-'0')<mp[(s[i]-'0')])
                    f1 = 1;
            }
            else
                {
                    ss+=s[i];
                    if(f1==1)
                       f = 1;
                }
        }
        
        cout<<ss<<el;


    }


    return 0;
}



/*

3
347
1 1 4 5 1 1 1 1 1

6
347133
1 1 4 5 1 1 8 1 1

9
193787726
5 5 8 9 4 5 2 9 1

593787726

4
1234
1 1 4 5 1 1 1 1 1

1245

*/