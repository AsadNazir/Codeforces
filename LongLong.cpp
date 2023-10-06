#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<long long> arr;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }

    long long sum = 0;
    long long op = 0;
    bool open = false;

    for (auto &x : arr)
    {
        sum += abs(x);

        if (x < 0 && !open)
        {
            op++;
            open = true;
        }

        else if(x>0)
        {
            open = false;
        }
    }

    cout << sum <<" "<< op << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}