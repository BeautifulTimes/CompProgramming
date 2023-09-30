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
        int lastused = 0;
        cin >> a;
        for(int x = 0;x<a;x++)
        {
            cin >> b;
            for(int xx = lastused+1;;xx++)
            {
                if(xx != b)
                {
                    lastused = xx;
                    break;
                }
            }
        }
        cout << lastused << endl;
    }
}