#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a,b,c,d,e;
    int t;
    cin >> t;
    for(int ab = 0;ab<t;ab++)
    {
        cin >> a >> b >> c;
        long long tot = a + b + c;
        bool pos = false;
        for(int x = 3;x<=6;x++)
        {
            if(tot % x == 0)
            {
                long long desired = tot /x;
                int curThreads = 0;
                if(a % desired == 0 && b % desired == 0 && c % desired == 0)
                {
                    pos = true;
                }
            }
        }
        if(pos)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}