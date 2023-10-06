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
    map <string,int> dict;
    int count = 0;
    for(int x = 0;x<26;x++)
    {
        for(int x1 = 0;x1<26;x1++)
        {
            if(x!=x1)
            {
                string stuff = "";
                stuff+= (x+'a');
                stuff += (x1+'a');
                dict[stuff] = count;
                count++;
            }
        }
    }
    for(int ab = 0;ab<t;ab++)
    {
        string in;
        cin >> in;
        cout << dict[in] + 1 << endl;
    }
}