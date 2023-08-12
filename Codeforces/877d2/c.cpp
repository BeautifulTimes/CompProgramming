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
        if(a == 4)
        {
            for(int x = 0;x<a;x++)
            {
                for(int x1 = 0;x1<b;x1++)
                {        
                    cout << 4*x1 + x+1;
                    if(x1 != b-1)
                        cout << ' ';
                }
                cout << '\n';
            }
            cout << '\n';
        }
        else
        {
            d = 0;
            e = (a+1)/2;
            for(int x = 0;x<a;x++)
            {
                for(int x1 = 0;x1<b;x1++)
                {
                    if(x % 2 == 0)
                        cout << d * b + x1+1;
                    else
                        cout << e * b + x1+1;
                    if(x1 != b-1)
                        cout << ' ';
                }
                cout << '\n';
                if(x % 2 == 0)
                    d++;
                else
                    e++;
            }
            cout << '\n';
        }
    }
}