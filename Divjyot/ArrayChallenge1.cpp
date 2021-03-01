#include<bits/stdc++.h>
using namespace std;
//Array challenge 1 Max till i
int main()
{
    int n;
    cin >> n;
    int array[n];
    int maxNo = INT_MIN;
    for (int i = 0; i < n;i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n;i++)
    {
        maxNo = max(maxNo, array[i]);

        cout << maxNo << endl;
    }
}