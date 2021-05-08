#include<bits/stdc++.h>
using namespace std;

// Fractional Knapsack : Using the concept of greedy, find value per unit weight
// and sort in decreasing order

bool compare(pair<int,int> v1, pair<int,int> v2)
{
	double val1=(double) v1.first/v1.second;
	double val2=(double) v2.first/v2.second;
	return val1 > val2;
}

int main()
{
	int n;
	cin>>n;
	vector<pair<int,int>> a(n);

	for(int i=0;i<n;i++)
	{
		cin>>a[i].first>>a[i].second;
	}
	sort(a.begin(),a.end(),compare);
	int weight;
	cin>>weight;

	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(weight >= a[i].second)
		{
			ans += a[i].first;
			weight -= a[i].second;
			continue;
		}
		double valuePerUnit=(double) a[i].first/a[i].second;
		ans += valuePerUnit*weight;
		weight=0;
		break;
	}
	cout<<ans<<endl;
}