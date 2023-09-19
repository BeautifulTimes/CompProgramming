#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arrayA;
    vector<int> arrayB;

   unsigned int a,b,c,d,e;
   unsigned int t;
    cin >> t;
    for(int ab = 0;ab<t;ab++)
    {
        cin >> a;
        cin >> b;
        d = 0;

 
        for(int x = 0;x<a;x++)
        {
            cin >> c;
            d = d ^ c;      
        }

        unsigned int curmax = d;
        unsigned int curmin = d;
        for(int x = 0;x<b;x++)
        {
            cin >> c;
            unsigned  int tempnum = 0;
            if(a % 2 == 1)
            {
                curmax = c | curmax;
            }
            else{
                curmin = (~c) & curmin;
            }
        }
        cout << curmin << ' ' << curmax << endl;
    }
}