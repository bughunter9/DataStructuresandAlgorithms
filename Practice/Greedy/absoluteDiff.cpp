#include<bits/stdc++.h>
using namespace std;

// Input : 4  
// 12 -3 10 0
// For Max Difference
// Taking Difference of biggest and smallest element with a partition of n/2
// A: -3 0  B: 12 10 => 25
// For Min Difference
// Taking difference of nearby elements like { odd - even }
// A: -3 12  B: 0 10 => 5
// Output : 5 25
// 

int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a.begin(), a.end());
	long long minNum = 0 , maxNum = 0;
	for(int i=0;i<n/2;i++)
	{
		maxNum += (a[i+n/2] - a[i]);
		minNum += (a[2*i+1] - a[2*i]);
	}
	cout<<minNum<<" "<<maxNum<<endl;
}