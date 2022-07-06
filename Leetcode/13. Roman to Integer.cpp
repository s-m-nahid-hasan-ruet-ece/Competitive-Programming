#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {

        int num = 0;
       // cout<<s<<endl;
        for(int i =0 ;i<s.size();i++)
        {
           int cnt = 1;
           int x;

           if(s[i]=='I')
           	 x = 1;
           if(s[i]=='V')
           	 x = 5;
           if(s[i]=='X')
           	 x = 10;
           if(s[i]=='L')
           	 x = 50;
           if(s[i]=='C')
           	 x = 100;
           if(s[i]=='D')
           	 x = 500;
           if(s[i]=='M')
           	 x = 1000;


           while(i+1<s.size() && s[i]==s[i+1])
           {
           	 cnt++;
           	 i++;
           	// printf("i--  %d  s--  %c\n",i,s[i] );
           }

           if(cnt>1)
           {
           	 num+= cnt*x;
           }
           else
           {
           	 if(i<s.size() && x==1 && (s[i+1]=='V' || s[i+1]=='X'))
           	 	num -= x;
           	 else if(i<s.size() && x==10 && (s[i+1]=='L' || s[i+1]=='C'))
           	 	num -= x;
           	 else if(i<s.size() && x==100 && (s[i+1]=='D' || s[i+1]=='M'))
           	 	num -= x;
             else
                num += x;
           }

         //  i--;
           //	 printf("i--  %d  num--  %d\n",i,num );

        }

       // cout<<num<<endl;

        return num;
    }

};


int main()
{
	Solution obj;
	string str;

	cin>>str;
	int ans = obj.romanToInt(str);
	cout<<ans<<endl;
}
