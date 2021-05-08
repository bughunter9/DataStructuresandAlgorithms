#include<bits/stdc++.h>
using namespace std;

// Activity Selection Concept

// Given n activities , given a start time and end time, how many activites can you perform
// You can perform 1 activity at a time
// Sort the activities as per end times,the activity which gets over earlier that is which takes less time
// This way you will be able to perform max number of activities

int main()
{
	int n;
	cin>>n;
	vector<vector<int>> v;
	for(int i=0;i<n;i++)
	{
		int start,end;
		cin>>start>>end;
		v.push_back({start,end});
	}	

	sort(v.begin(),v.end(),[&](vector<int> &a,vector<int> &b)
	{
		return a[1] < b[1];
	});

	int actTake = 1;
	int smallerActEndTime = v[0][1];
	for(int i=0;i<n;i++)
	{
		if(v[i][0] >= smallerActEndTime)
		{
			actTake++;
			smallerActEndTime = v[i][1];
		}
	}
	cout<< actTake <<endl;

}
