#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sol()
{
    long long a, b, n;
    cin >> a >> b >> n;

    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    long long ans = b;
    for (int i = 0; i < v.size(); i++)
    {
        ans += min(a - 1, v[i]);
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        sol();
    return 0;
}