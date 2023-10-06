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
        bool found = false;
        for(int x = 0;x<100;x++)
        {
            int total = a;

            for(int x1 = 0;x1<100;x1++)
            {
                total *= x;
                if(total > b)
                    break;
                if(total == b)
                {
                    found = true;
                    cout << x1+1 << ' ' << x << endl;
                    break;
                }

            }
            if(found)
                break;
        }
        if(!found)
        cout << 0 << ' ' << 0  << endl; 
    }
}