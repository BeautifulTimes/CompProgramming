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
        string in;
        char ff;
        cin >> in;
        cin >> ff;
        bool right = false;
        for(int x = 0;x<in.length();x++)
        {
            if(in[x] == ff)
            {
                if(x % 2 == 0)
                    right = true;
            }
        }
        if(right)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}