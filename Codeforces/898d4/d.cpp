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
        string c;
        cin >> c;
        int count = 0;
        for(int x = 0;x<a;x++)
        {
            if(c[x] == 'B')
            {
                count++;
                for(int x1 = 0;x1 <b;x1++)
                {
                    if(x + x1 >= a)
                        break;
                    c[x+x1] = 'A';
                }
            }
        }
        cout << count << endl;
    }
}