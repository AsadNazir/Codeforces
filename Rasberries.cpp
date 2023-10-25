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
    int n;
    cin >> n;
    int k;
    cin >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int moves = INT_MAX;

    for (int i = 0; i < n; i++)
    {

        moves = min(moves, k - a[i] % k);
        if (a[i] % k == 0)
            moves = 0;
    }

    if (k == 4)
    {

        int evenCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                evenCount++;
        }

        if (evenCount >= 2)
            moves = 0;
        else if (evenCount == 1)
            moves = min(moves, 1);
        else
            moves = min(moves, 2);
    }
    cout << moves << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        sol();
    return 0;
}