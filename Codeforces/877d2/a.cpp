#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
int main()
{
    int a,b,c,d,e;
    int t;
    cin >> t;
    int arr[101];
    for(int ab = 0;ab<t;ab++)
    {
        int aba = 0;
        cin >> a;
        bool neg = false;
        for(int x =0;x<a;x++)
        {
            cin >> d;
            arr[x] = d;
        }
        for(int x = 0;x<a;x++)
        {
            if(arr[x] < 0)
            {
                cout << arr[x] << '\n';
                neg = true;
                break;
            }
            aba = max(arr[x],aba);
        }
        if(!neg)
            cout << aba << endl;
    }
}