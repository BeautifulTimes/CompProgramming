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
            vector<int> values;

        cin >> a;
        for(int x = 0;x<a;x++)
        {
            cin >> b;
            values.push_back(b);
        }
        int start = 1;
        int end = 2;
        bool possible = true;
        for(int x = 0;;x++)
        {
           // cout << start << ' ' << end << ' ' << possible << endl;
            start = start * 2;
            end = end * 2;
            if(start >= a -1)
                break;
            for(int x1 = start+1;x1<end;x1++)
            {
                if(x1 >= a)
                    break;
                if(values[x1] < values[x1-1])
                    possible = false;
            }
        }
        if(possible)
            cout << "YES" << endl;
        else   
            cout << "NO" << endl;
    }
}