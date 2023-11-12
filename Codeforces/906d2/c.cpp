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
        vector<int> ops;
        cin >> a ;
        string first;
        cin >> first;
        c = 0;
        d = 0;
        for(int x = 0;x<a;x++)
        {
            if(first[x] == '0')
                c++;
            else
                d++;
        }
        if(c != d || a % 2 == 1)
            cout << -1 << endl;
        else
        {
            for(int x = 0;;x++)
            {
                // cout << first << ' ' << first[x] << endl;

                if(x >= first.length()/2)
                    break;
                if(first[x] == first[first.length()-x-1])
                {
                    if(first[x] == '0')
                    {
                        ops.push_back(first.length()-x);
                        first.insert(first.length()-x,"01");
                    }
                    else
                    {
                        first.insert(x,"01");
                        ops.push_back(x);
                    }
                }
            }
            cout << ops.size() << endl;
            for(int x = 0;x<ops.size();x++)
                cout << ops[x] << ' ';
            cout << endl;
        }
    }
}