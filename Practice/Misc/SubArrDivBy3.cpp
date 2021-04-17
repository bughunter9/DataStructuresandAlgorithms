#include<bits/stdc++.h>
using namespace std;

// Check if a subarray of size K, exists in the array such that 
// elements in the subarray form a number divisible by 3

// Take sum of first K elements , then keep adding from front and subtracting from back
// If number divisible by 3, print the elements

void SubArrDivBy3(vector<int> arr, int n)
{
	pair<int , int> ans;
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		sum += arr[i];
	}
	bool found = false;
	if(sum % 3 == 0)
	{
		ans = make_pair(0,n-1);
		found = true;
	}
	for(int i=n;i<arr.size();i++)
	{
		if(found)
		{
			break;
		}
		sum += arr[i] - arr[i-n];
		if(sum % 3 == 0)
		{
			found = true;
			ans = make_pair(i-n+1,i);
		}
	}

	if(!found)
	{
		ans = make_pair(-1,0);
	}
	if(ans.first == -1)
	{
		cout <<"Not Found"<<endl;
	}
	else
	{
		for(int i=ans.first;i<=ans.second;i++)
		{
			cout<<arr[i]<<" ";	
		}
		cout<<endl;
	}
}


int main()
{
	vector<int> arr={84,23,4
		5,12,56,82};
	SubArrDivBy3(arr,3);
}