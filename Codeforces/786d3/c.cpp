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
        a = 0;
        b = 0;

        string in;
        string in2;
        cin >> in >> in2;

        if(in2 == "a")
            cout << 1;
        else
        {
            for(int x = 0;x<in2.length();x++)
            {
                if(in2[x] == 'a')
                    a++;
            
            }
            for(int x = 0;x<in.length();x++)
            {
                if(in[x] == 'a')
                    b++;
            }
            if(b == 0)
                cout << 1;
            else if(a >= 1)
            {
                cout << -1;
            }
            else{
                long long ans = 1;
                for(int x = 0;x<b;x++)
                    ans = ans * 2;
                cout << ans;
            } 
        }
        cout << endl;
        
    }
}