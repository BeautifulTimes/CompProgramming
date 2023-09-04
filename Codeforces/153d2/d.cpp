#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
map <string,bool> seen;
int offset(string in)
{
    if(seen.find(in) != seen.end())
        return -1;
    int a,b,c,d,e;
    cin >> in;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    for(int x = in.length()-1;x>=0;x--)
    {
        if(in[x] == '0')
        {
            a++;
            b += c;
        }
        else
        {
            c++;
            d += a;
        }
    }
    seen[in] = true;
    return abs(d - b);
    
}
int solve(string in)
{
    string best1 = "0";
    int best1value = 1000000000;
    string best2 = in;
    int best2value = 100000000;
    for(int x = 0;x<in.length();x++)
    {
        if(in[x] == '0')
        {
            in[x] = '1';
            int val = offset(in);
            if(val != -1)
            {
                if(best1value > val)
                {
                    best2 = best1;
                    best2value = best1value;
                    best1value = val;
                    best1 = in;
                }
                else if(best2value > val)
                {
                    best2value = val;
                    best2 = in;
                }
            }
            in[x] = '0';
        }
        else
        {
            in[x] = '0';
            int val = offset(in);
            if(val != -1)
            {
                if(best1value > val)
                {
                    best2 = best1;
                    best2value = best1value;
                    best1value = val;
                    best1 = in;
                }
                else if(best2value > val)
                {
                    best2value = val;
                    best2 = in;
                }
            }
            in[x] = '1';
        }
    }
        cout << in << ' ' << best1 << ' ' << best1value << ' '<< endl;
    if(best1 == "0")
        return 1231213;   
    if(best1value == 0)
        return 1;
    else
        return 1 + min(solve(best1),solve(best2));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d,e;
    string in;
    cin >> in;
    if(offset(in) == 0)
        cout << 0 << endl;
    else
        cout << solve(in) << endl;
    

}