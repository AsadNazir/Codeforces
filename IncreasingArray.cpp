#include <bits/stdc++.h>

using namespace std;

void sol()
{
    long long n;
    cin >> n;
    vector<long long> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long moves = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            moves += a[i - 1] - a[i];
            a[i] = a[i - 1];
        }
    }

    cout << moves << endl;
}
void weirdAlgo()
{
    long long n;
    cin >> n;

    for (; n != 1;)
    {
        cout << n << " ";
        if (n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;
    }
    cout << 1 << endl;
}

void missingNo()
{
    long long n;
    cin >> n;

    long long sum = 0;

    sum = n * (n + 1) / 2;

    for (int i = 0; i < n - 1; i++)
    {
        long long x;
        cin>>x;
        sum -= x;
    }

    cout << sum << endl;
}
int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // weirdAlgo();

    missingNo();
    return 0;
}