
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
#define sz               1005



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

ll maxMat[sz][sz], allocatedMat[sz][sz], available[sz],neededMat[sz][sz];

int main()
{

    fio

    ll t,i,j,n,m,k,a,b,c=0,tc=1,bug1=1;

    printf("Enter the number of processes:\n");
    cin>>n;
    
    printf("Enter the number of resources:\n");
    cin>>m;
    
    
    printf("Enter the maximum resources matrix:\n");
    for(int i = 0;i<n;i++)
    {
    	for(int j= 0; j<m; j++)
    	{
    		cin>>maxMat[i][j];
    	}
    }
    
    printf("Enter the allocated resources matrix:\n" );
    for(int i = 0;i<n;i++)
    {
    	for(int j = 0;j<m;j++)
    	{
    		cin>>allocatedMat[i][j];
    	}
    }
    
    printf("Enter the available resources matrix:\n");
    for(int i = 0;i<m;i++)
    {
    	cin>>available[i];
    }
    
    
    
    for(int i=0;i<n;i++)
    {
    	for(int j = 0;j<m;j++)
    	{
    		neededMat[i][j]=  maxMat[i][j] - allocatedMat[i][j];
    	}
    }
    
    
    
    mll markDone;
    
    while(1)
    {
    	ll cntDone= 0;
    	for(int i=0;i<n;i++)
    	{
    		ll cnt= 0;
    		for(int j = 0;j<m;j++)
    		{
    			if(markDone[i]==0 && neededMat[i][j]<= available[j])
    			{
    				cnt++;
    				
    				if(cnt==m)
    				{
    					markDone[i] = 1;
    					cntDone++;
    					for(int p=  0;p<m;p++)
    					{
    						available[p]+= maxMat[i][p];
    					}
    					
    				}
    			}
    		}
    	}
    	if(cntDone==0)
    		break;
    	
    }
    
    
    vl vc;
    
    ll isDeadlock= 0;
    
    for(int i = 0;i<n;i++)
    {
    	if(markDone[i]==0)
    	{
    		isDeadlock= 1;
    		vc.pb(i);
    	}
    }
    
    if(isDeadlock)
    {
    	printf("Deadlock Processes: \n");
    	for(int i = 0;i<vc.size();i++)
    		cout<<vc[i]<<" ";
    	cout<<el;
    }
    else
    {
    	printf("No Deadlock Occured\n");
    }
    
    


    return 0;
}

/*

3
3
3 6 8
4 3 3
3 4 4
3 3 3
2 0 3
1 2 4
1 2 0


5
3
7 5 3
3 2 2
9 0 2
2 2 2
4 3 3
0 1 0 
2 0 0
3 0 2
2 1 1
0 0 2
3 3 2



*/

