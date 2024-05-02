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
#define fileio                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout)

int gcd(int x, int y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}

void solA()
{
    int x;
    cin >> x;

    int ans = INT_MIN;
    int ans2 = 1;

    // if (x == 2)
    // {
    //     cout << 1 << endl;
    //     return;
    // }

    int y = 2;
    for (y = 2; y < x; y++)
    {
        if (gcd(x, y) + y > ans)
        {
            ans = gcd(x, y) + y;
            ans2 = y;
        }
    }

    cout << ans2 << endl;
}

void solb()
{
    int na, nb;
    cin >> na >> nb;
    string a, b;
    cin >> a >> b;

    int pa = 0, pb = 0;
    int matched = 0;

    for (pa = 0; pa < na && pb < nb; pa++)
    {
        bool found = false;
        while (pb < nb)
        {
            if (a[pa] == b[pb++])
            {
                found = true;
                matched++;
                break;
            }
            // pb++;
        }

        if (!found)
        {
            cout << matched << "\n";
            return;
        }
    }

    cout << matched << endl;
}

void solC()
{
    ll n;
    cin >> n;
    vector<ll> v(n - 1);
    for (auto &i : v)
        cin >> i;

    vector<ll> ans(n);
    ans[0] = v[0] + 1;

    for (int i = 1, j = 0; i < n && j < n - 2; i++, j++)
    {
        int nextEle = v[j + 1]+1;
        while (nextEle % ans[i - 1] != v[j])
        {

            // cout << nextEle << " \n";
            nextEle++;
        }
        ans[i] = nextEle;

        //cout<<"here"<<endl;
        // ans[i] = ans[i - 1] + v[j];
    }

    int nextEle = v.back()+1;
    // cout << nextEle << " \n";
    // cout << v.back() << " \n";
    while (nextEle % ans[n - 2] != v.back())
        nextEle++;

    ans[n - 1] = nextEle;

    for (auto i : ans)
        cout << i << " ";
    cout << "\n";
}

int main()
{
    fast_io;
    fileio;
    int t;
    cin >> t;
    while (t--)
    {
        solC();
    }
    return 0;
}