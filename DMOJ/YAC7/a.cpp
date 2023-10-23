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
    int arr[t];

    vector<int> even,odd;
    for(int x = 0;x<t;x++)
    {
        cin >> arr[x];
        if(arr[x] %2 == 0)
        {
            even.push_back(x);
        }
        else
        {
            odd.push_back(x);
        }
    
    }
    long long tot = 0;
    vector<int> out;
    //cout << odd.size() << " " << even.size()  << endl;
    if(odd.size() == 0)
    {
        for(int x = 0;x<even.size();x++)
        {
            out.push_back(even[x]);
            tot += arr[even[x]]/2;
        }   
    }
    else
    {
        out.push_back(odd[0]);
        tot += arr[odd[0]]/2;
        for(int x = 0;x<even.size();x++)
        {
            out.push_back(even[x]);
            tot += arr[even[x]]/2 - 1;
        }
        for(int x = 1;x<odd.size();x++)
        {
            out.push_back(odd[x]);
            tot += arr[odd[x]]/2;
        }
    }
    cout << tot << endl;
    for(int x = 0;x<out.size();x++)
        cout << out[x] + 1 << ' ';
    cout << endl;

}