#include <iostream>
#include <map>

using namespace std;

void sol()
{
    long long n;
    cin >> n;
    string s;
    cin >> s;
    map<char, long long> mp;

    for (auto &i : s)
        mp[i]++;

    long long k = mp.size();

    long long m = n - k;
    long long ans = (n * (n + 1)) / 2;
    ans = ans - (m * (m + 1)) / 2;

    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        sol();
}