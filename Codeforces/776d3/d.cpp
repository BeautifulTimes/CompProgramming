#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;

vector <int> shift(vector <int> arr, int amount, int a)
{
   /* cout << amount << " " << a << endl;
    for(int x = 0;x<arr.size();x++)
        cout << arr[x] << " ";
    cout << endl;*/
    vector <int> arrtemp = arr;
    for(int x = 0;x<a;x++)
    {
        arr[x] = arrtemp[(x+amount) % a];
    }
    return arr;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d,e;
    int t;
    cin >> t;
    for(int ab = 0;ab<t;ab++)
    {
        vector <int> arr;
        cin >> a;
        int ans[a];
        for(int x = 0;x<a;x++)
        {
            cin >> b;
            arr.push_back(b);
        }
        int shifts = 0;
        for(int x = a-1;x>=0;x--)
        {
            int curLoc;
            for(int x1 = 0;x1<=x;x1++)
            {
                if(arr[x1] == x+1)
                {
                    curLoc = x1;
                    break;
                }
            }
            if(curLoc != x)
                ans[x] = curLoc+1;
            else
                ans[x] = 0;
            arr = shift(arr,ans[x],x+1);
        }
        for(int x = 0;x<a;x++)
            cout << ans[x] << " ";
        cout << endl;
    }
}