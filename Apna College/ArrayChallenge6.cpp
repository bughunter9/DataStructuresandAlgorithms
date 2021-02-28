#include<bits/stdc++.h>
using namespace std;
//to find the index of the subarray equal to a given sum
int main()
{
    int n, s;
    cin >> n >> s;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int i = 0, j = 0, st = 0, en = 0;
    int sum = 0;
    while(j<n && sum+array[j]<s )
    {
        sum += array[j];

        j++;
    }

    if(sum==s)
    {
        cout << i + 1 << " " << j << endl;
        return 0;
    }

    while(j<n)
    {
        sum += array[j];
        while(sum>s)
        {
            sum -= array[i];
            i++;
        }
            if(sum==s)
            {
                st = i + 1;
                en = j + 1;
                break;
            }
        
        j++;
    }
    cout << st << " " << en;
}