#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long   a,b,c,d,e;
    int t;
    cin >> t;
    for(int ab = 0;ab<t;ab++)
    {
        cin >> a >> b;
        a = a - (a/b) * b;
        if(a == 0)
            cout << 0 << endl;
        else
        {
            long long val = a;
            bool cando = true;
            for(int x = 1;x<40;x++)
            {
                if(val % b == 0)
                    break;
                val = val * 2;
                val = val % b;
                if(x == 39)
                {
                    cando = false;
                    cout << -1 << endl;
                }
            }
            if(cando)
            {
                long long total = 0;
                for(;;)
                {
                    total += a;
                    a = a * 2;
                    a = a - (a/b) * b;
                    if(a == 0)
                    {
                        cout << total << endl;
                        break;
                    }
                }
            }
        }
    }
}