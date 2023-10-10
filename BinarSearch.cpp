#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

void sol()
{
    ll n, k;

    cin >> n >> k;
    vector<ll> v;
    vector<ll> q;

    for (int i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        v.push_back(t);
    }

    for (int i = 0; i < k; i++)
    {
        ll t;
        cin >> t;
        q.push_back(t);
    }

    for (auto x : q)
    {
        ll l = 0, h = v.size() - 1, mid;
        bool found = false;

        // cout<<x<<"\n";

        while (l <= h)
        {
            mid = (l + h) / 2;
            if (v[mid] == x)
            {
                cout << "YES\n";
                found = true;
                break;
            }
            else if (v[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
        if (!found)
            cout << "NO\n";
    }
}
int main()
{
    // int t;
    // cin >> t;

    // while (t--)
    sol();

    return 0;
}