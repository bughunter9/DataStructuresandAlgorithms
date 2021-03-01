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
	for(int i=0;i<n;i++)
	{
		maxe=max(maxe,a[i]);
	}
	cout<<maxe<<endl;

	return 0;
}