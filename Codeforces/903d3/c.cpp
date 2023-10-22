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
    for(int ab = 0;ab<t;ab++)
    {
        cin >> a;
        char arr[a][a];
        for(int x = 0;x<a;x++)
        {
            for(int x1 = 0;x1<a;x1++)
            {
                cin >> arr[x][x1];
                cout << arr[x][x1];
            }
            cout << endl;
        }
    }       
}