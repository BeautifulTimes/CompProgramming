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
    vector <int> arr;
    for(int ab = 0;ab<t;ab++)
    {

        arr.clear();
        cin >> a;
        for(int x = 0;x<a;x++)
        {
            cin >> b;
            arr.push_back(b);
        }
        c = arr[0];
        d = -1;
        e = 0;
        for(int x = 1;x<a;x++)
        {
            if(arr[x] > c)
            {
                if(d == -1 || arr[x] < d)
                {
                    e++;
                    d = arr[x];
                }
            }
            else
            {
                c = arr[x];
            }
        }
        cout << e << endl;
    }
}