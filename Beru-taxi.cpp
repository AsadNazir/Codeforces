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
#include <iomanip>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
void sol()
{
    double a, b;
    cin >> a >> b;

    int n;
    cin >> n;

    vector<tuple<int, int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        int x, y, s;
        cin >> x >> y >> s;
        v[i] = make_tuple(x, y, s);
    }

    // calculate time for each point
    vector<double> time(n);
    for (int i = 0; i < n; i++)
    {
        time[i] = sqrt(pow((get<0>(v[i]) - a), 2) + pow((get<1>(v[i]) - b), 2)) / get<2>(v[i]);
    }

    cout << setprecision(10) << *min_element(time.begin(), time.end()) << endl;
}
int main()
{
    // int t; cin>>t;
    // while(t--)
    sol();
    return 0;
}