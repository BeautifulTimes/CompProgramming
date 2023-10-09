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
    vector <pair <int,int>> allVals;
    vector <pair <int,int>> weightIndex;
    vector<pair <int,int>>valueIndex;
    for(int ab = 0;ab<t;ab++)
    {
        allVals.clear();
        weightIndex.clear();
        valueIndex.clear();
        cin >> a >> b;
        for(int x = 0;x<b;x++)
        {
            cin >> c >> d;
            allVals.push_back(make_pair(c,d));
            weightIndex.push_back(make_pair(d,x));
        }
        sort(weightIndex.begin(), weightIndex.end());
        int sum = 0;
        for(int x = 0;x<2 * a;x++)
        {
            sum += weightIndex[x].first;
            valueIndex.push_back(make_pair(allVals[weightIndex[x].second].first,weightIndex[x].second));
        }
        sort(valueIndex.begin(),valueIndex.end());
        cout << sum << endl;
        for(int x = 0;x<a;x++)
        {
            cout << valueIndex[x].second+1 << " " << valueIndex[2 * a-1 - x].second+1 << endl;
        }
        cout << endl;
    }
}