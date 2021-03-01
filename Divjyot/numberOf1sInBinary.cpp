#include<bits/stdc++.h>
using namespace std;

int numberOf1s(int n)
{
    int count = 0;
    while(n!=0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
int main()
{
    cout << numberOf1s(19)<<endl;
}
