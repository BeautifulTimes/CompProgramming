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
        if(a % 3 == 0 && a >= 12)
        {
            cout << "YES" << endl;
            cout << 1 << " " << 4 << " " << a-5 << endl;
        }
        else if(a% 3 == 1 && a>=7)
        {
            cout << "YES" << endl;
            cout << 1 << " " << 2 << " " << a-3 << endl;
        }
        else if(a% 3 == 2 && a>=8)
            {
            cout << "YES" << endl;
            cout << 2 << " " << 1 << " " << a-3 << endl;
            }
        else
            cout << "NO" << endl;
    }
}