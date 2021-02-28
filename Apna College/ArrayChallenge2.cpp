#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int array[n];
    int sum = 0;
    for (int i = 0; i < n;i++)
    {
        cin >> array[i];
    }

    //to compute the sum of all sub arrays
    for (int i = 0; i < n;i++)
    {
        sum = 0;
        for (int j = i; j < n;j++)
        {
            sum += array[j];
            cout << sum << endl;
        }
    }
}