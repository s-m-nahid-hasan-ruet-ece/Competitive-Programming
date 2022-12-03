#include<iostream>
#include<map>
using namespace std;

bool OneAway(string s1, string s2)
{
	map<char,int>map1, map2;
	string str1,str2;

	if(s1.size()>s2.size())
	{
		str1= s1;
		str2= s2;
	}
	else
	{
		str1= s2;
		str2= s1;
	}

	for(int i = 0;i<str1.size();i++)
		map1[str1[i]]++;

	for(int i = 0; i<str2.size();i++)
		map2[str2[i]]++;

    int cnt = 0;

	for(auto I = map1.begin();I!=map1.end();I++)
	{
		char ch = I->first;
		int x = I->second;
		cnt+= abs(map1[ch]-map2[ch]);
        map2[ch]=0;

	}

	for(auto I = map2.begin();I!=map2.end();I++)
	{
		char ch = I->first;
		cnt+=map2[ch];
	}


   if(cnt<=1 || (s1.size()==s2.size() && cnt==2))
   	return true;
   else
   	return false;


}

int main()
{
	string str1,str2;

	cin>>str1>>str2;

	bool r = OneAway(str1,str2);

	cout<<r<<endl;
}
