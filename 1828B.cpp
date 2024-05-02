#include <iostream>
#include <cmath>
#include <vector>

#define fileio                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

// Function to calculate GCD using Euclid's algorithm
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find GCD of a vector of integers
int findGCD(const std::vector<int> &numbers)
{

    int result = numbers[0];

    for (size_t i = 1; i < numbers.size(); ++i)
    {
        result = gcd(result, numbers[i]);
    }

    return result;
}

void sol()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    vector<int> g(n, 0);

    for (int i = 0; i < n; i++)
    {
        g[i] = abs(a[i] - (i + 1));
    }

    int ans = findGCD(g);
    cout << ans << "\n";
}

int main()
{
    fileio;
    // fastio;
    int t;
    cin >> t;
    while (t--)
        sol();
    return 0;
}