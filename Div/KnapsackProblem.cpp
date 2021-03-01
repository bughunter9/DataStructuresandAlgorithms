#include<bits/stdc++.h>
using namespace std;

int knapsack(int val[],int wt[],int n,int W)
{
    if(n==0 || W==0)
    {
        return 0;
    }
    if(wt[n-1]>W)
    {
        return knapsack(val, wt, n - 1, W);
    }
    return max(knapsack(val, wt, n - 1, W - wt[n - 1]) + val[n - 1], knapsack(val, wt, n - 1, W));
}
int main()
{
    int wt[] = {10, 20, 30};
    int val[] = {100, 50, 150};
    int W = 50;
    int n = 3;
    cout << knapsack(val, wt, n, W);
}