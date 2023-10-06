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
        for(int x = 0;x<a;x++)
        {
            cin >> c;
            if(c == b)
                found = true;
        }
        if(!found)
            cout << "NO";
        else
            cout << "YES";
            cout << endl;
    }
}