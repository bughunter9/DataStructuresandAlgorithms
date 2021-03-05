#include <bits/stdc++.h>
using namespace std;

// To get maximum value within some weight

int knapsack(int val[],int wt[],int n,int W)
{
	if(n==0 || W==0)
	{
		return 0;
	}
	if(wt[n-1]>W)
	{
		return knapsack(val,wt,n-1,W);
	}
    return max(knapsack(val, wt, n - 1, W - wt[n - 1]) + val[n - 1], knapsack(val, wt, n - 1, W));
}

int main()
{
	int weight[]={10,20,30,40,50};
	int value[]={100,50,150,175,200};
	int n=5;
	int W=90;

	cout<<knapsack(value,weight,n,W)<<endl;

}