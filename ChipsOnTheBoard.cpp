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
#define N 2000005
#define M 1000000007
long long a[N];

void sol()
{
    long long n;
    cin >> n;
    vector<long long> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int j = 0; j < n; j++)
    {
        cin >> b[j];
    }

    long long ans1 = 0;
    long long rowMin = *min_element(a.begin(), a.end());

    long long ans2 = 0;
    long long colMin = *min_element(b.begin(), b.end());

    for (int i = 0; i < n; i++)
    {
        ans1 += colMin + a[i];
    }

    for (int i = 0; i < n; i++)
    {
        ans2 += rowMin + b[i];
    }

    cout << min(ans1, ans2) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        sol();
    return 0;
}