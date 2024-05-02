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

void sol2()
{
    int n, m;

    cin >> n >> m;

    bool isForward = true;

    int pass = m;

    // if(n<m)
    // {
    //     cout<<m<<"->"<<m+1<<endl;
    // }

    int prev = 0;
    int next = 1;
    while (pass)
    {
        if (isForward)
        {
            if (next == n)
            {
                isForward = false;
                continue;
            }
            prev = next;
            next++;
            pass--;
        }
        else
        {
            if (next == 1)
            {
                isForward = true;
                continue;
            }

            prev = next;
            next--;
            pass--;
        }
    }

    cout << prev << "->" << next << endl;
}

void sol4()
{
    int n, m;
    cin>>n>>m;

    int cycles = 2*(n-1);
    int total = m/cycles;
    int rem = m%cycles;

    cout<<total<<endl;
    cout<<rem<<endl;
}

void sol3()
{
    int n, m;
    cin >> n >> m;

    bool isFor;

    if (m < n)
    {
        cout << m << "->" << m + 1 << endl;
        return;
    }

    if ((m / (n - 1)) % 2 == 0)
    {
        isFor = true;
    }
    else
        isFor = false;

    int rem = m % (n - 1);

    if (isFor)
    {
        cout << "its a forward" << endl;
        if (rem == 0)
            cout << n - 1 << "->" << n << endl;
        else if (rem == 1)
            cout << 1 << "->" << 2 << endl;
        else
            cout << rem << "->" << rem + 1 << endl;
    }
    else
    {
        cout << "its a backward" << endl;
        if (rem == 0)
            cout << 2 << "->" << 1 << endl;
        else if (rem == 1)
            cout << n << "->" << n - 1 << endl;
        else
            cout << n - rem + 1 << "->" << n - rem << endl;
    }
}
int main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    sol4();
    return 0;
}