#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
int main()
{
    int a,b,c,d,e;
    int t;
    cin >> t;
    for(int ab = 0;ab<t;ab++)
    {
        cin >> a;
        for(int x = 0;x<a;x++)
        {
            cin >> e;
            if(e == 1)
                b = x;
            if(e == a)
                d = x;
            if(e == 2)
                c = x;
        }
        if(b < c)
        {
            if(d < b)
                cout << d+1 << ' ' << b+1 << '\n';
            else
                cout << d+1 << ' ' << b+2 << '\n';
        }
        else
        {
            if(d > b)
                cout << d+1 << ' ' << b+1 << '\n';
            else
                cout << d+1 << ' ' << b << '\n'; 
            
        }
    }   
}