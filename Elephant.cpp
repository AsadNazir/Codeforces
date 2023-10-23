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
#define N 2000005
#define M 1000000007
long long a[N];

bool isprime(int a)
{
    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }

    return true;
}
int gcd(int a, int b)
{
    if (!b)
        return a;
    return gcd(b, a % b);
}

void sol()
{
    long long a;

    cin >> a;

    if (a<5)
        cout << 1 << endl;

    else if (a % 5 == 0)
        cout << a / 5 << endl;

    else
    {
        long long ans = a / 5;
        ans += 1;
        cout << ans << endl;
    }
}

int main()
{

    fastio;
    // int t;
    // cin >> t;

    // while (t--)
    sol();
    return 0;
}