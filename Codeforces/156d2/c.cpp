#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
#define int long long

int sum(int mid, int b)
{
    int tot = b * (b+1)/2;
    int tmpb = b  - mid;
    tot -= tmpb*(tmpb+1)/2;
    return tot;
}
int search(int a, int b)
{   
    int low = 0;
    int high = b;
    for(;;)
    {
        if(high - low == 1)
        {
            if(sum(high,b) < a)
                return high;
            return low;
        }
        int mid = (low + high)/2;
        if(sum(mid,b) == a)
            return mid-1;
        else if(sum(mid,b) < a && sum(mid+1,b) >= a)
            return mid;
        else if (sum(mid,b) > a)
            high = mid;
        else
            low = mid;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d,e;
    int t;
    cin >> t;
    for(int ab = 0;ab<t;ab++)
    {
        string in;
        cin >> in >> a;
        b = in.length();
        int removalOrder[b];
        int curRemoval = 0;
        for(int x = 0;x<b;x++)
            removalOrder[x] = -1;
        stack <pair<char,int>> st;
        st.push(make_pair(in[0],0));

        for(int x = 1;x<b;x++)
        {
            if(in[x] >= in[x-1])
            {
                st.push(make_pair(in[x],x));
            }
            else
            {
                 while(!st.empty())
                {
                    if(in[x] < st.top().first)
                    {
                        removalOrder[st.top().second] = curRemoval;
                        curRemoval++;
                        st.pop();
                    }
                    else
                        break;
                }
                st.push(make_pair(in[x],x));
            }
        }
        while(!st.empty())
        {
            removalOrder[st.top().second] = curRemoval;
            curRemoval++;
            st.pop();
        }

        int iteration = search(a,b);
        int index = a - sum(iteration,b);
        //cout << iteration << " " << index << endl;
        for(int x = 0;x<b;x++)
        {
            if(removalOrder[x] >= iteration)
            {
                index--;
                if(index == 0)
                {
                    cout << in[x];
                    break;
                }
            }
        }
    }
    cout << endl;

}