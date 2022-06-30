
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
typedef    vector<char>vl;
typedef    vector<pll>vll;
typedef    vector<pl>vlp;
typedef    set<ll>sl;
typedef    multiset<ll>msl;
typedef    priority_queue<ll>prl;

const ll mod=1000000007;
ll n;

string strSub(string t, string s)
{
	string str= "";
	
	reverse(t.begin(),t.end());
	reverse(s.begin(),s.end());
    
    ll cr = 0;
    
   // cout<<"t--  "<<t<<"  s-- "<<s<<el;
    
    forn(i,0,t.size())
    {
      if(i<n)
      {
        
        ll x, y;
        
        x = s[i] - '0' + cr;           
        y = t[i] - '0';
        //cout<<"s--  "<<s[i]<<"  cr--  "<<cr<<el;
        cr = 0;
        if(y<x)
        {
            cr = 1;
            y+=10;
        }
    
        
        str+= '0' + (y - x);
        
        //printf("i--  %lld   %lld\n",i,(y - x));
      }
      else
      {
        // printf("cr-- %lld \n", cr);
         ll x, y;
         y = t[i]-'0';
         x = cr;
         cr = 0;
         
         if(x!=0)
         {
            if(x>y)
              {
                y+=10;          
                cr = 1;
              }
              
            str+= '0'+ (y-x);
           // printf("i--- %lld  %c\n",i, '0'+ (y-x));
         }
         else
            {
                str+= t[i];        
               // printf("i-- %lld  %c\n",i,t[i] );
           }
        
        
      }
        
    }
    
    
    
	
	
    reverse(str.begin(),str.end());
    
    
	return str;
}

int main()
{

    fio

    ll t,i,j,m,k,a,b,c=0,tc=1,bug1=1;

    tst
    {
        
        
    	cin>>n;
    	string s, str = "", str1 = "";
    	
    	cin>>s;
        
        forn(i,0,n+1)
        str+='1';
        
        forn(i,0,n)
        str1+='9';
        
        string ss  = strSub(str,s);
        string ss1 = strSub(str1,s);
        
        
        
        vl vc1,vc2;
        
        ll f= 0;
        for(i = 0;ss[i]!='\0';i++)
        {
            if(ss[i]!='0')
                f = 1;
            
            if(f==0 && ss[i]=='0')
                continue;
            else
                vc1.pb(ss[i]);
            
        }
        
        f= 0;
        for(i = 0;ss1[i]!='\0';i++)
        {
            if(ss1[i]!='0')
                f = 1;
            
            if(f==0 && ss1[i]=='0')
                continue;
            else
                vc2.pb(ss1[i]);
            
        }
        
        
        if(vc1.size()==n)
        {
            forn(i,0,n)
             cout<<vc1[i];
             cout<<el;
        }
    	else
        {
            forn(i,0,n)
              cout<<vc2[i];
              
              cout<<el;
        }
        
    

    }


    return 0;
}



