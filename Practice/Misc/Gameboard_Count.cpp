#include <bits/stdc++.h>
using namespace std;


//No of ways to reach to the end of the gamebaord


int countPath(int start,int end)
{
	if(start==end)
	{
		return 1;
	}
	if(start>end)
	{
		return 0;
	}

	int count=0;
	for(int i=1;i<=6;i++)
	{
		count += countPath(start+i,end);
	}
	return count;
}
// 0 3	0 
// 1 3	1
// 2 3	2	1+1+2=4
// 3 3	1
//		4

int main()
{
	cout<<countPath(0,4)<<endl;
}