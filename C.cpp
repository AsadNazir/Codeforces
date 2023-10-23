#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <numeric>
#include <cstdio>
#include <list>
#include <cassert>
#include <climits>
using namespace std;

#define ll long long
#define pb push_back
#define loop(a) for (int i = 0; i < a; i++)
#define loopv(i, a) for (int i = 0; i < a; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define goog(tno) cout << "Case #" << tno << ": "
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

void sol()
{
    int n;
    cin >> n;
    vector<vector<char>> v(n, vector<char>(n, 0));

    for (auto &i : v)
    {
        for (auto &j : i)
        {
            cin >> j;
        }
    }

    vector<vector<char>> v2(n, vector<char>(n, 0));
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            v2[i][n - 1 - j] = v[j][i];
        }
    }

    count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v2[i][j] << " ";
            if (v2[i][j] != v[i][j] && v[i][j] != 'z')
            {
                count++;
            }
        }
        cout << endl;
    }

    cout << count << endl;
    return;
}

int main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
        sol();
    return 0;
}