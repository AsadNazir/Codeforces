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
    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long curr = 0;
    long long ans = 0;

    for (int i = 1; i < n; i++)
    {
        long long ele = a[i];
        while (curr > 0 && a[i - 1] * 2 <= ele)
        {
            curr--;
            ele /= 2;
        }

        while (ele < a[i - 1])
        {
            ele *= 2;
            curr++;
        }

        ans += curr;
    }

    cout << ans << endl;

    return;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        sol();

    return 0;
}