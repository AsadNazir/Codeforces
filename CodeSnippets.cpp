#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define fileio freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);


void sol()
{
    int x, y, k;
    cin >> x >> y >> k;

    if (x > y)
    {
        cout << x << endl;
        return;
    }

    else
    {
        if (k > y - x)
        {
            cout << y << endl;
            return;
        }
        else

            cout << y + ((y - x)) - k << endl;
        return;
    }
}
int main()
{
    fileio;
    // fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        sol();
    }

    return 0;
}