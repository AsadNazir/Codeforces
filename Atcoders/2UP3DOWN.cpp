#include <iostream>
#include <vector>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <fstream>
#include <unordered_map>
#include <map>
#include <set>
#include <climits>
#include <unordered_set>
#include <stack>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
void twoupthreedown()
{
    int x, y;
    cin >> x >> y;

    if (x - y <= 3 && y - x <= 2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

vector<int> getDigits(int n)
{
    vector<int> v;
    while (n > 0)
    {
        v.push_back(n % 10);
        n /= 10;
    }
    reverse(v.begin(), v.end());
    return v;
} //

void threeTwoSixLikeNumber()
{
    int s;
    cin >> s;

    for (int i = 0; true; i++)
    {
        vector<int> v = getDigits(s);

        if (v[0] * v[1] == v[2])
        {
            cout << v[0] << v[1] << v[2] << endl;
            return;
        }
        s++;
    }
}

void sol()
{
    int n, m;
    cin >> n >> m;

    vector<int> v(n + 1);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    v[n] = INT_MAX;

    sort(v.begin(), v.end());

    int res = 0;
    int r = 0;

    for (int i = 0; i < n; i++)
    {

        while (v[r] < v[i] + m)
            r++;

        res = max(res, r - i);
    }

    cout << res << endl;
}

int main()
{
    sol();

    return 0;
}
