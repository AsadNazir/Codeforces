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
<<<<<<< HEAD

=======
#include <stdio.h>
>>>>>>> 6af45dd9e78937eed29f25825a5450569182e8ce
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
    int n, m;

    cin >> n >> m;
    string x, y;
    cin >> x >> y;
    if (x == y)
    {
        cout << 0 << endl;
        return;
    }

    if (n > m)
    {
        if (x.find(y) != string::npos)
        {
            cout << 0 << endl;
            return;
        }
    }

    int count = 0;

    while (x.size() <= m)
    {
        x += x;
        count++;
    }

    if (x.find(y) != string::npos)
    {
        int repetitions_needed = y.length() / x.length();
        int remainder = y.length() % x.length();
        if (remainder > 0)
        {
            repetitions_needed++;
        }

        cout << count << endl;
        return;
    }

    cout << -1 << endl;
    return;
}
void sol2()
{
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