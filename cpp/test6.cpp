#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    if(a == b)
        cout << "==";
    else
    {
       a < b ? cout << "<" : cout << ">";
    }
    return 0;
}