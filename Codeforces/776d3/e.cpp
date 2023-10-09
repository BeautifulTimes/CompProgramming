#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;

int getBestDist(vector <int> places)
{
    int mindiff = places[0]-1;
    for(int x = 1;x<places.size();x++)
    {
        mindiff = min(places[x] - places[x-1]-1,mindiff);
    }
    return mindiff;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d,e;
    int t;
    cin >> t;
    vector <int> places;

    for(int ab = 0;ab<t;ab++)
    {
        places.clear();
        cin >> a >> b;
        for(int x = 0;x<a;x++)
        {
            cin >> c;
            places.push_back(c);
        }
        cout << getBestDist(places) << endl;
    }
}