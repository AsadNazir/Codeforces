
#include <bits/stdc++.h>

#define lli long long int
#define li long int
#define ld long double
using namespace std;
const lli mod = 1e9 + 7;
// bool visited[n][n];
// int reserved[49];

// int move(int r, int c, vector<string> &v, int n, vector<vector<int>> &dp)
// {
//     if (r == n - 1 && c == n - 1 && v[r][c] == '.')
//     {
//         return 1;
//     }

//     if (dp[r][c] != -1)
//     {
//         return dp[r][c];
//     }

//     //..** * means blocked and . means free
//     //..*.
//     //....
//     //..*.

//     int ans = 0;
//     if (v[r][c] == '*')
//     {
//         dp[r][c] = 0;
//         return 0;
//     }

//     if (c + 1 < n)
//     {

//         ans += move(r, c + 1, v, n, dp);
//     }

//     if (r + 1 < n)
//     {

//         ans += move(r + 1, c, v, n, dp);
//     }

//     return dp[r][c] = ans % mod;
// }

int distintVal()
{
    long long n;
    cin >> n;
    unordered_map<long long, long long> s;

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        s[x]++;
    }

    return s.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int n;
    // cin >> n;
    // vector<string> v(n);
    // vector<vector<int>> dp(n, vector<int>(n, -1));
    // vector<vector<bool>> visited(n + 1, vector<bool>(n + 1, false));

    // for (int i = 0; i < n; i++)
    //     cin >> v[i];

    // cout << move(0, 0, v, n, dp);

    cout << distintVal();
    return 0;
}