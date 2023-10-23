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
        vector <int> allNums;
        std::unordered_map<int, vector<int>> start;
        std::unordered_map<int, vector<int>> finish;
        cin >> a >> b;
        for(int x = 0;x<a;x++)
        {
            cin >> c >> d;
            if(start.find(c) == start.end())
            {
                start[c] = {d};
            }
            else
                start[c].push_back(d);
            if(finish.find(d) == finish.end())
            {
                finish[d] = {c};
            }
            else
                finish[d].push_back(c);
            allNums.push_back(c);
            allNums.push_back(d);
        }
        sort(allNums.begin(),allNums.end());
        int curmax = 0;
        int curAmount = 0;
        int amount1 = 0;
        int amountlast = 0;
        for(int x = 0;x<allNums.size();x++)
        {
            if(x == 0 || allNums[x] != allNums[x-1])
            {
                //cout << allNums[x] << endl;
                for(int x1 = 0;x1<start[allNums[x]].size();x1++)
                {
                    if(start[allNums[x]][x1] == b)
                    {
                        amountlast++;
                    }
                }
                if(allNums[x] == 1)
                    amount1 += start[allNums[x]].size();
                curAmount += start[allNums[x]].size();

                curmax = max(curmax, max(curAmount - amount1, curAmount - amountlast));
               // cout << allNums[x] << ' '  << curmax << ' ' << curAmount << ' '  <<  amount1 << ' ' <<  amountlast << endl;

                for(int x1 = 0;x1<finish[allNums[x]].size();x1++)
                {
                    if(finish[allNums[x]][x1] == 1)
                    {
                        amount1--;
                    }
                }       
                curAmount -= finish[allNums[x]].size();        
            }
        }
        cout << curmax << endl;
    }
}
