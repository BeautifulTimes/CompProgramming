#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d,e;
    int t;
    cin >> t;
    int buckets[6001];

    for(int ab = 0;ab<t;ab++)
    {
        for(int x = 0;x<6001;x++)
            buckets[x] = 0;
        cin >> a;
        for(int x = 0;x<a;x++)
        {
            cin >> b;
            if(b < 6000)
            {
                buckets[b]++;
            }
        }
        int mex = 0;
        for(int x = 0;x<6000;x++)
        {
            if(buckets[x] == 0)
            {
                break;
            }
            else
                mex++;
        }
        if(mex == 0)
            cout << 0 << endl;
        else
        {
            vector <int> dp;
            for(int x = 0;x<=mex;x++)
            {
                dp.push_back(-1);
            }
            dp[mex] = 0;
            for(int x = mex;x>0;x--)
            {
                for(int x1 = x-1;x1>=0;x1--)
                {
                    int newvalue = dp[x] + x1 + (buckets[x1]-1) * x;
                    if(dp[x1] == -1 || newvalue < dp[x1])
                        dp[x1] = newvalue;
                }
            }
            cout << dp[0] << endl;
        }
    }
}