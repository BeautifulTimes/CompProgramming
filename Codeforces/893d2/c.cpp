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
    int used [200001];
    cin >> t;
    for(int ab = 1;ab<t+1;ab++)
    {
        cin >> a;
        for(int x = 1;x<=a;x++)
        {
            if(used[x] != ab)
            {
                used[x] = ab;
                cout << x << ' ';
                b = 2*x;
                for(;;)
                {
                    if(b > a || used[b] == ab)
                    {
                        break;
                    }
                    used[b] = ab;
                    cout << b << ' ';
                    b = 2*b;
                }
            }
        }
        cout << endl;
    }
}