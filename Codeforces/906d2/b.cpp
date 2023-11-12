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
        string first,second;
        cin >> first;
        cin >> second;
        bool fault1 = false;
        bool fault2 = false;
        for(int x = 1;x<a;x++)
        {
            if(first[x] == first[x-1])
            {
                if(first[x] == '0')
                    fault1 = true;
                else
                    fault2 = true;
            }
        }
        bool fix1 =false;
        bool fix2 = false;
        if(b % 2 == 1)
        {
            if(second[0] == '0')
                fix1 = true;
            else
                fix2 = true;
        }
        for(int x = 1; x<b;x++)
        {
            if(second[x] == second[x-1])
            {
                fix2 = false;
                fix1 = false;
            }
        }
        if(fault1 && fix2)
            fault1 = false;
        if(fault2 && fix1)
            fault2 = false;
        if(fault1 || fault2)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
}