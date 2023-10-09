#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;

double dist(pair <int,int > a, pair <int,int> b)
{
    return sqrt((a.first * 1.0 - b.first * 1.0) * (a.first * 1.0 - b.first * 1.0) + (a.second * 1.0 - b.second * 1.0) * (a.second * 1.0 - b.second * 1.0));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << setprecision(10) << fixed;
    pair <int,int> o, p, a,b;
    int t;
    cin >> t;
    for(int ab = 0;ab<t;ab++)
    {
        int tmp,tmp2;
        cin >> tmp >> tmp2;
        p = make_pair(tmp,tmp2);
        cin >> tmp >> tmp2;
        a = make_pair(tmp,tmp2);
        cin >> tmp >> tmp2;
        b = make_pair(tmp,tmp2);
        o = make_pair(0,0);
        double case1 = max(dist(o,a),dist(a,p));
        double case2 = max(dist(o,b),dist(b,p));
        double case3 = max(min(dist(o,a),dist(o,b)),max(dist(a,b)/2,min(dist(p,a),dist(p,b))));
        cout << min(min(case1,case2),case3) << endl;
    }

}