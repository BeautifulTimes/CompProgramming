#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a,b,c,d,e;
    long long  t;
    cin >> t;
    for(long long  ab = 0;ab<t;ab++)
    {
        cin >> a >> b >> c;
        for(long long  x = 0;x<c;x++)
        {
            cin >> d;
            if(d >= a)
                d = a- 1;
            b += d;
        }
        cout << b << endl;
    }
}