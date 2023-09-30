#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;

int indexOfMax(vector<long long> arr)
{
    long long max = arr[0];
    int index = 0;
    for(int x = 1;x<arr.size();x++)
    {
        if(arr[x] > max)
        {
            index = x;
            max = arr[x];
        }
    }
    return index;
}
int indexOfMin(vector<long long> arr)
{
    long long max = arr[0];
    int index = 0;
    for(int x = 1;x<arr.size();x++)
    {
        if(arr[x] < max)
        {
            index = x;
            max = arr[x];
        }
    }
    return index;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a,b,c,d,e;
    int t;
    cin >> t;
    for(int ab = 0;ab<t;ab++)
    {
        cin >> a >> b >> c;
        vector <long long> aApples;
        vector <long long> bApples;

        for(long long x = 0;x<a;x++)
        {
            cin >> d;
            aApples.push_back(d);
        }
        for(long long x = 0;x<b;x++)
        {
            cin >> d;
            bApples.push_back(d);
        }
        long long lastSwapValue = -1;
        long long lastSwapValue2 = -1;

        for(long long x = 1;x<=c;x++)
        {
            if(x % 2 == 1)
            {
                int maxIndex = indexOfMax(bApples);
                int minIndex = indexOfMin(aApples);
                if(bApples[maxIndex] > aApples[minIndex])
                {
                    long long tempvalue = aApples[minIndex];
                    aApples[minIndex] = bApples[maxIndex];
                    bApples[maxIndex] = tempvalue;
                    if((lastSwapValue == aApples[minIndex] && lastSwapValue2 == bApples[maxIndex]) || (lastSwapValue2 == aApples[minIndex] && lastSwapValue == bApples[maxIndex]))
                    {
                        if( (c - x) % 2 == 0)
                        {
                            break;
                        }
                    }
                    lastSwapValue = aApples[minIndex];
                    lastSwapValue2 = bApples[maxIndex];
                }
                else  if( (c - x) % 2 == 0)
                {
                    break;
                }     
            }
            else
            {
                int maxIndex = indexOfMax(aApples);
                int minIndex = indexOfMin(bApples);
                if(aApples[maxIndex] > bApples[minIndex])
                {
                    long long tempvalue = bApples[minIndex];
                    bApples[minIndex] = aApples[maxIndex];
                    aApples[maxIndex] = tempvalue;
                    if((lastSwapValue == aApples[maxIndex] && lastSwapValue2 == bApples[minIndex]) || (lastSwapValue2 == aApples[maxIndex] && lastSwapValue == bApples[minIndex]))
                    {
                        if( (c - x) % 2 == 0)
                        {
                            break;
                        }
                    }
                    lastSwapValue = bApples[minIndex];
                    lastSwapValue2 = aApples[maxIndex];
                }       
                else  if( (c - x) % 2 == 0)
                {
                    break;
                }     
            }
        }
        long long sum = 0;
        for(int x = 0;x<aApples.size();x++)
        {
            sum += aApples[x];
        }
        cout << sum << endl;
    }
}