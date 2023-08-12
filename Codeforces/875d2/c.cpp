#include <iostream>
#include <vector>

using namespace std;
vector<vector<int>> edges;
vector<bool> vis;
int solve(int node, int last)
{
    int ans = 1;
    vis[node] = true;
    for(int x = 0;x<edges[node].size();x+=2)
    {
        int newnode = edges[node][x];
        if(!vis[newnode])
        {
            if(edges[node][x+1] < last)
            {
                ans = max(ans, solve(newnode,edges[node][x+1])+1);
            }
            else
            {
                 ans = max(ans, solve(newnode,edges[node][x+1]));
            }
        }
    }
    return ans;

}
int main()
{
    int a,b,c,d;
    cin >> a;
    for(int xx = 0;xx<a;xx++)
    {
        cin >> b;
        edges.clear();
        vis.clear();
        edges.resize(b+1);
        vis.resize(b+1);
        for(int x = 0;x<b-1;x++)
        {
            cin >> c >> d;
            edges[c].push_back(d);
            edges[c].push_back(x);
            edges[d].push_back(c);
            edges[d].push_back(x);
        }
        cout << solve(1,-1) << '\n';
    }
}