#include <iostream>
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
void sol()
{
    vector<int> v(3);

    for (auto i = 0; i < 3; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    if (v[2] == v[1] && v[1] == v[0])
    {
        cout << "YES" << endl;
        return;
    }

    if (v[1] % v[0] != 0 || v[2] % v[0] != 0)
    {
        cout << "NO" << endl;
        return;
    }

    int ans = (v[1] / v[0]) - 1 + (v[2] / v[0]) - 1;

    if (ans <= 3)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{

    fastio;

    int t;
    cin >> t;

    while (t--)
        sol();

    return 0;
}