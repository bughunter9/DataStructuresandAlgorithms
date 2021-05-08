#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	map<int,int>cn;
	int prefSum=0;
	for(int i=0;i<n;i++)
	{
		prefSum += a[i];
		cn[prefSum]++;
	}

	int ans=0;
	map<int,int> :: iterator it;

	for(it=cn.begin();it!=cn.end();it++)
	{
		int c = it->second;
		ans += (c*(c-1))/2;
		if(it->first == 0)
		{
			ans += it->second;
		}
	}
	cout<<ans<<endl;
}