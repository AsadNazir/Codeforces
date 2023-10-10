#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void sol()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> q(k);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < k; i++)
    {
        cin >> q[i];
    }

    // closest to Rigth
    for (auto x : q)
    {
        auto it = lower_bound(v.begin(), v.end(), x);

        if (it == v.end())
        {
            cout << v.size() + 1 << "\n";
        }
        else
        {
            cout << it - v.begin() + 1 << "\n";
        }
    }
}

int main()
{
    sol();
    return 0;
}