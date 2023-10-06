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
        string ina;
        cin >> ina;
        if(ina == "bca" || ina == "cab")
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}