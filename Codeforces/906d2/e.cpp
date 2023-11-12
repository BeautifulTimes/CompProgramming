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
        cin >> a >> b >> c;
        vector <pair<int,int>> days;
        int removal[b];
        map <pair<int,int>,int> amounts;
        int total = 0;
        vector<int> psa[a+1];
        for(int x = 0;x<b;x++)
        {   
            removal[x] = 0;

            cin >> d >> e;
            d--;
            e--;
            psa[d].push_back(x);
            psa[e+1].push_back(x);
        }
        map <int, bool>  allStuff;
        for(int x = 0;x<a;x++)
        {
            for(int x1 = 0;x1<psa[x].size();x1++)
            {
                if(allStuff.find(psa[x][x1]) != allStuff.end())
                    allStuff.erase(psa[x][x1]);
                else
                    allStuff[psa[x][x1]] = true;
            }
            if(allStuff.size() == 0)
                total++;
            else if(allStuff.size() == 1)
                removal[allStuff.begin()->first]++;
            else if(allStuff.size() == 2)
            {
                auto it = allStuff.begin();
                int key1 = it->first;
                it++;
                int key2 = it->first;
                if(amounts.find({key1,key2}) != amounts.end())
                    amounts[{key1,key2}]++;
                else
                    amounts[{key1,key2}] = 1;   
            }
        }
        int maxRemoval1 = 0;
        int maxRemoval2 = 0;
        for(int x = 0;x<b;x++)
        {
           // cout << removal[x] << ' ' ;
            if(removal[x] >= maxRemoval1)
            {
                maxRemoval2 = maxRemoval1;
                maxRemoval1 = removal[x];
            }
            else if(removal[x] >= maxRemoval2)
            {
                maxRemoval2 = removal[x];
            }
        }
        //cout << endl;
        int actualTotal = maxRemoval1 + maxRemoval2 + total;
        for(auto x = amounts.begin();x!=amounts.end();x++)
        {
           // cout << "hi " << x->second <<  endl ;
            int key1 = x->first.first;
            int key2 = x->first.second;
            if(total + x->second + removal[key1] + removal[key2] > actualTotal)
                actualTotal = total + x->second + removal[key1] + removal[key2];
        }
        cout << actualTotal << endl;


    }
}