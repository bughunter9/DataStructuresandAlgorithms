#include<bits/stdc++.h>
using namespace std;
//to calculate the index of first repeating element
int main()
{
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    const int N = 1e6 + 2;
    int minIdx = INT_MAX;
    int idx[N];

    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        if(idx[array[i]]!=-1)
        {
            minIdx = min(minIdx, idx[array[i]]);
        }
        else
        {
            idx[array[i]]=i;
        }
        
    }
    if(minIdx==INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minIdx+1 << endl;
    }
    
}