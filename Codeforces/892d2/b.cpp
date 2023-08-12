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
    vector<long long>arr[25000] ;

    cin >> t;
    for(int ab = 0;ab<t;ab++)
    {
        cin >> a;
        for(int x = 0;x<a;x++)
        {
            arr[x].clear();
            cin >> b;
            long long tmp;
            for(int x1 = 0;x1<b;x1++)
            {
                cin >> tmp;
                arr[x].push_back(tmp);
            }
            sort(arr[x].begin(),arr[x].end());
        }
        long long min2 = 1000000001;
        long long min3 = 1000000001;
        long long ans = 0;
        for(int x = 0;x<a;x++)
        {
            min2 = min(min2,arr[x][0]);
            min2 = min(min2,arr[x][1]);
            min3 = min (min3, arr[x][1]);
            ans += arr[x][1];       
        }
        ans = ans + min2 - min3;
        cout << ans << endl;
    }
}