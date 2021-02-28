#include<bits/stdc++.h>
using namespace std;

bool isPower(int n)
{
    return (n && (!(n & n - 1)));
}

int main()
{
    cout << isPower(8)<<endl;
    cout << isPower(7) << endl;
}