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
        string f;
        cin >> f;
        if(f == "()")
            cout << "NO" << endl;
        else
        {

            for(;;)
            {
                string out;
                c = 0;
                for(int x = 0;x<2*f.length();x++)
                {
                   if(c == 0 )
                   {
                        out += '(';
                        c++;
                   }
                   else if( 2 * f.length() - x == c)
                   {
                        out += ')';
                        c--;
                   }
                    else if( rand() % 2  == 1)
                    {
                        out += '(';
                        c++;
                    }
                    else{
                        out += ')';
                        c--;
                    }
                }
                b = out.find(f);
                if(b  == -1)
                {
                    cout << "YES" << endl;
                    cout << out << endl;
                    break;
                }
            }
        }
    }
}