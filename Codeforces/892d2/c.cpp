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
        cin >> a;
        int ans = 0;
        for(int x = 1;x<=a;x++)
        {
            int max1 = 0;
            int curans = 0;
            for(int x1 = 1;x1<=a;x1++)
            {
                if(x1 < a-x+1) {
                    //cout << x1 << ' ';
                    curans += x1 * x1;
                    max1 = max(max1,x1*x1);
                } else{
                   // cout << (a-x1 + (a-x) +1) << ' ';

                    curans += x1 * (a-x1 + (a-x) +1);
                    max1 = max(max1, x1 * (a-x1 + (a-x) +1));
                }
            }
            //cout << endl;
            curans -= max1;
            ans = max(ans,curans);
        }
        cout << ans << endl;
    }
}