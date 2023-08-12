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
    long long arr[1000];
    for(int ab = 0;ab<t;ab++)
    {
        cin >> b;
        bool same = true;
        long long maxvalue = 0;
        int countmax = 0;
        for (int x = 0; x< b;x++)
        {
            cin >> arr[x];
            if (x >= 1 && arr[x] != arr[x-1]){
                same = false;
            }
            if(arr[x] > maxvalue){
                maxvalue = arr[x];
                countmax = 1;
            } else if(arr[x] == maxvalue){
                countmax++;
            }
        }
        if(same){
            cout << -1 << endl;
        } else{
            cout << b-countmax << ' ' << countmax << endl;
            for(int x = 0;x<b;x++){
                if(arr[x] != maxvalue){
                    cout << arr[x] << ' ';
                }
            }
            cout << endl;
            for(int x = 0;x<countmax;x++){
                cout << maxvalue << ' ';
            }
            cout << endl;
        }   
    }
}