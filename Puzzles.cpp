#include <iostream>
#include <vector>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <fstream>
#include <unordered_map>
#include <map>
#include <set>
#include <climits>
#include <unordered_set>
#include <stack>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

void sol()
{
    int n, m;
    cin >> m >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int best = INT_MAX;

    for (auto x : v)
        cout << x << " ";
    cout << endl;
    for (int i = 0; i <= n - m; i++)
    {
        cout << v[i + m - 1] << " " << v[i] << endl;

        best = min(best, v[i + m - 1] - v[i]);
    }

    cout << best << endl;
    return;
}

int main()
{

    fastio;
    // int t;
    // cin >> t;

    // while (t--)
    sol();

    return 0;
}