#include<iostream>
#include<list>
#include<bits/stdc++.h>
using namespace std;

list<int> MergeArray(int ar[], int br[], int n, int m)
{
    list<int> mergedArray;
    cout<<sizeof(ar)<<endl;

    for(int i = 0;i<n;i++)
        mergedArray.push_back(ar[i]);

    for(int i = 0;i<m;i++)
        mergedArray.push_back(br[i]);

    return mergedArray;

}

list<string> JoinString(string s[], int n)
{
    list<string> ss;

    for(int i = 0;i<n;i++)
        ss.push_back(s[i]);

    return ss;
}

int main()
{

    int n,m;

    cin>>n;
/*
    int ar[n];

    for(int i =0;i<n;i++)
        cin>>ar[i];

    cin>>m;
    int br[m];

    for(int i =0 ;i<m;i++)
        cin>>br[i];


    /// Should be referenced by address
    list<int> finalArray = MergeArray(ar,br,n,m);


    for(auto I = finalArray.begin();I!=finalArray.end();I++)
        cout<<*I<<" ";
        cout<<endl;
*/

    string s[n];

    for(int i = 0;i<n;i++)
    {
        cin>>s[i];
    }

    list<string> str = JoinString(s,n);

    for(auto I = str.begin();I!=str.end(); I++)
       cout<<*I<<endl;

}



