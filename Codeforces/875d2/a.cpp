#include <iostream>

using namespace std;
int main()
{
    int a;
    cin >> a;
    for(int x = 0;x<a;x++){
        int b;
        cin >> b;
        
        for(int x1 = 0;x1<b;x1++)
        {
            int c;
            cin >> c;
            cout << b-c+1 << " ";
        }
        cout << "\n";
    }
}