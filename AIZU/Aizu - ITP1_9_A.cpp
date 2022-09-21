
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
typedef    unordered_map<string,ll>mll;
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

    //tst
    {
    	
    	string s, str;
    	
    	cin>>s;
        cin.ignore();
        

        
        ll cnt =0;
    	
    	while(1)
    	{
    		getline(cin,str);
    		
            if(str=="END_OF_TEXT")
                break;
            
            string ss="";
            
            
            
            
            forn(i,0,str.size())
            {
                if(i+1==str.size() || str[i]==' ')
                {
                    if(i+1==str.size() && str[i]!=' ')
                    {
                        if(str[i]>='A' && str[i]<='Z')
                        ss+=(str[i]-'A')+'a';
                        else
                        ss+=str[i];
                    }
                    
                    if(s==ss)
                        cnt++;
                  //  cout<<"-- "<<ss<<el;
                    ss="";
                }
                else
                    {
                        if(str[i]>='A' && str[i]<='Z')
                        ss+=(str[i]-'A')+'a';
                        else
                        ss+=str[i];
                    }
            }
            
    	}
        
        cout<<cnt<<el;

    }


    return 0;
}



