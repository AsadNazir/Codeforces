#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
void sol()
{
    int n, k;
    cin >> n;

    // cout << "n " << n << "\n";

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    cin >> k;
    // cout << "k " << k << "\n";
    //  for (auto x : v)
    //  {
    //      cout << x << " ";
    //  }
    cout << endl;

    for (int i = 0; i < k; i++)
    {
        int l, r;

        int count = 0;

        // using lower bounds
        cin >> l >> r;
        auto it = lower_bound(v.begin(), v.end(), l);
        auto it2 = upper_bound(v.begin(), v.end(), r);

        //

        int index = it - v.begin();
        int index2 = it2 - v.begin();

        cout << index2 - index << " ";
    }
}
int main()
{
    sol();
    return 0;
}