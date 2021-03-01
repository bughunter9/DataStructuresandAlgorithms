#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    cin.getline(arr, n);
    
    int i = 0;
    int currlen = 0;
    int maxlength = 0;
    while(1)
    {
        
        if(arr[i]==' '||arr[i]=='\0')
        {
            if(currlen>maxlength)
            {
                maxlength = currlen;
                
                cout << maxlength << endl;
            }
            currlen=0;
        }
        else
         currlen++;
        
        if(arr[i]=='\0')
        {
            break;
        }
        i++;
    }
    cout << "maxlengh= " << maxlength;
}