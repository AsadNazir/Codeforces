
#include <iostream>
#include <cmath>
#define fileio                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

long long smallest_non_divisor(long long n)
{
    long long ans = 0;
    for (long long i = 1; i<=100; ++i)
    {
        if (n % i == 0)
        {
            ans += 1;
        }
        else break;
    }
    return ans;
}

int main()
{
    fileio;
    int t;
    cin >> t;

    for (long long i = 0; i < t; ++i)
    {
        long long n;
        cin >> n;

        // Find the smallest x such that x does not divide n
        long long x = smallest_non_divisor(n);

        // Output the result
        cout << x << endl;
    }

    return 0;
}
