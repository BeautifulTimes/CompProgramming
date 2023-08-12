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
    vector < int> coords;
    vector <pair < int, int>>  portal1;
    vector <pair < int, int>>  portal2;


    for(int ab = 0;ab<t;ab++)
    {
        portal1.clear();
        portal2.clear();

        cin >> a;
        for(int x = 0;x<a;x++)
        {
            cin >> b >> c >> d >> e;
            portal1.push_back(make_pair(b,e));
        }
        sort(portal1.begin(), portal1.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        });
        int last = 0;
        int removed = 0;
        for(int x = 1;x<a;x++)
        {
            if(portal1[x].second >= portal1[last].first){
                if(portal1[x].first < portal1[last].first)
                {
                    portal1[last].first = portal1[x].first;
                }
                portal1[x].first = -1;
                portal1[x].second = 0;
                removed++;
            }
            else
                last = x;
        }
        int xx = 0;
        for(int x = 0;x<a;x++)
        {
            if(portal1[x].first != -1)
            {
                portal2.push_back(portal1[x]);
            }
        }
        cin >> b;
        for(int x = 0;x<b;x++)
        {
            cin >> c;
            bool found = false;
            int low = 0;
            int high = portal2.size()-1;
            int mid = 0;
            for(;;)
            {
                if(high - low <= 1)
                {
                    if(c >= portal2[high].first && c <= portal2[high].second )
                    {
                        cout << portal2[high].second << ' ';
                    }
                    else if(c >= portal2[low].first && c <= portal2[low].second)
                    {
                        cout << portal2[low].second << ' ';
                    }
                    else{
                        cout << c << ' ';
                    }
                    break;
                }
                else
                {
                    mid = (low + high) /2;
                    if(c < portal2[mid].first)
                    {
                        low = mid;
                    }
                    else if(c <= portal2[mid].second)
                    {
                        cout << portal2[mid].second << ' ';
                        break;
                    }
                    else
                    {
                        high = mid;
                    }
                }
            }
        }
        cout << endl;
    }
}

