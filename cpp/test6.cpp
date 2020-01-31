#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    int h = b/100;
    int t = (b%100)/10;
    int o = b%10;

    cout << a * o << endl;
    cout << a * t << endl;
    cout << a * h << endl;
    cout << a*o + a*t *10 + a*h*100 << endl;//cout<< a*b<<endl;

    return 0;
}