#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int target;
	cin>>target;
	vector <int> a(n);
	for(auto &i: a)
		cin>>i;
	bool found=false;
	sort(a.begin(), a.end());
	for(int j=0;j<n;j++)
	{
		int low=j+1;
		int high=n-1;
		while(low<high)
		{
			int current=a[j]+a[low]+a[high];
			if(target==current)
			{
				found=true;
			}
			if(current<target)
			{
				low++;
			}
			else 
			{
				high--;
			}
		}
	}
	if(found)
	{
		cout<<"True"<<endl;
	}
	else
	{
		cout<<"False"<<endl;
	}
	return 0;

}