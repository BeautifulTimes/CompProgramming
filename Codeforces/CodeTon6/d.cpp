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

    int t;
    cin >> t;
    for(int ab = 0;ab<t;ab++)
    {
        arr.clear();
        cin >> a;
        for(int x = 0;x<a;x++)
        {
            cin >> b;
            arr.push_back(b);
        }
        cin >> c;
        int arrmin = arr[0];
        int index = 0;
        for(int x = 0;x<a;x++)
        {
            arrmin = min(arrmin,arr[x]);
        }
        for(int x = 0;x<a;x++)
        {
            arr[x] -= arrmin;
        }
        int spare = c - (c/arrmin) * arrmin;
    }
}