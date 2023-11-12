#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int ab = 0;ab<t;ab++)
    {
        int n,m;
        cin >> n >> m;
        int a[n];
        int b[m];
        for(int x = 0;x<n;x++)
            cin >> a[x];
        for(int x = 0;x<m;x++)
            cin >> b[x];
        int aPointer = 0,bPointer = m-1;
        sort(b, b+m);
        for(int x = 0;x<n+m;x++)
        {
            if(aPointer == n)
            {
                cout << b[bPointer] << ' ';
                bPointer--; 
            }
            else if(bPointer == -1)
            {
                cout << a[aPointer] << ' ';
                aPointer++;
            }
            else
            {
                if(a[aPointer] >= b[bPointer])
                {
                    cout << a[aPointer] << ' ';
                    aPointer++;
                }
                else
                {
                    cout << b[bPointer] << ' ';
                    bPointer--; 
                }
            }
        }
        cout << endl;
    }
}