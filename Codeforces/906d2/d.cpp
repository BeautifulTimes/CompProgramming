#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
#define int long long int
int32_t  main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int ab = 0;ab<t;ab++)
    {
        bool poss = true;
        int a,b,c,d,e;
        cin >> a >> b;
        vector <pair<int,int>> reqAmounts;
        cin >> c;
        for(int x = 1;x<a;x++)
        {
            cin >> d;;
            reqAmounts.push_back({(x+1) * b - d,d});
        }
        sort(reqAmounts.begin(),reqAmounts.end());
        for(int x = 0;x<reqAmounts.size();x++)
        {
            if(c >= reqAmounts[x].first)
            {
                c += reqAmounts[x].second;
            }
            else
                poss = false;
        }
        if(poss)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}