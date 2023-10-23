#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d,e;
    int t;
    cin >> t;
    for(int ab = 0;ab<t;ab++)
    {
        vector < char> stuff;

        cin >> a;
        char tmp;
        for(int x = 0;x<a;x++)
        {
            cin >> tmp;
            stuff.push_back(tmp);
        }
        int moved = 0;
        int length = 0;
    
        for(int x = a-1;x>=0;x--)        
        {   
            for(int x1 = x-length;x1>=0;x1--)
            {
                if(stuff[x1] == '1')
                {
                    length++;
                }
                else
                    break;
            }
            if(x - length < 0)
            {
                cout << -1 << ' ';
            }
            else
            {
                moved += length;
                cout << moved << ' ';
            }
        }
        cout << endl;
    }
}