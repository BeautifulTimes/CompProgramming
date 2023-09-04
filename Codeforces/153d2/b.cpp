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
        cin >> a >> b >> c >> d;
        int needed1 = a % b;
        int needed2 = a/b;
        if( c >= needed1){
            c -= needed1;
            needed1 = 0;
        }
        else
        {
            needed1 -= c;
            c = 0;

        }

        needed2 -= c/b;
        needed2 -= d;
        if( needed2 < 0)
        {
            needed2 = 0;
        }
        cout << needed1 + needed2 << endl;


    }
}