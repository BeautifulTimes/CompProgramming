#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin >> n;
    for(int x2 = 0;x2<n;x2++)
    {
        int b;
        cin >> b >>  k;
        int lowpoint = 1;
        int highpoint = b;
        int count = 2;
        for(;;)
        {
            if(highpoint - k  <= lowpoint)
                break;
            count++;
            highpoint = highpoint - k;
            
        }
        cout << count << '\n';
    }
}