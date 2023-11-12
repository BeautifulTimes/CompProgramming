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
    for(int ab = 0;ab<t;ab++)
    {
        cin >> a >> b;
        int nums[a];
        pair<int,int> queries[31];
        for(int x = 0;x<a;x++)
            cin >> nums[x];
        for(int x = 0;x<31;x++)
        {
            queries[x] = {INT_MAX,x};
        }
        for(int x = 0;x<b;x++)
        {
            cin >> c;
            queries[c] = {min(x,queries[c].first),c}; 
        }
        sort(queries,queries+31);
        for(int x = 0;x<a;x++)
        {
            int curValue = 1;
            for(int x1 = 0;x1<=30;x1++)
            {
                if(queries[x1].first != INT_MAX && nums[x] % (int)(pow(2,queries[x1].second)) == 0)
                {
                    nums[x] += pow(2,queries[x1].second-1);
                }
            }
            cout << nums[x] << ' ';
        }
        cout << endl;
    }
}