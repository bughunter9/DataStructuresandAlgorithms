#include<bits/stdc++.h>
using namespace std;

int countSort(int arr[], int n)
{
    int k = arr[0];
    for (int i = 0; i < n;i++)
    {
        k = max(k, arr[i]);
    }
    
    int count[k + 1];
    for (int i = 0; i < k + 1;i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }


    for (int i = 1; i < k + 1;i++)
    {
        count[i] += count[i - 1];
    }
;
    int output[n];
    for (int i = n-1; i >= 0;i--)
    {
        output[--count[arr[i]]] = arr[i];
    }
    for (int i = 0; i < n;i++)
    {
        arr[i] = output[i];
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    countSort(arr, n);
    for (int i = 0; i < n;i++)
    {
        cout<<arr[i]<<" ";
    }
}