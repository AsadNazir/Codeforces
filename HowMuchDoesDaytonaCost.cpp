#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <map>

using namespace std;
void sol()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> mp;

    for (int i = 0; i < n; i++)
        mp[a[i]]++;

    // if k exists once return true from mp

    if (mp.find(k) != mp.end())
    {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
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