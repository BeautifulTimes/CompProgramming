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
        
    }

#include <vector>
#include <queue>
#include <iostream>
/*

Suppose you have a N by M matrix with integers:

[
    [2, 3, 4],
    [2, 1, 5]
]

You can start anywhere on the matrix, and you can go in 
one of 8 directions. Path must contain strictly increasing 
integers. 

What is the longest increasing path present in the matrix?
*/
using namespace std;
vector<vector<int>> longestPath;
int search(int x, int y, vector<vector<int>> input, int prevValue)
{
    if(x < 0 || x >= longestPath.size() || y < 0 || y >= longestPath[0].size() || prevValue >= input[x][y])
        return 0;
    if(longestPath[x][y] != -1)
        return longestPath[x][y];
    int maxValue = 0;
    maxValue = max(maxValue, search(x+1,y,input,input[x][y]));
    maxValue = max(maxValue, search(x,y+1,input,input[x][y]));
    maxValue = max(maxValue, search(x-1,y,input,input[x][y]));
    maxValue = max(maxValue, search(x,y-1,input,input[x][y]));
    maxValue = max(maxValue, search(x+1,y+1,input,input[x][y]));
    maxValue = max(maxValue, search(x+1,y-1,input,input[x][y]));
    maxValue = max(maxValue, search(x-1,y+1,input,input[x][y]));
    maxValue = max(maxValue, search(x-1,y-1,input,input[x][y]));
    longestPath[x][y] = maxValue + 1;
    return maxValue + 1;
}

int findLongestPath(vector<vector<int>> input)
{
    for(int x = 0;x<input.size();x++)
    {
        vector <int> tmp;
        for(int y = 0;y<input[0].size();y++)
        {
            tmp.push_back(-1);
        }
        longestPath.push_back(tmp);
    }
    for(int x = 0;x<input.size();x++)
    {
        for(int y = 0;y<input[0].size();y++)
        {
            if(longestPath[x][y] == -1)
            {
                search(x,y,input,0);
            }
        }       
    }
    int maxPath = 0;
    for(int x = 0;x<input.size();x++)
    {
        for(int y = 0;y<input[0].size();y++)
        {
            maxPath = max(maxPath,longestPath[x][y]);
            cout << longestPath[x][y] << ' ';
        }
        cout << endl;
    }
    return maxPath;
}

int main()
{
    vector<vector<int>> input;
    input.push_back({1, 2, 9});
    input.push_back({6, 8, 3});
    input.push_back({7, 5, 4});
    cout << findLongestPath(input);

}


}