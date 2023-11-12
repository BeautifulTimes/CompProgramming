#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;

struct compare{
    bool operator()(pair<int,int> a, pair <int,int> b){
        return a.first > b.first;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d,e;
    int t;
    priority_queue <pair<int,int>, vector<pair<int,int>> ,compare> test;
    test.push({1,2});
    cout << test.top().first;
    vector<pair<int, int>> vec = {{3, 4}, {1, 2}, {4, 5}, {2, 3}, {3, 2}};
    sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });
}