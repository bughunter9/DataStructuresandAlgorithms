#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
			cin>>a[i]; // -9 5 0 3 2 
	}

	int currentSum=0;
	int maxe=INT_MIN;
	for(int i=0;i<n;i++)
	{
		currentSum+=a[i];
		if(currentSum<0)
		{
			currentSum=0;
		}
		maxe=max(maxe,currentSum);
	}
	cout<<maxe<<endl;
	return 0;
}