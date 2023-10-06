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
        vector <int> in;
        vector <int> out;
        bool bad = false;
        bool counter = false;
        cin >> a;
        for(int x = 0;x<a-1;x++)
        {
            cin >> b;
            in.push_back(b);
        }
        out.push_back(in[0]);
        if(in[1] > in[0])
        {
            bad = true;
            out.push_back(0);
        }
        for(int x = 1;x<a-1;x++)
        {   
            if(out[out.size()-1] > in[x])
            {
                bad = true;
                out.push_back(0);
                out.push_back(in[x]);
            }
            else if(  out[out.size()-1] == in[x])
            {
                out.push_back(0);
            }
            else
                out.push_back(in[x]);

        }
        if(!bad)
            out.push_back(in[a-2]);
        for(int x = 0;x<out.size();x++)
        {
            cout << out[x] <<  ' ' ;
        }
        cout << endl;
    }
}