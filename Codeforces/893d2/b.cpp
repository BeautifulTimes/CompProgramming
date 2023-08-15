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
        cin >> a >> b >> c;
        e = 0;
        bool reducible = false;
        bool has1 = false;
        arr.push_back(1);
        for(int x = 0;x<b;x++)
        {
            cin >> d;
            if( d != 1)
            {
                arr.push_back(d);
            }

        }
        int totalcookie = arr.size();

        for(int x = 1;x<arr.size();x++)
        {
            if(x == arr.size()-1){
                if((a - arr[x]) / c + (arr[x] - arr[x-1]-1)/c + 1 != (a - arr[x-1])/c)
                {
                    e++;
                }
            }
            else{
                 if((arr[x+1] - arr[x]-1) / c + (arr[x] - arr[x-1]-1)/c + 1 != (arr[x+1] - arr[x-1]-1)/c)
                {
                    e++;
                }
            }
            totalcookie += (arr[x] - arr[x-1] -1)/c;
        }
        totalcookie += (a - arr[arr.size()-1])/c;
        if(e!= 0)
            cout << totalcookie-1 << ' ' << e <<  endl;
        else
            cout << totalcookie << ' ' << b <<  endl;

        
    }
}