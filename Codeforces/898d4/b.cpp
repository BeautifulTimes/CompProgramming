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
        vector <int> digits;
        cin >> a;
        for(int x = 0;x<a;x++)
        {
            cin >> b;
            digits.push_back(b);
        }
        int maxVal = 0;
        for(int x = 0;x<digits.size();x++)
        {
            int curval = 1;
            for(int x1 =0;x1<digits.size();x1++)
            {
                if(x == x1)
                    curval *= digits[x1]+1;
                else
                    curval *= digits[x1];
            }
            maxVal = max(curval,maxVal);
        }
        cout << maxVal << endl;
    }
}