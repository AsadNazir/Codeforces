#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

using namespace std;
void sol()
{
    long long n, x;
    cin >> n >> x;

    vector<long long> v;

    for (int i = 0; i < n; i++)
    {
        long long t;
        cin >> t;
        v.push_back(t);
    }

    long long cap = 0;
    int h = v[0];

    while (1)
    {

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] < h)
            {
                cap += h - v[i];
            }
        }

        if(cap==x)
        {
            cout<<h<<"\n";
            break;
        }

        if (cap >x)
        {
            h--;
            cout << h << "\n";
            break;
        }

        cap = 0;

        h++;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        sol();

    return 0;
}