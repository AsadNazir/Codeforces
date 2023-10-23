#include <iostream>
#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool good(ll mid, ll k, vector<ll> &v)
{
    ll count = 0;
    for (auto &i : v)
    {
        count += min(mid, i);
    }
    return count >= (k * mid);
}

void sol()
{
    ll k;
    int n;
    cin >> k >> n;
    vector<ll> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll l = 0, r = 1e17;

    while (l + 1 < r)
    {
        ll mid = (l + r) / 2;
        if (good(mid, k, v))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }

    cout << l << endl;
}
int main()
{
    sol();
    return 0;
}