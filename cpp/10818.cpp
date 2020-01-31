#include <bits/stdc++.h>
using namespace std;

int main()
{
    int min, max;
    min = INT_MAX;
    max = INT_MIN;
    
    int num;
    cin >> num;
    int temp;
    for(int i =0; i<num;i++)
    {
        cin >> temp;
        if(temp < min) min = temp;
        if(temp > max) max = temp;
    }

    cout << min << " " << max;

    return 0;
}