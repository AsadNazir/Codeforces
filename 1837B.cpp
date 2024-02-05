#include <iostream>
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
    int n;
    string s;
    cin >> n >> s;
    int ans = 1;
    long long no = 10;

    if (n == 1)
    {
        cout << "2\n";
        return;
    }

    int g_max = INT_MIN;

    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            ans++;
        }
        else
            ans = 1;

        g_max = max(g_max, ans);
    }

    cout << g_max + 1 << endl;
}
int main()
{
    // fileio;
    fastio;
    int t;
    cin >> t;
    while (t--)
        sol();
    return 0;
}