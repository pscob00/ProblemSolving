#include <bits/stdc++.h>
using namespace std;

int main()
{
    int max, num;
    max = 0;
    int temp;
    for(int i =0; i<9;i++)
    {
        cin >> temp;
        if(temp > max)
        {
            max = temp;
            num = i+1;
        }
    }

    cout << max << endl << num;

    return 0;
}