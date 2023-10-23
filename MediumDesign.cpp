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


void sol()
{
    long long n;
    cin >> n;
    long long m;
    cin >> m;
    vector<int> v(m, 0);

    for (int i = 0; i < n; i++)
    {
        long long a, b;

        cin >> a >> b;
        a--;
        b--;

        for (int j = a; j <= b; j++)
        {
            v[j] += 1;
        }
    }

    cout << *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end()) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        sol();
    return 0;
}