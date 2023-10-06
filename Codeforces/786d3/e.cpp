#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;

int takes(int a, int b)
{
    if(2 * b <= a && 2 * a  <= b)
        return (a+b+2)/3;
    if(2*b >)
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d,e;
    int t;

    vector<int> minRight;
    vector<int> minLeft;
    vector<int> in;
    cin >> a;
    int minshots = 100000000;
    for(int x = 0;x<a;x++)
    {
        cin >> b;
        in.push_back(b);
    }
    for(int x = 0;x<a-2;x++)
    {

    }
    int minLeftVal = in[0];
    cout << minshots << endl;

}