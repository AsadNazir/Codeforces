#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool good(double mid, double c)
{
    return sqrt(mid) + pow(mid, 2) > c;
}

void sol()
{
    double n;
    cin >> n;
    double lo = 0, hi = 1e18;

    for (int i = 0; i < 100; i++)
    {
        double mid = (lo+hi) / 2.0;
        if (good(mid, n))
        {
            hi = mid;
        }
        else
        {
            lo = mid;
        }
    }

    cout <<setprecision(10)<< hi << endl;
}
int main()
{
    sol();
    return 0;
}