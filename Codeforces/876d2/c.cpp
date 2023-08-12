#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int xx = 0;xx<t;xx++)
    {
        int l;
        cin >> l;
        vector<int> arr;
        vector<int> ans;
        bool pos = true;
        for(int x = 0;x<l;x++)
        {
            int c ;
            cin >> c;
            arr.push_back(c);
        }
        if(arr[l-1] == 1)
            cout << "NO" << '\n';
        else
        {
            cout << "YES" << '\n';
            int parity = 0;
            for(int x = l-1;x >= 0;x--)
            {
                if((arr[x] + parity) % 2 == 1 )
                {
                    ans.push_back(x + 1);
                    parity++;
                }
            }
            for(int x = 0;x<l - ans.size();x++)
                cout << '0' << ' ';
            for(int x = ans.size()-1;x>=0;x--)
                cout << ans[x] << ' ';
            cout << '\n';
        }

        
    }
}