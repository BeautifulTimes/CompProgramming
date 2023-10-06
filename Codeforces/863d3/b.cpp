#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
int a,b,c,d,e;

int dist(int x1)
{
    return max(x1-e/2, (e/2)+1-x1);
}
int ring(int x1, int y1)
{
    int xring = dist(x1);
    int yring =dist(y1);
    return max(xring,yring);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int ab = 0;ab<t;ab++)
    {
        cin  >> e >> a >> b >> c >> d;
        cout << abs(ring(a,b) - ring(c,d)) << endl;
    }
}