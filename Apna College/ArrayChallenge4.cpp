#include<bits/stdc++.h>
using namespace std;
//to check whether a day is record breaking or not
int main()
{
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    if(n==1)
    {
        cout << "1" << endl;
        return 0;
    }
    int ans = 0;
    int maxNo = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (array[i]>maxNo && array[i]>array[i+1])
        {
            ans++;
        }
        maxNo = max(array[i], maxNo);

    }
    cout << ans << endl;
}