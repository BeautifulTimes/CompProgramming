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
        cin >> a;
        cout << 1 << ' ' << 4 << ' ';
        int last = 4;
        int last2 = 1;
        for(int x = 2;x<a;x++)
        {
            
            int tmp = last + 1;
            while(3 * tmp % (last + last2) == 0)
            {
                tmp++;
            }   
            cout << tmp << ' ';
            last2 = last;
            last = tmp;
        }
        cout << endl;
    }
}