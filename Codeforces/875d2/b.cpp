#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int a;
    cin >> a;
    for(int xx = 0;xx<a;xx++){
        int b,c;
        cin >> b;
        vector <int> arr1,arr2;
        vector <int> ans1(2*b+1,0);
        vector <int> ans2(2*b+1,0);

        for(int x = 0;x<b;x++)
        {
            cin >> c;
            arr1.push_back(c);
        }
        for(int x = 0;x<b;x++)
        {
            cin >> c;
            arr2.push_back(c);
        }
        int count = 0;
        for(int x = 0;x<b;x++)
        {
            count++;
            if(x == b-1 || arr1[x+1] != arr1[x])
            {
                ans1[arr1[x]] = max(count,ans1[arr1[x]]);
                count = 0;
            }
        }
        count = 0;
        for(int x = 0;x<b;x++)
        {
            count++;
            if(x == b-1 || arr2[x+1] != arr2[x])
            {
                ans2[arr2[x]] = max(count,ans2[arr2[x]]);
                count = 0;
            }
        }
        int actualans = 0;
        for(int x = 0;x<2*b+1;x++)
        {
            actualans = max(actualans, ans2[x] + ans1[x]);
        }
        cout << actualans << "\n";
    }
}