#include<bits/stdc++.h>
using namespace std;
void primeSieve(int n)
{
    int prime[100] = {0};
    for (int i = 2; i <= n;i++)
    {
        for (int j = i * i; j <= n; j+=i)
        {
            if(prime[j]==0)
            {
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n;i++)
    {
        if(prime[i]==0)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    primeSieve(n);
}