#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int Math(int num)
{
    
    vector<int>v;
    
    
    
    while(num)
    {
        int x,y;
        
        x = num%10;
        num/=10;
        y = num%10;
        
        v.push_back(y*10+x);
    }
    
    
    sort(v.rbegin(),v.rend());
    
    return v[0];
    
}

int main()
{
    
    int n;
    cin>>n;
    
    cout<<Math(n)<<endl;
}