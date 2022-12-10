#include<iostream>
#include<map>
using namespace std;

bool isUniqueWithDS(string s)
{
	map<char,int>charMap;
	bool ans = true;
	for(int i = 0 ;i<s.size();i++)
	{
		charMap[s[i]]++;
		if(charMap[s[i]]>1)
		{
			ans = false;
			break;
		}
	}

	return ans;
}

bool isUniqueWithoutDS(string s)
{
	bool ans = true;
	for(int i= 0;i<s.size();i++)
	{
		for(int j= i+1; j<s.size();j++)
		{
			if(s[i]==s[j])
			{
				ans = false;
				break;
			}
			if(!ans)
				break;
		}
	}

	return ans;
}


int main()
{
	string s;

	cin>>s;

	bool r = isUniqueWithDS(s);
	bool x = isUniqueWithoutDS(s);

	cout<<r<<endl;
	cout<<x<<endl;
}
