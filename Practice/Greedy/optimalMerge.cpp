#include<bits/stdc++.h>
#include<queue>
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
	//sort(a.begin(),a.end());
	// for(int i=0;i<n;i++)
	// {
	// 	cout<<a[i]<<" ";
	// }
	// cout<<endl;

	// queue<int> q;

	// for(int i=0;i<n;i++)
	// {
	// 	q.push(a[i]);
	// }
	// int ans=0;
	// while(q.size() > 1)
	// {
	// 	int val1 = q.front();
	// 	cout<<q.front()<<" ";
	// 	q.pop();
	// 	int val2 = q.front();
	// 	cout<<q.front()<<" ";
	// 	q.pop();

	// 	ans += val1 + val2;
	// 	q.push(val1 + val2);
	// }

	// priority_queue<datatype, container, to make minheap pass greater<int> 
	priority_queue<int, vector<int>, greater<int>> minheap;
	for(int i=0;i<n;i++)
	{
		minheap.push(a[i]);
	}
	int ans=0;
	while(minheap.size() > 1)
	{
		int val1 = minheap.top();
		cout<<minheap.top()<<" ";
		minheap.pop();
		int val2 = minheap.top();
		cout<<minheap.top()<<" ";
		minheap.pop();

		ans += val1 + val2;
		minheap.push(val1 + val2);
	}
	cout<<endl;
	cout<<ans<<endl;
	return 0;
}

