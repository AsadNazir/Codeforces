
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

    int n;
    cin >> n;
    vector<long long> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int size = 1;

    if (v.size() == 0)
    {
        return 0;
    }
    else if (v.size() == 1)
        return 1;

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] != v[i - 1])
        {
            size++;
        }
    }

    return size;
}

int FerrisWheel()
{
    long long n, x;
    cin >> n >> x;

    vector<long long> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int i = 0, j = n - 1;

    int ans = 0;

    while (i <= j)
    {
        if (v[i] + v[j] <= x)
        {
            i++;
            j--;
        }
        else
        {
            j--;
        }
        ans++;
    }

    return ans;
}

void conecertTickets()
{
    int n, h;

    cin >> n >> h;

    multiset<long long> v;
    vector<long long> ans(n);
    vector<long long> tick(h);

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        v.insert(x);
    }

    for (int i = 0; i < h; i++)
        cin >> tick[i];

    // sort(v.begin(), v.end());

    for (int i = 0; i < h; i++)
    {
        auto it= v.upper_bound(tick[i]);

        if (it == v.begin())
        {
            cout << -1 << endl;
        }
        else
        {
            it--;
            cout << *it << endl;
            v.erase(it);
        }
    }

    return;
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

    // cout << distintVal();
    conecertTickets();
    return 0;
}