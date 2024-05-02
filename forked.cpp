#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <stack>
#include <algorithm>
#include <unordered_map>
#define ll long long

using namespace std;

void sol()
{
    int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};
    int a, b;
    cin >> a >> b;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    set<pair<int, int>> st1, st2;
    for (int j = 0; j < 4; j++)
    {
        st1.insert({x1 + dx[j] * a, y1 + dy[j] * b});
        st2.insert({x2 + dx[j] * a, y2 + dy[j] * b});
        st1.insert({x1 + dx[j] * b, y1 + dy[j] * a});
        st2.insert({x2 + dx[j] * b, y2 + dy[j] * a});
    }
    int ans = 0;
    for (auto x : st1)
        if (st2.find(x) != st2.end())
            ans++;
    cout << ans << '\n';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        sol();
}