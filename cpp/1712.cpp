#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    //a + b*x < c*x
    //a/c-b < x 
    int x;
    if(b >= c)
        cout << -1;
    else
    {
        x = a / (c - b);
        x = x + 1;
        cout << x;
    }
    return 0;
}