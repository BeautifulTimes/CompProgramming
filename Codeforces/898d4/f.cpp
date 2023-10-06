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
        vector <int> fruits;
        vector <int> heights;
        cin >> a >> b;
        for(int x = 0;x<a;x++)
        {
            cin >> c;
            fruits.push_back(c);
        }
        for(int x = 0;x<a;x++)
        {
            cin >> c;
            heights.push_back(c);
        }
        int lpointer = 0;
        int rpointer = -1;
        int tot = 0;
        int maxlength = 0;
        for(;;)
        {
            rpointer++;
            tot += fruits[rpointer];
            if(rpointer >= a)
                break;
            if(rpointer != 0 && heights[rpointer-1] % heights[rpointer] != 0)
            {

                lpointer = rpointer;
                tot = fruits[rpointer];
            }
            while(tot > b)
            {
                tot -= fruits[lpointer];
                lpointer++;
            }            
           // cout << lpointer << ' ' << rpointer << ' ' << tot << endl;

            maxlength = max(maxlength, rpointer-lpointer+1);
        }
        cout << maxlength << endl;
    }
}