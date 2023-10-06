#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
#define int long long
bool checkPossible(int water, vector <int> heights, int targetHeight)
{
    int leftoverWater = water;
    for(int x = 0;x<heights.size();x++)
    {
        if(targetHeight > heights[x])
            leftoverWater -= (targetHeight - heights[x]);
        if(leftoverWater < 0)
            return false;
    }
    return true;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d,e;
    int t;
    cin >> t;
    for(int ab = 0;ab<t;ab++)
    {
     vector <int> heights;

        cin >> a >> b;
        for(int x = 0;x<a;x++)
        {
            cin >> c;
            heights.push_back(c);
        }
        int low = 0;
        int high = 2000000001;
        for(;;)
        {
            //cout << low << ' ' << high << endl;
            if(high - 1 <= low)
            {
                if(checkPossible(b,heights,high))
                    cout << high << endl;
                else
                    cout << low << endl;
                break;
            }
            int mid = (low + high)/2;
            if(checkPossible(b,heights,mid))
            {
                low = mid;
            }
            else
                high = mid;
        }
    }
}