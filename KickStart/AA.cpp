#include<bits/stdc++.h>
using namespace std;


//vector<vector<int>>
class Solution {
public:
     void threeSum(vector<int>& nums) {

        vector<int>vc1, vc2;
        vector<vector<int>>answer;

        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]>=0)
                vc1.push_back(nums[i]);
            if(nums[i]<0)
                vc2.push_back(nums[i]);
        }

        sort(vc1.begin(),vc1.end());
        sort(vc2.rbegin(),vc2.rend());

        int ind1=0, ind2=0;

        while(1)
        {
            int f =0;
            if(ind1<vc1.size() && ind1+1<vc1.size() && ind2<vc2.size())
            {
               if(vc1[ind1]+vc1[ind1+1]+vc2[ind2]==0)
               {
                   vector<int>xx;
                   xx.push_back(vc1[ind1]);
                   xx.push_back(vc1[ind1+1]);
                   xx.push_back(vc2[ind2]);
                   answer.push_back(xx);
                   ind1+=2;
                   ind2++;
                   f = 1;
               }
            }

            else if(ind2<vc2.size() && ind2+1<vc2.size() && ind1<vc1.size())
            {
               if(vc1[ind1]+vc2[ind2+1]+vc2[ind2]==0)
               {
                   vector<int>xx;
                   xx.push_back(vc1[ind1]);
                   xx.push_back(vc2[ind2+1]);
                   xx.push_back(vc2[ind2]);
                   answer.push_back(xx);
                   ind2+=2;
                   ind1++;
                   f = 1;
               }
            }

            if(!f)
                break;
        }

        for(int i=0;i<answer.size();i++)
        {
           vector<int>xx;

           xx = answer[i];
           cout<<xx[0]<<" "<<xx[1]<<" "<<xx[2]<<endl;


        }

    }
};


int main()
{
	Solution obj;
	int x;
	vector<int>vc;
    int n;
    cin>>n;
    for(int i =0;i<n;i++)
	  {
	      cin>>x;
	      vc.push_back(x);
	  }
	 obj.threeSum(vc);

}
