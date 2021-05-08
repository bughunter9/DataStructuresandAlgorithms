#include<bits/stdc++.h>
using namespace std;

// Indian Coin Change Problem to achieve an amount with least number of denominations

int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	int x;
	cin>>x;
	sort(a.begin(), a.end(), greater<int>());
	// greater<int>() is passed to sort in decreasing order
	int ans=0;

	// 208 => 4
	for(int i=0;i<n;i++)
	{
		ans += x/a[i];
		x = x % a[i];
	}
	cout<<ans<<endl;
}