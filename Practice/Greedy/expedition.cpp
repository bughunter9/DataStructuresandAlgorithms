#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		vector<pair<int,int>> a(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i].first>>a[i].second;
		}
		int totalDist, initialFuel;
		cin>>totalDist>>initialFuel;

		for(int i=0;i<n;i++)
		{
			a[i].first = totalDist - a[i].first;
		}
		sort(a.begin(),a.end());
		int ans=0;
		int currFuel=initialFuel;

		priority_queue<int, vector<int>> maxheap;
		bool flag=0;
		for(int i=0;i<n;i++)
		{
			if(currFuel > totalDist)
			{
				break;
			}
			while(currFuel < a[i].first)
			{
				if(maxheap.empty())
				{
					flag=1;
					break;
				}
				ans++;
				currFuel += maxheap.top();
				maxheap.pop();
			}
			if(flag)
			{
				break;
			}
			maxheap.push(a[i].second);
		}
		if(flag)
		{
			cout<<"-1"<<endl;
			continue;
		}
		while(!maxheap.empty() && currFuel<totalDist)
		{
			currFuel += maxheap.top();
			maxheap.pop();
			ans++;
		}
		if(currFuel <  totalDist)
		{
			cout<<"-1"<<endl;
			continue;
		}
		cout<<ans<<endl;
	}
}