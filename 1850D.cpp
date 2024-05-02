#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define fileio                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

void sol()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    sort(v.begin(), v.end());

    int g_cnt = 0;
    int cnt = 0;

    for (int i = 1; i < n; ++i)
    {
        if (abs(v[i] - v[i - 1]) <= k)
            cnt++;
        else
            cnt = 0;
        g_cnt = max(g_cnt, cnt);
    }

    cout << n - g_cnt - 1 << endl;
}

int main()
{
    //fileio;
    fastio;
    int t;
    cin >> t;
    while (t--)
        sol();
    return 0;
}