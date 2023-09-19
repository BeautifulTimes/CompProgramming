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
        cin >> a >> b >> c;
        int maxsum = 0;
        if (b > a || b > c+1)
            cout << -1 << endl;
        else{
            a = a - b;
            maxsum += b * (b-1) /2;
            if(b != c)
                maxsum += a * c;
            else
                maxsum += a * (c-1);
            cout << maxsum << endl;
        }
    }
}