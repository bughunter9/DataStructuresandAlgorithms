#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int maxe=INT_MIN;
	int day;

	for(int i=0;i<n;i++)
	{
		if(a[i]>a[i+1] && a[i]>maxe)
		{
			day=a[i];
		}
		maxe=max(maxe,a[i]);
	}
	cout<<maxe<<endl;

	return 0;
}