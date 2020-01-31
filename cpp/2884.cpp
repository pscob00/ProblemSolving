#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    
    if(b < 45)
    {
        if(a > 0)
            a = a-1;
        else
        {
            a = a + 23;
        }
        
        b = b+15;
    }
    else
    {
        b = b-45;
    }
    cout << a << " " << b;

    return 0;
}