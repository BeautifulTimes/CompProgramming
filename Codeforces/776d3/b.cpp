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
        cin >> a >> b >> c;
        int maxVal = b/c + b % c;
        int maxVal2 = b/c - 1 + c - 1;
        if(b - b % c - 1 < a)
            maxVal2 = 0;
        cout << max(maxVal,maxVal2) << endl;
    }
}