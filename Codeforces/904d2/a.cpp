#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;

int digitSum(int digit)
{
    if(digit == 0)
        return 0;
    return digit%10 + digitSum(digit/10);
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
        cin >> b >> a;
        for(int x = b;true;x++)
        {
            if(digitSum(x) % a == 0)
            {
                cout << x << endl;
                break;
            }
        }
    }
}