#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

using namespace std;
void sol()
{
    int n;
    cin >> n;

    vector<int> v(n);
    v[0] = 1, v[1] = 3;

    for (int i = 2; i < n; i++)
    {
        int sum = v[i - 1] + v[i - 2];
        int x = sum + 1;

        while ((3 * x) % sum == 0)
        {
            x++;
        }
        v[i] = x;
    }

    for (auto x : v)
        cout << x << " ";

    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        sol();

    return 0;
}