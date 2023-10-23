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
        int out[a][b];
        if(a == 1 || b == 1)
            cout << -1 << endl;
        else
        {
            int cur = 1;
            for(int x = 0;x<a;x++)
            {
                if(x % 2 == 0)
                {
                    for(int x1 = 0;x1<b;x1++)
                    {
                        out[x][x1] = cur;
                        cur++;
                    }
                }
                else
                {
                    for(int x1 = b-1;x1>=0;x1--)
                    {
                        out[x][x1] = cur;
                        cur++;
                    }                    
                }
            }
            for(int x = 0;x<a;x++)
            {
                for(int x1 = 0;x1<b;x1++)
                {
                    if(a * b % 2 == 1 && out[x][x1] == 3 )
                    {
                        cout << a * b << ' ' ;
                    }
                    else if(a * b % 2 == 1 && out[x][x1] == a * b )
                    {
                        cout << 3 << ' ' ;
                    }
                    else if(a * b % 2 == 0 && out[x][x1] == 2 )
                    {
                        cout << a * b << ' ' ;
                    }
                    else if(a * b % 2 == 0 && out[x][x1] == a * b )
                    {
                        cout << 2 << ' ' ;
                    }
                    else                                        
                        cout << out[x][x1] << ' ';
                }
                cout << endl;
            }
        }
    }
}