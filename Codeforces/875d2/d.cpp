#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int a,b,c,d;
    cin >> a;
    for(int xx = 0;xx<a;xx++)
    {
        cin >> b;
        vector<int> arr1,arr2;
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
    }

}