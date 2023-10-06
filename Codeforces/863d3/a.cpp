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
        cin >> a >> b;
        vector < char> out;
        
        string n = "";
        bool used = false;
        cin >> n;
        //cout << n << endl;
        for(int x = 0;x<a;x++)
        {
            if(b > (n[x]-'0') && !used) 
            {
                out.push_back('0' + b);
                used = true;
            }
            out.push_back(n[x]);
        }
        if(!used)
            out.push_back('0' + b);
        for(int x = 0;x<out.size();x++)
            cout << out[x];
        cout <<endl;
    }
}