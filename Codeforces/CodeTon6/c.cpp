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
    vector <int> arr;
    vector <int> places[100001];
    bool used[100001];
    int t;
    cin >> t;
    for(int ab = 0;ab<t;ab++)
    {
        cin >> a >> b;
        int leftmost = 0;
        int rightmost = a-1;
        int totused = 0;
        for(int x = 0;x<=b;x++)
        {
            places[x].clear();
        }
        for(int x = 0;x<=a;x++)
        {
             used[x] = false;

        }
        for(int x = 0;x<a;x++)
        {
            cin >> c;
            c = c-1;
            arr.push_back(c);
            places[c].push_back(x);
        }
        for(int x = 0;x<b;x++)
        {
            if(places[x].size() == 0)
            {
                cout << 0 << ' ';
            }
            else
            {
                cout << (rightmost-leftmost+1) * 2<< ' ';
                for(int xx = 0;xx<places[x].size();xx++)
                {
                    used[places[x][xx]] = true; 
                    totused++;
                    if(totused == a)
                        break;
                    if(places[x][xx] == leftmost)
                    {
                        while(used[leftmost])
                            leftmost++;
                    }
                    if(places[x][xx] == rightmost)
                    {
                        while(used[rightmost])
                            rightmost--;
                    }
                }
            }
        }
        cout << endl;
    }
}