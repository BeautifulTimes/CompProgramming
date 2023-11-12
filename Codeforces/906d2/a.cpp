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
        c = -1;
        cin >> a;
        cin >> b;
        int bcount = 1;
        int ccount = 1;
        bool poss = true;
        for(int x = 1;x<a;x++)
        {
            cin >> d;
            if(d != b && c == -1)
            {
                c = d;
            }
            else if(d != b && c == d)
                ccount++;
            else if(d == b)
                bcount++;
            else
                poss = false;
        }
        if(abs(bcount - ccount) >= 2 && c != -1)
            poss = false;
        if(poss)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;


    }
}