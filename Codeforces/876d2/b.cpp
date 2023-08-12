#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>

using namespace std;

bool comp(pair<int, int> x1, pair<int, int> x2)
{
    if(x1.first > x2.first)
        return false;
    else if(x1.first < x2.first)
        return true;
    else if(x1.second > x2.second)
        return true;
    return false;
}

int main()
{
    int t;
    cin >> t;
    for(int xx = 0;xx<t;xx++)
    {
        vector< pair <int,int> > pairs;

        int a;
        cin >> a;
        for(int x = 0;x<a;x++)
        {
            int b,c;
            cin >> b >> c;
            pairs.push_back(make_pair(b,c));
            
        }
        sort(pairs.begin(), pairs.end(),comp);
        int on = 0;
        long long ans = 0;  
        int curon = 0;
        for(int x = 0;x<a;x++)
        {
            if(x != 0 && pairs[x].first != pairs[x-1].first)
                curon = 0;
            if(pairs[x].first > curon)
            {
                curon++;
                ans += (long long)pairs[x].second;
            }
        }
        cout << ans << '\n';
    }
}