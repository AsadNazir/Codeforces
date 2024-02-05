#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <climits>
#include <algorithm>
#include <map>
#include <set>

#define ll long long

#define fileio                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

// Helper functions and gpt here

// --------------------- Solution functions here ---------------------
void solE()
{
}
void solD()
{
    ll a, b;
    cin >> a >> b;

    deque<ll> va(a), vb(b);

    for (int i = 0; i < a; i++)
        cin >> va[i];
    for (int i = 0; i < b; i++)
        cin >> vb[i];

    ll ans = 0;


    sort(va.begin(), va.end());
    sort(vb.rbegin(), vb.rend());


    
    vector<ll> v;
    while (true)
    {
        if (v.size() == a)
        {
            break;
        }

        ll x = abs(vb.back() - va.back());

        ll y = abs(vb.front() - va.front());

        if (x > y)
        {
            // cout << "x: " << x << "\n";
            v.push_back(x);
            vb.pop_back();
            va.pop_back();
        }
        else
        {
            // cout << "y: " << y << "\n";
            v.push_back(y);
            vb.pop_front();
            va.pop_front();
        }
    }

    for (auto x : v)
    {
        ans += x;
    }

    cout << ans << "\n";
}

void solC()
{
}
void solB()
{
    int n;
    cin >> n;
    string s, f;
    cin >> s >> f;

    int days = 0;

    if (s == f)
    {
        cout << days << "\n";
        return;
    }
    // Count the number of cats in the initial and final positions
    int cats_in_s = 0, cats_in_f = 0;
    for (int i = 0; i < n; ++i)
    {
        cats_in_s += (s[i] == '1');
        cats_in_f += (f[i] == '1');
    }

    bool flag = false;

    if (cats_in_s == cats_in_f)
    {
        flag = true;
        // return;
    }

    int up = 0;
    int down = 0;
    // Perform operations to match the final position
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '1' && f[i] == '0')
        {
            // Remove a cat from a box
            down++;
            --cats_in_s;
            ++days;
        }
        else if (s[i] == '0' && f[i] == '1')
        {
            // Take a new cat and place it in a box
            up++;
            ++cats_in_s;
            ++days;
        }
    }

    cout << days - min(up, down) << "\n";
    //     cout<<"up: "<<up<<" down: "<<down<<"\n";
}
void solA()
{

    vector<pair<int, int>> v;

    for (int i = 0; i < 4; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    // calc distance
    int d1 = abs(v[0].first - v[1].first) + abs(v[0].second - v[1].second);
    int d2 = abs(v[1].first - v[2].first) + abs(v[1].second - v[2].second);
    int d3 = abs(v[2].first - v[3].first) + abs(v[2].second - v[3].second);
    int d4 = abs(v[3].first - v[0].first) + abs(v[3].second - v[0].second);
    // create a min heap

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(d1);
    pq.push(d2);
    pq.push(d3);
    pq.push(d4);

    int area = pq.top();
    pq.pop();
    area *= area;

    // calc area

    cout << area << "\n";
}
int main()
{
    // fastio;
    fileio;
    int t;
    cin >> t;

    while (t--)
        // solA();
        // solB();
        solD();

    return 0;
}