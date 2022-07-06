#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

       vector<int>vc;
       vector<vector<int>>ans;
       unordered_map<int,int>mp;
       map<vector<int>,int>mpp;

       if(nums.size()<3)
        return ans;


       for(int i=0;i<nums.size();i++)
       {
           if(mp[nums[i]]==0)
            vc.push_back(nums[i]);
           mp[nums[i]]++;
       }


       for(int i =0;i<vc.size();i++)
       {
           for(int j =i;j<vc.size();j++)
           {
               int x= vc[i]+vc[j];

               if(mp[0-x]!=0)
               {
                   vector<int>xx;

                   if(vc[i]==vc[j] && vc[i]==0)
                   {
                     //  printf("mp---  %d\n",mp[0]);
                       if(mp[0]>=3)
                       {
                       xx.push_back(0);
                       xx.push_back(0);
                       xx.push_back(0);

                      if(mpp[xx]==0)
                        {
                            ans.push_back(xx);
                            mpp[xx]=1;
                        }

                       }
                       else
                        continue;

                   }

                   else if(((vc[i]==-1*x || vc[j]==-1*x) && mp[-1*x]>=2) || ((vc[i]!=-1*x && vc[j]!=-1*x)))
                   {
                      xx.push_back(vc[i]);
                      xx.push_back(vc[j]);
                      xx.push_back(-1*x);
                      sort(xx.begin(),xx.end());

                      if(mpp[xx]==0)
                        {
                            ans.push_back(xx);
                            mpp[xx]=1;
                        }
                   }
               }
           }
       }



       return ans;

    }
};

int main()
{
	Solution obj;
	int x,n;
	cin>>n;
	vector<int>vc;
	vector<vector<int>>ans;

    for(int i =0;i<n;i++)
	{
	    cin>>x;
	    vc.push_back(x);
	}
	ans = obj.threeSum(vc);

	for(int i =0;i<ans.size();i++)
    {
        for(int j =0;j<3;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

