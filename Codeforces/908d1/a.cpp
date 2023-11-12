#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,t;
    int n,k;
    cin >> t;
    for(int ab = 0;ab<t;ab++)
    {
        cin >> n >> k;
        int values[n];
        int offset = 0;
        for(int x = 0;x<n;x++)
        {
            cin >> values[x];
            
        }
        k = min(k,n);
        int cyclicLeftShifts = 0;
        for(int cycles = 0;cycles  < k; cycles++)
        {
            int curRightIndex = (n - 1 - cyclicLeftShifts) % n;
            if(curRightIndex < 0)
                curRightIndex += n;
            if(values[curRightIndex] > n)
            { 
                cout << "No" << endl;
                break;
            }
            cyclicLeftShifts += values[curRightIndex];
            if(cycles == k-1)
                cout << "Yes" << endl;
        }
    }
}