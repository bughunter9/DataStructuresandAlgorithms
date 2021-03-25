#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="abcabsidslacb";
	vector<int> dict(256,-1);
	int ans=0,start=-1;
	for(int i=0;i<s.size();i++)
	{
		if(dict[s[i]] > start)
		{
			start=dict[s[i]];
		}
		dict[s[i]]=i;
		ans=max(ans,i-start);
	}
	cout<<ans<<endl;
	// 10 12 11 8 6 7 9   
	// start=5
	// 7
}