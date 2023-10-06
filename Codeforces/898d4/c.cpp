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
    char aa;
    cin >> t;
    for(int ab = 0;ab<t;ab++)
    {
        int tot = 0;
        for(int x = 0;x<10;x++)
        {
            for(int x1 = 0;x1<10;x1++)
            {
                cin >> aa;
                if(aa  == 'X')
                    tot += min(min(x+1,10-x),min(x1+1,10-x1));
            }
        }
        cout << tot << endl;
    }
}