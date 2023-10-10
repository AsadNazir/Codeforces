#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;
bool good(ll x, ll b, ll a, ll n)
{
    return (x / a) * (x / b) >= n;
}


void sol()
{
    ll w, h, n;
    cin >> w >> h >> n;

    ll l = 0, mid;
    ll r = 1;

    while (!good(r, w, h, n))
    {
        r *= 2;
    }

    while (l + 1 < r)
    {
        ll mid = (l + r) / 2;
        
        if (good(mid, w, h, n))
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }

    cout << r << "\n";
}
int main()
{

    sol();
    return 0;
}