#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
vector <int> arr;

int solve(int actleft, int actright, int type, int amount)
{
    int left = actleft;
    int max1 = 0;
    int curamount = amount;
    int right = actleft;
    for(;;)
    {
        if(left >= actright)
            return max1;
        if(right != actright+1 && (curamount > 0 || arr[right] != type))
        {
            if(arr[right] == type)
                curamount--;
            right++;

        }
        else
        {
            left++;
            if(arr[left-1] == type)
                curamount++;
        }
        max1 = max(right-left,max1);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d,e;
    int t;
    cin >> t;
    for(int ab = 0;ab<t;ab++)
    {
        arr.clear();
        cin >> a >> b;
        char aa = ' ';
        for(int x = 0;x<a;x++)
        {
            cin >> aa;
            if(aa == '1')
                arr.push_back(1);
            else
                arr.push_back(0);

        }
        int maxsum = solve(0,arr.size()-1,0,1);
        int left = 0;
        int max1 = 0;
        int max2 = 0;
        int curamount = b;
        int right = 0;
        for(;;)
        {
            if(left == arr.size()-1)
                break;
            if(right != arr.size() && (curamount > 0 || arr[right] != 1))
            {
                if(arr[right] == 1)
                    curamount--;
                right++;

            }
            else
            {
                left++;
                if(arr[left-1] == 1)
                    curamount++;
            }
            if(right - left > max1)
            {
                max1 = right - left;
                max2 = max(solve(0,left,0,curamount), solve(right+1,arr.size()-1,0,curamount));
            }
            else
            {
                int tmpmax2 = max(solve(0,left,0,curamount), solve(right+1,arr.size()-1,0,curamount));
                max2 = max(max2,tmpmax2);
            }
            maxsum = max(max1 + max2, maxsum);
            cout << left << ' ' << right << ' ' << maxsum << endl;

         }
         cout << maxsum << endl;

    }
}