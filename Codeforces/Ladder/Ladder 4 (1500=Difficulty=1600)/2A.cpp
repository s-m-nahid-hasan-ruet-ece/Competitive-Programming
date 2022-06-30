
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



typedef    pair<string,ll>pll;
typedef    pair<ll,pll>pl;
typedef    map<string,ll>mll;
typedef    vector<string>vs;
typedef    vector<pll>vll;
typedef    vector<ll>vl;
typedef    vector<pl>vlp;
typedef    set<string>sl;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;
typedef    deque<string>dq;

const ll mod=1000000007;

int main()
{

   // fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

    //tst
    {
    
    mll mp;
    mll cnt;
    dq order;
    vll vc;
    vl vcc;
    ll mx = 0;
    string winner;
    cin>>n;
    
    forn(i,0,n)
    {
    	string st;
    	cin>>st>>a;
        
        vc.pb(pll(st,a));
      
    	
    	mp[st]+=a;
        vcc.pb(mp[st]);
    	if(mx<mp[st])
    	{
    		mx = mp[st];
    		winner = st;
    	}    	
    }	
    
    ll mx2= 0;
    string winner2;
    ll f = 1;
    ll player = 0;
    
    
    if(mp[winner]!=mx)
        f = 0;
    
    
    for(auto I = mp.begin();I!=mp.end();I++)
    {
        if(I->second > mx2)
        {
            mx2 = I->second;
            winner2 = I->first;                        
        }
        
        player++;
        
    }
    
    
    string finalWinner="";
    ll id;
    mll flag;
    vs winners;
    
 //  printf("mx2--  %lld  f--  %lld\n",mx2,f );
    
    if(f==0)
    {
        for(i=vcc.size()-1;i>=0;i--)
        {
            if(vcc[i]==mx2 && flag[vc[i].first]==0)
            {
                finalWinner= vc[i].first;
                winners.pb(vc[i].first);
               // cout <<"ans: "<<vc[i].first<<el;
                          //  cout<<vc[i].first;
              //  printf("  vcc--  %lld  flag--  %lld \n", vcc[i], flag[vc[i].first] );
                flag[vc[i].first]=1;                                
            }
            else
                {
                    if(flag[vc[i].first]==0)
                       flag[vc[i].first]=2;                                
                }
            
            
        }
        forn(i,0,vcc.size())
        {
            if(flag[vc[i].first]==1 && vcc[i]>=mx2)
            {
             // printf("i--- %lld  vcc--  %lld  ",i,vcc[i] );
           //   cout<<vc[i].first<<el;
               finalWinner = vc[i].first;
               break;
            }
        }
        
        
    }
    
    
    
    
    
    if(mx == mx2 && f)
      cout<<winner<<el;
    else
      cout<<finalWinner<<el;
    	


    }


    return 0;
}


/*

5
andrew 3
andrew 2
mike 5
mike -2
andrew -2


*/
