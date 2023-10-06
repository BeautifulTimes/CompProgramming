#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;

long long sum(long long  a)
{
    return a*(a+1)/2;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a,b,c,d,e;
    int t;
    cin >> t;
    for(int ab = 0;ab<t;ab++)
    {
        cin >> a >> b >> c;
        if(c > sum(a) - sum(a-b)|| c < sum(b))
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }
}